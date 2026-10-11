// from server: 100% by colin
// roc 2007-08 0040a660  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a660
//
// 0040a660  8b442404             mov eax, dword ptr [esp + 4]
// 0040a664  85c0                 test eax, eax
// 0040a666  7509                 jne 0x40a671
// 0040a668  89442404             mov dword ptr [esp + 4], eax
// 0040a66c  e93ffcffff           jmp 0x40a2b0
// 0040a671  89442404             mov dword ptr [esp + 4], eax
// 0040a675  e9e6feffff           jmp 0x40a560

struct VCApp_CComObject
{
    void sub_40A2B0(void*);
    void sub_40A560(void*);
    void Release(void* p);
};

void VCApp_CComObject::Release(void* p)
{
    if (p == 0)
    {
        sub_40A2B0(p);
    }
    else
    {
        sub_40A560(p);
    }
}
