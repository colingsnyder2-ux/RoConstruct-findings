// from server: 100% by auto
// roc 2010-06 006768f0  unit: RBX::Assembly  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006768f0
//
// 006768f0  56                   push esi
// 006768f1  8bf1                 mov esi, ecx
// 006768f3  8b4604               mov eax, dword ptr [esi + 4]
// 006768f6  3b4608               cmp eax, dword ptr [esi + 8]
// 006768f9  8b0e                 mov ecx, dword ptr [esi]
// 006768fb  7d16                 jge 0x676913
// 006768fd  8d0481               lea eax, [ecx + eax*4]
// 00676900  85c0                 test eax, eax
// 00676902  7408                 je 0x67690c
// 00676904  8b542408             mov edx, dword ptr [esp + 8]
// 00676908  8b0a                 mov ecx, dword ptr [edx]
// 0067690a  8908                 mov dword ptr [eax], ecx
// 0067690c  ff4604               inc dword ptr [esi + 4]
// 0067690f  5e                   pop esi
// 00676910  c20400               ret 4
// 00676913  57                   push edi
// 00676914  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00676918  3bf9                 cmp edi, ecx
// 0067691a  721e                 jb 0x67693a
// 0067691c  8d1481               lea edx, [ecx + eax*4]
// 0067691f  3bfa                 cmp edi, edx
// 00676921  7317                 jae 0x67693a
// 00676923  8b07                 mov eax, dword ptr [edi]
// 00676925  8d4c240c             lea ecx, [esp + 0xc]
// 00676929  51                   push ecx
// 0067692a  8bce                 mov ecx, esi
// 0067692c  89442410             mov dword ptr [esp + 0x10], eax
// 00676930  e8bbffffff           call 0x6768f0
// 00676935  5f                   pop edi
// 00676936  5e                   pop esi
// 00676937  c20400               ret 4
// 0067693a  6a00                 push 0
// 0067693c  40                   inc eax
// 0067693d  50                   push eax
// 0067693e  8bce                 mov ecx, esi
// 00676940  e8cbf9ffff           call 0x676310
// 00676945  8b0f                 mov ecx, dword ptr [edi]
// 00676947  8b5604               mov edx, dword ptr [esi + 4]
// 0067694a  8b06                 mov eax, dword ptr [esi]
// 0067694c  5f                   pop edi
// 0067694d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00676951  5e                   pop esi
// 00676952  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
