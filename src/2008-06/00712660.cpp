// roc 2008-06 00712660  unit: CXTPPropertyGridItemConstraints  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712660
//
// 00712660  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00712663  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00712666  68d0157100           push 0x7115d0
// 0071266b  6a04                 push 4
// 0071266d  50                   push eax
// 0071266e  51                   push ecx
// 0071266f  ff15fc258000         call dword ptr [0x8025fc]
// 00712675  83c410               add esp, 0x10
// 00712678  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000008@CPropertyGridItemBrickColor@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
typedef unsigned int size_t;
extern "C" __declspec(dllimport) void qsort(void* base, size_t nmemb, size_t size, int (*compar)(const void*, const void*));

struct CPropertyGridItemBrickColor {
    char pad[0x24];
    void* member_24;
    void* member_28;

    void fn_ROCX000008();
};

extern "C" int compar_function(const void* a, const void* b);

void CPropertyGridItemBrickColor::fn_ROCX000008() {
    qsort(member_24, (size_t)member_28, 4, compar_function);
}
}
