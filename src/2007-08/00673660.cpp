// from server: 62% by colin
// roc 2007-08 00673660  unit: CXTPCustomizeSheet  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673660
//
// 00673660  85c0                 test eax, eax
// 00673662  56                   push esi
// 00673663  7416                 je 0x67367b
// 00673665  8b35f8eb7700         mov esi, dword ptr [0x77ebf8]
// 0067366b  eb03                 jmp 0x673670
// 0067366d  8d4900               lea ecx, [ecx]
// 00673670  3bf8                 cmp edi, eax
// 00673672  740b                 je 0x67367f
// 00673674  50                   push eax
// 00673675  ffd6                 call esi
// 00673677  85c0                 test eax, eax
// 00673679  75f5                 jne 0x673670
// 0067367b  33c0                 xor eax, eax
// 0067367d  5e                   pop esi
// 0067367e  c3                   ret 
// 0067367f  b801000000           mov eax, 1
// 00673684  5e                   pop esi
// 00673685  c3                   ret 

extern "C" __declspec(dllimport) void* __stdcall GetParent(void*);

void* g_GetParent = (void*)GetParent;

int FindAncestor(void* target, void* node) {
    if (node != 0)
        return 0;
    while (node != target) {
        node = ((void* (__stdcall*)(void*))g_GetParent)(node);
        if (node != 0)
            return 0;
    }
    return 1;
}
