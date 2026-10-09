// from server: 100% by colin
// roc 2007-08 005d00b0  unit: RBX::LocalBackpackItem  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d00b0
//
// 005d00b0  56                   push esi
// 005d00b1  8bf1                 mov esi, ecx
// 005d00b3  e898cefcff           call 0x59cf50
// 005d00b8  c706eca77b00         mov dword ptr [esi], 0x7ba7ec
// 005d00be  c74604e0a77b00       mov dword ptr [esi + 4], 0x7ba7e0
// 005d00c5  c74610d8a77b00       mov dword ptr [esi + 0x10], 0x7ba7d8
// 005d00cc  c74614c8a77b00       mov dword ptr [esi + 0x14], 0x7ba7c8
// 005d00d3  c7462cb8a77b00       mov dword ptr [esi + 0x2c], 0x7ba7b8
// 005d00da  c74644a8a77b00       mov dword ptr [esi + 0x44], 0x7ba7a8
// 005d00e1  c7465c98a77b00       mov dword ptr [esi + 0x5c], 0x7ba798
// 005d00e8  c7467488a77b00       mov dword ptr [esi + 0x74], 0x7ba788
// 005d00ef  c7868c00000078a77b00 mov dword ptr [esi + 0x8c], 0x7ba778
// 005d00f9  c786e800000070a77b00 mov dword ptr [esi + 0xe8], 0x7ba770
// 005d0103  8bc6                 mov eax, esi
// 005d0105  5e                   pop esi
// 005d0106  c3                   ret 

struct LocalBackpackItem {
    char pad0[0xec];
    void construct();
    LocalBackpackItem* init();
};

extern "C" void __stdcall sub_0059cf50();

LocalBackpackItem* LocalBackpackItem::init()
{
    construct();
    *(int*)((char*)this + 0x00) = 0x7ba7ec;
    *(int*)((char*)this + 0x04) = 0x7ba7e0;
    *(int*)((char*)this + 0x10) = 0x7ba7d8;
    *(int*)((char*)this + 0x14) = 0x7ba7c8;
    *(int*)((char*)this + 0x2c) = 0x7ba7b8;
    *(int*)((char*)this + 0x44) = 0x7ba7a8;
    *(int*)((char*)this + 0x5c) = 0x7ba798;
    *(int*)((char*)this + 0x74) = 0x7ba788;
    *(int*)((char*)this + 0x8c) = 0x7ba778;
    *(int*)((char*)this + 0xe8) = 0x7ba770;
    return this;
}
