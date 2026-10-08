// roc 2007-03 00501c10  unit: seg_00500000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501c10
//
// 00501c10  56                   push esi
// 00501c11  8bf1                 mov esi, ecx
// 00501c13  57                   push edi
// 00501c14  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00501c18  0fb607               movzx eax, byte ptr [edi]
// 00501c1b  8806                 mov byte ptr [esi], al
// 00501c1d  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 00501c21  884e01               mov byte ptr [esi + 1], cl
// 00501c24  0fb65702             movzx edx, byte ptr [edi + 2]
// 00501c28  885602               mov byte ptr [esi + 2], dl
// 00501c2b  0fb64703             movzx eax, byte ptr [edi + 3]
// 00501c2f  884603               mov byte ptr [esi + 3], al
// 00501c32  0fb64f04             movzx ecx, byte ptr [edi + 4]
// 00501c36  884e04               mov byte ptr [esi + 4], cl
// 00501c39  0fb65705             movzx edx, byte ptr [edi + 5]
// 00501c3d  885605               mov byte ptr [esi + 5], dl
// 00501c40  0fb64706             movzx eax, byte ptr [edi + 6]
// 00501c44  8d4f08               lea ecx, [edi + 8]
// 00501c47  51                   push ecx
// 00501c48  8d4e08               lea ecx, [esi + 8]
// 00501c4b  884606               mov byte ptr [esi + 6], al
// 00501c4e  ff157ce77700         call dword ptr [0x77e77c]
// 00501c54  8b5724               mov edx, dword ptr [edi + 0x24]
// 00501c57  895624               mov dword ptr [esi + 0x24], edx
// 00501c5a  0fb64728             movzx eax, byte ptr [edi + 0x28]
// 00501c5e  884628               mov byte ptr [esi + 0x28], al
// 00501c61  5f                   pop edi
// 00501c62  8bc6                 mov eax, esi
// 00501c64  5e                   pop esi
// 00501c65  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ??0Settings@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
