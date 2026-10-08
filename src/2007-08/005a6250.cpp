// from server: 100% by colin
// roc 2007-08 005a6250  unit: RBX::VHumanoid::?$FactoryProduct  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a6250
//
// 005a6250  e80bfaffff           call 0x5a5c60
// 005a6255  85c0                 test eax, eax
// 005a6257  740a                 je 0x5a6263
// 005a6259  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005a625f  8b4064               mov eax, dword ptr [eax + 0x64]
// 005a6262  c3                   ret 
// 005a6263  33c0                 xor eax, eax
// 005a6265  c3                   ret 

struct Inner {
    char pad[0x64];
    int field_64;
};

struct Outer {
    char pad[0x1d8];
    Inner* field_1d8;
};

extern Outer* __cdecl getOuter();

int __cdecl getValue()
{
    Outer* o = getOuter();
    if (o)
        return o->field_1d8->field_64;
    return 0;
}
