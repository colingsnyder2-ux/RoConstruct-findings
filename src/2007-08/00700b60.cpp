// from server: 45% by colin
// roc 2007-08 00700b60  unit: PAVCXTPTabManagerAtom::?$CArray  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00700b60
//
// 00700b60  56                   push esi
// 00700b61  57                   push edi
// 00700b62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00700b66  85ff                 test edi, edi
// 00700b68  8bf1                 mov esi, ecx
// 00700b6a  7435                 je 0x700ba1
// 00700b6c  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00700b72  85c9                 test ecx, ecx
// 00700b74  7408                 je 0x700b7e
// 00700b76  8b01                 mov eax, dword ptr [ecx]
// 00700b78  8b10                 mov edx, dword ptr [eax]
// 00700b7a  6a01                 push 1
// 00700b7c  ffd2                 call edx
// 00700b7e  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 00700b84  8b07                 mov eax, dword ptr [edi]
// 00700b86  8b5004               mov edx, dword ptr [eax + 4]
// 00700b89  8bcf                 mov ecx, edi
// 00700b8b  89771c               mov dword ptr [edi + 0x1c], esi
// 00700b8e  ffd2                 call edx
// 00700b90  8b07                 mov eax, dword ptr [edi]
// 00700b92  8b5040               mov edx, dword ptr [eax + 0x40]
// 00700b95  8bcf                 mov ecx, edi
// 00700b97  ffd2                 call edx
// 00700b99  50                   push eax
// 00700b9a  8bce                 mov ecx, esi
// 00700b9c  e84ffeffff           call 0x7009f0
// 00700ba1  8b06                 mov eax, dword ptr [esi]
// 00700ba3  8b5070               mov edx, dword ptr [eax + 0x70]
// 00700ba6  8bce                 mov ecx, esi
// 00700ba8  ffd2                 call edx
// 00700baa  8bc7                 mov eax, edi
// 00700bac  5f                   pop edi
// 00700bad  5e                   pop esi
// 00700bae  c20400               ret 4

struct CXTPTabManagerAtom {
    char pad[0xe0];
    void* m_pAtom;
    void SetAtom(void* p);
    void sub_7009F0(void*);
};

void CXTPTabManagerAtom::SetAtom(void* p) {
    if (p) {
        if (m_pAtom) {
            void** vt = *(void***)m_pAtom;
            void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
            fn(m_pAtom, 1);
        }
        m_pAtom = p;
        void** vt = *(void***)p;
        void (*fn1)(void*) = (void (*)(void*))vt[1];
        *(void**)((char*)p + 0x1c) = this;
        fn1(p);
        void** vt2 = *(void***)p;
        void* (*fn2)(void*) = (void* (*)(void*))vt2[0x10];
        void* r = fn2(p);
        sub_7009F0(r);
    }
    void** vt3 = *(void***)this;
    void (*fn3)(void*) = (void (*)(void*))vt3[0x1c];
    fn3(this);
}
