// from server: 100% by auto
// roc 2008-06 0047d7a0  unit: G3D::TextureManager::TextureArgs  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047d7a0
//
// 0047d7a0  56                   push esi
// 0047d7a1  57                   push edi
// 0047d7a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047d7a6  8bf1                 mov esi, ecx
// 0047d7a8  8d4704               lea eax, [edi + 4]
// 0047d7ab  50                   push eax
// 0047d7ac  8d4e04               lea ecx, [esi + 4]
// 0047d7af  ff150c248000         call dword ptr [0x80240c]
// 0047d7b5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0047d7b8  894e20               mov dword ptr [esi + 0x20], ecx
// 0047d7bb  8b5724               mov edx, dword ptr [edi + 0x24]
// 0047d7be  895624               mov dword ptr [esi + 0x24], edx
// 0047d7c1  8b4728               mov eax, dword ptr [edi + 0x28]
// 0047d7c4  894628               mov dword ptr [esi + 0x28], eax
// 0047d7c7  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0047d7ca  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047d7cd  dd4730               fld qword ptr [edi + 0x30]
// 0047d7d0  5f                   pop edi
// 0047d7d1  dd5e30               fstp qword ptr [esi + 0x30]
// 0047d7d4  8bc6                 mov eax, esi
// 0047d7d6  5e                   pop esi
// 0047d7d7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??4TextureArgs@TextureManager@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
