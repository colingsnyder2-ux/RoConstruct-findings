// from server: 85% by colin
// roc 2007-08 00561b10  unit: RBX::VVelocityMotor::?$FactoryProduct::Creator  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00561b10
//
// 00561b10  56                   push esi
// 00561b11  8b742408             mov esi, dword ptr [esp + 8]
// 00561b15  85f6                 test esi, esi
// 00561b17  742c                 je 0x561b45
// 00561b19  8da42400000000       lea esp, [esp]
// 00561b20  6a00                 push 0
// 00561b22  68044e8800           push 0x884e04
// 00561b27  684c1f8800           push 0x881f4c
// 00561b2c  6a00                 push 0
// 00561b2e  56                   push esi
// 00561b2f  e802f20c00           call 0x630d36
// 00561b34  83c414               add esp, 0x14
// 00561b37  85c0                 test eax, eax
// 00561b39  750e                 jne 0x561b49
// 00561b3b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00561b41  85f6                 test esi, esi
// 00561b43  75db                 jne 0x561b20
// 00561b45  33c0                 xor eax, eax
// 00561b47  5e                   pop esi
// 00561b48  c3                   ret 
// 00561b49  8bc8                 mov ecx, eax
// 00561b4b  5e                   pop esi
// 00561b4c  e9cf8dffff           jmp 0x55a920

struct Instance {
    Instance* findFirstChild(const char* name);
};

struct Creator {
    void* create();
};

void* __stdcall findCreator(Instance* inst, int a, const char* name, const char* type, int b);

void* Creator_create(Instance* inst)
{
    while (inst != 0) {
        void* result = findCreator(inst, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result != 0) {
            return result;
        }
        inst = *(Instance**)((char*)inst + 0xbc);
    }
    return 0;
}
