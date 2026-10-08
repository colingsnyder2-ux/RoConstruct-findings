// from server: 91% by colin
// roc 2007-08 005c9520  unit: lua_exception  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9520

extern "C" void __cdecl sub_5bf410(int, int);
extern "C" void __cdecl sub_5bdb70(int, double);

int __cdecl sub_5c9520(int a)
{
    sub_5bf410(a, 1);
    double d = 1.0;
    sub_5bdb70(a, d);
    return 1;
}
