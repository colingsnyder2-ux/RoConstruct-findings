// roc 2010-06 00819c00  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819c00
//
// 00819c00  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00819c03  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00819c06  68908c8100           push 0x818c90
// 00819c0b  6a04                 push 4
// 00819c0d  50                   push eax
// 00819c0e  51                   push ecx
// 00819c0f  ff15e0a99e00         call dword ptr [0x9ea9e0]
// 00819c15  83c410               add esp, 0x10
// 00819c18  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000006@CPropertyGridItemBrickColor@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
typedef unsigned int size_t;
extern "C" __declspec(dllimport) void qsort(void* base, size_t nmemb, size_t size, int (*compar)(const void*, const void*));

struct CPropertyGridItemBrickColor {
    char pad[0x24];
    void* member_24;
    void* member_28;

    void fn_ROCX000006();
};

extern "C" int compar_function(const void* a, const void* b);

void CPropertyGridItemBrickColor::fn_ROCX000006() {
    qsort(member_24, (size_t)member_28, 4, compar_function);
}
}
