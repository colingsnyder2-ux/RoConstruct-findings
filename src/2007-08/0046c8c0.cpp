// from server: 36% by colin
// roc 2007-08 0046c8c0  unit: RBX::LDraw2Lua::LuaWriter  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c8c0

extern "C" {
    int __stdcall sub_502880();
    int __stdcall sub_5028F0();
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6AC(void*);
    void __stdcall sub_77E938(int);
    int __stdcall sub_8980FC(const char*, const char*, int, void*, int, void*);
}

struct LuaWriter {
    void init();
};

void LuaWriter::init()
{
    char localbuf[8];
    int flag = 0;
    char bl = 0;
    if (*(volatile char*)0x8bcf72 != 0)
        goto done;
    if (*(volatile char*)0x8bcf49 != 0)
        goto done;
    sub_502880();
    if (*(volatile int*)0x8980fc != 0) {
        sub_77E698(localbuf);
        flag = 1;
        bl = (char)sub_8980FC("GLCaps has not been initialized.",
                              ".\\glg3dcpp\\GLCaps.cpp",
                              0x231,
                              (void*)0x8bcf72,
                              1,
                              localbuf);
        if (bl)
            bl = 1;
        else
            bl = 0;
    }
    if (flag & 1)
        sub_77E6AC(localbuf);
    if (bl)
        sub_77E938(-1);
    sub_5028F0();
done:
    ;
}
