// from server: 35% by colin
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
    void* m_p;
    void* m_q;
    void assign(void* a, void* b);
};

extern "C" void* __stdcall HeapReAlloc(void*, unsigned long, void*, unsigned long);

void CXTIconHandle::assign(void* a, void* b)
{
    if (a == 0) {
        void** vt = *(void***)this;
        typedef void (__thiscall *Fn)(void*, void*);
        ((Fn)vt[0])(this, b);
    } else if (b == 0) {
        void** vt = *(void***)this;
        typedef void (__thiscall *Fn)(void*, void*);
        ((Fn)vt[1])(this, a);
    } else {
        HeapReAlloc(0, 0, m_q, (unsigned long)a);
    }
}
