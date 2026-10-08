// from server: 59% by colin
// roc 2007-08 005732c0  unit: RBX::VDecal::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005732c0
//
// 005732c0  a17a00c746           mov eax, dword ptr [0x46c7007a]
// 005732c5  74bc                 je 0x573283
// 005732c7  a17a00c786           mov eax, dword ptr [0x86c7007a]
// 005732cc  8c00                 mov word ptr [eax], es
// 005732ce  0000                 add byte ptr [eax], al
// 005732d0  ac                   lodsb al, byte ptr [esi]
// 005732d1  a17a00e8d7           mov eax, dword ptr [0xd7e8007a]
// 005732d6  cf                   iretd 
// 005732d7  fc                   cld 
// 005732d8  fff6                 push esi
// 005732da  44                   inc esp
// 005732db  2408                 and al, 8
// 005732dd  01740a56             add dword ptr [edx + ecx + 0x56], esi
// 005732e1  ff15c4e67700         call dword ptr [0x77e6c4]
// 005732e7  83c404               add esp, 4
// 005732ea  8bc6                 mov eax, esi
// 005732ec  5e                   pop esi
// 005732ed  c20400               ret 4

struct S {
    void f(int);
};

extern "C" void __stdcall free(void*);

void S::f(int a) {
    if (*(int*)0x46c7007a == 0) {
        return;
    }
    *(short*)*(int*)0x86c7007a = 0;
    *(char*)*(int*)0x86c7007a = 0;
    free(*(void**)0x77e6c4);
}
