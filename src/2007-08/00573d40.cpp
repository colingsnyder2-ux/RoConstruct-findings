// from server: 100% by colin
// roc 2007-08 00573d40  unit: RBX::VPartInstance::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573d40
//
// 00573d40  8b442404             mov eax, dword ptr [esp + 4]
// 00573d44  85c0                 test eax, eax
// 00573d46  740d                 je 0x573d55
// 00573d48  8b4068               mov eax, dword ptr [eax + 0x68]
// 00573d4b  85c0                 test eax, eax
// 00573d4d  7406                 je 0x573d55
// 00573d4f  0590feffff           add eax, 0xfffffe90
// 00573d54  c3                   ret 
// 00573d55  33c0                 xor eax, eax
// 00573d57  c3                   ret 

struct S {
    char pad[0x68];
    void* field68;
};

void* __cdecl get(S* arg)
{
    if (arg != 0) {
        void* p = arg->field68;
        if (p != 0)
            return (char*)p - 0x170;
    }
    return 0;
}
