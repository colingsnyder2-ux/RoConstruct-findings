// roc 2009-06 005663f0  unit: RBX::RbxG3D::RenderScene  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005663f0
//
// 005663f0  56                   push esi
// 005663f1  57                   push edi
// 005663f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005663f6  8b07                 mov eax, dword ptr [edi]
// 005663f8  50                   push eax
// 005663f9  8bf1                 mov esi, ecx
// 005663fb  e86094f3ff           call 0x49f860
// 00566400  8b4f04               mov ecx, dword ptr [edi + 4]
// 00566403  894e04               mov dword ptr [esi + 4], ecx
// 00566406  8b5708               mov edx, dword ptr [edi + 8]
// 00566409  895608               mov dword ptr [esi + 8], edx
// 0056640c  8b470c               mov eax, dword ptr [edi + 0xc]
// 0056640f  89460c               mov dword ptr [esi + 0xc], eax
// 00566412  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00566415  894e10               mov dword ptr [esi + 0x10], ecx
// 00566418  8b5714               mov edx, dword ptr [edi + 0x14]
// 0056641b  895614               mov dword ptr [esi + 0x14], edx
// 0056641e  8b4718               mov eax, dword ptr [edi + 0x18]
// 00566421  894618               mov dword ptr [esi + 0x18], eax
// 00566424  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00566427  5f                   pop edi
// 00566428  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0056642b  8bc6                 mov eax, esi
// 0056642d  5e                   pop esi
// 0056642e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??4VAR@G3D@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
