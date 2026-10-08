// from server: 94% by colin
// roc 2007-08 00596a10  unit: RBX::LaserTool  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596a10
//
// 00596a10  56                   push esi
// 00596a11  8bf1                 mov esi, ecx
// 00596a13  8b06                 mov eax, dword ptr [esi]
// 00596a15  8b5044               mov edx, dword ptr [eax + 0x44]
// 00596a18  ffd2                 call edx
// 00596a1a  dd86e8000000         fld qword ptr [esi + 0xe8]
// 00596a20  5e                   pop esi
// 00596a21  c3                   ret 

struct LaserTool {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    char pad[0xe8 - 0x48];
    double value;
    double getValue();
};

double LaserTool::getValue()
{
    v17();
    return value;
}
