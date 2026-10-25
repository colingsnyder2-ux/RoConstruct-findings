// from server: 100% by king_originala
// roc 2008-06 00448c20  unit: VCRenderSettings::?$EnumPropDescriptor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448c20
//
// 00448c20  56                   push esi
// 00448c21  57                   push edi
// 00448c22  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00448c26  8bf1                 mov esi, ecx
// 00448c28  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00448c2b  57                   push edi
// 00448c2c  e81ff8ffff           call 0x448450
// 00448c31  84c0                 test al, al
// 00448c33  741f                 je 0x448c54
// 00448c35  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00448c38  8d542410             lea edx, [esp + 0x10]
// 00448c3c  52                   push edx
// 00448c3d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00448c41  897c2414             mov dword ptr [esp + 0x14], edi
// 00448c45  8b01                 mov eax, dword ptr [ecx]
// 00448c47  8b400c               mov eax, dword ptr [eax + 0xc]
// 00448c4a  52                   push edx
// 00448c4b  ffd0                 call eax
// 00448c4d  5f                   pop edi
// 00448c4e  b001                 mov al, 1
// 00448c50  5e                   pop esi
// 00448c51  c20800               ret 8
// 00448c54  5f                   pop edi
// 00448c55  32c0                 xor al, al
// 00448c57  5e                   pop esi
// 00448c58  c20800               ret 8

struct Setter
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* instance, const int& value);
};

struct EnumInfo
{
    bool accepts(int value);
};

struct Descriptor
{
    char gap[0x1c];
    Setter* setter;
    EnumInfo* info;

    bool setValue(void* instance, int value);
};

bool Descriptor::setValue(void* instance, int value)
{
    if (info->accepts(value)) {
        int converted = value;
        setter->set(instance, converted);
        return true;
    }
    return false;
}
