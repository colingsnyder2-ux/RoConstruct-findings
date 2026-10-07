// roc 2010-06 0090c6a0  unit: G3D::TextureManager::TextureArgs  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c6a0
//
// 0090c6a0  6aff                 push -1
// 0090c6a2  6888e39800           push 0x98e388
// 0090c6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0090c6ad  50                   push eax
// 0090c6ae  64892500000000       mov dword ptr fs:[0], esp
// 0090c6b5  51                   push ecx
// 0090c6b6  56                   push esi
// 0090c6b7  8bf1                 mov esi, ecx
// 0090c6b9  57                   push edi
// 0090c6ba  89742408             mov dword ptr [esp + 8], esi
// 0090c6be  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0090c6c2  8d4704               lea eax, [edi + 4]
// 0090c6c5  50                   push eax
// 0090c6c6  8d4e04               lea ecx, [esi + 4]
// 0090c6c9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0090c6d1  c70644e8a100         mov dword ptr [esi], 0xa1e844
// 0090c6d7  ff150ca49e00         call dword ptr [0x9ea40c]
// 0090c6dd  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0090c6e0  894e20               mov dword ptr [esi + 0x20], ecx
// 0090c6e3  8b5724               mov edx, dword ptr [edi + 0x24]
// 0090c6e6  895624               mov dword ptr [esi + 0x24], edx
// 0090c6e9  8b4728               mov eax, dword ptr [edi + 0x28]
// 0090c6ec  894628               mov dword ptr [esi + 0x28], eax
// 0090c6ef  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0090c6f2  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0090c6f5  dd4730               fld qword ptr [edi + 0x30]
// 0090c6f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0090c6fc  dd5e30               fstp qword ptr [esi + 0x30]
// 0090c6ff  5f                   pop edi
// 0090c700  8bc6                 mov eax, esi
// 0090c702  5e                   pop esi
// 0090c703  64890d00000000       mov dword ptr fs:[0], ecx
// 0090c70a  83c410               add esp, 0x10
// 0090c70d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
