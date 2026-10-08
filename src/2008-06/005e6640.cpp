// from server: 100% by auto
// roc 2008-06 005e6640  unit: RBX::Clump  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6640
//
// 005e6640  56                   push esi
// 005e6641  8bf1                 mov esi, ecx
// 005e6643  8b4604               mov eax, dword ptr [esi + 4]
// 005e6646  3b4608               cmp eax, dword ptr [esi + 8]
// 005e6649  8b0e                 mov ecx, dword ptr [esi]
// 005e664b  7d16                 jge 0x5e6663
// 005e664d  8d0481               lea eax, [ecx + eax*4]
// 005e6650  85c0                 test eax, eax
// 005e6652  7408                 je 0x5e665c
// 005e6654  8b542408             mov edx, dword ptr [esp + 8]
// 005e6658  8b0a                 mov ecx, dword ptr [edx]
// 005e665a  8908                 mov dword ptr [eax], ecx
// 005e665c  ff4604               inc dword ptr [esi + 4]
// 005e665f  5e                   pop esi
// 005e6660  c20400               ret 4
// 005e6663  57                   push edi
// 005e6664  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e6668  3bf9                 cmp edi, ecx
// 005e666a  721e                 jb 0x5e668a
// 005e666c  8d1481               lea edx, [ecx + eax*4]
// 005e666f  3bfa                 cmp edi, edx
// 005e6671  7317                 jae 0x5e668a
// 005e6673  8b07                 mov eax, dword ptr [edi]
// 005e6675  8d4c240c             lea ecx, [esp + 0xc]
// 005e6679  51                   push ecx
// 005e667a  8bce                 mov ecx, esi
// 005e667c  89442410             mov dword ptr [esp + 0x10], eax
// 005e6680  e8bbffffff           call 0x5e6640
// 005e6685  5f                   pop edi
// 005e6686  5e                   pop esi
// 005e6687  c20400               ret 4
// 005e668a  6a00                 push 0
// 005e668c  40                   inc eax
// 005e668d  50                   push eax
// 005e668e  8bce                 mov ecx, esi
// 005e6690  e8abfeffff           call 0x5e6540
// 005e6695  8b0f                 mov ecx, dword ptr [edi]
// 005e6697  8b5604               mov edx, dword ptr [esi + 4]
// 005e669a  8b06                 mov eax, dword ptr [esi]
// 005e669c  5f                   pop edi
// 005e669d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005e66a1  5e                   pop esi
// 005e66a2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
