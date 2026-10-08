// roc 2009-12 004d1880  unit: G3D::TextureManager::TextureArgs  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1880
//
// 004d1880  56                   push esi
// 004d1881  57                   push edi
// 004d1882  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d1886  8bf1                 mov esi, ecx
// 004d1888  8d4704               lea eax, [edi + 4]
// 004d188b  50                   push eax
// 004d188c  8d4e04               lea ecx, [esi + 4]
// 004d188f  ff159cb69800         call dword ptr [0x98b69c]
// 004d1895  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004d1898  894e20               mov dword ptr [esi + 0x20], ecx
// 004d189b  8b5724               mov edx, dword ptr [edi + 0x24]
// 004d189e  895624               mov dword ptr [esi + 0x24], edx
// 004d18a1  8b4728               mov eax, dword ptr [edi + 0x28]
// 004d18a4  894628               mov dword ptr [esi + 0x28], eax
// 004d18a7  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 004d18aa  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004d18ad  dd4730               fld qword ptr [edi + 0x30]
// 004d18b0  5f                   pop edi
// 004d18b1  dd5e30               fstp qword ptr [esi + 0x30]
// 004d18b4  8bc6                 mov eax, esi
// 004d18b6  5e                   pop esi
// 004d18b7  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??4TextureArgs@TextureManager@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
