// from server: 100% by colin
// roc 2007-08 00578350  unit: RBX::VPartInstance::?$FactoryProduct  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578350
//
// 00578350  8a442404             mov al, byte ptr [esp + 4]
// 00578354  3a81a0010000         cmp al, byte ptr [ecx + 0x1a0]
// 0057835a  7413                 je 0x57836f
// 0057835c  8881a0010000         mov byte ptr [ecx + 0x1a0], al
// 00578362  c7442404e0288c00     mov dword ptr [esp + 4], 0x8c28e0
// 0057836a  e9a1c3ecff           jmp 0x444710
// 0057836f  c20400               ret 4

struct S {
    char pad[0x1a0];
    unsigned char value1a0;
    void setValue(unsigned char v);
};

void S::setValue(unsigned char v)
{
    if (v == this->value1a0)
        return;
    this->value1a0 = v;
    extern void __stdcall sub_444710(unsigned int);
    sub_444710(0x8c28e0);
}
