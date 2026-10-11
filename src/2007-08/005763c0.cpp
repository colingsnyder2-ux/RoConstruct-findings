// from server: 100% by colin
// roc 2007-08 005763c0  unit: RBX::VPartInstance::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005763c0
//
// 005763c0  56                   push esi
// 005763c1  8bf1                 mov esi, ecx
// 005763c3  c706b4aa7a00         mov dword ptr [esi], 0x7aaab4
// 005763c9  8b4608               mov eax, dword ptr [esi + 8]
// 005763cc  85c0                 test eax, eax
// 005763ce  7409                 je 0x5763d9
// 005763d0  50                   push eax
// 005763d1  e88c980b00           call 0x62fc62
// 005763d6  83c404               add esp, 4
// 005763d9  c7460800000000       mov dword ptr [esi + 8], 0
// 005763e0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005763e7  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005763ee  5e                   pop esi
// 005763ef  c3                   ret 

struct S {
    void f();
};

extern "C" void __cdecl sub_62fc62(void*);

void S::f()
{
    *(int*)this = 0x7aaab4;
    int* p = (int*)((char*)this + 8);
    if (*p) {
        sub_62fc62((void*)*p);
    }
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
}
