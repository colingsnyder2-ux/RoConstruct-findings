// from server: 16% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    void* __stdcall GetModuleHandleA(const char*);
    unsigned long __stdcall GetCurrentThreadId();
    void* __stdcall CreateFileA(const char*, unsigned long, unsigned long, void*, unsigned long, unsigned long, void*);
    int __cdecl sprintf(char*, const char*, ...);
    void* __cdecl fopen(const char*, const char*);
    void __cdecl fclose(void*);
    void* __cdecl memcpy(void*, const void*, unsigned int);
    unsigned int __cdecl strlen(const char*);
    void* __cdecl malloc(unsigned int);
    void __cdecl free(void*);
}

struct RBXString {
    char pad[0x10];
    unsigned int len;
    unsigned int cap;
    char* ptr;
};

struct RBXStringRef {
    char* data;
    unsigned int len;
};

struct VWorld {
    void* vtable;
    char pad1[0x208];
    void* packetLog;
    void VWorld_ctor();
    void VWorld_dtor();
    void logPacket(const char* name, int a, int b);
};

struct RefCounted {
    long refcount;
    long weakrefcount;
};

extern "C" void __cdecl RBX_String_ctor(RBXString*);
extern "C" void __cdecl RBX_String_dtor(RBXString*);
extern "C" void __cdecl RBX_String_assign(RBXString*, const char*);
extern "C" void __cdecl RBX_String_copy(RBXString*, const RBXString*);
extern "C" void __cdecl RBX_String_erase(RBXString*, unsigned int, unsigned int);
extern "C" unsigned int __cdecl RBX_String_rfind(RBXString*, const char*, unsigned int, unsigned int);
extern "C" void __cdecl RBX_String_append(RBXString*, const char*);

extern "C" void __cdecl sub_4b6ca0();
extern "C" void __cdecl sub_4b7f70();
extern "C" void __cdecl sub_56c0a0();
extern "C" void __cdecl sub_56c3b0();
extern "C" void __cdecl sub_630a1e();

extern "C" void* __stdcall GetEnvironmentStrings();
extern "C" void* __stdcall GetModuleFileNameA(void*, char*, unsigned long);
extern "C" unsigned long __stdcall GetCurrentDirectoryA(unsigned long, char*);
extern "C" void* __stdcall FindFirstFileA(const char*, void*);
extern "C" int __stdcall FindNextFileA(void*, void*);
extern "C" int __stdcall FindClose(void*);
extern "C" void* __stdcall CreateDirectoryA(const char*, void*);
extern "C" unsigned long __stdcall GetLastError();
extern "C" void* __stdcall GetProcessHeap();
extern "C" void* __stdcall HeapAlloc(void*, unsigned long, unsigned long);
extern "C" int __stdcall HeapFree(void*, unsigned long, void*);

void VWorld::VWorld_ctor() {
    sub_4b6ca0();
    *(void**)this = (void*)0x79d224;
    packetLog = 0;

    RBXString path;
    RBX_String_ctor(&path);

    void* env = GetEnvironmentStrings();
    if (env) {
        RBX_String_assign(&path, (const char*)env);
    }

    RBXString temp;
    RBX_String_ctor(&temp);

    char buf[0x100];
    buf[0] = '\\';
    GetModuleFileNameA(0, buf + 1, 0x100);
    unsigned int len = strlen(buf);
    RBX_String_assign(&temp, buf);

    RBX_String_append(&path, "\\");
    RBX_String_append(&path, temp.ptr);

    sub_4b7f70();
    char fullpath[0x100];
    sprintf(fullpath, "PacketLog%i.csv", GetCurrentThreadId());

    RBX_String_append(&path, "\\");
    RBX_String_append(&path, fullpath);

    void* f = fopen(path.ptr, "w");
    packetLog = f;

    if (f) {
        logPacket("Logging packets to %s", 1, 0);
    } else {
        logPacket("Failed to create log file %s", 2, 0);
    }

    RBX_String_dtor(&temp);
    RBX_String_dtor(&path);
}
