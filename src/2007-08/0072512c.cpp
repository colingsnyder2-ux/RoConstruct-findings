// from server: 31% by colin
// roc 2007-08 0072512c  unit: CXTIconHandle  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072512c
//
// 0072512c  55                   push ebp
// 0072512d  8bec                 mov ebp, esp
// 0072512f  33c0                 xor eax, eax
// 00725131  394508               cmp dword ptr [ebp + 8], eax
// 00725134  7509                 jne 0x72513f
// 00725136  ff750c               push dword ptr [ebp + 0xc]
// 00725139  8b01                 mov eax, dword ptr [ecx]
// 0072513b  ff10                 call dword ptr [eax]
// 0072513d  eb21                 jmp 0x725160
// 0072513f  39450c               cmp dword ptr [ebp + 0xc], eax
// 00725142  750c                 jne 0x725150
// 00725144  ff7508               push dword ptr [ebp + 8]
// 00725147  8b01                 mov eax, dword ptr [ecx]
// 00725149  ff5004               call dword ptr [eax + 4]
// 0072514c  33c0                 xor eax, eax
// 0072514e  eb10                 jmp 0x725160
// 00725150  ff750c               push dword ptr [ebp + 0xc]
// 00725153  ff7508               push dword ptr [ebp + 8]
// 00725156  50                   push eax
// 00725157  ff7104               push dword ptr [ecx + 4]
// 0072515a  ff15a4d27700         call dword ptr [0x77d2a4]
// 00725160  5d                   pop ebp
// 00725161  c20800               ret 8

struct CXTIconHandle {
    int compare(const CXTIconHandle& rhs);
    void* m_domIcon;
};

extern "C" void* __stdcall HeapReAlloc(void*, unsigned long, void*, unsigned long);

int CXTIconHandle::compare(const CXTIconHandle& rhs)
{
    if (this->m_domIcon != 0) {
        return ((int (__thiscall*)(void*, const CXTIconHandle&))((void**)rhs.m_domIcon)[0])(rhs.m_domIcon, rhs);
    }
    if (rhs.m_domIcon == 0) {
        ((void (__thiscall*)(void*, void*))((void**)this->m_domIcon)[1])(this->m_domIcon, this->m_domIcon);
        return 0;
    }
    return (int)HeapReAlloc(0, 0, this->m_domIcon, (unsigned long)rhs.m_domIcon);
}
