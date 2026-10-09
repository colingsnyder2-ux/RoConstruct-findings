// roc 2009-12 00865c40  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865c40
//
// 00865c40  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00865c43  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00865c46  68e04c8600           push 0x864ce0
// 00865c4b  6a04                 push 4
// 00865c4d  50                   push eax
// 00865c4e  51                   push ecx
// 00865c4f  ff1584b99800         call dword ptr [0x98b984]
// 00865c55  83c410               add esp, 0x10
// 00865c58  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000a@CPropertyGridItemBrickColor@ns_ROCX00000a@@QAEXXZ)

namespace ns_ROCX00000a {
typedef unsigned int size_t;
extern "C" __declspec(dllimport) void qsort(void* base, size_t nmemb, size_t size, int (*compar)(const void*, const void*));

struct CPropertyGridItemBrickColor {
    char pad[0x24];
    void* member_24;
    void* member_28;

    void fn_ROCX00000a();
};

extern "C" int compar_function(const void* a, const void* b);

void CPropertyGridItemBrickColor::fn_ROCX00000a() {
    qsort(member_24, (size_t)member_28, 4, compar_function);
}
}
