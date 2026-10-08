// from server: 75% by colin
// roc 2007-08 00697cb0  unit: CXTPPropertyGridItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697cb0
//
// 00697cb0  8bc1                 mov eax, ecx
// 00697cb2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00697cb6  85c9                 test ecx, ecx
// 00697cb8  8988d4000000         mov dword ptr [eax + 0xd4], ecx
// 00697cbe  740f                 je 0x697ccf
// 00697cc0  05a0000000           add eax, 0xa0
// 00697cc5  89442404             mov dword ptr [esp + 4], eax
// 00697cc9  ff2534d47700         jmp dword ptr [0x77d434]
// 00697ccf  c20400               ret 4

struct CXTPPropertyGridItem
{
    char pad[0xd4];
    void* field_0xd4;
    void SetValue(void* value);
};

void CXTPPropertyGridItem::SetValue(void* value)
{
    field_0xd4 = value;
    if (value != 0)
    {
        extern void __stdcall func_77d434(void*);
        func_77d434((char*)this + 0xa0);
    }
}
