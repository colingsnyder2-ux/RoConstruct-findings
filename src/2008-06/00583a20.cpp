// from server: 100% by tester
// roc 2008-06 00583a20  unit: RBX::ModelInstance  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583a20
//
// 00583a20  b001                 mov al, 1
// 00583a22  888140020000         mov byte ptr [ecx + 0x240], al
// 00583a28  888170020000         mov byte ptr [ecx + 0x270], al
// 00583a2e  88810c020000         mov byte ptr [ecx + 0x20c], al
// 00583a34  e9b7510800           jmp 0x608bf0

struct RBX_ModelInstance {
    char pad[524];
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
