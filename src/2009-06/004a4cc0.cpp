// from server: 100% by auto
// roc 2009-06 004a4cc0  unit: G3D::TextureManager::TextureArgs  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4cc0
//
// 004a4cc0  56                   push esi
// 004a4cc1  57                   push edi
// 004a4cc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a4cc6  8bf1                 mov esi, ecx
// 004a4cc8  8d4704               lea eax, [edi + 4]
// 004a4ccb  50                   push eax
// 004a4ccc  8d4e04               lea ecx, [esi + 4]
// 004a4ccf  ff1564e48900         call dword ptr [0x89e464]
// 004a4cd5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004a4cd8  894e20               mov dword ptr [esi + 0x20], ecx
// 004a4cdb  8b5724               mov edx, dword ptr [edi + 0x24]
// 004a4cde  895624               mov dword ptr [esi + 0x24], edx
// 004a4ce1  8b4728               mov eax, dword ptr [edi + 0x28]
// 004a4ce4  894628               mov dword ptr [esi + 0x28], eax
// 004a4ce7  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 004a4cea  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004a4ced  dd4730               fld qword ptr [edi + 0x30]
// 004a4cf0  5f                   pop edi
// 004a4cf1  dd5e30               fstp qword ptr [esi + 0x30]
// 004a4cf4  8bc6                 mov eax, esi
// 004a4cf6  5e                   pop esi
// 004a4cf7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??4TextureArgs@TextureManager@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
