solution "ray_tracer"
    configurations { "debug", "release" }
    
    project "ray_tracer"
        kind "ConsoleApp"
        language "C++"
        files { "**.h", "**.cpp" }

        configuration "debug"
            defines { "DEBUG" }
            flags { "Symbols" }

        configuration "release"
            defines { "NDEBUG" }
            flags { "Optimize" }


