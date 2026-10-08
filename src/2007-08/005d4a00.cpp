// from server: 100% by colin
// roc 2007-08 005d4a00  unit: RBX::VTool::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4a00
//
// 005d4a00  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 005d4a06  8d5001               lea edx, [eax + 1]
// 005d4a09  81e201000080         and edx, 0x80000001
// 005d4a0f  7905                 jns 0x5d4a16
// 005d4a11  4a                   dec edx
// 005d4a12  83cafe               or edx, 0xfffffffe
// 005d4a15  42                   inc edx
// 005d4a16  8d440201             lea eax, [edx + eax + 1]
// 005d4a1a  50                   push eax
// 005d4a1b  e830ffffff           call 0x5d4950
// 005d4a20  c3                   ret 

struct S {
    char pad[0x170];
    int field_0x170;
    void func_005d4950(int);
    void m();
};

void S::m()
{
    int v = field_0x170;
    int r = (v + 1) % 2;
    func_005d4950(v + r + 1);
}
