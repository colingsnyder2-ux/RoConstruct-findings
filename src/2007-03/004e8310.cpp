// roc 2007-03 004e8310  unit: seg_004e0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8310
//
// 004e8310  56                   push esi
// 004e8311  8bf1                 mov esi, ecx
// 004e8313  8b4604               mov eax, dword ptr [esi + 4]
// 004e8316  3b4608               cmp eax, dword ptr [esi + 8]
// 004e8319  8b0e                 mov ecx, dword ptr [esi]
// 004e831b  7d17                 jge 0x4e8334
// 004e831d  8d0481               lea eax, [ecx + eax*4]
// 004e8320  85c0                 test eax, eax
// 004e8322  7408                 je 0x4e832c
// 004e8324  8b542408             mov edx, dword ptr [esp + 8]
// 004e8328  8b0a                 mov ecx, dword ptr [edx]
// 004e832a  8908                 mov dword ptr [eax], ecx
// 004e832c  83460401             add dword ptr [esi + 4], 1
// 004e8330  5e                   pop esi
// 004e8331  c20400               ret 4
// 004e8334  57                   push edi
// 004e8335  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e8339  3bf9                 cmp edi, ecx
// 004e833b  721e                 jb 0x4e835b
// 004e833d  8d1481               lea edx, [ecx + eax*4]
// 004e8340  3bfa                 cmp edi, edx
// 004e8342  7317                 jae 0x4e835b
// 004e8344  8b07                 mov eax, dword ptr [edi]
// 004e8346  8d4c240c             lea ecx, [esp + 0xc]
// 004e834a  51                   push ecx
// 004e834b  8bce                 mov ecx, esi
// 004e834d  89442410             mov dword ptr [esp + 0x10], eax
// 004e8351  e8baffffff           call 0x4e8310
// 004e8356  5f                   pop edi
// 004e8357  5e                   pop esi
// 004e8358  c20400               ret 4
// 004e835b  6a00                 push 0
// 004e835d  83c001               add eax, 1
// 004e8360  50                   push eax
// 004e8361  8bce                 mov ecx, esi
// 004e8363  e8b82cf9ff           call 0x47b020
// 004e8368  8b0f                 mov ecx, dword ptr [edi]
// 004e836a  8b5604               mov edx, dword ptr [esi + 4]
// 004e836d  8b06                 mov eax, dword ptr [esi]
// 004e836f  5f                   pop edi
// 004e8370  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 004e8374  5e                   pop esi
// 004e8375  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
