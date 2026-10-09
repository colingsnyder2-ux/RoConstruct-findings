// from server: 100% by colin
// roc 2007-08 005eff80  unit: RBX::VMessage::?$FactoryProduct  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005eff80
//
// 005eff80  8b442404             mov eax, dword ptr [esp + 4]
// 005eff84  56                   push esi
// 005eff85  50                   push eax
// 005eff86  8bf1                 mov esi, ecx
// 005eff88  e8b3feffff           call 0x5efe40
// 005eff8d  c706c4ff7b00         mov dword ptr [esi], 0x7bffc4
// 005eff93  c74604bcff7b00       mov dword ptr [esi + 4], 0x7bffbc
// 005eff9a  c74610b4ff7b00       mov dword ptr [esi + 0x10], 0x7bffb4
// 005effa1  c74614a4ff7b00       mov dword ptr [esi + 0x14], 0x7bffa4
// 005effa8  c7462c94ff7b00       mov dword ptr [esi + 0x2c], 0x7bff94
// 005effaf  c7464484ff7b00       mov dword ptr [esi + 0x44], 0x7bff84
// 005effb6  c7465c74ff7b00       mov dword ptr [esi + 0x5c], 0x7bff74
// 005effbd  c7467464ff7b00       mov dword ptr [esi + 0x74], 0x7bff64
// 005effc4  c7868c00000054ff7b00 mov dword ptr [esi + 0x8c], 0x7bff54
// 005effce  8bc6                 mov eax, esi
// 005effd0  5e                   pop esi
// 005effd1  c20400               ret 4

struct RBX_VMessage_FactoryProduct {
    void* construct(int arg);
};

extern "C" void __stdcall sub_5EFE40(int arg);

void* RBX_VMessage_FactoryProduct::construct(int arg) {
    sub_5EFE40(arg);
    *(int*)((char*)this + 0x00) = 0x7bffc4;
    *(int*)((char*)this + 0x04) = 0x7bffbc;
    *(int*)((char*)this + 0x10) = 0x7bffb4;
    *(int*)((char*)this + 0x14) = 0x7bffa4;
    *(int*)((char*)this + 0x2c) = 0x7bff94;
    *(int*)((char*)this + 0x44) = 0x7bff84;
    *(int*)((char*)this + 0x5c) = 0x7bff74;
    *(int*)((char*)this + 0x74) = 0x7bff64;
    *(int*)((char*)this + 0x8c) = 0x7bff54;
    return this;
}
