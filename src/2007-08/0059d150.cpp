// from server: 100% by colin
// roc 2007-08 0059d150  unit: ChatEnter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d150
//
// 0059d150  56                   push esi
// 0059d151  8bf1                 mov esi, ecx
// 0059d153  e878ffffff           call 0x59d0d0
// 0059d158  c7066c1a7b00         mov dword ptr [esi], 0x7b1a6c
// 0059d15e  c74604641a7b00       mov dword ptr [esi + 4], 0x7b1a64
// 0059d165  c746105c1a7b00       mov dword ptr [esi + 0x10], 0x7b1a5c
// 0059d16c  c746144c1a7b00       mov dword ptr [esi + 0x14], 0x7b1a4c
// 0059d173  c7462c3c1a7b00       mov dword ptr [esi + 0x2c], 0x7b1a3c
// 0059d17a  c746442c1a7b00       mov dword ptr [esi + 0x44], 0x7b1a2c
// 0059d181  c7465c1c1a7b00       mov dword ptr [esi + 0x5c], 0x7b1a1c
// 0059d188  c746740c1a7b00       mov dword ptr [esi + 0x74], 0x7b1a0c
// 0059d18f  c7868c000000fc197b00 mov dword ptr [esi + 0x8c], 0x7b19fc
// 0059d199  c786e8000000f4197b00 mov dword ptr [esi + 0xe8], 0x7b19f4
// 0059d1a3  8bc6                 mov eax, esi
// 0059d1a5  5e                   pop esi
// 0059d1a6  c3                   ret 

struct ChatEnter {
    char pad[0x100];
    void sub_0059d0d0();
    ChatEnter* construct();
};

ChatEnter* ChatEnter::construct()
{
    sub_0059d0d0();
    *(int*)((char*)this + 0x00) = 0x7b1a6c;
    *(int*)((char*)this + 0x04) = 0x7b1a64;
    *(int*)((char*)this + 0x10) = 0x7b1a5c;
    *(int*)((char*)this + 0x14) = 0x7b1a4c;
    *(int*)((char*)this + 0x2c) = 0x7b1a3c;
    *(int*)((char*)this + 0x44) = 0x7b1a2c;
    *(int*)((char*)this + 0x5c) = 0x7b1a1c;
    *(int*)((char*)this + 0x74) = 0x7b1a0c;
    *(int*)((char*)this + 0x8c) = 0x7b19fc;
    *(int*)((char*)this + 0xe8) = 0x7b19f4;
    return this;
}
