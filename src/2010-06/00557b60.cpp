// from server: 100% by auto
// roc 2010-06 00557b60  unit: seg_00550000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00557b60
//
// 00557b60  56                   push esi
// 00557b61  8bf1                 mov esi, ecx
// 00557b63  8b4604               mov eax, dword ptr [esi + 4]
// 00557b66  3b4608               cmp eax, dword ptr [esi + 8]
// 00557b69  8b0e                 mov ecx, dword ptr [esi]
// 00557b6b  7d13                 jge 0x557b80
// 00557b6d  03c8                 add ecx, eax
// 00557b6f  7408                 je 0x557b79
// 00557b71  8b442408             mov eax, dword ptr [esp + 8]
// 00557b75  8a10                 mov dl, byte ptr [eax]
// 00557b77  8811                 mov byte ptr [ecx], dl
// 00557b79  ff4604               inc dword ptr [esi + 4]
// 00557b7c  5e                   pop esi
// 00557b7d  c20400               ret 4
// 00557b80  57                   push edi
// 00557b81  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00557b85  3bf9                 cmp edi, ecx
// 00557b87  721d                 jb 0x557ba6
// 00557b89  03c8                 add ecx, eax
// 00557b8b  3bf9                 cmp edi, ecx
// 00557b8d  7317                 jae 0x557ba6
// 00557b8f  8a07                 mov al, byte ptr [edi]
// 00557b91  8d4c240c             lea ecx, [esp + 0xc]
// 00557b95  51                   push ecx
// 00557b96  8bce                 mov ecx, esi
// 00557b98  88442410             mov byte ptr [esp + 0x10], al
// 00557b9c  e8bfffffff           call 0x557b60
// 00557ba1  5f                   pop edi
// 00557ba2  5e                   pop esi
// 00557ba3  c20400               ret 4
// 00557ba6  6a00                 push 0
// 00557ba8  40                   inc eax
// 00557ba9  50                   push eax
// 00557baa  8bce                 mov ecx, esi
// 00557bac  e8bffeffff           call 0x557a70
// 00557bb1  8a0f                 mov cl, byte ptr [edi]
// 00557bb3  8b5604               mov edx, dword ptr [esi + 4]
// 00557bb6  8b06                 mov eax, dword ptr [esi]
// 00557bb8  5f                   pop edi
// 00557bb9  884c02ff             mov byte ptr [edx + eax - 1], cl
// 00557bbd  5e                   pop esi
// 00557bbe  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
