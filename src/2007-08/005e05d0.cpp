// from server: 86% by colin
// roc 2007-08 005e05d0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e05d0
//
// 005e05d0  83c108               add ecx, 8
// 005e05d3  51                   push ecx
// 005e05d4  e8d79efdff           call 0x5ba4b0
// 005e05d9  83c404               add esp, 4
// 005e05dc  c3                   ret 

struct T_func_005e05d0 {
    char pad[8];
    void m();
};

extern "C" void __stdcall func_005ba4b0(void*);

void T_func_005e05d0::m()
{
    func_005ba4b0((char*)this + 8);
}
