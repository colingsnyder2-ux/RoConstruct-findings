// from server: 100% by auto
// roc 2008-06 00516610  unit: G3D::BinaryInput  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516610
//
// 00516610  56                   push esi
// 00516611  8bf1                 mov esi, ecx
// 00516613  57                   push edi
// 00516614  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00516618  0fb607               movzx eax, byte ptr [edi]
// 0051661b  8806                 mov byte ptr [esi], al
// 0051661d  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 00516621  884e01               mov byte ptr [esi + 1], cl
// 00516624  0fb65702             movzx edx, byte ptr [edi + 2]
// 00516628  885602               mov byte ptr [esi + 2], dl
// 0051662b  0fb64703             movzx eax, byte ptr [edi + 3]
// 0051662f  884603               mov byte ptr [esi + 3], al
// 00516632  0fb64f04             movzx ecx, byte ptr [edi + 4]
// 00516636  884e04               mov byte ptr [esi + 4], cl
// 00516639  0fb65705             movzx edx, byte ptr [edi + 5]
// 0051663d  885605               mov byte ptr [esi + 5], dl
// 00516640  0fb64706             movzx eax, byte ptr [edi + 6]
// 00516644  8d4f08               lea ecx, [edi + 8]
// 00516647  51                   push ecx
// 00516648  8d4e08               lea ecx, [esi + 8]
// 0051664b  884606               mov byte ptr [esi + 6], al
// 0051664e  ff155c248000         call dword ptr [0x80245c]
// 00516654  8b5724               mov edx, dword ptr [edi + 0x24]
// 00516657  895624               mov dword ptr [esi + 0x24], edx
// 0051665a  0fb64728             movzx eax, byte ptr [edi + 0x28]
// 0051665e  884628               mov byte ptr [esi + 0x28], al
// 00516661  5f                   pop edi
// 00516662  8bc6                 mov eax, esi
// 00516664  5e                   pop esi
// 00516665  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Settings@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
