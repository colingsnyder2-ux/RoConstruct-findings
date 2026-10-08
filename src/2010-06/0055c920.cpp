// from server: 100% by auto
// roc 2010-06 0055c920  unit: G3D::GCamera  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055c920
//
// 0055c920  56                   push esi
// 0055c921  8bf1                 mov esi, ecx
// 0055c923  57                   push edi
// 0055c924  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0055c928  0fb607               movzx eax, byte ptr [edi]
// 0055c92b  8806                 mov byte ptr [esi], al
// 0055c92d  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 0055c931  884e01               mov byte ptr [esi + 1], cl
// 0055c934  0fb65702             movzx edx, byte ptr [edi + 2]
// 0055c938  885602               mov byte ptr [esi + 2], dl
// 0055c93b  0fb64703             movzx eax, byte ptr [edi + 3]
// 0055c93f  884603               mov byte ptr [esi + 3], al
// 0055c942  0fb64f04             movzx ecx, byte ptr [edi + 4]
// 0055c946  884e04               mov byte ptr [esi + 4], cl
// 0055c949  0fb65705             movzx edx, byte ptr [edi + 5]
// 0055c94d  885605               mov byte ptr [esi + 5], dl
// 0055c950  0fb64706             movzx eax, byte ptr [edi + 6]
// 0055c954  8d4f08               lea ecx, [edi + 8]
// 0055c957  51                   push ecx
// 0055c958  8d4e08               lea ecx, [esi + 8]
// 0055c95b  884606               mov byte ptr [esi + 6], al
// 0055c95e  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055c964  8b5724               mov edx, dword ptr [edi + 0x24]
// 0055c967  895624               mov dword ptr [esi + 0x24], edx
// 0055c96a  0fb64728             movzx eax, byte ptr [edi + 0x28]
// 0055c96e  884628               mov byte ptr [esi + 0x28], al
// 0055c971  5f                   pop edi
// 0055c972  8bc6                 mov eax, esi
// 0055c974  5e                   pop esi
// 0055c975  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Settings@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
