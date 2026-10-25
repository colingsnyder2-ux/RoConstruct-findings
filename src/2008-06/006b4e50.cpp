// from server: 100% by tester
// roc 2008-06 006b4e50  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4e50
//
// 006b4e50  56                   push esi
// 006b4e51  8bf1                 mov esi, ecx
// 006b4e53  8b06                 mov eax, dword ptr [esi]
// 006b4e55  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006b4e5b  6a01                 push 1
// 006b4e5d  6a00                 push 0
// 006b4e5f  ffd2                 call edx
// 006b4e61  8b06                 mov eax, dword ptr [esi]
// 006b4e63  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006b4e69  8bce                 mov ecx, esi
// 006b4e6b  ffd2                 call edx
// 006b4e6d  8bf0                 mov esi, eax
// 006b4e6f  85f6                 test esi, esi
// 006b4e71  7422                 je 0x6b4e95
// 006b4e73  8b06                 mov eax, dword ptr [esi]
// 006b4e75  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006b4e7b  6a01                 push 1
// 006b4e7d  6a00                 push 0
// 006b4e7f  8bce                 mov ecx, esi
// 006b4e81  ffd2                 call edx
// 006b4e83  8b06                 mov eax, dword ptr [esi]
// 006b4e85  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 006b4e8b  8bce                 mov ecx, esi
// 006b4e8d  ffd2                 call edx
// 006b4e8f  8bf0                 mov esi, eax
// 006b4e91  85f6                 test esi, esi
// 006b4e93  75de                 jne 0x6b4e73
// 006b4e95  5e                   pop esi
// 006b4e96  c3                   ret 

struct CXTPCommandBar {
    void f();
};

void CXTPCommandBar::f() {
    void* p = this;
    (*(void (__thiscall **)(void*, int, int))(*(int*)p + 0x1ac))(p, 0, 1);
    void* q = (*(void* (__thiscall **)(void*))(*(int*)p + 0x194))(p);
    while (q) {
        (*(void (__thiscall **)(void*, int, int))(*(int*)q + 0x1ac))(q, 0, 1);
        q = (*(void* (__thiscall **)(void*))(*(int*)q + 0x194))(q);
    }
}
