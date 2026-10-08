// from server: 100% by colin
// roc 2007-08 005782f0  unit: RBX::VPartInstance::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005782f0
//
// 005782f0  8a442404             mov al, byte ptr [esp + 4]
// 005782f4  3a81d4010000         cmp al, byte ptr [ecx + 0x1d4]
// 005782fa  7413                 je 0x57830f
// 005782fc  8881d4010000         mov byte ptr [ecx + 0x1d4], al
// 00578302  c744240474298c00     mov dword ptr [esp + 4], 0x8c2974
// 0057830a  e901c4ecff           jmp 0x444710
// 0057830f  c20400               ret 4

struct S {
    char pad[0x1d4];
    unsigned char value1d4;
    void setValue(unsigned char v);
};

void S::setValue(unsigned char v)
{
    if (v == this->value1d4)
        return;
    this->value1d4 = v;
    extern void __stdcall sub_444710(unsigned int);
    sub_444710(0x8c2974);
}
