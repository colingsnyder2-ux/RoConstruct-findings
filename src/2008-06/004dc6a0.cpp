// roc 2008-06 004dc6a0  unit: RBX::ViewNew::ViewG3D  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc6a0
//
// 004dc6a0  53                   push ebx
// 004dc6a1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004dc6a5  55                   push ebp
// 004dc6a6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004dc6aa  56                   push esi
// 004dc6ab  8bf1                 mov esi, ecx
// 004dc6ad  8b06                 mov eax, dword ptr [esi]
// 004dc6af  57                   push edi
// 004dc6b0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004dc6b4  3bf8                 cmp edi, eax
// 004dc6b6  720e                 jb 0x4dc6c6
// 004dc6b8  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dc6bb  8d1488               lea edx, [eax + ecx*4]
// 004dc6be  3bfa                 cmp edi, edx
// 004dc6c0  0f82d8000000         jb 0x4dc79e
// 004dc6c6  3bd8                 cmp ebx, eax
// 004dc6c8  720e                 jb 0x4dc6d8
// 004dc6ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dc6cd  8d1488               lea edx, [eax + ecx*4]
// 004dc6d0  3bda                 cmp ebx, edx
// 004dc6d2  0f82c6000000         jb 0x4dc79e
// 004dc6d8  3be8                 cmp ebp, eax
// 004dc6da  720e                 jb 0x4dc6ea
// 004dc6dc  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dc6df  8d1488               lea edx, [eax + ecx*4]
// 004dc6e2  3bea                 cmp ebp, edx
// 004dc6e4  0f82b4000000         jb 0x4dc79e
// 004dc6ea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dc6ee  3bc8                 cmp ecx, eax
// 004dc6f0  720e                 jb 0x4dc700
// 004dc6f2  8b5604               mov edx, dword ptr [esi + 4]
// 004dc6f5  8d1490               lea edx, [eax + edx*4]
// 004dc6f8  3bca                 cmp ecx, edx
// 004dc6fa  0f82a2000000         jb 0x4dc7a2
// 004dc700  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dc703  8d5103               lea edx, [ecx + 3]
// 004dc706  3b5608               cmp edx, dword ptr [esi + 8]
// 004dc709  7d4e                 jge 0x4dc759
// 004dc70b  8d0488               lea eax, [eax + ecx*4]
// 004dc70e  85c0                 test eax, eax
// 004dc710  7404                 je 0x4dc716
// 004dc712  8b0f                 mov ecx, dword ptr [edi]
// 004dc714  8908                 mov dword ptr [eax], ecx
// 004dc716  8b5604               mov edx, dword ptr [esi + 4]
// 004dc719  8b06                 mov eax, dword ptr [esi]
// 004dc71b  8d449004             lea eax, [eax + edx*4 + 4]
// 004dc71f  85c0                 test eax, eax
// 004dc721  7404                 je 0x4dc727
// 004dc723  8b0b                 mov ecx, dword ptr [ebx]
// 004dc725  8908                 mov dword ptr [eax], ecx
// 004dc727  8b5604               mov edx, dword ptr [esi + 4]
// 004dc72a  8b06                 mov eax, dword ptr [esi]
// 004dc72c  8d449008             lea eax, [eax + edx*4 + 8]
// 004dc730  85c0                 test eax, eax
// 004dc732  7405                 je 0x4dc739
// 004dc734  8b4d00               mov ecx, dword ptr [ebp]
// 004dc737  8908                 mov dword ptr [eax], ecx
// 004dc739  8b5604               mov edx, dword ptr [esi + 4]
// 004dc73c  8b06                 mov eax, dword ptr [esi]
// 004dc73e  8d44900c             lea eax, [eax + edx*4 + 0xc]
// 004dc742  85c0                 test eax, eax
// 004dc744  7408                 je 0x4dc74e
// 004dc746  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dc74a  8b11                 mov edx, dword ptr [ecx]
// 004dc74c  8910                 mov dword ptr [eax], edx
// 004dc74e  83460404             add dword ptr [esi + 4], 4
// 004dc752  5f                   pop edi
// 004dc753  5e                   pop esi
// 004dc754  5d                   pop ebp
// 004dc755  5b                   pop ebx
// 004dc756  c21000               ret 0x10
// 004dc759  83c104               add ecx, 4
// 004dc75c  6a00                 push 0
// 004dc75e  51                   push ecx
// 004dc75f  8bce                 mov ecx, esi
// 004dc761  e84a3efaff           call 0x4805b0
// 004dc766  8b4604               mov eax, dword ptr [esi + 4]
// 004dc769  8b0e                 mov ecx, dword ptr [esi]
// 004dc76b  8b17                 mov edx, dword ptr [edi]
// 004dc76d  895481f0             mov dword ptr [ecx + eax*4 - 0x10], edx
// 004dc771  8b4604               mov eax, dword ptr [esi + 4]
// 004dc774  8b0e                 mov ecx, dword ptr [esi]
// 004dc776  8b13                 mov edx, dword ptr [ebx]
// 004dc778  895481f4             mov dword ptr [ecx + eax*4 - 0xc], edx
// 004dc77c  8b4604               mov eax, dword ptr [esi + 4]
// 004dc77f  8b0e                 mov ecx, dword ptr [esi]
// 004dc781  8b5500               mov edx, dword ptr [ebp]
// 004dc784  895481f8             mov dword ptr [ecx + eax*4 - 8], edx
// 004dc788  8b4604               mov eax, dword ptr [esi + 4]
// 004dc78b  8b0e                 mov ecx, dword ptr [esi]
// 004dc78d  8b542420             mov edx, dword ptr [esp + 0x20]
// 004dc791  8b12                 mov edx, dword ptr [edx]
// 004dc793  5f                   pop edi
// 004dc794  5e                   pop esi
// 004dc795  5d                   pop ebp
// 004dc796  895481fc             mov dword ptr [ecx + eax*4 - 4], edx
// 004dc79a  5b                   pop ebx
// 004dc79b  c21000               ret 0x10
// 004dc79e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004dc7a2  8b07                 mov eax, dword ptr [edi]
// 004dc7a4  8b13                 mov edx, dword ptr [ebx]
// 004dc7a6  8b09                 mov ecx, dword ptr [ecx]
// 004dc7a8  89442418             mov dword ptr [esp + 0x18], eax
// 004dc7ac  8b4500               mov eax, dword ptr [ebp]
// 004dc7af  8954241c             mov dword ptr [esp + 0x1c], edx
// 004dc7b3  8d542420             lea edx, [esp + 0x20]
// 004dc7b7  52                   push edx
// 004dc7b8  89442418             mov dword ptr [esp + 0x18], eax
// 004dc7bc  894c2424             mov dword ptr [esp + 0x24], ecx
// 004dc7c0  8d442418             lea eax, [esp + 0x18]
// 004dc7c4  50                   push eax
// 004dc7c5  8d4c2424             lea ecx, [esp + 0x24]
// 004dc7c9  51                   push ecx
// 004dc7ca  8d542424             lea edx, [esp + 0x24]
// 004dc7ce  52                   push edx
// 004dc7cf  8bce                 mov ecx, esi
// 004dc7d1  e8cafeffff           call 0x4dc6a0
// 004dc7d6  5f                   pop edi
// 004dc7d7  5e                   pop esi
// 004dc7d8  5d                   pop ebp
// 004dc7d9  5b                   pop ebx
// 004dc7da  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?append@?$Array@I@G3D@@QAEXABI000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
