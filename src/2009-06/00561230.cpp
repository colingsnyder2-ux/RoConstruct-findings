// roc 2009-06 00561230  unit: RBX::Mesh::Level  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00561230
//
// 00561230  53                   push ebx
// 00561231  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00561235  55                   push ebp
// 00561236  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0056123a  56                   push esi
// 0056123b  8bf1                 mov esi, ecx
// 0056123d  8b06                 mov eax, dword ptr [esi]
// 0056123f  57                   push edi
// 00561240  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00561244  3bf8                 cmp edi, eax
// 00561246  720e                 jb 0x561256
// 00561248  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056124b  8d1488               lea edx, [eax + ecx*4]
// 0056124e  3bfa                 cmp edi, edx
// 00561250  0f82d8000000         jb 0x56132e
// 00561256  3bd8                 cmp ebx, eax
// 00561258  720e                 jb 0x561268
// 0056125a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056125d  8d1488               lea edx, [eax + ecx*4]
// 00561260  3bda                 cmp ebx, edx
// 00561262  0f82c6000000         jb 0x56132e
// 00561268  3be8                 cmp ebp, eax
// 0056126a  720e                 jb 0x56127a
// 0056126c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056126f  8d1488               lea edx, [eax + ecx*4]
// 00561272  3bea                 cmp ebp, edx
// 00561274  0f82b4000000         jb 0x56132e
// 0056127a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056127e  3bc8                 cmp ecx, eax
// 00561280  720e                 jb 0x561290
// 00561282  8b5604               mov edx, dword ptr [esi + 4]
// 00561285  8d1490               lea edx, [eax + edx*4]
// 00561288  3bca                 cmp ecx, edx
// 0056128a  0f82a2000000         jb 0x561332
// 00561290  8b4e04               mov ecx, dword ptr [esi + 4]
// 00561293  8d5103               lea edx, [ecx + 3]
// 00561296  3b5608               cmp edx, dword ptr [esi + 8]
// 00561299  7d4e                 jge 0x5612e9
// 0056129b  8d0488               lea eax, [eax + ecx*4]
// 0056129e  85c0                 test eax, eax
// 005612a0  7404                 je 0x5612a6
// 005612a2  8b0f                 mov ecx, dword ptr [edi]
// 005612a4  8908                 mov dword ptr [eax], ecx
// 005612a6  8b5604               mov edx, dword ptr [esi + 4]
// 005612a9  8b06                 mov eax, dword ptr [esi]
// 005612ab  8d449004             lea eax, [eax + edx*4 + 4]
// 005612af  85c0                 test eax, eax
// 005612b1  7404                 je 0x5612b7
// 005612b3  8b0b                 mov ecx, dword ptr [ebx]
// 005612b5  8908                 mov dword ptr [eax], ecx
// 005612b7  8b5604               mov edx, dword ptr [esi + 4]
// 005612ba  8b06                 mov eax, dword ptr [esi]
// 005612bc  8d449008             lea eax, [eax + edx*4 + 8]
// 005612c0  85c0                 test eax, eax
// 005612c2  7405                 je 0x5612c9
// 005612c4  8b4d00               mov ecx, dword ptr [ebp]
// 005612c7  8908                 mov dword ptr [eax], ecx
// 005612c9  8b5604               mov edx, dword ptr [esi + 4]
// 005612cc  8b06                 mov eax, dword ptr [esi]
// 005612ce  8d44900c             lea eax, [eax + edx*4 + 0xc]
// 005612d2  85c0                 test eax, eax
// 005612d4  7408                 je 0x5612de
// 005612d6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005612da  8b11                 mov edx, dword ptr [ecx]
// 005612dc  8910                 mov dword ptr [eax], edx
// 005612de  83460404             add dword ptr [esi + 4], 4
// 005612e2  5f                   pop edi
// 005612e3  5e                   pop esi
// 005612e4  5d                   pop ebp
// 005612e5  5b                   pop ebx
// 005612e6  c21000               ret 0x10
// 005612e9  83c104               add ecx, 4
// 005612ec  6a00                 push 0
// 005612ee  51                   push ecx
// 005612ef  8bce                 mov ecx, esi
// 005612f1  e8da91f4ff           call 0x4aa4d0
// 005612f6  8b4604               mov eax, dword ptr [esi + 4]
// 005612f9  8b0e                 mov ecx, dword ptr [esi]
// 005612fb  8b17                 mov edx, dword ptr [edi]
// 005612fd  895481f0             mov dword ptr [ecx + eax*4 - 0x10], edx
// 00561301  8b4604               mov eax, dword ptr [esi + 4]
// 00561304  8b0e                 mov ecx, dword ptr [esi]
// 00561306  8b13                 mov edx, dword ptr [ebx]
// 00561308  895481f4             mov dword ptr [ecx + eax*4 - 0xc], edx
// 0056130c  8b4604               mov eax, dword ptr [esi + 4]
// 0056130f  8b0e                 mov ecx, dword ptr [esi]
// 00561311  8b5500               mov edx, dword ptr [ebp]
// 00561314  895481f8             mov dword ptr [ecx + eax*4 - 8], edx
// 00561318  8b4604               mov eax, dword ptr [esi + 4]
// 0056131b  8b0e                 mov ecx, dword ptr [esi]
// 0056131d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00561321  8b12                 mov edx, dword ptr [edx]
// 00561323  5f                   pop edi
// 00561324  5e                   pop esi
// 00561325  5d                   pop ebp
// 00561326  895481fc             mov dword ptr [ecx + eax*4 - 4], edx
// 0056132a  5b                   pop ebx
// 0056132b  c21000               ret 0x10
// 0056132e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00561332  8b07                 mov eax, dword ptr [edi]
// 00561334  8b13                 mov edx, dword ptr [ebx]
// 00561336  8b09                 mov ecx, dword ptr [ecx]
// 00561338  89442418             mov dword ptr [esp + 0x18], eax
// 0056133c  8b4500               mov eax, dword ptr [ebp]
// 0056133f  8954241c             mov dword ptr [esp + 0x1c], edx
// 00561343  8d542420             lea edx, [esp + 0x20]
// 00561347  52                   push edx
// 00561348  89442418             mov dword ptr [esp + 0x18], eax
// 0056134c  894c2424             mov dword ptr [esp + 0x24], ecx
// 00561350  8d442418             lea eax, [esp + 0x18]
// 00561354  50                   push eax
// 00561355  8d4c2424             lea ecx, [esp + 0x24]
// 00561359  51                   push ecx
// 0056135a  8d542424             lea edx, [esp + 0x24]
// 0056135e  52                   push edx
// 0056135f  8bce                 mov ecx, esi
// 00561361  e8cafeffff           call 0x561230
// 00561366  5f                   pop edi
// 00561367  5e                   pop esi
// 00561368  5d                   pop ebp
// 00561369  5b                   pop ebx
// 0056136a  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?append@?$Array@I@G3D@@QAEXABI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
