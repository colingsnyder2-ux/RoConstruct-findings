// roc 2007-03 00684640  unit: seg_00680000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00684640
//
// 00684640  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00684643  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00684646  6880356800           push 0x683580
// 0068464b  6a04                 push 4
// 0068464d  50                   push eax
// 0068464e  51                   push ecx
// 0068464f  ff152ce97700         call dword ptr [0x77e92c]
// 00684655  83c410               add esp, 0x10
// 00684658  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000011@CPropertyGridItemBrickColor@ns_ROCX000011@@QAEXXZ)

namespace ns_ROCX000011 {
typedef unsigned int size_t;
extern "C" __declspec(dllimport) void qsort(void* base, size_t nmemb, size_t size, int (*compar)(const void*, const void*));

struct CPropertyGridItemBrickColor {
    char pad[0x24];
    void* member_24;
    void* member_28;

    void fn_ROCX000011();
};

extern "C" int compar_function(const void* a, const void* b);

void CPropertyGridItemBrickColor::fn_ROCX000011() {
    qsort(member_24, (size_t)member_28, 4, compar_function);
}
}
