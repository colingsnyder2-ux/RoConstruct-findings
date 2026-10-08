// from server: 53% by colin
// roc 2007-08 00495730  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00495730
//
// 00495730  56                   push esi
// 00495731  8b742408             mov esi, dword ptr [esp + 8]
// 00495735  85f6                 test esi, esi
// 00495737  742c                 je 0x495765
// 00495739  8da42400000000       lea esp, [esp]
// 00495740  6a00                 push 0
// 00495742  68044e8800           push 0x884e04
// 00495747  684c1f8800           push 0x881f4c
// 0049574c  6a00                 push 0
// 0049574e  56                   push esi
// 0049574f  e8e2b51900           call 0x630d36
// 00495754  83c414               add esp, 0x14
// 00495757  85c0                 test eax, eax
// 00495759  750e                 jne 0x495769
// 0049575b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00495761  85f6                 test esi, esi
// 00495763  75db                 jne 0x495740
// 00495765  33c0                 xor eax, eax
// 00495767  5e                   pop esi
// 00495768  c3                   ret 
// 00495769  8bc8                 mov ecx, eax
// 0049576b  5e                   pop esi
// 0049576c  e92ff2ffff           jmp 0x4949a0

struct Instance {
    Instance* findFirstChild(const char* name);
};

struct Descriptor {
    void* getValue(Instance* instance);
};

struct RefPropDescriptor {
    Instance* getValue(Instance* instance);
};

Instance* RefPropDescriptor::getValue(Instance* instance) {
    if (instance == 0)
        return 0;
    for (;;) {
        Descriptor* d = (Descriptor*)instance->findFirstChild("?");
        if (d != 0)
            return (Instance*)d->getValue(instance);
        instance = *(Instance**)((char*)instance + 0xbc);
        if (instance == 0)
            return 0;
    }
}
