// roc 2007-08 0050d540  unit: G3D::BinaryInput  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d540
//
// 0050d540  56                   push esi
// 0050d541  57                   push edi
// 0050d542  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050d546  57                   push edi
// 0050d547  8bf1                 mov esi, ecx
// 0050d549  ff159ce67700         call dword ptr [0x77e69c]
// 0050d54f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0050d552  89461c               mov dword ptr [esi + 0x1c], eax
// 0050d555  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0050d558  894e20               mov dword ptr [esi + 0x20], ecx
// 0050d55b  8b5724               mov edx, dword ptr [edi + 0x24]
// 0050d55e  895624               mov dword ptr [esi + 0x24], edx
// 0050d561  8b4728               mov eax, dword ptr [edi + 0x28]
// 0050d564  894628               mov dword ptr [esi + 0x28], eax
// 0050d567  5f                   pop edi
// 0050d568  8bc6                 mov eax, esi
// 0050d56a  5e                   pop esi
// 0050d56b  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Token@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
