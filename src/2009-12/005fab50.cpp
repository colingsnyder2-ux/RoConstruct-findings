// roc 2009-12 005fab50  unit: G3D::LineSegment  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fab50
//
// 005fab50  56                   push esi
// 005fab51  8bf1                 mov esi, ecx
// 005fab53  57                   push edi
// 005fab54  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fab58  0fb607               movzx eax, byte ptr [edi]
// 005fab5b  8806                 mov byte ptr [esi], al
// 005fab5d  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 005fab61  884e01               mov byte ptr [esi + 1], cl
// 005fab64  0fb65702             movzx edx, byte ptr [edi + 2]
// 005fab68  885602               mov byte ptr [esi + 2], dl
// 005fab6b  0fb64703             movzx eax, byte ptr [edi + 3]
// 005fab6f  884603               mov byte ptr [esi + 3], al
// 005fab72  0fb64f04             movzx ecx, byte ptr [edi + 4]
// 005fab76  884e04               mov byte ptr [esi + 4], cl
// 005fab79  0fb65705             movzx edx, byte ptr [edi + 5]
// 005fab7d  885605               mov byte ptr [esi + 5], dl
// 005fab80  0fb64706             movzx eax, byte ptr [edi + 6]
// 005fab84  8d4f08               lea ecx, [edi + 8]
// 005fab87  51                   push ecx
// 005fab88  8d4e08               lea ecx, [esi + 8]
// 005fab8b  884606               mov byte ptr [esi + 6], al
// 005fab8e  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fab94  8b5724               mov edx, dword ptr [edi + 0x24]
// 005fab97  895624               mov dword ptr [esi + 0x24], edx
// 005fab9a  0fb64728             movzx eax, byte ptr [edi + 0x28]
// 005fab9e  884628               mov byte ptr [esi + 0x28], al
// 005faba1  5f                   pop edi
// 005faba2  8bc6                 mov eax, esi
// 005faba4  5e                   pop esi
// 005faba5  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Settings@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
