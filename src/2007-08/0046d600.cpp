// from server: 44% by colin
// roc 2007-08 0046d600  unit: RBX::LDraw2Lua::LuaWriter  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d600

extern "C" {
    typedef unsigned int DWORD;
    typedef unsigned char BYTE;

    // MSVCP80.dll
    void __stdcall msvcp_basic_string_ctor_PBD(void* self, const char* s);
    void __stdcall msvcp_basic_string_dtor(void* self);

    // MSVCR80.dll
    void __cdecl msvcr_exit(int code);

    // internal
    void __cdecl sub_502880();
    void __cdecl sub_5028F0();
    void __cdecl sub_630D23(void* p);
}

// globals
extern BYTE byte_8bcfe0;
extern BYTE byte_8bcf48;
extern DWORD dword_8980fc;
extern DWORD dword_8bcfdc;
extern BYTE byte_8bcfc0;
extern DWORD dword_8b5188;
extern DWORD dword_77eba8;

struct LuaWriter {
    void init();
};

void LuaWriter::init()
{
    DWORD cookie;
    BYTE local_b;
    char local_str[0x24];
    DWORD local_34;
    DWORD local_20;

    cookie = dword_8b5188 ^ (DWORD)&cookie;
    local_34 = 0;

    if (byte_8bcfe0 != 0 || byte_8bcf48 != 0)
        goto skip_init;

    sub_502880();

    if (dword_8980fc != 0) {
        msvcp_basic_string_ctor_PBD(local_str, "<$Xf");
        local_34 = 0;
        local_b = 1;
        if (((int (__stdcall*)(void*, void*, int, const char*, void*, const char*))dword_8980fc)(
                local_str, &byte_8bcfe0, 0x27d, ".\\glg3dcpp\\GLCaps.cpp", &local_20, "L$,d") == 0)
        {
            local_b = 0;
        }
        local_34 = 0xffffffff;
        if (local_b & 1) {
            msvcp_basic_string_dtor(local_str);
        }
        if (local_b != 0) {
            msvcr_exit(-1);
        }
        sub_5028F0();
    }

skip_init:
    if ((dword_8bcfdc & 1) == 0) {
        dword_8bcfdc |= 1;
        local_34 = 1;
        void* p = ((void* (__stdcall*)(int))dword_77eba8)(0x1f01);
        msvcp_basic_string_ctor_PBD(&byte_8bcfc0, (const char*)p);
        sub_630D23((void*)0x777f40);
    }
}
