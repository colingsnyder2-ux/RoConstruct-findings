// from server: 100% by king_originala
// roc 2008-06 0061a3f0  unit: RBX::InletTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a3f0
//
// 0061a3f0  837c240803           cmp dword ptr [esp + 8], 3
// 0061a3f5  7505                 jne 0x61a3fc
// 0061a3f7  e814fdffff           call 0x61a110
// 0061a3fc  c20c00               ret 0xc

struct S
{
    void target();
    void func_0061a3f0(int, int, int);
};

void S::func_0061a3f0(int, int value, int)
{
    if (value == 3)
        target();
}
