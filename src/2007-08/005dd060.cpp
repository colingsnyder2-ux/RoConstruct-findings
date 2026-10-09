// from server: 87% by colin
// roc 2007-08 005dd060  unit: RBX::VVelocityMotor::?$RefPropDescriptor  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd060
//
// 005dd060  8b442404             mov eax, dword ptr [esp + 4]
// 005dd064  56                   push esi
// 005dd065  50                   push eax
// 005dd066  8bf1                 mov esi, ecx
// 005dd068  e813f4ffff           call 0x5dc480
// 005dd06d  c70604c87b00         mov dword ptr [esi], 0x7bc804
// 005dd073  c74604fcc77b00       mov dword ptr [esi + 4], 0x7bc7fc
// 005dd07a  c74610f4c77b00       mov dword ptr [esi + 0x10], 0x7bc7f4
// 005dd081  c74614e4c77b00       mov dword ptr [esi + 0x14], 0x7bc7e4
// 005dd088  c7462cd4c77b00       mov dword ptr [esi + 0x2c], 0x7bc7d4
// 005dd08f  c74644c4c77b00       mov dword ptr [esi + 0x44], 0x7bc7c4
// 005dd096  c7465cb4c77b00       mov dword ptr [esi + 0x5c], 0x7bc7b4
// 005dd09d  c74674a4c77b00       mov dword ptr [esi + 0x74], 0x7bc7a4
// 005dd0a4  c7868c00000094c77b00 mov dword ptr [esi + 0x8c], 0x7bc794
// 005dd0ae  c786e80000007cc77b00 mov dword ptr [esi + 0xe8], 0x7bc77c
// 005dd0b8  8bc6                 mov eax, esi
// 005dd0ba  5e                   pop esi
// 005dd0bb  c20400               ret 4

struct RefPropDescriptor {
    void* construct(const char* name);
};

void* RefPropDescriptor::construct(const char* name) {
    extern void __stdcall base_construct(void*, const char*);
    base_construct(this, name);
    *(int*)((char*)this + 0) = 0x7bc804;
    *(int*)((char*)this + 4) = 0x7bc7fc;
    *(int*)((char*)this + 0x10) = 0x7bc7f4;
    *(int*)((char*)this + 0x14) = 0x7bc7e4;
    *(int*)((char*)this + 0x2c) = 0x7bc7d4;
    *(int*)((char*)this + 0x44) = 0x7bc7c4;
    *(int*)((char*)this + 0x5c) = 0x7bc7b4;
    *(int*)((char*)this + 0x74) = 0x7bc7a4;
    *(int*)((char*)this + 0x8c) = 0x7bc794;
    *(int*)((char*)this + 0xe8) = 0x7bc77c;

    return this;
}
