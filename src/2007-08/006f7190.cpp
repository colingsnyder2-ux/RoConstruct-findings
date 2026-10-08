// from server: 28% by colin
// roc 2007-08 006f7190  unit: CXTPPropertyGridInplaceEdit  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f7190
//
// 006f7190  8b442404             mov eax, dword ptr [esp + 4]
// 006f7194  85c0                 test eax, eax
// 006f7196  7c0e                 jl 0x6f71a6
// 006f7198  3b4108               cmp eax, dword ptr [ecx + 8]
// 006f719b  7d09                 jge 0x6f71a6
// 006f719d  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f71a0  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006f71a3  c20400               ret 4
// 006f71a6  e8758df3ff           call 0x62ff20

extern "C" void __cdecl sub_62ff20();

struct CXTPPropertyGridInplaceEdit
{
    int GetItem(int index);
    int field0;
    int* field4;
    int field8;
};

int CXTPPropertyGridInplaceEdit::GetItem(int index)
{
    if (index < 0 || index >= field8)
        sub_62ff20();
    return field4[index];
}
