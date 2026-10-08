// from server: 59% by colin
// roc 2007-08 005d49e0  unit: RBX::VTool::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d49e0
//
// 005d49e0  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 005d49e6  8bd0                 mov edx, eax
// 005d49e8  81e201000080         and edx, 0x80000001
// 005d49ee  7905                 jns 0x5d49f5
// 005d49f0  4a                   dec edx
// 005d49f1  83cafe               or edx, 0xfffffffe
// 005d49f4  42                   inc edx
// 005d49f5  8d440201             lea eax, [edx + eax + 1]
// 005d49f9  50                   push eax
// 005d49fa  e851ffffff           call 0x5d4950
// 005d49ff  c3                   ret 

struct S {
    int field_0x170;
    void method_005d4950(int);
    void target();
};

void S::target()
{
    int v = field_0x170;
    int r = v % 2;
    if (r < 0)
        r += 2;
    method_005d4950(r + v + 1);
}
