// from server: 100% by colin
// roc 2007-08 0040f8a0  unit: CopyVerb  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f8a0
//
// 0040f8a0  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 0040f8a6  8b4804               mov ecx, dword ptr [eax + 4]
// 0040f8a9  85c9                 test ecx, ecx
// 0040f8ab  7503                 jne 0x40f8b0
// 0040f8ad  33c0                 xor eax, eax
// 0040f8af  c3                   ret 
// 0040f8b0  8b4008               mov eax, dword ptr [eax + 8]
// 0040f8b3  2bc1                 sub eax, ecx
// 0040f8b5  c1f803               sar eax, 3
// 0040f8b8  c3                   ret 

struct CopyVerb {
    char pad[0x104];
    void* field104;
    int getCount() const;
};

int CopyVerb::getCount() const
{
    void* p = field104;
    int* begin = *(int**)((char*)p + 4);
    if (begin == 0)
        return 0;
    int* end = *(int**)((char*)p + 8);
    return (int)(((char*)end - (char*)begin) >> 3);
}
