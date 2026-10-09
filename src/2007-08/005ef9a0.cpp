// from server: 100% by colin
// roc 2007-08 005ef9a0  unit: RBX::BodyMover  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef9a0
//
// 005ef9a0  8b442404             mov eax, dword ptr [esp + 4]
// 005ef9a4  56                   push esi
// 005ef9a5  50                   push eax
// 005ef9a6  8bf1                 mov esi, ecx
// 005ef9a8  e8032df5ff           call 0x5426b0
// 005ef9ad  c7065cf87a00         mov dword ptr [esi], 0x7af85c
// 005ef9b3  c7460454f87a00       mov dword ptr [esi + 4], 0x7af854
// 005ef9ba  c746104cf87a00       mov dword ptr [esi + 0x10], 0x7af84c
// 005ef9c1  c746143cf87a00       mov dword ptr [esi + 0x14], 0x7af83c
// 005ef9c8  c7462c2cf87a00       mov dword ptr [esi + 0x2c], 0x7af82c
// 005ef9cf  c746441cf87a00       mov dword ptr [esi + 0x44], 0x7af81c
// 005ef9d6  c7465c0cf87a00       mov dword ptr [esi + 0x5c], 0x7af80c
// 005ef9dd  c74674fcf77a00       mov dword ptr [esi + 0x74], 0x7af7fc
// 005ef9e4  c7868c000000ecf77a00 mov dword ptr [esi + 0x8c], 0x7af7ec
// 005ef9ee  8bc6                 mov eax, esi
// 005ef9f0  5e                   pop esi
// 005ef9f1  c20400               ret 4

struct BodyMover {
    BodyMover* construct(int);
};

extern "C" void __stdcall sub_5426B0(int);

BodyMover* BodyMover::construct(int a) {
    sub_5426B0(a);
    *(int*)((char*)this + 0x00) = 0x7af85c;
    *(int*)((char*)this + 0x04) = 0x7af854;
    *(int*)((char*)this + 0x10) = 0x7af84c;
    *(int*)((char*)this + 0x14) = 0x7af83c;
    *(int*)((char*)this + 0x2c) = 0x7af82c;
    *(int*)((char*)this + 0x44) = 0x7af81c;
    *(int*)((char*)this + 0x5c) = 0x7af80c;
    *(int*)((char*)this + 0x74) = 0x7af7fc;
    *(int*)((char*)this + 0x8c) = 0x7af7ec;
    return this;
}
