// from server: 100% by colin
// roc 2007-08 00573d80  unit: RBX::VPartInstance::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573d80
//
// 00573d80  56                   push esi
// 00573d81  8bf1                 mov esi, ecx
// 00573d83  56                   push esi
// 00573d84  e8a7970000           call 0x57d530
// 00573d89  83c404               add esp, 4
// 00573d8c  85c0                 test eax, eax
// 00573d8e  740e                 je 0x573d9e
// 00573d90  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00573d96  51                   push ecx
// 00573d97  8bc8                 mov ecx, eax
// 00573d99  e832630300           call 0x5aa0d0
// 00573d9e  5e                   pop esi
// 00573d9f  c3                   ret 

struct VPartInstance {
    char pad[0x1d8];
    void* field_1d8;
    void sub_573D80();
};

struct Helper {
    void sub_5AA0D0(void*);
};

extern "C" void* __cdecl sub_57D530(void*);

void VPartInstance::sub_573D80()
{
    void* p = sub_57D530(this);
    if (p) {
        ((Helper*)p)->sub_5AA0D0(this->field_1d8);
    }
}
