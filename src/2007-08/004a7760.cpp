// from server: 96% by colin
// roc 2007-08 004a7760  unit: RBX::JointsService  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7760
//
// 004a7760  56                   push esi
// 004a7761  8bf1                 mov esi, ecx
// 004a7763  85f6                 test esi, esi
// 004a7765  7408                 je 0x4a776f
// 004a7767  8d86ec000000         lea eax, [esi + 0xec]
// 004a776d  eb02                 jmp 0x4a7771
// 004a776f  33c0                 xor eax, eax
// 004a7771  85f6                 test esi, esi
// 004a7773  c70014d27900         mov dword ptr [eax], 0x79d214
// 004a7779  7408                 je 0x4a7783
// 004a777b  8d86e8000000         lea eax, [esi + 0xe8]
// 004a7781  eb02                 jmp 0x4a7785
// 004a7783  33c0                 xor eax, eax
// 004a7785  c70008d27900         mov dword ptr [eax], 0x79d208
// 004a778b  e8208b0900           call 0x5402b0
// 004a7790  f644240801           test byte ptr [esp + 8], 1
// 004a7795  740a                 je 0x4a77a1
// 004a7797  56                   push esi
// 004a7798  ff15c4e67700         call dword ptr [0x77e6c4]
// 004a779e  83c404               add esp, 4
// 004a77a1  8bc6                 mov eax, esi
// 004a77a3  5e                   pop esi
// 004a77a4  c20400               ret 4

struct JointsService {
    char pad[0xe8];
    int field_e8;
    int field_ec;
    void* destroy(int);
};

extern "C" void __cdecl free(void*);
extern "C" void __cdecl sub_5402b0();

void* JointsService::destroy(int flag)
{
    int* p;
    if (this) {
        p = (int*)((char*)this + 0xec);
    } else {
        p = 0;
    }
    *p = 0x79d214;
    if (this) {
        p = (int*)((char*)this + 0xe8);
    } else {
        p = 0;
    }
    *p = 0x79d208;
    sub_5402b0();
    if (flag & 1) {
        free(this);
    }
    return this;
}
