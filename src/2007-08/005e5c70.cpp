// from server: 100% by colin
// roc 2007-08 005e5c70  unit: RBX::NullTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5c70
//
// 005e5c70  56                   push esi
// 005e5c71  8bf1                 mov esi, ecx
// 005e5c73  8b06                 mov eax, dword ptr [esi]
// 005e5c75  8b5024               mov edx, dword ptr [eax + 0x24]
// 005e5c78  ffd2                 call edx
// 005e5c7a  8bc6                 mov eax, esi
// 005e5c7c  5e                   pop esi
// 005e5c7d  c20400               ret 4

struct NullTool {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    NullTool* f(int);
};

NullTool* NullTool::f(int)
{
    v9();
    return this;
}
