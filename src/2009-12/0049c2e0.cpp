// roc 2009-12 0049c2e0  unit: Ogre::RbxMeshPartAdapter  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049c2e0
//
// 0049c2e0  56                   push esi
// 0049c2e1  8bf1                 mov esi, ecx
// 0049c2e3  8b4604               mov eax, dword ptr [esi + 4]
// 0049c2e6  3b4608               cmp eax, dword ptr [esi + 8]
// 0049c2e9  8b0e                 mov ecx, dword ptr [esi]
// 0049c2eb  7d18                 jge 0x49c305
// 0049c2ed  8d0441               lea eax, [ecx + eax*2]
// 0049c2f0  85c0                 test eax, eax
// 0049c2f2  740a                 je 0x49c2fe
// 0049c2f4  8b542408             mov edx, dword ptr [esp + 8]
// 0049c2f8  668b0a               mov cx, word ptr [edx]
// 0049c2fb  668908               mov word ptr [eax], cx
// 0049c2fe  ff4604               inc dword ptr [esi + 4]
// 0049c301  5e                   pop esi
// 0049c302  c20400               ret 4
// 0049c305  57                   push edi
// 0049c306  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049c30a  3bf9                 cmp edi, ecx
// 0049c30c  721f                 jb 0x49c32d
// 0049c30e  8d1441               lea edx, [ecx + eax*2]
// 0049c311  3bfa                 cmp edi, edx
// 0049c313  7318                 jae 0x49c32d
// 0049c315  0fb707               movzx eax, word ptr [edi]
// 0049c318  8d4c240c             lea ecx, [esp + 0xc]
// 0049c31c  51                   push ecx
// 0049c31d  8bce                 mov ecx, esi
// 0049c31f  89442410             mov dword ptr [esp + 0x10], eax
// 0049c323  e8b8ffffff           call 0x49c2e0
// 0049c328  5f                   pop edi
// 0049c329  5e                   pop esi
// 0049c32a  c20400               ret 4
// 0049c32d  6a00                 push 0
// 0049c32f  40                   inc eax
// 0049c330  50                   push eax
// 0049c331  8bce                 mov ecx, esi
// 0049c333  e8e8e7ffff           call 0x49ab20
// 0049c338  668b0f               mov cx, word ptr [edi]
// 0049c33b  8b5604               mov edx, dword ptr [esi + 4]
// 0049c33e  8b06                 mov eax, dword ptr [esi]
// 0049c340  5f                   pop edi
// 0049c341  66894c50fe           mov word ptr [eax + edx*2 - 2], cx
// 0049c346  5e                   pop esi
// 0049c347  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\UserInput.cpp (function ?append@?$Array@G@G3D@@QAEXABG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/UserInput.cpp
