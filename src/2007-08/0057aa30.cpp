// from server: 100% by colin
// roc 2007-08 0057aa30  unit: RBX::ArrowTool  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aa30
//
// 0057aa30  8b01                 mov eax, dword ptr [ecx]
// 0057aa32  8b5024               mov edx, dword ptr [eax + 0x24]
// 0057aa35  ffd2                 call edx
// 0057aa37  33c0                 xor eax, eax
// 0057aa39  c20400               ret 4

struct ArrowTool {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void doAction();
    int wrapper(int);
};

int ArrowTool::wrapper(int value)
{
    doAction();
    return 0;
}
