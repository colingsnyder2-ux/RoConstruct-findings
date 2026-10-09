// roc 2009-12 00865e40  unit: CXTPPropertyGridItemConstraints  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865e40
//
// 00865e40  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00865e43  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00865e46  68e04d8600           push 0x864de0
// 00865e4b  6a04                 push 4
// 00865e4d  50                   push eax
// 00865e4e  51                   push ecx
// 00865e4f  ff1584b99800         call dword ptr [0x98b984]
// 00865e55  83c410               add esp, 0x10
// 00865e58  c3                   ret 
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
