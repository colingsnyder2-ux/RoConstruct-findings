// from server: 33% by colin
// roc 2007-08 00556890  unit: RBX::TextDisplay  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00556890
//
// 00556890  6aff                 push -1
// 00556892  68c8307500           push 0x7530c8
// 00556897  64a100000000         mov eax, dword ptr fs:[0]
// 0055689d  50                   push eax
// 0055689e  64892500000000       mov dword ptr fs:[0], esp
// 005568a5  51                   push ecx
// 005568a6  56                   push esi
// 005568a7  8bf1                 mov esi, ecx
// 005568a9  89742404             mov dword ptr [esp + 4], esi
// 005568ad  8d8efc000000         lea ecx, [esi + 0xfc]
// 005568b3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005568bb  ff15ace67700         call dword ptr [0x77e6ac]
// 005568c1  8bce                 mov ecx, esi
// 005568c3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005568cb  e89066ebff           call 0x40cf60
// 005568d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005568d4  5e                   pop esi
// 005568d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005568dc  83c410               add esp, 0x10
// 005568df  c3                   ret 

struct TextDisplay {
    char pad[0xfc];
    void* field_fc;
    void init();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_40CF60(void*);

void TextDisplay::init() {
    sub_77E6AC(&field_fc);
    sub_40CF60(this);
}
