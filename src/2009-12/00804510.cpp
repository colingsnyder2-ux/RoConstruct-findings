// roc 2009-12 00804510  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804510
//
// 00804510  56                   push esi
// 00804511  8bf1                 mov esi, ecx
// 00804513  8b06                 mov eax, dword ptr [esi]
// 00804515  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0080451b  6a01                 push 1
// 0080451d  6a00                 push 0
// 0080451f  ffd2                 call edx
// 00804521  8b06                 mov eax, dword ptr [esi]
// 00804523  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00804529  8bce                 mov ecx, esi
// 0080452b  ffd2                 call edx
// 0080452d  8bf0                 mov esi, eax
// 0080452f  85f6                 test esi, esi
// 00804531  7422                 je 0x804555
// 00804533  8b06                 mov eax, dword ptr [esi]
// 00804535  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0080453b  6a01                 push 1
// 0080453d  6a00                 push 0
// 0080453f  8bce                 mov ecx, esi
// 00804541  ffd2                 call edx
// 00804543  8b06                 mov eax, dword ptr [esi]
// 00804545  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0080454b  8bce                 mov ecx, esi
// 0080454d  ffd2                 call edx
// 0080454f  8bf0                 mov esi, eax
// 00804551  85f6                 test esi, esi
// 00804553  75de                 jne 0x804533
// 00804555  5e                   pop esi
// 00804556  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPCommandBar@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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