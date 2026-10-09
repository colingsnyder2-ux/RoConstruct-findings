// from server: 100% by colin
// roc 2007-08 0059d0d0  unit: ChatEnter  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d0d0
//
// 0059d0d0  56                   push esi
// 0059d0d1  8bf1                 mov esi, ecx
// 0059d0d3  e878feffff           call 0x59cf50
// 0059d0d8  c706641e7b00         mov dword ptr [esi], 0x7b1e64
// 0059d0de  c74604581e7b00       mov dword ptr [esi + 4], 0x7b1e58
// 0059d0e5  c74610501e7b00       mov dword ptr [esi + 0x10], 0x7b1e50
// 0059d0ec  c74614401e7b00       mov dword ptr [esi + 0x14], 0x7b1e40
// 0059d0f3  c7462c301e7b00       mov dword ptr [esi + 0x2c], 0x7b1e30
// 0059d0fa  c74644201e7b00       mov dword ptr [esi + 0x44], 0x7b1e20
// 0059d101  c7465c101e7b00       mov dword ptr [esi + 0x5c], 0x7b1e10
// 0059d108  c74674001e7b00       mov dword ptr [esi + 0x74], 0x7b1e00
// 0059d10f  c7868c000000f01d7b00 mov dword ptr [esi + 0x8c], 0x7b1df0
// 0059d119  c786e8000000e81d7b00 mov dword ptr [esi + 0xe8], 0x7b1de8
// 0059d123  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 0059d12d  8bc6                 mov eax, esi
// 0059d12f  5e                   pop esi
// 0059d130  c3                   ret 

struct ChatEnter {
    ChatEnter* construct();
};

extern char G1_007b1e64;
extern char G2_007b1e58;
extern char G3_007b1e50;
extern char G4_007b1e40;
extern char G5_007b1e30;
extern char G6_007b1e20;
extern char G7_007b1e10;
extern char G8_007b1e00;
extern char G9_007b1df0;
extern char G10_007b1de8;

void func_0059cf50();

ChatEnter* ChatEnter::construct()
{
    func_0059cf50();
    *(void**)((char*)this + 0) = &G1_007b1e64;
    *(void**)((char*)this + 4) = &G2_007b1e58;
    *(void**)((char*)this + 0x10) = &G3_007b1e50;
    *(void**)((char*)this + 0x14) = &G4_007b1e40;
    *(void**)((char*)this + 0x2c) = &G5_007b1e30;
    *(void**)((char*)this + 0x44) = &G6_007b1e20;
    *(void**)((char*)this + 0x5c) = &G7_007b1e10;
    *(void**)((char*)this + 0x74) = &G8_007b1e00;
    *(void**)((char*)this + 0x8c) = &G9_007b1df0;
    *(void**)((char*)this + 0xe8) = &G10_007b1de8;
    *(int*)((char*)this + 0x118) = 1;
    return this;
}
