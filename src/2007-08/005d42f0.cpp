// from server: 100% by colin
// roc 2007-08 005d42f0  unit: RBX::Mouse  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d42f0
//
// 005d42f0  56                   push esi
// 005d42f1  8bf1                 mov esi, ecx
// 005d42f3  e848a9fcff           call 0x59ec40
// 005d42f8  c70674b07b00         mov dword ptr [esi], 0x7bb074
// 005d42fe  c746046cb07b00       mov dword ptr [esi + 4], 0x7bb06c
// 005d4305  c7461064b07b00       mov dword ptr [esi + 0x10], 0x7bb064
// 005d430c  c7461454b07b00       mov dword ptr [esi + 0x14], 0x7bb054
// 005d4313  c7462c44b07b00       mov dword ptr [esi + 0x2c], 0x7bb044
// 005d431a  c7464434b07b00       mov dword ptr [esi + 0x44], 0x7bb034
// 005d4321  c7465c24b07b00       mov dword ptr [esi + 0x5c], 0x7bb024
// 005d4328  c7467414b07b00       mov dword ptr [esi + 0x74], 0x7bb014
// 005d432f  c7868c00000004b07b00 mov dword ptr [esi + 0x8c], 0x7bb004
// 005d4339  c786e8000000fcaf7b00 mov dword ptr [esi + 0xe8], 0x7baffc
// 005d4343  8bc6                 mov eax, esi
// 005d4345  5e                   pop esi
// 005d4346  c3                   ret 

struct Mouse {
    char pad[0xec];
    Mouse();
};

extern "C" void __fastcall sub_59EC40(Mouse* self);

Mouse::Mouse()
{
    sub_59EC40(this);
    *(int*)((char*)this + 0x00) = 0x7bb074;
    *(int*)((char*)this + 0x04) = 0x7bb06c;
    *(int*)((char*)this + 0x10) = 0x7bb064;
    *(int*)((char*)this + 0x14) = 0x7bb054;
    *(int*)((char*)this + 0x2c) = 0x7bb044;
    *(int*)((char*)this + 0x44) = 0x7bb034;
    *(int*)((char*)this + 0x5c) = 0x7bb024;
    *(int*)((char*)this + 0x74) = 0x7bb014;
    *(int*)((char*)this + 0x8c) = 0x7bb004;
    *(int*)((char*)this + 0xe8) = 0x7baffc;
}
