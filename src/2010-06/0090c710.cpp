// roc 2010-06 0090c710  unit: G3D::TextureManager::TextureArgs  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090c710
//
// 0090c710  56                   push esi
// 0090c711  57                   push edi
// 0090c712  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0090c716  8bf1                 mov esi, ecx
// 0090c718  8d4704               lea eax, [edi + 4]
// 0090c71b  50                   push eax
// 0090c71c  8d4e04               lea ecx, [esi + 4]
// 0090c71f  ff1568a49e00         call dword ptr [0x9ea468]
// 0090c725  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0090c728  894e20               mov dword ptr [esi + 0x20], ecx
// 0090c72b  8b5724               mov edx, dword ptr [edi + 0x24]
// 0090c72e  895624               mov dword ptr [esi + 0x24], edx
// 0090c731  8b4728               mov eax, dword ptr [edi + 0x28]
// 0090c734  894628               mov dword ptr [esi + 0x28], eax
// 0090c737  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0090c73a  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0090c73d  dd4730               fld qword ptr [edi + 0x30]
// 0090c740  5f                   pop edi
// 0090c741  dd5e30               fstp qword ptr [esi + 0x30]
// 0090c744  8bc6                 mov eax, esi
// 0090c746  5e                   pop esi
// 0090c747  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??4TextureArgs@TextureManager@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
