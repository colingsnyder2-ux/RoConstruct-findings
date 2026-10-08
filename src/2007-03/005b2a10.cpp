// roc 2007-03 005b2a10  unit: seg_005b0000  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b2a10
//
// 005b2a10  32c0                 xor al, al
// 005b2a12  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_005b2a10 {

    bool f(int a1, int a2);
};
bool S_func_005b2a10::f(int a1, int a2)
{
    return false;
}
