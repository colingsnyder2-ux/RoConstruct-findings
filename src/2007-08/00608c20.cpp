// from server: 75% by colin
// roc 2007-08 00608c20  unit: RBX::SimJobStage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608c20
//
// 00608c20  56                   push esi
// 00608c21  8bf1                 mov esi, ecx
// 00608c23  8d4e10               lea ecx, [esi + 0x10]
// 00608c26  c706242d7c00         mov dword ptr [esi], 0x7c2d24
// 00608c2c  e84fe21100           call 0x726e80
// 00608c31  8b4e08               mov ecx, dword ptr [esi + 8]
// 00608c34  85c9                 test ecx, ecx
// 00608c36  c70614a67b00         mov dword ptr [esi], 0x7ba614
// 00608c3c  7408                 je 0x608c46
// 00608c3e  8b01                 mov eax, dword ptr [ecx]
// 00608c40  8b10                 mov edx, dword ptr [eax]
// 00608c42  6a01                 push 1
// 00608c44  ffd2                 call edx
// 00608c46  f644240801           test byte ptr [esp + 8], 1
// 00608c4b  7409                 je 0x608c56
// 00608c4d  56                   push esi
// 00608c4e  e80f700200           call 0x62fc62
// 00608c53  83c404               add esp, 4
// 00608c56  8bc6                 mov eax, esi
// 00608c58  5e                   pop esi
// 00608c59  c20400               ret 4

struct SimJobStage {
    void* m_vtbl;
    char pad0[4];
    void* m_ptr8;
    char pad1[4];
    void* m_ptr10;
    void dtor(char flag);
};

extern "C" void __stdcall sub_726E80(void*);
extern "C" void __stdcall sub_62FC62(void*);

void SimJobStage::dtor(char flag)
{
    this->m_vtbl = (void*)0x7c2d24;
    sub_726E80(&this->m_ptr10);
    void* p = this->m_ptr8;
    this->m_vtbl = (void*)0x7ba614;
    if (p) {
        void** vt = *(void***)p;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
        fn(p, 1);
    }
    if (flag & 1) {
        sub_62FC62(this);
    }
}
