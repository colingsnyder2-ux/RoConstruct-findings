// from server: 100% by colin
// roc 2007-08 0059f4b0  unit: RBX::Backpack  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059f4b0
//
// 0059f4b0  56                   push esi
// 0059f4b1  8bf1                 mov esi, ecx
// 0059f4b3  e8a8feffff           call 0x59f360
// 0059f4b8  c7066c2f7b00         mov dword ptr [esi], 0x7b2f6c
// 0059f4be  c74604602f7b00       mov dword ptr [esi + 4], 0x7b2f60
// 0059f4c5  c74610582f7b00       mov dword ptr [esi + 0x10], 0x7b2f58
// 0059f4cc  c74614482f7b00       mov dword ptr [esi + 0x14], 0x7b2f48
// 0059f4d3  c7462c382f7b00       mov dword ptr [esi + 0x2c], 0x7b2f38
// 0059f4da  c74644282f7b00       mov dword ptr [esi + 0x44], 0x7b2f28
// 0059f4e1  c7465c182f7b00       mov dword ptr [esi + 0x5c], 0x7b2f18
// 0059f4e8  c74674082f7b00       mov dword ptr [esi + 0x74], 0x7b2f08
// 0059f4ef  c7868c000000f82e7b00 mov dword ptr [esi + 0x8c], 0x7b2ef8
// 0059f4f9  c786e8000000f02e7b00 mov dword ptr [esi + 0xe8], 0x7b2ef0
// 0059f503  8bc6                 mov eax, esi
// 0059f505  5e                   pop esi
// 0059f506  c3                   ret 

struct Backpack {
    Backpack* init();
};

extern void __fastcall base_construct(void*);

Backpack* Backpack::init()
{
    base_construct(this);
    *(int*)((char*)this + 0x00) = 0x7b2f6c;
    *(int*)((char*)this + 0x04) = 0x7b2f60;
    *(int*)((char*)this + 0x10) = 0x7b2f58;
    *(int*)((char*)this + 0x14) = 0x7b2f48;
    *(int*)((char*)this + 0x2c) = 0x7b2f38;
    *(int*)((char*)this + 0x44) = 0x7b2f28;
    *(int*)((char*)this + 0x5c) = 0x7b2f18;
    *(int*)((char*)this + 0x74) = 0x7b2f08;
    *(int*)((char*)this + 0x8c) = 0x7b2ef8;
    *(int*)((char*)this + 0xe8) = 0x7b2ef0;
    return this;
}
