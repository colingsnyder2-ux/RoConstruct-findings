// from server: 100% by auto
// roc 2009-06 0057a5c0  unit: G3D::LineSegment  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a5c0
//
// 0057a5c0  56                   push esi
// 0057a5c1  8bf1                 mov esi, ecx
// 0057a5c3  57                   push edi
// 0057a5c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057a5c8  0fb607               movzx eax, byte ptr [edi]
// 0057a5cb  8806                 mov byte ptr [esi], al
// 0057a5cd  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 0057a5d1  884e01               mov byte ptr [esi + 1], cl
// 0057a5d4  0fb65702             movzx edx, byte ptr [edi + 2]
// 0057a5d8  885602               mov byte ptr [esi + 2], dl
// 0057a5db  0fb64703             movzx eax, byte ptr [edi + 3]
// 0057a5df  884603               mov byte ptr [esi + 3], al
// 0057a5e2  0fb64f04             movzx ecx, byte ptr [edi + 4]
// 0057a5e6  884e04               mov byte ptr [esi + 4], cl
// 0057a5e9  0fb65705             movzx edx, byte ptr [edi + 5]
// 0057a5ed  885605               mov byte ptr [esi + 5], dl
// 0057a5f0  0fb64706             movzx eax, byte ptr [edi + 6]
// 0057a5f4  8d4f08               lea ecx, [edi + 8]
// 0057a5f7  51                   push ecx
// 0057a5f8  8d4e08               lea ecx, [esi + 8]
// 0057a5fb  884606               mov byte ptr [esi + 6], al
// 0057a5fe  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057a604  8b5724               mov edx, dword ptr [edi + 0x24]
// 0057a607  895624               mov dword ptr [esi + 0x24], edx
// 0057a60a  0fb64728             movzx eax, byte ptr [edi + 0x28]
// 0057a60e  884628               mov byte ptr [esi + 0x28], al
// 0057a611  5f                   pop edi
// 0057a612  8bc6                 mov eax, esi
// 0057a614  5e                   pop esi
// 0057a615  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0Settings@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
