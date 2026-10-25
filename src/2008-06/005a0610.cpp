// from server: 100% by tester
// roc 2008-06 005a0610  unit: RBX::Workspace  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0610
//
// 005a0610  56                   push esi
// 005a0611  8bf1                 mov esi, ecx
// 005a0613  8b8eb4030000         mov ecx, dword ptr [esi + 0x3b4]
// 005a0619  57                   push edi
// 005a061a  85c9                 test ecx, ecx
// 005a061c  7409                 je 0x5a0627
// 005a061e  8b01                 mov eax, dword ptr [ecx]
// 005a0620  8b5030               mov edx, dword ptr [eax + 0x30]
// 005a0623  6a01                 push 1
// 005a0625  ffd2                 call edx
// 005a0627  56                   push esi
// 005a0628  c786b403000000000000 mov dword ptr [esi + 0x3b4], 0
// 005a0632  e849fcffff           call 0x5a0280
// 005a0637  8b8eb0030000         mov ecx, dword ptr [esi + 0x3b0]
// 005a063d  8bf8                 mov edi, eax
// 005a063f  83c404               add esp, 4
// 005a0642  3bf9                 cmp edi, ecx
// 005a0644  740d                 je 0x5a0653
// 005a0646  85c9                 test ecx, ecx
// 005a0648  7409                 je 0x5a0653
// 005a064a  8b01                 mov eax, dword ptr [ecx]
// 005a064c  8b5030               mov edx, dword ptr [eax + 0x30]
// 005a064f  6a01                 push 1
// 005a0651  ffd2                 call edx
// 005a0653  89beb0030000         mov dword ptr [esi + 0x3b0], edi
// 005a0659  5f                   pop edi
// 005a065a  5e                   pop esi
// 005a065b  c3                   ret 

struct S {
    char pad[0x3b0];
    void* field_3b0;
    void* field_3b4;
    void f();
};

void* __cdecl sub_5a0280(void* p);

void S::f() {
    void* p = field_3b4;
    if (p) {
        (*(void (__thiscall**)(void*, int))(*(char**)p + 0x30))(p, 1);
    }
    field_3b4 = 0;
    void* r = sub_5a0280(this);
    void* q = field_3b0;
    if (r != q) {
        if (q) {
            (*(void (__thiscall**)(void*, int))(*(char**)q + 0x30))(q, 1);
        }
    }
    field_3b0 = r;
}
