// from server: 100% by colin
// roc 2007-08 00554630  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554630
//
// 00554630  8a442404             mov al, byte ptr [esp + 4]
// 00554634  8881f0000000         mov byte ptr [ecx + 0xf0], al
// 0055463a  c7442404f81c8c00     mov dword ptr [esp + 4], 0x8c1cf8
// 00554642  e9c900efff           jmp 0x444710

struct RBX_VTeam_FactoryProduct {
    char pad[0xf0];
    unsigned char field_f0;
    void setAutoAssignable(bool value);
};

void RBX_VTeam_FactoryProduct::setAutoAssignable(bool value)
{
    field_f0 = (unsigned char)value;
    extern void __stdcall func_00444710(int);
    func_00444710(0x8c1cf8);
}
