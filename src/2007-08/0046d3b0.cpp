// from server: 38% by colin
// roc 2007-08 0046d3b0  unit: RBX::LDraw2Lua::LuaWriter  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d3b0

extern "C" {
    typedef unsigned int DWORD;
    typedef unsigned char BYTE;

    // MSVCP80.dll
    void __stdcall basic_string_ctor(void* self, const char* s);
    void __stdcall basic_string_dtor(void* self);

    // MSVCR80.dll
    void __cdecl exit(int code);

    // OPENGL32.dll
    const char* __stdcall glGetString(unsigned int name);

    // internal
    void __cdecl sub_502880();
    void __cdecl sub_5028F0();
    void __cdecl sub_630D23(void* p);

    // imports by address
    void* __stdcall imp_77e698(void* self, const char* s);
    void* __stdcall imp_77e6ac(void* self);
    void* __stdcall imp_77e938(int code);
    void* __stdcall imp_77eba8(unsigned int id);
}

// globals
extern BYTE byte_8BCF98;
extern BYTE byte_8BCF48;
extern BYTE byte_8BCF94;
extern DWORD dword_8980FC;
extern DWORD dword_8B5188;
extern BYTE byte_8BCF78;

struct GLCaps {
    static GLCaps* init();
};

GLCaps* GLCaps::init()
{
    if (byte_8BCF98 != 0)
        goto done;
    if (byte_8BCF48 != 0)
        goto done;

    sub_502880();

    if (dword_8980FC != 0) {
        char buf[32];
        imp_77e698(buf, "Cannot call GLCaps::glVersion before GLCaps::init().");
        // ...
        imp_77e938(-1);
    }

    sub_5028F0();

done:
    if ((byte_8BCF94 & 1) == 0) {
        byte_8BCF94 |= 1;
        imp_77eba8(0x1f02);
        imp_77e698(&byte_8BCF78, (const char*)0);
        sub_630D23((void*)0x777f10);
    }

    return (GLCaps*)&byte_8BCF78;
}
