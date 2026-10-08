// roc 2009-12 005fab20  unit: G3D::LineSegment  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fab20
//
// 005fab20  56                   push esi
// 005fab21  57                   push edi
// 005fab22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fab26  57                   push edi
// 005fab27  8bf1                 mov esi, ecx
// 005fab29  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fab2f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005fab32  89461c               mov dword ptr [esi + 0x1c], eax
// 005fab35  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 005fab38  894e20               mov dword ptr [esi + 0x20], ecx
// 005fab3b  8b5724               mov edx, dword ptr [edi + 0x24]
// 005fab3e  895624               mov dword ptr [esi + 0x24], edx
// 005fab41  8b4728               mov eax, dword ptr [edi + 0x28]
// 005fab44  894628               mov dword ptr [esi + 0x28], eax
// 005fab47  5f                   pop edi
// 005fab48  8bc6                 mov eax, esi
// 005fab4a  5e                   pop esi
// 005fab4b  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Token@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
