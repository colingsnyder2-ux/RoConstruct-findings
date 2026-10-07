// roc 2009-06 00579a30  unit: G3D::LineSegment  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579a30
//
// 00579a30  56                   push esi
// 00579a31  8bf1                 mov esi, ecx
// 00579a33  8b4604               mov eax, dword ptr [esi + 4]
// 00579a36  3b4608               cmp eax, dword ptr [esi + 8]
// 00579a39  8b0e                 mov ecx, dword ptr [esi]
// 00579a3b  7d13                 jge 0x579a50
// 00579a3d  03c8                 add ecx, eax
// 00579a3f  7408                 je 0x579a49
// 00579a41  8b442408             mov eax, dword ptr [esp + 8]
// 00579a45  8a10                 mov dl, byte ptr [eax]
// 00579a47  8811                 mov byte ptr [ecx], dl
// 00579a49  ff4604               inc dword ptr [esi + 4]
// 00579a4c  5e                   pop esi
// 00579a4d  c20400               ret 4
// 00579a50  57                   push edi
// 00579a51  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00579a55  3bf9                 cmp edi, ecx
// 00579a57  721d                 jb 0x579a76
// 00579a59  03c8                 add ecx, eax
// 00579a5b  3bf9                 cmp edi, ecx
// 00579a5d  7317                 jae 0x579a76
// 00579a5f  8a07                 mov al, byte ptr [edi]
// 00579a61  8d4c240c             lea ecx, [esp + 0xc]
// 00579a65  51                   push ecx
// 00579a66  8bce                 mov ecx, esi
// 00579a68  88442410             mov byte ptr [esp + 0x10], al
// 00579a6c  e8bfffffff           call 0x579a30
// 00579a71  5f                   pop edi
// 00579a72  5e                   pop esi
// 00579a73  c20400               ret 4
// 00579a76  6a00                 push 0
// 00579a78  40                   inc eax
// 00579a79  50                   push eax
// 00579a7a  8bce                 mov ecx, esi
// 00579a7c  e8affeffff           call 0x579930
// 00579a81  8a0f                 mov cl, byte ptr [edi]
// 00579a83  8b5604               mov edx, dword ptr [esi + 4]
// 00579a86  8b06                 mov eax, dword ptr [esi]
// 00579a88  5f                   pop edi
// 00579a89  884c02ff             mov byte ptr [edx + eax - 1], cl
// 00579a8d  5e                   pop esi
// 00579a8e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
