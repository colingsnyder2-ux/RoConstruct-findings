// from server: 90% by colin
// roc 2007-08 00682ad0  unit: CXTPPropertyGrid  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682ad0
//
// 00682ad0  56                   push esi
// 00682ad1  8bf1                 mov esi, ecx
// 00682ad3  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 00682ad9  85c9                 test ecx, ecx
// 00682adb  7413                 je 0x682af0
// 00682add  e802d7faff           call 0x6301e4
// 00682ae2  8b442408             mov eax, dword ptr [esp + 8]
// 00682ae6  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00682aec  5e                   pop esi
// 00682aed  c20400               ret 4
// 00682af0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00682af4  898e4c010000         mov dword ptr [esi + 0x14c], ecx
// 00682afa  5e                   pop esi
// 00682afb  c20400               ret 4

struct CXTPPropertyGrid
{
    char pad[0x14c];
    void* field_14c;
    void SetField(void* p);
};

extern "C" void __stdcall sub_6301e4(void* p);

void CXTPPropertyGrid::SetField(void* p)
{
    if (field_14c != 0)
    {
        sub_6301e4(field_14c);
    }
    field_14c = p;
}
