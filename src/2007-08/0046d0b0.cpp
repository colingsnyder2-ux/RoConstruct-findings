// from server: 63% by colin
// roc 2007-08 0046d0b0  unit: RBX::LDraw2Lua::LuaWriter  size: 382 bytes

extern "C" {
    __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
    __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);
    __declspec(dllimport) unsigned int __stdcall GetCurrentThreadId(void);
    __declspec(dllimport) void* __stdcall LocalAlloc(unsigned int, unsigned int);
    __declspec(dllimport) void* __stdcall LocalFree(void*);
    __declspec(dllimport) void* __stdcall HeapAlloc(void*, unsigned int, unsigned int);
    __declspec(dllimport) void* __stdcall HeapFree(void*, unsigned int, void*);
    __declspec(dllimport) void* __stdcall HeapCreate(unsigned int, unsigned int, unsigned int);
    __declspec(dllimport) void* __stdcall HeapDestroy(void*);
    __declspec(dllimport) void* __stdcall GetProcessHeap(void);
    __declspec(dllimport) void* __stdcall VirtualAlloc(void*, unsigned int, unsigned int, unsigned int);
    __declspec(dllimport) int __stdcall VirtualFree(void*, unsigned int, unsigned int);
    __declspec(dllimport) void* __stdcall malloc(unsigned int);
    __declspec(dllimport) void __stdcall free(void*);
    __declspec(dllimport) void* __stdcall memset(void*, int, unsigned int);
    __declspec(dllimport) void __stdcall glPushAttrib(unsigned int);
    __declspec(dllimport) void __stdcall glPopAttrib(void);
    __declspec(dllimport) void __stdcall glGenTextures(int, unsigned int*);
    __declspec(dllimport) void __stdcall glBindTexture(unsigned int, unsigned int);
    __declspec(dllimport) void __stdcall glTexImage2D(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void*);
    __declspec(dllimport) void __stdcall glTexParameteri(unsigned int, unsigned int, int);
    __declspec(dllimport) void __stdcall glGetTexImage(unsigned int, int, unsigned int, unsigned int, void*);
    __declspec(dllimport) const char* __stdcall glGetString(unsigned int);
    __declspec(dllimport) void __stdcall glDeleteTextures(int, const unsigned int*);
}

namespace std {
    class exception {};
    class string {
    public:
        string(const char*);
        ~string();
        unsigned int find(const char*, unsigned int, unsigned int) const;
        static const unsigned int npos;
    };
}

extern unsigned int _security_cookie;

extern char g_8bcf75;
extern char g_8bcf59;

extern void* __cdecl operator_new(unsigned int);
extern void __cdecl operator_delete(void*);

extern void __cdecl sub_62ff32();
extern void __cdecl sub_630b8c();
extern void __cdecl sub_630a1e();
extern void __cdecl sub_62ff26();

struct LuaWriter {
    void init();
};

void LuaWriter::init()
{
    unsigned int tex = 0;
    char* buf;
    std::string s("GL_SGIS_generate_mipmap");
    g_8bcf75 = (s.find("GL_SGIS_generate_mipmap", 0, 0x17) != std::string::npos);
    s.~string();

    glPushAttrib(0xfffff);
    glGenTextures(1, &tex);
    glBindTexture(0xde1, tex);
    if (g_8bcf75) {
        glTexParameteri(0xde1, 0x8191, 1);
    }

    buf = (char*)operator_new(0x30);
    memset(buf, 0, 0x30);
    {
        int i = 0;
        do {
            buf[i] = 0xff;
            i += 3;
        } while (i < 0x30);
    }

    glTexImage2D(0xde1, 0, 0x8051, 4, 4, 0, 0x1907, 0x1401, buf);
    glGetTexImage(0xde1, 0, 0x1907, 0x1401, buf);

    if (buf[0] == 0xff && buf[1] == 0 && buf[2] == 0) {
        g_8bcf59 = 0;
    } else {
        g_8bcf59 = 1;
    }

    operator_delete(buf);
    glDeleteTextures(1, &tex);
    glPopAttrib();
}
