/*==============================================================================================

    Test Code           ::      GitHub Test Code

==============================================================================================*/

pull    thirdparty_lib : tpl    // thirdpartly lib + using namespace
    
pull    std_heap                // include the heap module
pull    std_window              // 
pull    std_file
pull    std_log

i32     max_values  4           // a read only value.
   
// main function passes a commandline argument array.
main ( string[] argument_array ) i32 exit_code
{
    b32 fullscreen, b32 dedicated
    
    for ( argument_array : a )        
        if ( a == "dedicated" )
            dedicated = true
        if ( a == "fullscreen" )
            fullscreen = true
    ;
    
    setup_window( fullscreen )
    
    return 1
}
    
// function_name( input params ) output params
setup_window ( b32 fullscreen ) : b32 success
{
    window window
    window.create( 800, 600, window:current_mode ) : success
    if !success : return
    defer window.destroy()
    
    window.show( true )
    window.set_color( 0, 0, 1 )
    
    return success;
}

struct display_mode
{
    u16 width
    u16 height
    u16 refresh
}
display_mode:default    () return display_mode: 1280, 758, 0
display_mode:width      () clamp( width, 640, 1920 )
display_mode:height     () clamp( height, 480, 1080 )
display_mode_setup()
{
    display_mode dm:default()
    dm.width = 1280                 // will call dm:width clamp value
    dm.height = 768                 // 
}

// Note: use without initialation = auto zero inialization by compiler.

Reverse( array[] array )
{
    for ( i < const( array.len / 2 )) i++
        swap( array[ i ], array[ array.len - i ])
}

Reverse( char[] array )
{
    i = 0, j = array.len - 1;
    for ( i < j )
        swap( array[ i ], array[ j ] )
        i++ j--
}


//==============================================================================================
// Reflection And Meta Proramming

// variable modifiers
// refl = reflect
// repl = replicate
// conf = config
// save = serialize
// call = callable 
// edit = editable

i32 variable_name : conf : refl : cat( "pawn" )
i32 variable_name : repl : refl : edit : save 

                
data_type*      variable_name

for ( class:property : prop )
{   
    if ( prop.save ) file.write( prop.value )
    if ( prop.conf ) conf.write( prop.name, prop.value )        
}


//==============================================================================================
// AOS Array Of Structures

data
{
    
}

//==============================================================================================
// SOA Structure Of Arrays

data
{
    array1[]
    array2[]
    array3[]
}


//==============================================================================================
// Calling Code

client prefix : cl
server prefix : sv

//==============================================================================================

int main( const int argc, const char** argv )
{
    
    
    return 0;
}

//==============================================================================================




//==============================================================================================
