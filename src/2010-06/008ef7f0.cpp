// from server: 100% by auto
// roc 2010-06 008ef7f0  unit: Ogre::RbxMeshPartAdapter  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ef7f0
//
// 008ef7f0  56                   push esi
// 008ef7f1  8bf1                 mov esi, ecx
// 008ef7f3  8b4604               mov eax, dword ptr [esi + 4]
// 008ef7f6  3b4608               cmp eax, dword ptr [esi + 8]
// 008ef7f9  8b0e                 mov ecx, dword ptr [esi]
// 008ef7fb  7d18                 jge 0x8ef815
// 008ef7fd  8d0441               lea eax, [ecx + eax*2]
// 008ef800  85c0                 test eax, eax
// 008ef802  740a                 je 0x8ef80e
// 008ef804  8b542408             mov edx, dword ptr [esp + 8]
// 008ef808  668b0a               mov cx, word ptr [edx]
// 008ef80b  668908               mov word ptr [eax], cx
// 008ef80e  ff4604               inc dword ptr [esi + 4]
// 008ef811  5e                   pop esi
// 008ef812  c20400               ret 4
// 008ef815  57                   push edi
// 008ef816  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008ef81a  3bf9                 cmp edi, ecx
// 008ef81c  721f                 jb 0x8ef83d
// 008ef81e  8d1441               lea edx, [ecx + eax*2]
// 008ef821  3bfa                 cmp edi, edx
// 008ef823  7318                 jae 0x8ef83d
// 008ef825  0fb707               movzx eax, word ptr [edi]
// 008ef828  8d4c240c             lea ecx, [esp + 0xc]
// 008ef82c  51                   push ecx
// 008ef82d  8bce                 mov ecx, esi
// 008ef82f  89442410             mov dword ptr [esp + 0x10], eax
// 008ef833  e8b8ffffff           call 0x8ef7f0
// 008ef838  5f                   pop edi
// 008ef839  5e                   pop esi
// 008ef83a  c20400               ret 4
// 008ef83d  6a00                 push 0
// 008ef83f  40                   inc eax
// 008ef840  50                   push eax
// 008ef841  8bce                 mov ecx, esi
// 008ef843  e8683bbaff           call 0x4933b0
// 008ef848  668b0f               mov cx, word ptr [edi]
// 008ef84b  8b5604               mov edx, dword ptr [esi + 4]
// 008ef84e  8b06                 mov eax, dword ptr [esi]
// 008ef850  5f                   pop edi
// 008ef851  66894c50fe           mov word ptr [eax + edx*2 - 2], cx
// 008ef856  5e                   pop esi
// 008ef857  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\UserInput.cpp (function ?append@?$Array@G@G3D@@QAEXABG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/UserInput.cpp
