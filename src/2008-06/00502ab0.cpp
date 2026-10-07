// roc 2008-06 00502ab0  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502ab0
//
// 00502ab0  56                   push esi
// 00502ab1  57                   push edi
// 00502ab2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00502ab6  8b07                 mov eax, dword ptr [edi]
// 00502ab8  50                   push eax
// 00502ab9  8bf1                 mov esi, ecx
// 00502abb  e8e0640900           call 0x598fa0
// 00502ac0  8b4f04               mov ecx, dword ptr [edi + 4]
// 00502ac3  894e04               mov dword ptr [esi + 4], ecx
// 00502ac6  8b5708               mov edx, dword ptr [edi + 8]
// 00502ac9  895608               mov dword ptr [esi + 8], edx
// 00502acc  8b470c               mov eax, dword ptr [edi + 0xc]
// 00502acf  89460c               mov dword ptr [esi + 0xc], eax
// 00502ad2  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00502ad5  894e10               mov dword ptr [esi + 0x10], ecx
// 00502ad8  8b5714               mov edx, dword ptr [edi + 0x14]
// 00502adb  895614               mov dword ptr [esi + 0x14], edx
// 00502ade  8b4718               mov eax, dword ptr [edi + 0x18]
// 00502ae1  894618               mov dword ptr [esi + 0x18], eax
// 00502ae4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00502ae7  5f                   pop edi
// 00502ae8  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00502aeb  8bc6                 mov eax, esi
// 00502aed  5e                   pop esi
// 00502aee  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??4VAR@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
