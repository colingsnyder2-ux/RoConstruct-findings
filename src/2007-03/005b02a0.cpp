// roc 2007-03 005b02a0  unit: seg_005b0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b02a0
//
// 005b02a0  56                   push esi
// 005b02a1  8bf1                 mov esi, ecx
// 005b02a3  8b4604               mov eax, dword ptr [esi + 4]
// 005b02a6  3b4608               cmp eax, dword ptr [esi + 8]
// 005b02a9  8b0e                 mov ecx, dword ptr [esi]
// 005b02ab  7d17                 jge 0x5b02c4
// 005b02ad  8d0481               lea eax, [ecx + eax*4]
// 005b02b0  85c0                 test eax, eax
// 005b02b2  7408                 je 0x5b02bc
// 005b02b4  8b542408             mov edx, dword ptr [esp + 8]
// 005b02b8  8b0a                 mov ecx, dword ptr [edx]
// 005b02ba  8908                 mov dword ptr [eax], ecx
// 005b02bc  83460401             add dword ptr [esi + 4], 1
// 005b02c0  5e                   pop esi
// 005b02c1  c20400               ret 4
// 005b02c4  57                   push edi
// 005b02c5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b02c9  3bf9                 cmp edi, ecx
// 005b02cb  721e                 jb 0x5b02eb
// 005b02cd  8d1481               lea edx, [ecx + eax*4]
// 005b02d0  3bfa                 cmp edi, edx
// 005b02d2  7317                 jae 0x5b02eb
// 005b02d4  8b07                 mov eax, dword ptr [edi]
// 005b02d6  8d4c240c             lea ecx, [esp + 0xc]
// 005b02da  51                   push ecx
// 005b02db  8bce                 mov ecx, esi
// 005b02dd  89442410             mov dword ptr [esp + 0x10], eax
// 005b02e1  e8baffffff           call 0x5b02a0
// 005b02e6  5f                   pop edi
// 005b02e7  5e                   pop esi
// 005b02e8  c20400               ret 4
// 005b02eb  6a00                 push 0
// 005b02ed  83c001               add eax, 1
// 005b02f0  50                   push eax
// 005b02f1  8bce                 mov ecx, esi
// 005b02f3  e828fcffff           call 0x5aff20
// 005b02f8  8b0f                 mov ecx, dword ptr [edi]
// 005b02fa  8b5604               mov edx, dword ptr [esi + 4]
// 005b02fd  8b06                 mov eax, dword ptr [esi]
// 005b02ff  5f                   pop edi
// 005b0300  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005b0304  5e                   pop esi
// 005b0305  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
