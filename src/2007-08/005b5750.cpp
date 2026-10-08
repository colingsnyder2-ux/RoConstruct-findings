// from server: 100% by colin
// roc 2007-08 005b5750  unit: RBX::Primitive  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5750
//
// 005b5750  8b442404             mov eax, dword ptr [esp + 4]
// 005b5754  85c0                 test eax, eax
// 005b5756  56                   push esi
// 005b5757  8bf1                 mov esi, ecx
// 005b5759  7505                 jne 0x5b5760
// 005b575b  e850f0fbff           call 0x5747b0
// 005b5760  3986ac000000         cmp dword ptr [esi + 0xac], eax
// 005b5766  7406                 je 0x5b576e
// 005b5768  8986ac000000         mov dword ptr [esi + 0xac], eax
// 005b576e  5e                   pop esi
// 005b576f  c20400               ret 4

struct Primitive {
    char pad[0xac];
    int field0xac;
    void setSomething(int value);
};

int getDefaultValue();

void Primitive::setSomething(int value)
{
    if (value == 0)
        value = getDefaultValue();
    if (field0xac != value)
        field0xac = value;
}
