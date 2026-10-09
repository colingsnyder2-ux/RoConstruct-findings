// from server: 100% by colin
// roc 2007-08 0059d1b0  unit: ChatEnter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d1b0
//
// 0059d1b0  56                   push esi
// 0059d1b1  8bf1                 mov esi, ecx
// 0059d1b3  e818ffffff           call 0x59d0d0
// 0059d1b8  c706541b7b00         mov dword ptr [esi], 0x7b1b54
// 0059d1be  c74604481b7b00       mov dword ptr [esi + 4], 0x7b1b48
// 0059d1c5  c74610401b7b00       mov dword ptr [esi + 0x10], 0x7b1b40
// 0059d1cc  c74614301b7b00       mov dword ptr [esi + 0x14], 0x7b1b30
// 0059d1d3  c7462c201b7b00       mov dword ptr [esi + 0x2c], 0x7b1b20
// 0059d1da  c74644101b7b00       mov dword ptr [esi + 0x44], 0x7b1b10
// 0059d1e1  c7465c001b7b00       mov dword ptr [esi + 0x5c], 0x7b1b00
// 0059d1e8  c74674f01a7b00       mov dword ptr [esi + 0x74], 0x7b1af0
// 0059d1ef  c7868c000000e01a7b00 mov dword ptr [esi + 0x8c], 0x7b1ae0
// 0059d1f9  c786e8000000d81a7b00 mov dword ptr [esi + 0xe8], 0x7b1ad8
// 0059d203  8bc6                 mov eax, esi
// 0059d205  5e                   pop esi
// 0059d206  c3                   ret 

struct ChatEnter {
    char pad[0x100];
    void sub_59D0D0();
    ChatEnter* construct();
};

ChatEnter* ChatEnter::construct() {
    sub_59D0D0();
    *(int*)((char*)this + 0x00) = 0x7b1b54;
    *(int*)((char*)this + 0x04) = 0x7b1b48;
    *(int*)((char*)this + 0x10) = 0x7b1b40;
    *(int*)((char*)this + 0x14) = 0x7b1b30;
    *(int*)((char*)this + 0x2c) = 0x7b1b20;
    *(int*)((char*)this + 0x44) = 0x7b1b10;
    *(int*)((char*)this + 0x5c) = 0x7b1b00;
    *(int*)((char*)this + 0x74) = 0x7b1af0;
    *(int*)((char*)this + 0x8c) = 0x7b1ae0;
    *(int*)((char*)this + 0xe8) = 0x7b1ad8;
    return this;
}
