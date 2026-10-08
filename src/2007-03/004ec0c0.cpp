// roc 2007-03 004ec0c0  unit: seg_004e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ec0c0
//
// 004ec0c0  56                   push esi
// 004ec0c1  8bf1                 mov esi, ecx
// 004ec0c3  8b4604               mov eax, dword ptr [esi + 4]
// 004ec0c6  3b4608               cmp eax, dword ptr [esi + 8]
// 004ec0c9  8b0e                 mov ecx, dword ptr [esi]
// 004ec0cb  7d17                 jge 0x4ec0e4
// 004ec0cd  8d0481               lea eax, [ecx + eax*4]
// 004ec0d0  85c0                 test eax, eax
// 004ec0d2  7408                 je 0x4ec0dc
// 004ec0d4  8b542408             mov edx, dword ptr [esp + 8]
// 004ec0d8  8b0a                 mov ecx, dword ptr [edx]
// 004ec0da  8908                 mov dword ptr [eax], ecx
// 004ec0dc  83460401             add dword ptr [esi + 4], 1
// 004ec0e0  5e                   pop esi
// 004ec0e1  c20400               ret 4
// 004ec0e4  57                   push edi
// 004ec0e5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ec0e9  3bf9                 cmp edi, ecx
// 004ec0eb  721e                 jb 0x4ec10b
// 004ec0ed  8d1481               lea edx, [ecx + eax*4]
// 004ec0f0  3bfa                 cmp edi, edx
// 004ec0f2  7317                 jae 0x4ec10b
// 004ec0f4  8b07                 mov eax, dword ptr [edi]
// 004ec0f6  8d4c240c             lea ecx, [esp + 0xc]
// 004ec0fa  51                   push ecx
// 004ec0fb  8bce                 mov ecx, esi
// 004ec0fd  89442410             mov dword ptr [esp + 0x10], eax
// 004ec101  e8baffffff           call 0x4ec0c0
// 004ec106  5f                   pop edi
// 004ec107  5e                   pop esi
// 004ec108  c20400               ret 4
// 004ec10b  6a00                 push 0
// 004ec10d  83c001               add eax, 1
// 004ec110  50                   push eax
// 004ec111  8bce                 mov ecx, esi
// 004ec113  e848f8ffff           call 0x4eb960
// 004ec118  8b0f                 mov ecx, dword ptr [edi]
// 004ec11a  8b5604               mov edx, dword ptr [esi + 4]
// 004ec11d  8b06                 mov eax, dword ptr [esi]
// 004ec11f  5f                   pop edi
// 004ec120  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004ec124  5e                   pop esi
// 004ec125  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
