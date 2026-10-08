// from server: 100% by auto
// roc 2007-08 00508c10  unit: G3D::GCamera  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508c10
//
// 00508c10  56                   push esi
// 00508c11  8bf1                 mov esi, ecx
// 00508c13  8b4604               mov eax, dword ptr [esi + 4]
// 00508c16  3b4608               cmp eax, dword ptr [esi + 8]
// 00508c19  8b0e                 mov ecx, dword ptr [esi]
// 00508c1b  7d14                 jge 0x508c31
// 00508c1d  03c8                 add ecx, eax
// 00508c1f  7408                 je 0x508c29
// 00508c21  8b442408             mov eax, dword ptr [esp + 8]
// 00508c25  8a10                 mov dl, byte ptr [eax]
// 00508c27  8811                 mov byte ptr [ecx], dl
// 00508c29  83460401             add dword ptr [esi + 4], 1
// 00508c2d  5e                   pop esi
// 00508c2e  c20400               ret 4
// 00508c31  57                   push edi
// 00508c32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00508c36  3bf9                 cmp edi, ecx
// 00508c38  721d                 jb 0x508c57
// 00508c3a  03c8                 add ecx, eax
// 00508c3c  3bf9                 cmp edi, ecx
// 00508c3e  7317                 jae 0x508c57
// 00508c40  8a07                 mov al, byte ptr [edi]
// 00508c42  8d4c240c             lea ecx, [esp + 0xc]
// 00508c46  51                   push ecx
// 00508c47  8bce                 mov ecx, esi
// 00508c49  88442410             mov byte ptr [esp + 0x10], al
// 00508c4d  e8beffffff           call 0x508c10
// 00508c52  5f                   pop edi
// 00508c53  5e                   pop esi
// 00508c54  c20400               ret 4
// 00508c57  6a00                 push 0
// 00508c59  83c001               add eax, 1
// 00508c5c  50                   push eax
// 00508c5d  8bce                 mov ecx, esi
// 00508c5f  e89cfeffff           call 0x508b00
// 00508c64  8a0f                 mov cl, byte ptr [edi]
// 00508c66  8b5604               mov edx, dword ptr [esi + 4]
// 00508c69  8b06                 mov eax, dword ptr [esi]
// 00508c6b  5f                   pop edi
// 00508c6c  884c02ff             mov byte ptr [edx + eax - 1], cl
// 00508c70  5e                   pop esi
// 00508c71  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
