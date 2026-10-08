// from server: 100% by auto
// roc 2008-06 0047d730  unit: G3D::TextureManager::TextureArgs  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d730
//
// 0047d730  6aff                 push -1
// 0047d732  68482a7c00           push 0x7c2a48
// 0047d737  64a100000000         mov eax, dword ptr fs:[0]
// 0047d73d  50                   push eax
// 0047d73e  64892500000000       mov dword ptr fs:[0], esp
// 0047d745  51                   push ecx
// 0047d746  56                   push esi
// 0047d747  8bf1                 mov esi, ecx
// 0047d749  57                   push edi
// 0047d74a  89742408             mov dword ptr [esp + 8], esi
// 0047d74e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047d752  8d4704               lea eax, [edi + 4]
// 0047d755  50                   push eax
// 0047d756  8d4e04               lea ecx, [esi + 4]
// 0047d759  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0047d761  c70670978100         mov dword ptr [esi], 0x819770
// 0047d767  ff155c248000         call dword ptr [0x80245c]
// 0047d76d  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0047d770  894e20               mov dword ptr [esi + 0x20], ecx
// 0047d773  8b5724               mov edx, dword ptr [edi + 0x24]
// 0047d776  895624               mov dword ptr [esi + 0x24], edx
// 0047d779  8b4728               mov eax, dword ptr [edi + 0x28]
// 0047d77c  894628               mov dword ptr [esi + 0x28], eax
// 0047d77f  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0047d782  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047d785  dd4730               fld qword ptr [edi + 0x30]
// 0047d788  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047d78c  dd5e30               fstp qword ptr [esi + 0x30]
// 0047d78f  5f                   pop edi
// 0047d790  8bc6                 mov eax, esi
// 0047d792  5e                   pop esi
// 0047d793  64890d00000000       mov dword ptr fs:[0], ecx
// 0047d79a  83c410               add esp, 0x10
// 0047d79d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
