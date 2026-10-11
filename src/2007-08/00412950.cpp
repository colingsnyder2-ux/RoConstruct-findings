// from server: 100% by colin
// roc 2007-08 00412950  unit: VCContent::?$CComAggObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412950
//
// 00412950  8b442404             mov eax, dword ptr [esp + 4]
// 00412954  85c0                 test eax, eax
// 00412956  7509                 jne 0x412961
// 00412958  89442404             mov dword ptr [esp + 4], eax
// 0041295c  e95ffcffff           jmp 0x4125c0
// 00412961  89442404             mov dword ptr [esp + 4], eax
// 00412965  e916ffffff           jmp 0x412880

struct VCContent_CComAggObject
{
    void* QueryInterface(void* p);
    void* AddRef();
};

void* __stdcall sub_004125C0(void* p);
void* __stdcall sub_00412880(void* p);

void* VCContent_CComAggObject::QueryInterface(void* p)
{
    if (p == 0)
    {
        return sub_004125C0(p);
    }
    return sub_00412880(p);
}
