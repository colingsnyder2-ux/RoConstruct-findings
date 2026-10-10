// from server: 46% by colin
// roc 2007-08 0046c7d0  unit: RBX::LDraw2Lua::LuaWriter  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046c7d0

extern "C" {
    int __stdcall sub_502880();
    int __stdcall sub_5028F0();
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6AC(void*);
    void __stdcall sub_77E938(int);
}

extern "C" void __stdcall sub_796410();
extern "C" void __stdcall sub_796420();
extern "C" void __stdcall sub_796438();

extern "C" int (__stdcall *off_8980FC)(void*, void*, int, void*, void*, int);

extern "C" unsigned char byte_8BCF49;
extern "C" unsigned char byte_8BCF58;
extern "C" unsigned char byte_8BCF71;

struct LuaWriter {
    bool checkInitialized();
};

bool LuaWriter::checkInitialized()
{
    if (byte_8BCF71 != 0)
        return byte_8BCF58 != 0;
    if (byte_8BCF49 != 0)
        return byte_8BCF58 != 0;

    sub_502880();

    bool result = false;
    if (off_8980FC != 0) {
        char buf[28];
        sub_77E698(buf);
        int local = 1;
        int flag = 0;
        if (off_8980FC(buf, (void*)0x796410, 0x22B, (void*)0x8BCF71, (void*)0x796420, 1)) {
            result = true;
        }
        if (flag & 1)
            sub_77E6AC(buf);
        if (result)
            sub_77E938(-1);
    }
    sub_5028F0();
    return byte_8BCF58 != 0;
}
