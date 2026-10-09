// from server: 60% by colin
// roc 2007-08 005e42c0  unit: RBX::ArrowTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e42c0
//
// 005e42c0  53                   push ebx
// 005e42c1  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005e42c7  55                   push ebp
// 005e42c8  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005e42cc  56                   push esi
// 005e42cd  57                   push edi
// 005e42ce  8bff                 mov edi, edi
// 005e42d0  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e42d4  85f6                 test esi, esi
// 005e42d6  7406                 je 0x5e42de
// 005e42d8  3b742420             cmp esi, dword ptr [esp + 0x20]
// 005e42dc  7402                 je 0x5e42e0
// 005e42de  ffd3                 call ebx
// 005e42e0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005e42e4  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 005e42e8  7423                 je 0x5e430d
// 005e42ea  85f6                 test esi, esi
// 005e42ec  7502                 jne 0x5e42f0
// 005e42ee  ffd3                 call ebx
// 005e42f0  3b7e04               cmp edi, dword ptr [esi + 4]
// 005e42f3  7502                 jne 0x5e42f7
// 005e42f5  ffd3                 call ebx
// 005e42f7  8b470c               mov eax, dword ptr [edi + 0xc]
// 005e42fa  50                   push eax
// 005e42fb  8bcd                 mov ecx, ebp
// 005e42fd  e84eeaf4ff           call 0x532d50
// 005e4302  8d4c2418             lea ecx, [esp + 0x18]
// 005e4306  e8352f0400           call 0x627240
// 005e430b  ebc3                 jmp 0x5e42d0
// 005e430d  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e4311  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e4315  5f                   pop edi
// 005e4316  5e                   pop esi
// 005e4317  896804               mov dword ptr [eax + 4], ebp
// 005e431a  5d                   pop ebp
// 005e431b  8908                 mov dword ptr [eax], ecx
// 005e431d  5b                   pop ebx
// 005e431e  c3                   ret 

extern "C" void __stdcall func_0077e6d8();
extern "C" void __stdcall func_00532d50();
extern "C" void __stdcall func_00627240();

struct S {
    void f();
};

void S::f()
{
    void (*pfn)(void) = (void (*)(void))func_0077e6d8;
    char* esi = 0;
    char* edi;
    char* ebp;
    char* eax;
    char* ecx;

    for (;;) {
        esi = *(char**)((char*)&esi + 0x18);
        if (esi == 0 || esi == *(char**)((char*)&esi + 0x20)) {
            pfn();
        }
        edi = *(char**)((char*)&edi + 0x1c);
        if (edi == *(char**)((char*)&edi + 0x24)) {
            break;
        }
        if (esi == 0) {
            pfn();
        }
        if (edi == *(char**)(esi + 4)) {
            pfn();
        }
        eax = *(char**)(edi + 0xc);
        func_00532d50();
        func_00627240();
    }
    eax = *(char**)((char*)&eax + 0x14);
    ecx = *(char**)((char*)&ecx + 0x28);
    *(char**)(eax + 4) = ebp;
    *(char**)eax = ecx;
}
