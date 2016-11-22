/*==============================================================================================

    Test Code           ::      GitHub Test Code

==============================================================================================*/
// language deduces code intention and speficiation from context.
// the context removes noise from the code and streamlines readability.
// information that can be deduced inuitively is removed.

// for visual clarity syntax is built around indentation and alignment.
// common keywords, then less common.

type_name   variable_name       // scope is module, value is 0.
type_name   variable_name = 4   // scope is module, value is 4.
type_name   
type_name   readonly_name       // variable is read only
type_name   


// a function is a function because it takes an expression.
// function has no return value since none is specified.

func_name()
{
    type type                   // type is not assignment so must be instance.
    type = value                // must be instance since type cant be assigned.
}

func_add_global( i32 number )    // 
{
    
}

func_bool() b32 success   // type returns bool (optionally) named success.
{
    success = true              // success type is known.
    return success              // can use success as return parameter.
}

// The ( arguments ) is an expression.

func_name()
{
    b32 success = func_bool()
    if ( success )
        
}



// context defines all operational expression.
// scope defines all operations of work.
// expressions define 





//==============================================================================================
// Sample Code
//==============================================================================================

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

propery_type : enum { repl, refl, edit, save, confg }
property : struct
{
    
}
property_instance : struct      // per-instance of property.
{
    cb  created                 // each instance can have callback on it.
    cb  changed                 // 
    cb  destroyed               // 
}

// only if callback is used, then it is compiled into runtime.

use_reflection( vartype var )
{
    class* class = vartype::class()
    for ( class.prop : prop )
    {
        prop.type
        prop.replicated
        prop.config
        prop.
    }
        
}

//==============================================================================================
// AOS Array Of Structures

data
{
    i32 var1;
    i32 var2;
    i32 var3;
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
