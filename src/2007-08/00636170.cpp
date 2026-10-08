// roc 2007-08 00636170  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636170
//
// 00636170  83c8ff               or eax, 0xffffffff
// 00636173  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00636170 {

    int f(int a1);
};
int S_func_00636170::f(int a1)
{
    return -1;
}
