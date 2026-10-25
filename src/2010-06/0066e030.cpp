// from server: 65% by atomic.potato
// roc 2010-06 0066e030  unit: RBX::Humanoid  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066e030
//
// 0066e030  56                   push esi
// 0066e031  8b742408             mov esi, dword ptr [esp + 8]
// 0066e035  6a00                 push 0
// 0066e037  68c0c8b700           push 0xb7c8c0
// 0066e03c  68408eb700           push 0xb78e40
// 0066e041  6a00                 push 0
// 0066e043  56                   push esi
// 0066e044  e8a1ab1300           call 0x7a8bea
// 0066e049  83c414               add esp, 0x14
// 0066e04c  85c0                 test eax, eax
// 0066e04e  740f                 je 0x66e05f
// 0066e050  d9e8                 fld1 
// 0066e052  51                   push ecx
// 0066e053  8bc8                 mov ecx, eax
// 0066e055  d91c24               fstp dword ptr [esp]
// 0066e058  e8c3e2fcff           call 0x63c320
// 0066e05d  5e                   pop esi
// 0066e05e  c3                   ret 
// 0066e05f  6a00                 push 0
// 0066e061  687846b800           push 0xb84678
// 0066e066  68408eb700           push 0xb78e40
// 0066e06b  6a00                 push 0
// 0066e06d  56                   push esi
// 0066e06e  e877ab1300           call 0x7a8bea
// 0066e073  83c414               add esp, 0x14
// 0066e076  85c0                 test eax, eax
// 0066e078  740c                 je 0x66e086
// 0066e07a  6830e06600           push 0x66e030
// 0066e07f  8bc8                 mov ecx, eax
// 0066e081  e8caabdfff           call 0x468c50
// 0066e086  5e                   pop esi
// 0066e087  c3                   ret 

extern "C" void* __stdcall sub_7a8bea(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_63c320(void*, float);
extern "C" void __stdcall sub_468c50(void*, void*);

void sub_66e030(void* self) {
    void* p = sub_7a8bea(self, 0, (void*)0xb78e40, (void*)0xb7c8c0, 0);
    if (p) {
        sub_63c320(p, 1.0f);
        return;
    }
    void* q = sub_7a8bea(self, 0, (void*)0xb78e40, (void*)0xb84678, 0);
    if (q) {
        sub_468c50(q, (void*)0x66e030);
    }
}
