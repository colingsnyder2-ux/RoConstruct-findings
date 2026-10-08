// from server: 100% by auto
// roc 2008-06 00512790  unit: G3D::GCamera  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512790
//
// 00512790  56                   push esi
// 00512791  8bf1                 mov esi, ecx
// 00512793  8b4604               mov eax, dword ptr [esi + 4]
// 00512796  3b4608               cmp eax, dword ptr [esi + 8]
// 00512799  8b0e                 mov ecx, dword ptr [esi]
// 0051279b  7d13                 jge 0x5127b0
// 0051279d  03c8                 add ecx, eax
// 0051279f  7408                 je 0x5127a9
// 005127a1  8b442408             mov eax, dword ptr [esp + 8]
// 005127a5  8a10                 mov dl, byte ptr [eax]
// 005127a7  8811                 mov byte ptr [ecx], dl
// 005127a9  ff4604               inc dword ptr [esi + 4]
// 005127ac  5e                   pop esi
// 005127ad  c20400               ret 4
// 005127b0  57                   push edi
// 005127b1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005127b5  3bf9                 cmp edi, ecx
// 005127b7  721d                 jb 0x5127d6
// 005127b9  03c8                 add ecx, eax
// 005127bb  3bf9                 cmp edi, ecx
// 005127bd  7317                 jae 0x5127d6
// 005127bf  8a07                 mov al, byte ptr [edi]
// 005127c1  8d4c240c             lea ecx, [esp + 0xc]
// 005127c5  51                   push ecx
// 005127c6  8bce                 mov ecx, esi
// 005127c8  88442410             mov byte ptr [esp + 0x10], al
// 005127cc  e8bfffffff           call 0x512790
// 005127d1  5f                   pop edi
// 005127d2  5e                   pop esi
// 005127d3  c20400               ret 4
// 005127d6  6a00                 push 0
// 005127d8  40                   inc eax
// 005127d9  50                   push eax
// 005127da  8bce                 mov ecx, esi
// 005127dc  e8affeffff           call 0x512690
// 005127e1  8a0f                 mov cl, byte ptr [edi]
// 005127e3  8b5604               mov edx, dword ptr [esi + 4]
// 005127e6  8b06                 mov eax, dword ptr [esi]
// 005127e8  5f                   pop edi
// 005127e9  884c02ff             mov byte ptr [edx + eax - 1], cl
// 005127ed  5e                   pop esi
// 005127ee  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
