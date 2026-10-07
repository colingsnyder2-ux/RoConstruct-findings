// roc 2010-06 007b4400  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b4400
//
// 007b4400  83c8ff               or eax, 0xffffffff
// 007b4403  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_007b4400 {

    int f(int a1);
};
int S_func_007b4400::f(int a1)
{
    return -1;
}
