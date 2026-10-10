// from server: 100% by tester
// roc 2007-03 0072f980  unit: seg_00720000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f980
//
// 0072f980  6aff                 push -1
// 0072f982  6808cc7600           push 0x76cc08
// 0072f987  64a100000000         mov eax, dword ptr fs:[0]
// 0072f98d  50                   push eax
// 0072f98e  51                   push ecx
// 0072f98f  56                   push esi
// 0072f990  57                   push edi
// 0072f991  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0072f996  33c4                 xor eax, esp
// 0072f998  50                   push eax
// 0072f999  8d442410             lea eax, [esp + 0x10]
// 0072f99d  64a300000000         mov dword ptr fs:[0], eax
// 0072f9a3  8bf1                 mov esi, ecx
// 0072f9a5  8974240c             mov dword ptr [esp + 0xc], esi
// 0072f9a9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0072f9ad  8d4704               lea eax, [edi + 4]
// 0072f9b0  50                   push eax
// 0072f9b1  8d4e04               lea ecx, [esi + 4]
// 0072f9b4  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0072f9bc  c70698e57900         mov dword ptr [esi], 0x79e598
// 0072f9c2  ff157ce77700         call dword ptr [0x77e77c]
// 0072f9c8  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0072f9cb  894e20               mov dword ptr [esi + 0x20], ecx
// 0072f9ce  8b5724               mov edx, dword ptr [edi + 0x24]
// 0072f9d1  895624               mov dword ptr [esi + 0x24], edx
// 0072f9d4  8b4728               mov eax, dword ptr [edi + 0x28]
// 0072f9d7  894628               mov dword ptr [esi + 0x28], eax
// 0072f9da  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0072f9dd  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0072f9e0  dd4730               fld qword ptr [edi + 0x30]
// 0072f9e3  dd5e30               fstp qword ptr [esi + 0x30]
// 0072f9e6  8bc6                 mov eax, esi
// 0072f9e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072f9ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0072f9f3  59                   pop ecx
// 0072f9f4  5f                   pop edi
// 0072f9f5  5e                   pop esi
// 0072f9f6  83c410               add esp, 0x10
// 0072f9f9  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
