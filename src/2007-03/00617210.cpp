// roc 2007-03 00617210  unit: seg_00610000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00617210
//
// 00617210  56                   push esi
// 00617211  8bf1                 mov esi, ecx
// 00617213  8b4604               mov eax, dword ptr [esi + 4]
// 00617216  3b4608               cmp eax, dword ptr [esi + 8]
// 00617219  8b0e                 mov ecx, dword ptr [esi]
// 0061721b  7d17                 jge 0x617234
// 0061721d  8d0481               lea eax, [ecx + eax*4]
// 00617220  85c0                 test eax, eax
// 00617222  7408                 je 0x61722c
// 00617224  8b542408             mov edx, dword ptr [esp + 8]
// 00617228  8b0a                 mov ecx, dword ptr [edx]
// 0061722a  8908                 mov dword ptr [eax], ecx
// 0061722c  83460401             add dword ptr [esi + 4], 1
// 00617230  5e                   pop esi
// 00617231  c20400               ret 4
// 00617234  57                   push edi
// 00617235  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00617239  3bf9                 cmp edi, ecx
// 0061723b  721e                 jb 0x61725b
// 0061723d  8d1481               lea edx, [ecx + eax*4]
// 00617240  3bfa                 cmp edi, edx
// 00617242  7317                 jae 0x61725b
// 00617244  8b07                 mov eax, dword ptr [edi]
// 00617246  8d4c240c             lea ecx, [esp + 0xc]
// 0061724a  51                   push ecx
// 0061724b  8bce                 mov ecx, esi
// 0061724d  89442410             mov dword ptr [esp + 0x10], eax
// 00617251  e8baffffff           call 0x617210
// 00617256  5f                   pop edi
// 00617257  5e                   pop esi
// 00617258  c20400               ret 4
// 0061725b  6a00                 push 0
// 0061725d  83c001               add eax, 1
// 00617260  50                   push eax
// 00617261  8bce                 mov ecx, esi
// 00617263  e8c8fbffff           call 0x616e30
// 00617268  8b0f                 mov ecx, dword ptr [edi]
// 0061726a  8b5604               mov edx, dword ptr [esi + 4]
// 0061726d  8b06                 mov eax, dword ptr [esi]
// 0061726f  5f                   pop edi
// 00617270  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00617274  5e                   pop esi
// 00617275  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
