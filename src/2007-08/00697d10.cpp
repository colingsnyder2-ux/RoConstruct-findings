// from server: 100% by colin
// roc 2007-08 00697d10  unit: CXTPPropertyGridItem  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697d10
//
// 00697d10  8b442404             mov eax, dword ptr [esp + 4]
// 00697d14  3b81f0000000         cmp eax, dword ptr [ecx + 0xf0]
// 00697d1a  7411                 je 0x697d2d
// 00697d1c  8981f0000000         mov dword ptr [ecx + 0xf0], eax
// 00697d22  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 00697d28  e8d3590000           call 0x69d700
// 00697d2d  c20400               ret 4

struct CXTPPropertyGridItem
{
    char pad_0000[0xb4];
    void* field_0xb4;
    char pad_00b8[0xf0 - 0xb8];
    void* field_0xf0;
    void SetValue(void* value);
};

extern void __fastcall sub_0069d700(void*);

void CXTPPropertyGridItem::SetValue(void* value)
{
    if (value != this->field_0xf0)
    {
        this->field_0xf0 = value;
        sub_0069d700(this->field_0xb4);
    }
}
