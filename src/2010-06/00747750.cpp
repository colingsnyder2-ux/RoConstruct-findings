// from server: 100% by auto
// roc 2010-06 00747750  unit: RBX::Clump  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00747750
//
// 00747750  56                   push esi
// 00747751  8bf1                 mov esi, ecx
// 00747753  8b4604               mov eax, dword ptr [esi + 4]
// 00747756  3b4608               cmp eax, dword ptr [esi + 8]
// 00747759  8b0e                 mov ecx, dword ptr [esi]
// 0074775b  7d16                 jge 0x747773
// 0074775d  8d0481               lea eax, [ecx + eax*4]
// 00747760  85c0                 test eax, eax
// 00747762  7408                 je 0x74776c
// 00747764  8b542408             mov edx, dword ptr [esp + 8]
// 00747768  8b0a                 mov ecx, dword ptr [edx]
// 0074776a  8908                 mov dword ptr [eax], ecx
// 0074776c  ff4604               inc dword ptr [esi + 4]
// 0074776f  5e                   pop esi
// 00747770  c20400               ret 4
// 00747773  57                   push edi
// 00747774  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00747778  3bf9                 cmp edi, ecx
// 0074777a  721e                 jb 0x74779a
// 0074777c  8d1481               lea edx, [ecx + eax*4]
// 0074777f  3bfa                 cmp edi, edx
// 00747781  7317                 jae 0x74779a
// 00747783  8b07                 mov eax, dword ptr [edi]
// 00747785  8d4c240c             lea ecx, [esp + 0xc]
// 00747789  51                   push ecx
// 0074778a  8bce                 mov ecx, esi
// 0074778c  89442410             mov dword ptr [esp + 0x10], eax
// 00747790  e8bbffffff           call 0x747750
// 00747795  5f                   pop edi
// 00747796  5e                   pop esi
// 00747797  c20400               ret 4
// 0074779a  6a00                 push 0
// 0074779c  40                   inc eax
// 0074779d  50                   push eax
// 0074779e  8bce                 mov ecx, esi
// 007477a0  e86bedf2ff           call 0x676510
// 007477a5  8b0f                 mov ecx, dword ptr [edi]
// 007477a7  8b5604               mov edx, dword ptr [esi + 4]
// 007477aa  8b06                 mov eax, dword ptr [esi]
// 007477ac  5f                   pop edi
// 007477ad  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 007477b1  5e                   pop esi
// 007477b2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
