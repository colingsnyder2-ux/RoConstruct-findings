// from server: 39% by colin
// roc 2007-08 00479fc0  unit: G3D::TextureManager::TextureArgs  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479fc0
//
// 00479fc0  6aff                 push -1
// 00479fc2  68181e7400           push 0x741e18
// 00479fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00479fcd  50                   push eax
// 00479fce  51                   push ecx
// 00479fcf  56                   push esi
// 00479fd0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00479fd5  33c4                 xor eax, esp
// 00479fd7  50                   push eax
// 00479fd8  8d44240c             lea eax, [esp + 0xc]
// 00479fdc  64a300000000         mov dword ptr fs:[0], eax
// 00479fe2  8bf1                 mov esi, ecx
// 00479fe4  89742408             mov dword ptr [esp + 8], esi
// 00479fe8  8d4e04               lea ecx, [esi + 4]
// 00479feb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00479ff3  c706a4317900         mov dword ptr [esi], 0x7931a4
// 00479ff9  ff15a4e67700         call dword ptr [0x77e6a4]
// 00479fff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047a003  894620               mov dword ptr [esi + 0x20], eax
// 0047a006  8bc6                 mov eax, esi
// 0047a008  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047a00c  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a013  59                   pop ecx
// 0047a014  5e                   pop esi
// 0047a015  83c410               add esp, 0x10
// 0047a018  c20400               ret 4

struct TextureArgs
{
    void* vtable;
    char pad[0x1c];
    int field_20;
    TextureArgs(int);
};

extern "C" void __stdcall sub_77E6A4(void*);

void* g_7931A4 = 0;

TextureArgs::TextureArgs(int arg)
{
    vtable = &g_7931A4;
    sub_77E6A4(&pad[0]);
    field_20 = arg;
}
