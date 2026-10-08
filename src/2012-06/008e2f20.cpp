// from server: 100% by auto
// roc 2012-06 008e2f20  unit: RBX::VehicleSeat  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e2f20
//
// 008e2f20  56                   push esi
// 008e2f21  8bf1                 mov esi, ecx
// 008e2f23  8b4604               mov eax, dword ptr [esi + 4]
// 008e2f26  3b4608               cmp eax, dword ptr [esi + 8]
// 008e2f29  8b0e                 mov ecx, dword ptr [esi]
// 008e2f2b  7d13                 jge 0x8e2f40
// 008e2f2d  03c8                 add ecx, eax
// 008e2f2f  7408                 je 0x8e2f39
// 008e2f31  8b442408             mov eax, dword ptr [esp + 8]
// 008e2f35  8a10                 mov dl, byte ptr [eax]
// 008e2f37  8811                 mov byte ptr [ecx], dl
// 008e2f39  ff4604               inc dword ptr [esi + 4]
// 008e2f3c  5e                   pop esi
// 008e2f3d  c20400               ret 4
// 008e2f40  57                   push edi
// 008e2f41  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008e2f45  3bf9                 cmp edi, ecx
// 008e2f47  721d                 jb 0x8e2f66
// 008e2f49  03c8                 add ecx, eax
// 008e2f4b  3bf9                 cmp edi, ecx
// 008e2f4d  7317                 jae 0x8e2f66
// 008e2f4f  8a07                 mov al, byte ptr [edi]
// 008e2f51  8d4c240c             lea ecx, [esp + 0xc]
// 008e2f55  51                   push ecx
// 008e2f56  8bce                 mov ecx, esi
// 008e2f58  88442410             mov byte ptr [esp + 0x10], al
// 008e2f5c  e8bfffffff           call 0x8e2f20
// 008e2f61  5f                   pop edi
// 008e2f62  5e                   pop esi
// 008e2f63  c20400               ret 4
// 008e2f66  6a00                 push 0
// 008e2f68  40                   inc eax
// 008e2f69  50                   push eax
// 008e2f6a  8bce                 mov ecx, esi
// 008e2f6c  e80fcad4ff           call 0x62f980
// 008e2f71  8a0f                 mov cl, byte ptr [edi]
// 008e2f73  8b5604               mov edx, dword ptr [esi + 4]
// 008e2f76  8b06                 mov eax, dword ptr [esi]
// 008e2f78  5f                   pop edi
// 008e2f79  884c02ff             mov byte ptr [edx + eax - 1], cl
// 008e2f7d  5e                   pop esi
// 008e2f7e  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?append@?$Array@D@G3D@@QAEXABD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
