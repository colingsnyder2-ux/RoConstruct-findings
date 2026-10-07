// roc 2009-06 006f8660  unit: RBX::GroupDragTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f8660
//
// 006f8660  56                   push esi
// 006f8661  8bf1                 mov esi, ecx
// 006f8663  8b4604               mov eax, dword ptr [esi + 4]
// 006f8666  3b4608               cmp eax, dword ptr [esi + 8]
// 006f8669  8b0e                 mov ecx, dword ptr [esi]
// 006f866b  7d16                 jge 0x6f8683
// 006f866d  8d0481               lea eax, [ecx + eax*4]
// 006f8670  85c0                 test eax, eax
// 006f8672  7408                 je 0x6f867c
// 006f8674  8b542408             mov edx, dword ptr [esp + 8]
// 006f8678  8b0a                 mov ecx, dword ptr [edx]
// 006f867a  8908                 mov dword ptr [eax], ecx
// 006f867c  ff4604               inc dword ptr [esi + 4]
// 006f867f  5e                   pop esi
// 006f8680  c20400               ret 4
// 006f8683  57                   push edi
// 006f8684  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f8688  3bf9                 cmp edi, ecx
// 006f868a  721e                 jb 0x6f86aa
// 006f868c  8d1481               lea edx, [ecx + eax*4]
// 006f868f  3bfa                 cmp edi, edx
// 006f8691  7317                 jae 0x6f86aa
// 006f8693  8b07                 mov eax, dword ptr [edi]
// 006f8695  8d4c240c             lea ecx, [esp + 0xc]
// 006f8699  51                   push ecx
// 006f869a  8bce                 mov ecx, esi
// 006f869c  89442410             mov dword ptr [esp + 0x10], eax
// 006f86a0  e8bbffffff           call 0x6f8660
// 006f86a5  5f                   pop edi
// 006f86a6  5e                   pop esi
// 006f86a7  c20400               ret 4
// 006f86aa  6a00                 push 0
// 006f86ac  40                   inc eax
// 006f86ad  50                   push eax
// 006f86ae  8bce                 mov ecx, esi
// 006f86b0  e8bbfbffff           call 0x6f8270
// 006f86b5  8b0f                 mov ecx, dword ptr [edi]
// 006f86b7  8b5604               mov edx, dword ptr [esi + 4]
// 006f86ba  8b06                 mov eax, dword ptr [esi]
// 006f86bc  5f                   pop edi
// 006f86bd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006f86c1  5e                   pop esi
// 006f86c2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
