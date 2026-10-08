// from server: 100% by colin
// roc 2007-08 00699020  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699020
//
// 00699020  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00699023  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00699026  6810816900           push 0x698110
// 0069902b  6a04                 push 4
// 0069902d  50                   push eax
// 0069902e  51                   push ecx
// 0069902f  ff1530e77700         call dword ptr [0x77e730]
// 00699035  83c410               add esp, 0x10
// 00699038  c3                   ret 

typedef unsigned int size_t;
extern "C" __declspec(dllimport) void qsort(void* base, size_t nmemb, size_t size, int (*compar)(const void*, const void*));

struct CPropertyGridItemBrickColor {
    char pad[0x24];
    void* member_24;
    void* member_28;

    void func_00699020();
};

extern "C" int compar_function(const void* a, const void* b);

void CPropertyGridItemBrickColor::func_00699020() {
    qsort(member_24, (size_t)member_28, 4, compar_function);
}
