// from server: 45% by colin
struct Writer {
    int field0;
    char pad4[0x1c];
    char field20;
    char pad21[3];
    int field24;
    Writer(int a, char b, int c, int d, int e, int f, int g, int h, int i, int j);
};

extern "C" {
    void __stdcall string_ctor(void*);
    void __stdcall string_dtor(void*);
    void __stdcall string_assign(void*, const void*);
}

Writer::Writer(int a, char b, int c, int d, int e, int f, int g, int h, int i, int j)
{
    string_ctor((char*)this + 4);
    string_assign((char*)this + 4, (void*)((char*)&a + 0x28));
    field20 = *(char*)((char*)&a + 0x2c);
    field0 = *(int*)((char*)&a + 0x30);
    field24 = *(int*)((char*)&a + 0x34);
    string_dtor((char*)this + 4);
}
