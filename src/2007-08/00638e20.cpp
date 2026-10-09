// from server: 88% by colin
// roc 2007-08 00638e20  unit: CPatchedControlComboBox  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00638e20
//
// 00638e20  56                   push esi
// 00638e21  57                   push edi
// 00638e22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00638e26  57                   push edi
// 00638e27  8bf1                 mov esi, ecx
// 00638e29  e822320000           call 0x63c050
// 00638e2e  85c0                 test eax, eax
// 00638e30  7505                 jne 0x638e37
// 00638e32  5f                   pop edi
// 00638e33  5e                   pop esi
// 00638e34  c20400               ret 4
// 00638e37  85ff                 test edi, edi
// 00638e39  750a                 jne 0x638e45
// 00638e3b  8b06                 mov eax, dword ptr [esi]
// 00638e3d  8b5070               mov edx, dword ptr [eax + 0x70]
// 00638e40  57                   push edi
// 00638e41  8bce                 mov ecx, esi
// 00638e43  ffd2                 call edx
// 00638e45  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00638e4b  85c9                 test ecx, ecx
// 00638e4d  740b                 je 0x638e5a
// 00638e4f  83792000             cmp dword ptr [ecx + 0x20], 0
// 00638e53  7405                 je 0x638e5a
// 00638e55  e846eeffff           call 0x637ca0
// 00638e5a  5f                   pop edi
// 00638e5b  b801000000           mov eax, 1
// 00638e60  5e                   pop esi
// 00638e61  c20400               ret 4

struct CPatchedControlComboBox {
    int sub_63C050(void*);
    void sub_637CA0();
    int OnNotify(void*);
};

int CPatchedControlComboBox::OnNotify(void* p) {
    if (!sub_63C050(p))
        return 0;
    if (!p) {
        void** vt = *(void***)this;
        void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vt[0x70/4];
        fn(this, p);
    }
    int* q = *(int**)((char*)this + 0x178);
    if (q && q[0x20/4])
        sub_637CA0();
    return 1;
}
