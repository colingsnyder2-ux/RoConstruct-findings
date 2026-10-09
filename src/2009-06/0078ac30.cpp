// roc 2009-06 0078ac30  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ac30
//
// 0078ac30  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0078ac33  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0078ac36  68c09c7800           push 0x789cc0
// 0078ac3b  6a04                 push 4
// 0078ac3d  50                   push eax
// 0078ac3e  51                   push ecx
// 0078ac3f  ff158ce78900         call dword ptr [0x89e78c]
// 0078ac45  83c410               add esp, 0x10
// 0078ac48  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00001b@CPropertyGridItemBrickColor@ns_ROCX00001b@@QAEXXZ)

namespace ns_ROCX00001b {
typedef unsigned int size_t;
extern "C" __declspec(dllimport) void qsort(void* base, size_t nmemb, size_t size, int (*compar)(const void*, const void*));

struct CPropertyGridItemBrickColor {
    char pad[0x24];
    void* member_24;
    void* member_28;

    void fn_ROCX00001b();
};

extern "C" int compar_function(const void* a, const void* b);

void CPropertyGridItemBrickColor::fn_ROCX00001b() {
    qsort(member_24, (size_t)member_28, 4, compar_function);
}
}
