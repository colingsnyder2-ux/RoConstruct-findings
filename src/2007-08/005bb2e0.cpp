// from server: 45% by colin
// roc 2007-08 005bb2e0  unit: RBX::VModelInstance::?$FactoryProduct  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb2e0
//
// 005bb2e0  56                   push esi
// 005bb2e1  57                   push edi
// 005bb2e2  8bf1                 mov esi, ecx
// 005bb2e4  eb0a                 jmp 0x5bb2f0
// 005bb2e6  8da42400000000       lea esp, [esp]
// 005bb2ed  8d4900               lea ecx, [ecx]
// 005bb2f0  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005bb2f6  6a00                 push 0
// 005bb2f8  68c08f8900           push 0x898fc0
// 005bb2fd  684c1f8800           push 0x881f4c
// 005bb302  6a00                 push 0
// 005bb304  50                   push eax
// 005bb305  e82c5a0700           call 0x630d36
// 005bb30a  83c414               add esp, 0x14
// 005bb30d  85c0                 test eax, eax
// 005bb30f  7419                 je 0x5bb32a
// 005bb311  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 005bb317  8bce                 mov ecx, esi
// 005bb319  e8124cf7ff           call 0x52ff30
// 005bb31e  3bc7                 cmp eax, edi
// 005bb320  7408                 je 0x5bb32a
// 005bb322  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 005bb328  ebc6                 jmp 0x5bb2f0
// 005bb32a  5f                   pop edi
// 005bb32b  8bc6                 mov eax, esi
// 005bb32d  5e                   pop esi
// 005bb32e  c3                   ret 

struct VModelInstance {
    char pad[0xbc];
    VModelInstance* fieldBC;
    VModelInstance* m();
};

extern "C" int __cdecl sub_630D36(void*, void*, void*, int, void*);

VModelInstance* VModelInstance::m() {
    VModelInstance* self = this;
    while (sub_630D36(self->fieldBC, (void*)0x881f4c, (void*)0x898fc0, 0, 0) != 0) {
        VModelInstance* old = self->fieldBC;
        VModelInstance* next = this->m();
        if (next == old) {
            break;
        }
        self = self->fieldBC;
    }
    return self;
}
