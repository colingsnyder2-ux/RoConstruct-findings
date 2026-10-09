// from server: 26% by colin
// roc 2007-08 005e5c10  unit: RBX::NullTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5c10
//
// 005e5c10  6aff                 push -1
// 005e5c12  6888ad7500           push 0x75ad88
// 005e5c17  64a100000000         mov eax, dword ptr fs:[0]
// 005e5c1d  50                   push eax
// 005e5c1e  64892500000000       mov dword ptr fs:[0], esp
// 005e5c25  51                   push ecx
// 005e5c26  56                   push esi
// 005e5c27  8bf1                 mov esi, ecx
// 005e5c29  89742404             mov dword ptr [esp + 4], esi
// 005e5c2d  c7068cd27b00         mov dword ptr [esi], 0x7bd28c
// 005e5c33  c7460474d27b00       mov dword ptr [esi + 4], 0x7bd274
// 005e5c3a  8d4e20               lea ecx, [esi + 0x20]
// 005e5c3d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e5c45  ff15ace67700         call dword ptr [0x77e6ac]
// 005e5c4b  8bce                 mov ecx, esi
// 005e5c4d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005e5c55  e8f6e0ffff           call 0x5e3d50
// 005e5c5a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e5c5e  5e                   pop esi
// 005e5c5f  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5c66  83c410               add esp, 0x10
// 005e5c69  c3                   ret 

struct NullTool {
    char pad0[0x20];
    void* field20;
    void destructor();
};

extern "C" void __stdcall sub_77e6ac(void*);
extern "C" void __cdecl sub_5e3d50(void*);

void NullTool::destructor()
{
    *(void**)this = (void*)0x7bd28c;
    *(void**)((char*)this + 4) = (void*)0x7bd274;
    sub_77e6ac((char*)this + 0x20);
    sub_5e3d50(this);
}
