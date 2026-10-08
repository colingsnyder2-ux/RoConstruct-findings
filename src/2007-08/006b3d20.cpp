// from server: 51% by colin
// roc 2007-08 006b3d20  unit: CXTPControlGalleryPaintManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3d20
//
// 006b3d20  8b542404             mov edx, dword ptr [esp + 4]
// 006b3d24  85d2                 test edx, edx
// 006b3d26  7c1c                 jl 0x6b3d44
// 006b3d28  e833a8faff           call 0x65e560
// 006b3d2d  3bd0                 cmp edx, eax
// 006b3d2f  7d13                 jge 0x6b3d44
// 006b3d31  3b513c               cmp edx, dword ptr [ecx + 0x3c]
// 006b3d34  7d09                 jge 0x6b3d3f
// 006b3d36  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006b3d39  8b0490               mov eax, dword ptr [eax + edx*4]
// 006b3d3c  c20400               ret 4
// 006b3d3f  e8dcc1f7ff           call 0x62ff20
// 006b3d44  33c0                 xor eax, eax
// 006b3d46  c20400               ret 4

struct CXTPControlGalleryPaintManager {
    int GetItem(int index);
};

extern "C" int __stdcall sub_65e560();
extern "C" int __stdcall sub_62ff20();

int CXTPControlGalleryPaintManager::GetItem(int index) {
    if (index < 0)
        return 0;
    if (index >= sub_65e560())
        return 0;
    if (index < *(int*)((char*)this + 0x3c))
        return *(int*)(*(int*)((char*)this + 0x38) + index * 4);
    sub_62ff20();
    return 0;
}
