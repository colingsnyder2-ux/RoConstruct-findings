// roc 2007-08 0050d570  unit: G3D::BinaryInput  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d570
//
// 0050d570  56                   push esi
// 0050d571  8bf1                 mov esi, ecx
// 0050d573  57                   push edi
// 0050d574  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050d578  0fb607               movzx eax, byte ptr [edi]
// 0050d57b  8806                 mov byte ptr [esi], al
// 0050d57d  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 0050d581  884e01               mov byte ptr [esi + 1], cl
// 0050d584  0fb65702             movzx edx, byte ptr [edi + 2]
// 0050d588  885602               mov byte ptr [esi + 2], dl
// 0050d58b  0fb64703             movzx eax, byte ptr [edi + 3]
// 0050d58f  884603               mov byte ptr [esi + 3], al
// 0050d592  0fb64f04             movzx ecx, byte ptr [edi + 4]
// 0050d596  884e04               mov byte ptr [esi + 4], cl
// 0050d599  0fb65705             movzx edx, byte ptr [edi + 5]
// 0050d59d  885605               mov byte ptr [esi + 5], dl
// 0050d5a0  0fb64706             movzx eax, byte ptr [edi + 6]
// 0050d5a4  8d4f08               lea ecx, [edi + 8]
// 0050d5a7  51                   push ecx
// 0050d5a8  8d4e08               lea ecx, [esi + 8]
// 0050d5ab  884606               mov byte ptr [esi + 6], al
// 0050d5ae  ff159ce67700         call dword ptr [0x77e69c]
// 0050d5b4  8b5724               mov edx, dword ptr [edi + 0x24]
// 0050d5b7  895624               mov dword ptr [esi + 0x24], edx
// 0050d5ba  0fb64728             movzx eax, byte ptr [edi + 0x28]
// 0050d5be  884628               mov byte ptr [esi + 0x28], al
// 0050d5c1  5f                   pop edi
// 0050d5c2  8bc6                 mov eax, esi
// 0050d5c4  5e                   pop esi
// 0050d5c5  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Settings@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
