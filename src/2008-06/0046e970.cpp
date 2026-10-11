// from server: 23% by tester
struct LDraw2RobloxPartMap {
    int field0;
    int field4;
    char field8[0x1c];
    char field24[0x1c];
    LDraw2RobloxPartMap(int a, int b, void* s1, void* s2);
};

extern "C" void __stdcall string_copy_ctor(void*, const void*);
extern "C" void __stdcall string_dtor(void*);

LDraw2RobloxPartMap::LDraw2RobloxPartMap(int a, int b, void* s1, void* s2)
{
    field0 = a;
    field4 = b;
    string_copy_ctor(field8, s1);
    string_copy_ctor(field24, s2);
    string_dtor(s1);
    string_dtor(s2);
}
