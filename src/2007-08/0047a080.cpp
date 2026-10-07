// roc 2007-08 0047a080  unit: G3D::TextureManager::TextureArgs  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a080
//
// 0047a080  6aff                 push -1
// 0047a082  6878547400           push 0x745478
// 0047a087  64a100000000         mov eax, dword ptr fs:[0]
// 0047a08d  50                   push eax
// 0047a08e  51                   push ecx
// 0047a08f  56                   push esi
// 0047a090  57                   push edi
// 0047a091  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047a096  33c4                 xor eax, esp
// 0047a098  50                   push eax
// 0047a099  8d442410             lea eax, [esp + 0x10]
// 0047a09d  64a300000000         mov dword ptr fs:[0], eax
// 0047a0a3  8bf1                 mov esi, ecx
// 0047a0a5  8974240c             mov dword ptr [esp + 0xc], esi
// 0047a0a9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0047a0ad  8d4704               lea eax, [edi + 4]
// 0047a0b0  50                   push eax
// 0047a0b1  8d4e04               lea ecx, [esi + 4]
// 0047a0b4  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0047a0bc  c706a4317900         mov dword ptr [esi], 0x7931a4
// 0047a0c2  ff159ce67700         call dword ptr [0x77e69c]
// 0047a0c8  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0047a0cb  894e20               mov dword ptr [esi + 0x20], ecx
// 0047a0ce  8b5724               mov edx, dword ptr [edi + 0x24]
// 0047a0d1  895624               mov dword ptr [esi + 0x24], edx
// 0047a0d4  8b4728               mov eax, dword ptr [edi + 0x28]
// 0047a0d7  894628               mov dword ptr [esi + 0x28], eax
// 0047a0da  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0047a0dd  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047a0e0  dd4730               fld qword ptr [edi + 0x30]
// 0047a0e3  dd5e30               fstp qword ptr [esi + 0x30]
// 0047a0e6  8bc6                 mov eax, esi
// 0047a0e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047a0ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0047a0f3  59                   pop ecx
// 0047a0f4  5f                   pop edi
// 0047a0f5  5e                   pop esi
// 0047a0f6  83c410               add esp, 0x10
// 0047a0f9  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
