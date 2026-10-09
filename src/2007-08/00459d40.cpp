// from server: 31% by colin
// roc 2007-08 00459d40  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459d40
//
// 00459d40  6aff                 push -1
// 00459d42  68b8217400           push 0x7421b8
// 00459d47  64a100000000         mov eax, dword ptr fs:[0]
// 00459d4d  50                   push eax
// 00459d4e  51                   push ecx
// 00459d4f  56                   push esi
// 00459d50  a188518b00           mov eax, dword ptr [0x8b5188]
// 00459d55  33c4                 xor eax, esp
// 00459d57  50                   push eax
// 00459d58  8d44240c             lea eax, [esp + 0xc]
// 00459d5c  64a300000000         mov dword ptr fs:[0], eax
// 00459d62  8bf1                 mov esi, ecx
// 00459d64  89742408             mov dword ptr [esp + 8], esi
// 00459d68  8d4e08               lea ecx, [esi + 8]
// 00459d6b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00459d73  c70124367900         mov dword ptr [ecx], 0x793624
// 00459d79  e882f9ffff           call 0x459700
// 00459d7e  c706b4317900         mov dword ptr [esi], 0x7931b4
// 00459d84  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00459d88  64890d00000000       mov dword ptr fs:[0], ecx
// 00459d8f  59                   pop ecx
// 00459d90  5e                   pop esi
// 00459d91  83c410               add esp, 0x10
// 00459d94  c3                   ret 

struct VTableArgs {
    void* vtable;
    char pad[4];
    void* field8;
    void* fieldC;
};

struct TextureManagerVTableArgs {
    void* vtable;
    char pad[4];
    void* field8;
    void* fieldC;
    void init();
};

extern "C" void __cdecl sub_459700(void*);

void TextureManagerVTableArgs::init() {
    field8 = (void*)0x793624;
    sub_459700((char*)this + 8);
    vtable = (void*)0x7931b4;
}
