// roc 2007-03 005a3480  unit: seg_005a0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a3480
//
// 005a3480  56                   push esi
// 005a3481  8bf1                 mov esi, ecx
// 005a3483  8b4604               mov eax, dword ptr [esi + 4]
// 005a3486  3b4608               cmp eax, dword ptr [esi + 8]
// 005a3489  8b0e                 mov ecx, dword ptr [esi]
// 005a348b  7d17                 jge 0x5a34a4
// 005a348d  8d0481               lea eax, [ecx + eax*4]
// 005a3490  85c0                 test eax, eax
// 005a3492  7408                 je 0x5a349c
// 005a3494  8b542408             mov edx, dword ptr [esp + 8]
// 005a3498  8b0a                 mov ecx, dword ptr [edx]
// 005a349a  8908                 mov dword ptr [eax], ecx
// 005a349c  83460401             add dword ptr [esi + 4], 1
// 005a34a0  5e                   pop esi
// 005a34a1  c20400               ret 4
// 005a34a4  57                   push edi
// 005a34a5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a34a9  3bf9                 cmp edi, ecx
// 005a34ab  721e                 jb 0x5a34cb
// 005a34ad  8d1481               lea edx, [ecx + eax*4]
// 005a34b0  3bfa                 cmp edi, edx
// 005a34b2  7317                 jae 0x5a34cb
// 005a34b4  8b07                 mov eax, dword ptr [edi]
// 005a34b6  8d4c240c             lea ecx, [esp + 0xc]
// 005a34ba  51                   push ecx
// 005a34bb  8bce                 mov ecx, esi
// 005a34bd  89442410             mov dword ptr [esp + 0x10], eax
// 005a34c1  e8baffffff           call 0x5a3480
// 005a34c6  5f                   pop edi
// 005a34c7  5e                   pop esi
// 005a34c8  c20400               ret 4
// 005a34cb  6a00                 push 0
// 005a34cd  83c001               add eax, 1
// 005a34d0  50                   push eax
// 005a34d1  8bce                 mov ecx, esi
// 005a34d3  e818fbffff           call 0x5a2ff0
// 005a34d8  8b0f                 mov ecx, dword ptr [edi]
// 005a34da  8b5604               mov edx, dword ptr [esi + 4]
// 005a34dd  8b06                 mov eax, dword ptr [esi]
// 005a34df  5f                   pop edi
// 005a34e0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005a34e4  5e                   pop esi
// 005a34e5  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
