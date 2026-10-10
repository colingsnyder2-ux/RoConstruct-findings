// from server: 30% by tester
extern "C" int __stdcall sub_94278C();
extern "C" void __stdcall sub_802468();
extern "C" void __stdcall sub_8027F4(int);
extern "C" void __cdecl sub_50A9B0();
extern "C" void __cdecl exit(int);

struct LuaWriter {
    void f();
};

void LuaWriter::f()
{
    char buf[8];
    bool b;

    b = sub_94278C() != 0;
    if (b)
        sub_8027F4(-1);
    sub_50A9B0();
    exit(0);
}
