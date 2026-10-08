// from server: 81% by colin
// roc 2007-08 00561ac0  unit: RBX::VVelocityMotor::?$FactoryProduct::Creator  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00561ac0
//
// 00561ac0  56                   push esi
// 00561ac1  8b742408             mov esi, dword ptr [esp + 8]
// 00561ac5  85f6                 test esi, esi
// 00561ac7  742c                 je 0x561af5
// 00561ac9  8da42400000000       lea esp, [esp]
// 00561ad0  6a00                 push 0
// 00561ad2  68044e8800           push 0x884e04
// 00561ad7  684c1f8800           push 0x881f4c
// 00561adc  6a00                 push 0
// 00561ade  56                   push esi
// 00561adf  e852f20c00           call 0x630d36
// 00561ae4  83c414               add esp, 0x14
// 00561ae7  85c0                 test eax, eax
// 00561ae9  750e                 jne 0x561af9
// 00561aeb  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00561af1  85f6                 test esi, esi
// 00561af3  75db                 jne 0x561ad0
// 00561af5  33c0                 xor eax, eax
// 00561af7  5e                   pop esi
// 00561af8  c3                   ret 
// 00561af9  8bc8                 mov ecx, eax
// 00561afb  5e                   pop esi
// 00561afc  e9dffdffff           jmp 0x5618e0

struct RBX_Instance;

extern "C" int __cdecl sub_00630d36(RBX_Instance* a, int b, int c, int d, int e);
extern void sub_005618e0();

int __cdecl sub_00561ac0(RBX_Instance* inst)
{
    while (inst != 0) {
        int r = sub_00630d36(inst, 0, 0x881f4c, 0x884e04, 0);
        if (r != 0) {
            sub_005618e0();
            return r;
        }
        inst = *(RBX_Instance**)((char*)inst + 0xbc);
    }
    return 0;
}
