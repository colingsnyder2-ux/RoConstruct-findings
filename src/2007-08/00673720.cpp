// from server: 72% by colin
// roc 2007-08 00673720  unit: CXTPCustomizeSheet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673720
//
// 00673720  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00673726  56                   push esi
// 00673727  8b7058               mov esi, dword ptr [eax + 0x58]
// 0067372a  85f6                 test esi, esi
// 0067372c  7426                 je 0x673754
// 0067372e  8b16                 mov edx, dword ptr [esi]
// 00673730  8b5264               mov edx, dword ptr [edx + 0x64]
// 00673733  33c0                 xor eax, eax
// 00673735  398698000000         cmp dword ptr [esi + 0x98], eax
// 0067373b  8bce                 mov ecx, esi
// 0067373d  0f94c0               sete al
// 00673740  50                   push eax
// 00673741  ffd2                 call edx
// 00673743  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00673749  8b01                 mov eax, dword ptr [ecx]
// 0067374b  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00673751  5e                   pop esi
// 00673752  ffe2                 jmp edx
// 00673754  5e                   pop esi
// 00673755  c3                   ret 

struct CXTPCustomizeSheet {
    void m();
};

void CXTPCustomizeSheet::m()
{
    char* p = *(char**)((char*)this + 0xb8);
    char* q = *(char**)(p + 0x58);
    if (q)
    {
        int (__stdcall *fn1)(void*, int);
        fn1 = *(int (__stdcall **)(void*, int))(*(int*)q + 0x64);
        int flag = (*(int*)(q + 0x98) == 0) ? 1 : 0;
        fn1(q, flag);
        char* r = *(char**)(q + 0xfc);
        int (__stdcall *fn2)(void*);
        fn2 = *(int (__stdcall **)(void*))(*(int*)r + 0x17c);
        fn2(r);
    }
}
