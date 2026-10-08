// from server: 100% by colin
// roc 2007-08 00578320  unit: RBX::VPartInstance::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578320
//
// 00578320  8a442404             mov al, byte ptr [esp + 4]
// 00578324  3a81d5010000         cmp al, byte ptr [ecx + 0x1d5]
// 0057832a  7413                 je 0x57833f
// 0057832c  8881d5010000         mov byte ptr [ecx + 0x1d5], al
// 00578332  c7442404f4278c00     mov dword ptr [esp + 4], 0x8c27f4
// 0057833a  e9d1c3ecff           jmp 0x444710
// 0057833f  c20400               ret 4

struct S {
    char pad[0x1d5];
    unsigned char value1d5;
    void setValue(unsigned char v);
};

void S::setValue(unsigned char v)
{
    if (v == this->value1d5)
        return;
    this->value1d5 = v;
    extern void __stdcall sub_444710(unsigned char);
    sub_444710(0x8c27f4);
}
