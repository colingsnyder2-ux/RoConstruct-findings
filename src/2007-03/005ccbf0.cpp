// roc 2007-03 005ccbf0  unit: seg_005c0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ccbf0
//
// 005ccbf0  56                   push esi
// 005ccbf1  8bf1                 mov esi, ecx
// 005ccbf3  8b06                 mov eax, dword ptr [esi]
// 005ccbf5  8b5024               mov edx, dword ptr [eax + 0x24]
// 005ccbf8  ffd2                 call edx
// 005ccbfa  8bc6                 mov eax, esi
// 005ccbfc  5e                   pop esi
// 005ccbfd  c20400               ret 4
// copied from an identical function in another client (function ?f@NullTool@ns_ROCX000001@@QAEPAU12@H@Z)

namespace ns_ROCX000001 {
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
}
