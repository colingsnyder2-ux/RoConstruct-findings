// from server: 100% by king_originala
// roc 2008-06 004ae7b0  unit: RBX::Network::VClient::?$FactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae7b0
//
// 004ae7b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ae7b4  e8d7f4ffff           call 0x4adc90
// 004ae7b9  8b442408             mov eax, dword ptr [esp + 8]
// 004ae7bd  83ec08               sub esp, 8
// 004ae7c0  dd1c24               fstp qword ptr [esp]
// 004ae7c3  50                   push eax
// 004ae7c4  e8e77cffff           call 0x4a64b0
// 004ae7c9  83c40c               add esp, 0xc
// 004ae7cc  c3                   ret 

struct S {
    double getValue();
};

void __cdecl writeValue(void* output, double value);

void __cdecl serialize(S* object, void* output)
{
    writeValue(output, object->getValue());
}
