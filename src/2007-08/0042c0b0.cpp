// from server: 100% by colin
// roc 2007-08 0042c0b0  unit: VCLuaFunction::?$CComObjectNoLock  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042c0b0
//
// 0042c0b0  803900               cmp byte ptr [ecx], 0
// 0042c0b3  7403                 je 0x42c0b8
// 0042c0b5  c60100               mov byte ptr [ecx], 0
// 0042c0b8  c3                   ret 

struct S
{
    bool flag;
    void f();
};

void S::f()
{
    if (flag)
        flag = false;
}
