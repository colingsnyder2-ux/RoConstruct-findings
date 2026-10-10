// from server: 70% by colin
extern "C" {
    void* __cdecl malloc(unsigned int size);
    void __cdecl free(void* ptr);
    int __cdecl _mkdir(const char* dirname);
    void* __cdecl fopen(const char* filename, const char* mode);
    int __cdecl fwrite(const void* buffer, unsigned int size, unsigned int count, void* stream);
    int __cdecl fclose(void* stream);
}

extern "C" void* __stdcall GetProcAddress_77e8a0(void*);
extern "C" void* __stdcall GetProcAddress_77e910(void*, const char*);
extern "C" void* __stdcall GetProcAddress_77e914(void*, void*, int, void*);
extern "C" void* __stdcall GetProcAddress_77e918(void*);

struct S {
};

bool __cdecl f(const char* path, const char* data, unsigned int size) {
    if (!path || !*path) {
        return false;
    }

    unsigned int len = 0;
    const char* p = path;
    while (*p++) {
        len++;
    }
    len++;

    char* buf = (char*)malloc(len);
    char* d = buf;
    const char* s = path;
    do {
        *d++ = *s;
    } while (*s++);

    if (*buf != '\0') {
        char* q = buf;
        while (*q) {
            if (*q == '/' || *q == '\\') {
                *q = '\0';
                ((void (__stdcall*)(char*))GetProcAddress_77e8a0)(buf);
                *q = '/';
            }
            q++;
        }
    }

    if (!data || !size) {
        ((void (__stdcall*)(char*))GetProcAddress_77e8a0)(buf);
        free(buf);
        return true;
    }

    void* h = ((void* (__stdcall*)(const char*, const char*))GetProcAddress_77e910)(buf, ">NetworkSettings");
    if (!h) {
        free(buf);
        return false;
    }

    ((void (__stdcall*)(void*, const char*, int, unsigned int))GetProcAddress_77e914)(h, data, 1, size);
    ((void (__stdcall*)(void*))GetProcAddress_77e918)(h);
    free(buf);
    return true;
}
