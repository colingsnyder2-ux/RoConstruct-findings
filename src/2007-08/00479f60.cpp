// from server: 36% by colin
// roc 2007-08 00479f60  unit: G3D::TextureManager::TextureArgs  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479f60
//
// 00479f60  6aff                 push -1
// 00479f62  68181e7400           push 0x741e18
// 00479f67  64a100000000         mov eax, dword ptr fs:[0]
// 00479f6d  50                   push eax
// 00479f6e  51                   push ecx
// 00479f6f  56                   push esi
// 00479f70  a188518b00           mov eax, dword ptr [0x8b5188]
// 00479f75  33c4                 xor eax, esp
// 00479f77  50                   push eax
// 00479f78  8d44240c             lea eax, [esp + 0xc]
// 00479f7c  64a300000000         mov dword ptr fs:[0], eax
// 00479f82  8bf1                 mov esi, ecx
// 00479f84  89742408             mov dword ptr [esp + 8], esi
// 00479f88  8d4e04               lea ecx, [esi + 4]
// 00479f8b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00479f93  c706a4317900         mov dword ptr [esi], 0x7931a4
// 00479f99  ff15a4e67700         call dword ptr [0x77e6a4]
// 00479f9f  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00479fa6  8bc6                 mov eax, esi
// 00479fa8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00479fac  64890d00000000       mov dword ptr fs:[0], ecx
// 00479fb3  59                   pop ecx
// 00479fb4  5e                   pop esi
// 00479fb5  83c410               add esp, 0x10
// 00479fb8  c3                   ret 

struct TextureArgs
{
    void* vtable;
    char pad[0x1c];
    int field20;
    TextureArgs();
};

extern "C" void __stdcall sub_77e6a4();
extern void* sub_7931a4;

TextureArgs::TextureArgs()
{
    vtable = &sub_7931a4;
    sub_77e6a4();
    field20 = 0;
}
