// roc 2010-06 0055c8f0  unit: G3D::GCamera  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055c8f0
//
// 0055c8f0  56                   push esi
// 0055c8f1  57                   push edi
// 0055c8f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055c8f6  57                   push edi
// 0055c8f7  8bf1                 mov esi, ecx
// 0055c8f9  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055c8ff  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0055c902  89461c               mov dword ptr [esi + 0x1c], eax
// 0055c905  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0055c908  894e20               mov dword ptr [esi + 0x20], ecx
// 0055c90b  8b5724               mov edx, dword ptr [edi + 0x24]
// 0055c90e  895624               mov dword ptr [esi + 0x24], edx
// 0055c911  8b4728               mov eax, dword ptr [edi + 0x28]
// 0055c914  894628               mov dword ptr [esi + 0x28], eax
// 0055c917  5f                   pop edi
// 0055c918  8bc6                 mov eax, esi
// 0055c91a  5e                   pop esi
// 0055c91b  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Token@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
