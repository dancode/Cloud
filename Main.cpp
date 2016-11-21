/*==============================================================================================

    Test Code           ::      GitHub Test Code

==============================================================================================*/

pull    thirdparty_lib : tpl    // thirdpartly lib + using namespace
    
pull    std_heap                // include the heap module
pull    std_window
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
