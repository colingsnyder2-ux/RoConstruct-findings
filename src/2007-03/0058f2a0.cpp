// roc 2007-03 0058f2a0  unit: seg_00580000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058f2a0
//
// 0058f2a0  56                   push esi
// 0058f2a1  8bf1                 mov esi, ecx
// 0058f2a3  8b4604               mov eax, dword ptr [esi + 4]
// 0058f2a6  3b4608               cmp eax, dword ptr [esi + 8]
// 0058f2a9  8b0e                 mov ecx, dword ptr [esi]
// 0058f2ab  7d17                 jge 0x58f2c4
// 0058f2ad  8d0481               lea eax, [ecx + eax*4]
// 0058f2b0  85c0                 test eax, eax
// 0058f2b2  7408                 je 0x58f2bc
// 0058f2b4  8b542408             mov edx, dword ptr [esp + 8]
// 0058f2b8  8b0a                 mov ecx, dword ptr [edx]
// 0058f2ba  8908                 mov dword ptr [eax], ecx
// 0058f2bc  83460401             add dword ptr [esi + 4], 1
// 0058f2c0  5e                   pop esi
// 0058f2c1  c20400               ret 4
// 0058f2c4  57                   push edi
// 0058f2c5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0058f2c9  3bf9                 cmp edi, ecx
// 0058f2cb  721e                 jb 0x58f2eb
// 0058f2cd  8d1481               lea edx, [ecx + eax*4]
// 0058f2d0  3bfa                 cmp edi, edx
// 0058f2d2  7317                 jae 0x58f2eb
// 0058f2d4  8b07                 mov eax, dword ptr [edi]
// 0058f2d6  8d4c240c             lea ecx, [esp + 0xc]
// 0058f2da  51                   push ecx
// 0058f2db  8bce                 mov ecx, esi
// 0058f2dd  89442410             mov dword ptr [esp + 0x10], eax
// 0058f2e1  e8baffffff           call 0x58f2a0
// 0058f2e6  5f                   pop edi
// 0058f2e7  5e                   pop esi
// 0058f2e8  c20400               ret 4
// 0058f2eb  6a00                 push 0
// 0058f2ed  83c001               add eax, 1
// 0058f2f0  50                   push eax
// 0058f2f1  8bce                 mov ecx, esi
// 0058f2f3  e8a8fbffff           call 0x58eea0
// 0058f2f8  8b0f                 mov ecx, dword ptr [edi]
// 0058f2fa  8b5604               mov edx, dword ptr [esi + 4]
// 0058f2fd  8b06                 mov eax, dword ptr [esi]
// 0058f2ff  5f                   pop edi
// 0058f300  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0058f304  5e                   pop esi
// 0058f305  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
