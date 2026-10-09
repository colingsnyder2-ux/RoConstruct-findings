// from server: 90% by colin
// roc 2007-08 00714d40  unit: CXTCaptionButton  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714d40
//
// 00714d40  56                   push esi
// 00714d41  8bf1                 mov esi, ecx
// 00714d43  8b06                 mov eax, dword ptr [esi]
// 00714d45  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00714d4b  ffd2                 call edx
// 00714d4d  85c0                 test eax, eax
// 00714d4f  7445                 je 0x714d96
// 00714d51  8bce                 mov ecx, esi
// 00714d53  e838c2ffff           call 0x710f90
// 00714d58  8bf0                 mov esi, eax
// 00714d5a  837e0801             cmp dword ptr [esi + 8], 1
// 00714d5e  7536                 jne 0x714d96
// 00714d60  8b06                 mov eax, dword ptr [esi]
// 00714d62  8b5034               mov edx, dword ptr [eax + 0x34]
// 00714d65  57                   push edi
// 00714d66  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00714d6a  57                   push edi
// 00714d6b  8bce                 mov ecx, esi
// 00714d6d  ffd2                 call edx
// 00714d6f  8b06                 mov eax, dword ptr [esi]
// 00714d71  8b5038               mov edx, dword ptr [eax + 0x38]
// 00714d74  57                   push edi
// 00714d75  8bce                 mov ecx, esi
// 00714d77  ffd2                 call edx
// 00714d79  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00714d7d  8b06                 mov eax, dword ptr [esi]
// 00714d7f  8b5070               mov edx, dword ptr [eax + 0x70]
// 00714d82  51                   push ecx
// 00714d83  8bce                 mov ecx, esi
// 00714d85  ffd2                 call edx
// 00714d87  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00714d8b  8b06                 mov eax, dword ptr [esi]
// 00714d8d  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00714d90  51                   push ecx
// 00714d91  8bce                 mov ecx, esi
// 00714d93  ffd2                 call edx
// 00714d95  5f                   pop edi
// 00714d96  5e                   pop esi
// 00714d97  c20c00               ret 0xc

struct CXTCaptionButton {
    void* vtable;
    int method_164();
    void* method_710f90();
    void method_714d40(int, int, int);
};

void CXTCaptionButton::method_714d40(int a, int b, int c) {
    if (!method_164())
        return;
    void* p = method_710f90();
    if (*(int*)((char*)p + 8) != 1)
        return;
    void** vt = *(void***)p;
    ((void (__thiscall*)(void*, int))vt[0x34/4])(p, a);
    vt = *(void***)p;
    ((void (__thiscall*)(void*, int))vt[0x38/4])(p, a);
    vt = *(void***)p;
    ((void (__thiscall*)(void*, int))vt[0x70/4])(p, b);
    vt = *(void***)p;
    ((void (__thiscall*)(void*, int))vt[0x6c/4])(p, c);
}
