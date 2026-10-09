// from server: 100% by colin
// roc 2007-08 006439c0  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006439c0
//
// 006439c0  56                   push esi
// 006439c1  8bf1                 mov esi, ecx
// 006439c3  8b06                 mov eax, dword ptr [esi]
// 006439c5  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 006439cb  6a01                 push 1
// 006439cd  6a00                 push 0
// 006439cf  ffd2                 call edx
// 006439d1  8b06                 mov eax, dword ptr [esi]
// 006439d3  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 006439d9  8bce                 mov ecx, esi
// 006439db  ffd2                 call edx
// 006439dd  8bf0                 mov esi, eax
// 006439df  85f6                 test esi, esi
// 006439e1  7422                 je 0x643a05
// 006439e3  8b06                 mov eax, dword ptr [esi]
// 006439e5  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 006439eb  6a01                 push 1
// 006439ed  6a00                 push 0
// 006439ef  8bce                 mov ecx, esi
// 006439f1  ffd2                 call edx
// 006439f3  8b06                 mov eax, dword ptr [esi]
// 006439f5  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 006439fb  8bce                 mov ecx, esi
// 006439fd  ffd2                 call edx
// 006439ff  8bf0                 mov esi, eax
// 00643a01  85f6                 test esi, esi
// 00643a03  75de                 jne 0x6439e3
// 00643a05  5e                   pop esi
// 00643a06  c3                   ret 

struct CXTPCommandBar {
    void f();
};

void CXTPCommandBar::f() {
    void* p = this;
    (*(void (__thiscall **)(void*, int, int))(*(int*)p + 0x19c))(p, 0, 1);
    void* q = (*(void* (__thiscall **)(void*))(*(int*)p + 0x184))(p);
    while (q) {
        (*(void (__thiscall **)(void*, int, int))(*(int*)q + 0x19c))(q, 0, 1);
        q = (*(void* (__thiscall **)(void*))(*(int*)q + 0x184))(q);
    }
}
