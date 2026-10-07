// roc 2011-06 00816890  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816890
//
// 00816890  83c8ff               or eax, 0xffffffff
// 00816893  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00816890 {

    int f(int a1);
};
int S_func_00816890::f(int a1)
{
    return -1;
}
