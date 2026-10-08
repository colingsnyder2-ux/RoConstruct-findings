// from server: 100% by auto
// roc 2008-06 00607a60  unit: RBX::BallBlockContact  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00607a60
//
// 00607a60  56                   push esi
// 00607a61  8bf1                 mov esi, ecx
// 00607a63  8b4604               mov eax, dword ptr [esi + 4]
// 00607a66  3b4608               cmp eax, dword ptr [esi + 8]
// 00607a69  8b0e                 mov ecx, dword ptr [esi]
// 00607a6b  7d13                 jge 0x607a80
// 00607a6d  03c8                 add ecx, eax
// 00607a6f  7408                 je 0x607a79
// 00607a71  8b442408             mov eax, dword ptr [esp + 8]
// 00607a75  8a10                 mov dl, byte ptr [eax]
// 00607a77  8811                 mov byte ptr [ecx], dl
// 00607a79  ff4604               inc dword ptr [esi + 4]
// 00607a7c  5e                   pop esi
// 00607a7d  c20400               ret 4
// 00607a80  57                   push edi
// 00607a81  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00607a85  3bf9                 cmp edi, ecx
// 00607a87  721d                 jb 0x607aa6
// 00607a89  03c8                 add ecx, eax
// 00607a8b  3bf9                 cmp edi, ecx
// 00607a8d  7317                 jae 0x607aa6
// 00607a8f  8a07                 mov al, byte ptr [edi]
// 00607a91  8d4c240c             lea ecx, [esp + 0xc]
// 00607a95  51                   push ecx
// 00607a96  8bce                 mov ecx, esi
// 00607a98  88442410             mov byte ptr [esp + 0x10], al
// 00607a9c  e8bfffffff           call 0x607a60
// 00607aa1  5f                   pop edi
// 00607aa2  5e                   pop esi
// 00607aa3  c20400               ret 4
// 00607aa6  6a00                 push 0
// 00607aa8  40                   inc eax
// 00607aa9  50                   push eax
// 00607aaa  8bce                 mov ecx, esi
// 00607aac  e86f84e7ff           call 0x47ff20
// 00607ab1  8a0f                 mov cl, byte ptr [edi]
// 00607ab3  8b5604               mov edx, dword ptr [esi + 4]
// 00607ab6  8b06                 mov eax, dword ptr [esi]
// 00607ab8  5f                   pop edi
// 00607ab9  884c02ff             mov byte ptr [edx + eax - 1], cl
// 00607abd  5e                   pop esi
// 00607abe  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
