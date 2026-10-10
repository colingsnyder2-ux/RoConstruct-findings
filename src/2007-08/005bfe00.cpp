// from server: 71% by tester
struct LuaArguments {
    int field0;
    int field4;
    void construct(int arg);
};

extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" void __cdecl sub_630B9E(int, int);
extern "C" void* __stdcall sub_77E710(int);
extern "C" void __cdecl sub_841E0C();

void LuaArguments::construct(int arg)
{
    int* p = (int*)sub_630D36(field0, 0, 0x887174, 0x8ABC90, 0);
    if (p == 0) {
        sub_77E710(0x786E04);
        sub_630B9E(0x841E0C, (int)&p);
    }
    int* q = (int*)p[6];
    int* vt = (int*)*q;
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))vt[2];
    fn(q, field4, arg);
}
