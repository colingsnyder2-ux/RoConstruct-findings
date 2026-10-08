// from server: 100% by auto
// roc 2007-08 005ff950  unit: RBX::BallBallContact  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff950
//
// 005ff950  56                   push esi
// 005ff951  8bf1                 mov esi, ecx
// 005ff953  8b4604               mov eax, dword ptr [esi + 4]
// 005ff956  3b4608               cmp eax, dword ptr [esi + 8]
// 005ff959  8b0e                 mov ecx, dword ptr [esi]
// 005ff95b  7d17                 jge 0x5ff974
// 005ff95d  8d0481               lea eax, [ecx + eax*4]
// 005ff960  85c0                 test eax, eax
// 005ff962  7408                 je 0x5ff96c
// 005ff964  8b542408             mov edx, dword ptr [esp + 8]
// 005ff968  8b0a                 mov ecx, dword ptr [edx]
// 005ff96a  8908                 mov dword ptr [eax], ecx
// 005ff96c  83460401             add dword ptr [esi + 4], 1
// 005ff970  5e                   pop esi
// 005ff971  c20400               ret 4
// 005ff974  57                   push edi
// 005ff975  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ff979  3bf9                 cmp edi, ecx
// 005ff97b  721e                 jb 0x5ff99b
// 005ff97d  8d1481               lea edx, [ecx + eax*4]
// 005ff980  3bfa                 cmp edi, edx
// 005ff982  7317                 jae 0x5ff99b
// 005ff984  8b07                 mov eax, dword ptr [edi]
// 005ff986  8d4c240c             lea ecx, [esp + 0xc]
// 005ff98a  51                   push ecx
// 005ff98b  8bce                 mov ecx, esi
// 005ff98d  89442410             mov dword ptr [esp + 0x10], eax
// 005ff991  e8baffffff           call 0x5ff950
// 005ff996  5f                   pop edi
// 005ff997  5e                   pop esi
// 005ff998  c20400               ret 4
// 005ff99b  6a00                 push 0
// 005ff99d  83c001               add eax, 1
// 005ff9a0  50                   push eax
// 005ff9a1  8bce                 mov ecx, esi
// 005ff9a3  e8a8feffff           call 0x5ff850
// 005ff9a8  8b0f                 mov ecx, dword ptr [edi]
// 005ff9aa  8b5604               mov edx, dword ptr [esi + 4]
// 005ff9ad  8b06                 mov eax, dword ptr [esi]
// 005ff9af  5f                   pop edi
// 005ff9b0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005ff9b4  5e                   pop esi
// 005ff9b5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
