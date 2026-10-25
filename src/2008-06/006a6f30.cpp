// from server: 100% by auto
// roc 2008-06 006a6f30  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6f30
//
// 006a6f30  83c8ff               or eax, 0xffffffff
// 006a6f33  c20400               ret 4

struct S_func_006a6f30 {

    int f(int a1);
};
int S_func_006a6f30::f(int a1)
{
    return -1;
}
