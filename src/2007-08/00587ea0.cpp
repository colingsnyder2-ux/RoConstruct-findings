// from server: 100% by colin
// roc 2007-08 00587ea0  unit: RBX::VSoundChannel::?$FactoryProduct  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587ea0
//
// 00587ea0  8b442404             mov eax, dword ptr [esp + 4]
// 00587ea4  56                   push esi
// 00587ea5  8b7020               mov esi, dword ptr [eax + 0x20]
// 00587ea8  8b06                 mov eax, dword ptr [esi]
// 00587eaa  85c0                 test eax, eax
// 00587eac  740c                 je 0x587eba
// 00587eae  50                   push eax
// 00587eaf  e8547d0a00           call 0x62fc08
// 00587eb4  c70600000000         mov dword ptr [esi], 0
// 00587eba  5e                   pop esi
// 00587ebb  c3                   ret 

struct Inner {
    void* ptr;
};

struct Outer {
    char pad[0x20];
    Inner* inner;
};

extern "C" void __stdcall sub_0062fc08(void* p);

void __cdecl sub_00587ea0(Outer* obj)
{
    Inner* in = obj->inner;
    void* p = in->ptr;
    if (p != 0) {
        sub_0062fc08(p);
        in->ptr = 0;
    }
}
