// from server: 86% by colin
// roc 2007-08 0048e120  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e120
//
// 0048e120  56                   push esi
// 0048e121  8b742408             mov esi, dword ptr [esp + 8]
// 0048e125  85f6                 test esi, esi
// 0048e127  742c                 je 0x48e155
// 0048e129  8da42400000000       lea esp, [esp]
// 0048e130  6a00                 push 0
// 0048e132  68044e8800           push 0x884e04
// 0048e137  684c1f8800           push 0x881f4c
// 0048e13c  6a00                 push 0
// 0048e13e  56                   push esi
// 0048e13f  e8f22b1a00           call 0x630d36
// 0048e144  83c414               add esp, 0x14
// 0048e147  85c0                 test eax, eax
// 0048e149  750e                 jne 0x48e159
// 0048e14b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0048e151  85f6                 test esi, esi
// 0048e153  75db                 jne 0x48e130
// 0048e155  33c0                 xor eax, eax
// 0048e157  5e                   pop esi
// 0048e158  c3                   ret 
// 0048e159  8bc8                 mov ecx, eax
// 0048e15b  5e                   pop esi
// 0048e15c  e93fecffff           jmp 0x48cda0

struct RBX_Instance;
struct RBX_ServiceProvider;

extern "C" int __cdecl sub_00630D36(RBX_Instance* self, int a2, const char* a3, const char* a4, int a5);
extern "C" void __cdecl sub_0048CDA0(int* p);

struct RBX_Instance {
    char pad[0xbc];
    RBX_Instance* next;
};

int __cdecl sub_0048E120(RBX_Instance* inst)
{
    while (inst) {
        int r = sub_00630D36(inst, 0, (const char*)0x881F4C, (const char*)0x884E04, 0);
        if (r == 0) {
            sub_0048CDA0((int*)r);
            return r;
        }
        inst = inst->next;
    }
    return 0;
}
