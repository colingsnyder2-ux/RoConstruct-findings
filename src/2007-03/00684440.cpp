// roc 2007-03 00684440  unit: seg_00680000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00684440
//
// 00684440  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00684443  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00684446  6880346800           push 0x683480
// 0068444b  6a04                 push 4
// 0068444d  50                   push eax
// 0068444e  51                   push ecx
// 0068444f  ff152ce97700         call dword ptr [0x77e92c]
// 00684455  83c410               add esp, 0x10
// 00684458  c3                   ret 
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
