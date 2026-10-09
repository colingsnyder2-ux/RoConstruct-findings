// roc 2007-03 00638d50  unit: seg_00630000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638d50
//
// 00638d50  56                   push esi
// 00638d51  8bf1                 mov esi, ecx
// 00638d53  8b06                 mov eax, dword ptr [esi]
// 00638d55  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00638d5b  6a01                 push 1
// 00638d5d  6a00                 push 0
// 00638d5f  ffd2                 call edx
// 00638d61  8b06                 mov eax, dword ptr [esi]
// 00638d63  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00638d69  8bce                 mov ecx, esi
// 00638d6b  ffd2                 call edx
// 00638d6d  8bf0                 mov esi, eax
// 00638d6f  85f6                 test esi, esi
// 00638d71  7422                 je 0x638d95
// 00638d73  8b06                 mov eax, dword ptr [esi]
// 00638d75  8b909c010000         mov edx, dword ptr [eax + 0x19c]
// 00638d7b  6a01                 push 1
// 00638d7d  6a00                 push 0
// 00638d7f  8bce                 mov ecx, esi
// 00638d81  ffd2                 call edx
// 00638d83  8b06                 mov eax, dword ptr [esi]
// 00638d85  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00638d8b  8bce                 mov ecx, esi
// 00638d8d  ffd2                 call edx
// 00638d8f  8bf0                 mov esi, eax
// 00638d91  85f6                 test esi, esi
// 00638d93  75de                 jne 0x638d73
// 00638d95  5e                   pop esi
// 00638d96  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPCommandBar@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
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
}
