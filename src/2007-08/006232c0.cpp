// from server: 56% by colin
// roc 2007-08 006232c0  unit: RBX::ArrowPanel  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006232c0
//
// 006232c0  83ec10               sub esp, 0x10
// 006232c3  56                   push esi
// 006232c4  8bf1                 mov esi, ecx
// 006232c6  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 006232cc  8b8988010000         mov ecx, dword ptr [ecx + 0x188]
// 006232d2  8d442404             lea eax, [esp + 4]
// 006232d6  50                   push eax
// 006232d7  81c140020000         add ecx, 0x240
// 006232dd  e85efeffff           call 0x623140
// 006232e2  8b442408             mov eax, dword ptr [esp + 8]
// 006232e6  8b542404             mov edx, dword ptr [esp + 4]
// 006232ea  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 006232f0  8954240c             mov dword ptr [esp + 0xc], edx
// 006232f4  89442410             mov dword ptr [esp + 0x10], eax
// 006232f8  8a440c0c             mov al, byte ptr [esp + ecx + 0xc]
// 006232fc  5e                   pop esi
// 006232fd  83c410               add esp, 0x10
// 00623300  c3                   ret 

struct ArrowPanel {
    char pad[0x114];
    void* field114;
    int field118;
    unsigned char getSomething();
};

extern "C" void __cdecl sub_623140(void* dst, void* src);

unsigned char ArrowPanel::getSomething()
{
    char buf[8];
    void* p = (void*)((char*)field114 + 0x188);
    sub_623140((char*)p + 0x240, buf);
    int idx = field118;
    return ((unsigned char*)buf)[idx];
}
