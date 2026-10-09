// from server: 45% by colin
// roc 2007-08 00459ce0  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459ce0
//
// 00459ce0  6aff                 push -1
// 00459ce2  68b8217400           push 0x7421b8
// 00459ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00459ced  50                   push eax
// 00459cee  51                   push ecx
// 00459cef  56                   push esi
// 00459cf0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00459cf5  33c4                 xor eax, esp
// 00459cf7  50                   push eax
// 00459cf8  8d44240c             lea eax, [esp + 0xc]
// 00459cfc  64a300000000         mov dword ptr fs:[0], eax
// 00459d02  8bf1                 mov esi, ecx
// 00459d04  89742408             mov dword ptr [esp + 8], esi
// 00459d08  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00459d0c  680000a000           push 0xa00000
// 00459d11  8d4e08               lea ecx, [esi + 8]
// 00459d14  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00459d1c  c7062c367900         mov dword ptr [esi], 0x79362c
// 00459d22  894604               mov dword ptr [esi + 4], eax
// 00459d25  e856100200           call 0x47ad80
// 00459d2a  8bc6                 mov eax, esi
// 00459d2c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00459d30  64890d00000000       mov dword ptr fs:[0], ecx
// 00459d37  59                   pop ecx
// 00459d38  5e                   pop esi
// 00459d39  83c410               add esp, 0x10
// 00459d3c  c20400               ret 4

struct S_func_00459ce0 {
    void* m_vtable;
    int m_arg;
    char pad8[4];
    void m_sub(int);
    S_func_00459ce0(int);
};

extern "C" void __stdcall sub_0047ad80(void*, int);

S_func_00459ce0::S_func_00459ce0(int arg)
{
    m_vtable = (void*)0x79362c;
    m_arg = arg;
    sub_0047ad80(&pad8[0], 0xa00000);
}
