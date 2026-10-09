// roc 2011-06 0087a420  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a420
//
// 0087a420  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0087a423  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0087a426  68b0948700           push 0x8794b0
// 0087a42b  6a04                 push 4
// 0087a42d  50                   push eax
// 0087a42e  51                   push ecx
// 0087a42f  ff15a408a400         call dword ptr [0xa408a4]
// 0087a435  83c410               add esp, 0x10
// 0087a438  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00001a@CPropertyGridItemBrickColor@ns_ROCX00001a@@QAEXXZ)

namespace ns_ROCX00001a {
typedef unsigned int size_t;
extern "C" __declspec(dllimport) void qsort(void* base, size_t nmemb, size_t size, int (*compar)(const void*, const void*));

struct CPropertyGridItemBrickColor {
    char pad[0x24];
    void* member_24;
    void* member_28;

    void fn_ROCX00001a();
};

extern "C" int compar_function(const void* a, const void* b);

void CPropertyGridItemBrickColor::fn_ROCX00001a() {
    qsort(member_24, (size_t)member_28, 4, compar_function);
}
}
