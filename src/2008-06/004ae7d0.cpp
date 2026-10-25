// from server: 100% by king_originala
// roc 2008-06 004ae7d0  unit: RBX::Network::VClient::?$FactoryProduct  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae7d0
//
// 004ae7d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ae7d4  83ec08               sub esp, 8
// 004ae7d7  8d0424               lea eax, [esp]
// 004ae7da  50                   push eax
// 004ae7db  51                   push ecx
// 004ae7dc  e8ff7cffff           call 0x4a64e0
// 004ae7e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ae7e5  83c408               add esp, 8
// 004ae7e8  83790400             cmp dword ptr [ecx + 4], 0
// 004ae7ec  7409                 je 0x4ae7f7
// 004ae7ee  8d1424               lea edx, [esp]
// 004ae7f1  52                   push edx
// 004ae7f2  e8f9f4ffff           call 0x4adcf0
// 004ae7f7  83c408               add esp, 8
// 004ae7fa  c3                   ret 

struct Value {
    void* first;
    void* second;
};

struct S {
    int first;
    int enabled;
    void apply(Value*);
};

extern void __cdecl convert(void*, Value*);

void __cdecl f(S* object, void* source)
{
    Value value;
    convert(source, &value);
    if (object->enabled != 0)
        object->apply(&value);
}
