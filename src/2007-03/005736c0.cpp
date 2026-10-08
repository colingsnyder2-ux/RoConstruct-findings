// roc 2007-03 005736c0  unit: seg_00570000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005736c0
//
// 005736c0  56                   push esi
// 005736c1  8bf1                 mov esi, ecx
// 005736c3  8b4604               mov eax, dword ptr [esi + 4]
// 005736c6  3b4608               cmp eax, dword ptr [esi + 8]
// 005736c9  8b0e                 mov ecx, dword ptr [esi]
// 005736cb  7d17                 jge 0x5736e4
// 005736cd  8d0481               lea eax, [ecx + eax*4]
// 005736d0  85c0                 test eax, eax
// 005736d2  7408                 je 0x5736dc
// 005736d4  8b542408             mov edx, dword ptr [esp + 8]
// 005736d8  8b0a                 mov ecx, dword ptr [edx]
// 005736da  8908                 mov dword ptr [eax], ecx
// 005736dc  83460401             add dword ptr [esi + 4], 1
// 005736e0  5e                   pop esi
// 005736e1  c20400               ret 4
// 005736e4  57                   push edi
// 005736e5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005736e9  3bf9                 cmp edi, ecx
// 005736eb  721e                 jb 0x57370b
// 005736ed  8d1481               lea edx, [ecx + eax*4]
// 005736f0  3bfa                 cmp edi, edx
// 005736f2  7317                 jae 0x57370b
// 005736f4  8b07                 mov eax, dword ptr [edi]
// 005736f6  8d4c240c             lea ecx, [esp + 0xc]
// 005736fa  51                   push ecx
// 005736fb  8bce                 mov ecx, esi
// 005736fd  89442410             mov dword ptr [esp + 0x10], eax
// 00573701  e8baffffff           call 0x5736c0
// 00573706  5f                   pop edi
// 00573707  5e                   pop esi
// 00573708  c20400               ret 4
// 0057370b  6a00                 push 0
// 0057370d  83c001               add eax, 1
// 00573710  50                   push eax
// 00573711  8bce                 mov ecx, esi
// 00573713  e848f7ffff           call 0x572e60
// 00573718  8b0f                 mov ecx, dword ptr [edi]
// 0057371a  8b5604               mov edx, dword ptr [esi + 4]
// 0057371d  8b06                 mov eax, dword ptr [esi]
// 0057371f  5f                   pop edi
// 00573720  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00573724  5e                   pop esi
// 00573725  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
