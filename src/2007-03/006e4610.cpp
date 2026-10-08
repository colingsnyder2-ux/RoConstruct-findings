// roc 2007-03 006e4610  unit: seg_006e0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e4610
//
// 006e4610  83c8ff               or eax, 0xffffffff
// 006e4613  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_006e4610 {

    int f(int a1, int a2);
};
int S_func_006e4610::f(int a1, int a2)
{
    return -1;
}
