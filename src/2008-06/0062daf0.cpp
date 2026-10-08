// from server: 100% by auto
// roc 2008-06 0062daf0  unit: RBX::VGeometryService::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062daf0
//
// 0062daf0  56                   push esi
// 0062daf1  8bf1                 mov esi, ecx
// 0062daf3  8b4604               mov eax, dword ptr [esi + 4]
// 0062daf6  3b4608               cmp eax, dword ptr [esi + 8]
// 0062daf9  8b0e                 mov ecx, dword ptr [esi]
// 0062dafb  7d16                 jge 0x62db13
// 0062dafd  8d0481               lea eax, [ecx + eax*4]
// 0062db00  85c0                 test eax, eax
// 0062db02  7408                 je 0x62db0c
// 0062db04  8b542408             mov edx, dword ptr [esp + 8]
// 0062db08  8b0a                 mov ecx, dword ptr [edx]
// 0062db0a  8908                 mov dword ptr [eax], ecx
// 0062db0c  ff4604               inc dword ptr [esi + 4]
// 0062db0f  5e                   pop esi
// 0062db10  c20400               ret 4
// 0062db13  57                   push edi
// 0062db14  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0062db18  3bf9                 cmp edi, ecx
// 0062db1a  721e                 jb 0x62db3a
// 0062db1c  8d1481               lea edx, [ecx + eax*4]
// 0062db1f  3bfa                 cmp edi, edx
// 0062db21  7317                 jae 0x62db3a
// 0062db23  8b07                 mov eax, dword ptr [edi]
// 0062db25  8d4c240c             lea ecx, [esp + 0xc]
// 0062db29  51                   push ecx
// 0062db2a  8bce                 mov ecx, esi
// 0062db2c  89442410             mov dword ptr [esp + 0x10], eax
// 0062db30  e8bbffffff           call 0x62daf0
// 0062db35  5f                   pop edi
// 0062db36  5e                   pop esi
// 0062db37  c20400               ret 4
// 0062db3a  6a00                 push 0
// 0062db3c  40                   inc eax
// 0062db3d  50                   push eax
// 0062db3e  8bce                 mov ecx, esi
// 0062db40  e89bfeffff           call 0x62d9e0
// 0062db45  8b0f                 mov ecx, dword ptr [edi]
// 0062db47  8b5604               mov edx, dword ptr [esi + 4]
// 0062db4a  8b06                 mov eax, dword ptr [esi]
// 0062db4c  5f                   pop edi
// 0062db4d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0062db51  5e                   pop esi
// 0062db52  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
