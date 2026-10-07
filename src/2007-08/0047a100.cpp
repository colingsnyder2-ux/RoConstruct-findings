// roc 2007-08 0047a100  unit: G3D::TextureManager::TextureArgs  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047a100
//
// 0047a100  56                   push esi
// 0047a101  57                   push edi
// 0047a102  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047a106  8bf1                 mov esi, ecx
// 0047a108  8d4704               lea eax, [edi + 4]
// 0047a10b  50                   push eax
// 0047a10c  8d4e04               lea ecx, [esi + 4]
// 0047a10f  ff1590e67700         call dword ptr [0x77e690]
// 0047a115  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0047a118  894e20               mov dword ptr [esi + 0x20], ecx
// 0047a11b  8b5724               mov edx, dword ptr [edi + 0x24]
// 0047a11e  895624               mov dword ptr [esi + 0x24], edx
// 0047a121  8b4728               mov eax, dword ptr [edi + 0x28]
// 0047a124  894628               mov dword ptr [esi + 0x28], eax
// 0047a127  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0047a12a  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0047a12d  dd4730               fld qword ptr [edi + 0x30]
// 0047a130  5f                   pop edi
// 0047a131  dd5e30               fstp qword ptr [esi + 0x30]
// 0047a134  8bc6                 mov eax, esi
// 0047a136  5e                   pop esi
// 0047a137  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??4TextureArgs@TextureManager@G3D@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
