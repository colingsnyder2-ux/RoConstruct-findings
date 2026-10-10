// from server: 97% by colin
// roc 2007-08 005c9690  unit: lua_exception  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9690

extern "C" int __cdecl sub_5BF410(int, int);
extern "C" void __cdecl sub_5BDB70(int, double);

int __cdecl sub_5C9690(int a)
{
    sub_5BF410(a, 1);
    double d = 0.0;
    sub_5BDB70(a, d);
    return 1;
}
