// from server: 95% by colin
// roc 2007-08 006b5e10  unit: CXTPControlGalleryPaintManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b5e10
//
// 006b5e10  8b442404             mov eax, dword ptr [esp + 4]
// 006b5e14  85c0                 test eax, eax
// 006b5e16  7c11                 jl 0x6b5e29
// 006b5e18  3b4108               cmp eax, dword ptr [ecx + 8]
// 006b5e1b  7d0c                 jge 0x6b5e29
// 006b5e1d  8b4904               mov ecx, dword ptr [ecx + 4]
// 006b5e20  8d0440               lea eax, [eax + eax*2]
// 006b5e23  8d04c1               lea eax, [ecx + eax*8]
// 006b5e26  c20400               ret 4
// 006b5e29  e8f2a0f7ff           call 0x62ff20

extern void func_0062ff20();

struct CXTPControlGalleryPaintManager
{
    int field_0;
    int field_4;
    int field_8;
    int GetItem(int index);
};

int CXTPControlGalleryPaintManager::GetItem(int index)
{
    if (index >= 0 && index < field_8)
        return field_4 + index * 24;
    func_0062ff20();
}
