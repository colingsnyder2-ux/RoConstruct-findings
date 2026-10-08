// from server: 100% by colin
// roc 2007-08 00699240  unit: CXTPPropertyGridItemConstraints  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699240
//
// 00699240  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00699243  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00699246  6810826900           push 0x698210
// 0069924b  6a04                 push 4
// 0069924d  50                   push eax
// 0069924e  51                   push ecx
// 0069924f  ff1530e77700         call dword ptr [0x77e730]
// 00699255  83c410               add esp, 0x10
// 00699258  c3                   ret 

struct CXTPPropertyGridItemConstraints {
    char pad[0x24];
    void* m_base;
    unsigned int m_count;
    void SortMembers();
};

extern "C" __declspec(dllimport) void qsort(void* base, unsigned int num, unsigned int width, int (__cdecl* comp)(const void*, const void*));

int __cdecl CompareFunction(const void* a, const void* b);

void CXTPPropertyGridItemConstraints::SortMembers() {
    qsort(m_base, m_count, 4, CompareFunction);
}
