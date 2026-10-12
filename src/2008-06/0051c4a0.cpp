// from server: 96% by king_originala
struct Png {
    char reserved0[0x6c];
    unsigned int flags;
    char reserved1[0x3c];
    void* buffer;
    unsigned int buffer_size;
    char reserved2[0x1b0];
    unsigned int width_limit;
    unsigned int height_limit;
};

typedef void (__cdecl *ErrorFn)(Png*, const char*);
typedef void* (__cdecl *MallocFn)(Png*, unsigned int);
typedef void (__cdecl *FreeFn)(Png*, void*);
typedef int (__cdecl *FormatFn)(char*, const char*, ...);

extern char library_version[];
extern char compiled_message[];
extern char running_message[];
extern char incompatible_message[];

extern "C" {
    Png* __cdecl create_struct(int, MallocFn, void*);
    void __cdecl init_mmx_flags(Png*);
    int __cdecl _setjmp(int*);
    void __cdecl free_buffer(Png*, void*);
    void __cdecl destroy_struct(Png*);
    void __cdecl set_memory_functions(Png*, void*, MallocFn, FreeFn);
    void __cdecl set_error_functions(Png*, void*, ErrorFn, ErrorFn);
    void __cdecl warning(Png*, const char*);
    void __cdecl error(Png*, const char*);
    void* __cdecl allocate_buffer(Png*, unsigned int);
    void __cdecl set_read_function(Png*, void*, void*, void*);
    void __cdecl set_crc_action(Png*, int, int, int, int);
    extern FormatFn format_text;
    extern void (__cdecl *terminate_process)();
}

#pragma intrinsic(_setjmp)

Png* __cdecl create_read_struct(
    const char* version,
    void* error_context,
    ErrorFn error_function,
    ErrorFn warning_function,
    void* memory_context,
    MallocFn malloc_function,
    FreeFn free_function)
{
    Png* png = create_struct(1, malloc_function, memory_context);
    char message[80];

    if (png == 0)
        return 0;

    init_mmx_flags(png);
    png->width_limit = 1000000;
    png->height_limit = 1000000;

    if (_setjmp((int*)png)) {
        free_buffer(png, png->buffer);
        png->buffer = 0;
        destroy_struct(png);
        return 0;
    }

    set_memory_functions(png, memory_context, malloc_function, free_function);
    set_error_functions(png, error_context, error_function, warning_function);

    unsigned int i = 0;
    do {
        if (version[i] != library_version[i])
            png->flags |= 0x20000;
    } while (library_version[i++]);

    if (png->flags & 0x20000) {
        if (version == 0 ||
            version[0] != library_version[0] ||
            (version[0] == '1' && version[2] != library_version[2]) ||
            (version[0] == '0' && version[2] < '9')) {
            FormatFn format = format_text;
            if (version) {
                format(message, compiled_message, version);
                warning(png, message);
            }
            format(message, running_message, library_version);
            warning(png, message);
            png->flags = 0;
            error(png, incompatible_message);
        }
    }

    png->buffer_size = 0x2000;
    png->buffer = allocate_buffer(png, 0x2000);
    set_read_function(png, 0, 0, 0);
    set_crc_action(png, 0, 1, 0, 0);

    if (_setjmp((int*)png))
        terminate_process();

    return png;
}
