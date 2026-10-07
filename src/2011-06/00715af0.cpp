// roc 2011-06 00715af0  unit: RBX::VehicleSeat  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00715af0
//
// 00715af0  56                   push esi
// 00715af1  8bf1                 mov esi, ecx
// 00715af3  8b4604               mov eax, dword ptr [esi + 4]
// 00715af6  3b4608               cmp eax, dword ptr [esi + 8]
// 00715af9  8b0e                 mov ecx, dword ptr [esi]
// 00715afb  7d13                 jge 0x715b10
// 00715afd  03c8                 add ecx, eax
// 00715aff  7408                 je 0x715b09
// 00715b01  8b442408             mov eax, dword ptr [esp + 8]
// 00715b05  8a10                 mov dl, byte ptr [eax]
// 00715b07  8811                 mov byte ptr [ecx], dl
// 00715b09  ff4604               inc dword ptr [esi + 4]
// 00715b0c  5e                   pop esi
// 00715b0d  c20400               ret 4
// 00715b10  57                   push edi
// 00715b11  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00715b15  3bf9                 cmp edi, ecx
// 00715b17  721d                 jb 0x715b36
// 00715b19  03c8                 add ecx, eax
// 00715b1b  3bf9                 cmp edi, ecx
// 00715b1d  7317                 jae 0x715b36
// 00715b1f  8a07                 mov al, byte ptr [edi]
// 00715b21  8d4c240c             lea ecx, [esp + 0xc]
// 00715b25  51                   push ecx
// 00715b26  8bce                 mov ecx, esi
// 00715b28  88442410             mov byte ptr [esp + 0x10], al
// 00715b2c  e8bfffffff           call 0x715af0
// 00715b31  5f                   pop edi
// 00715b32  5e                   pop esi
// 00715b33  c20400               ret 4
// 00715b36  6a00                 push 0
// 00715b38  40                   inc eax
// 00715b39  50                   push eax
// 00715b3a  8bce                 mov ecx, esi
// 00715b3c  e8df1be3ff           call 0x547720
// 00715b41  8a0f                 mov cl, byte ptr [edi]
// 00715b43  8b5604               mov edx, dword ptr [esi + 4]
// 00715b46  8b06                 mov eax, dword ptr [esi]
// 00715b48  5f                   pop edi
// 00715b49  884c02ff             mov byte ptr [edx + eax - 1], cl
// 00715b4d  5e                   pop esi
// 00715b4e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
