// from server: 100% by colin
// roc 2007-08 00530170  unit: RBX::ModelInstance  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530170
//
// 00530170  b001                 mov al, 1
// 00530172  8881e0010000         mov byte ptr [ecx + 0x1e0], al
// 00530178  888110020000         mov byte ptr [ecx + 0x210], al
// 0053017e  8881ac010000         mov byte ptr [ecx + 0x1ac], al
// 00530184  e967af0800           jmp 0x5bb0f0

struct RBX_ModelInstance {
    char pad[0x1ac];
    bool field_1ac;
    char pad2[0x1e0 - 0x1ad];
    bool field_1e0;
    char pad3[0x210 - 0x1e1];
    bool field_210;
    void tail();
};

extern "C" void __fastcall func_005bb0f0(void*);

void RBX_ModelInstance::tail()
{
    bool one = true;
    field_1e0 = one;
    field_210 = one;
    field_1ac = one;
    func_005bb0f0(this);
}
