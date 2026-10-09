// from server: 100% by colin
// roc 2007-08 0053dc00  unit: RBX::VScript::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053dc00
//
// 0053dc00  8b442404             mov eax, dword ptr [esp + 4]
// 0053dc04  56                   push esi
// 0053dc05  50                   push eax
// 0053dc06  8bf1                 mov esi, ecx
// 0053dc08  e8e3feffff           call 0x53daf0
// 0053dc0d  c706ac617a00         mov dword ptr [esi], 0x7a61ac
// 0053dc13  c74604a4617a00       mov dword ptr [esi + 4], 0x7a61a4
// 0053dc1a  c746109c617a00       mov dword ptr [esi + 0x10], 0x7a619c
// 0053dc21  c746148c617a00       mov dword ptr [esi + 0x14], 0x7a618c
// 0053dc28  c7462c7c617a00       mov dword ptr [esi + 0x2c], 0x7a617c
// 0053dc2f  c746446c617a00       mov dword ptr [esi + 0x44], 0x7a616c
// 0053dc36  c7465c5c617a00       mov dword ptr [esi + 0x5c], 0x7a615c
// 0053dc3d  c746744c617a00       mov dword ptr [esi + 0x74], 0x7a614c
// 0053dc44  c7868c0000003c617a00 mov dword ptr [esi + 0x8c], 0x7a613c
// 0053dc4e  8bc6                 mov eax, esi
// 0053dc50  5e                   pop esi
// 0053dc51  c20400               ret 4

struct FactoryProduct {
    char pad[0x90];
    FactoryProduct* construct(int arg);
};

extern "C" void __stdcall sub_53daf0(int arg);

FactoryProduct* FactoryProduct::construct(int arg) {
    sub_53daf0(arg);
    *(int*)((char*)this + 0x00) = 0x7a61ac;
    *(int*)((char*)this + 0x04) = 0x7a61a4;
    *(int*)((char*)this + 0x10) = 0x7a619c;
    *(int*)((char*)this + 0x14) = 0x7a618c;
    *(int*)((char*)this + 0x2c) = 0x7a617c;
    *(int*)((char*)this + 0x44) = 0x7a616c;
    *(int*)((char*)this + 0x5c) = 0x7a615c;
    *(int*)((char*)this + 0x74) = 0x7a614c;
    *(int*)((char*)this + 0x8c) = 0x7a613c;
    return this;
}
