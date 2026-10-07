// roc 2011-06 00816bc0  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816bc0
//
// 00816bc0  b801000000           mov eax, 1
// 00816bc5  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_00816bc0 {

    int f(int a1, int a2);
};
int S_func_00816bc0::f(int a1, int a2)
{
    return 1;
}
