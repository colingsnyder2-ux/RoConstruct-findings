// roc 2007-03 0061c4e0  unit: seg_00610000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061c4e0
//
// 0061c4e0  56                   push esi
// 0061c4e1  8bf1                 mov esi, ecx
// 0061c4e3  8b4604               mov eax, dword ptr [esi + 4]
// 0061c4e6  3b4608               cmp eax, dword ptr [esi + 8]
// 0061c4e9  8b0e                 mov ecx, dword ptr [esi]
// 0061c4eb  7d17                 jge 0x61c504
// 0061c4ed  8d0481               lea eax, [ecx + eax*4]
// 0061c4f0  85c0                 test eax, eax
// 0061c4f2  7408                 je 0x61c4fc
// 0061c4f4  8b542408             mov edx, dword ptr [esp + 8]
// 0061c4f8  8b0a                 mov ecx, dword ptr [edx]
// 0061c4fa  8908                 mov dword ptr [eax], ecx
// 0061c4fc  83460401             add dword ptr [esi + 4], 1
// 0061c500  5e                   pop esi
// 0061c501  c20400               ret 4
// 0061c504  57                   push edi
// 0061c505  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061c509  3bf9                 cmp edi, ecx
// 0061c50b  721e                 jb 0x61c52b
// 0061c50d  8d1481               lea edx, [ecx + eax*4]
// 0061c510  3bfa                 cmp edi, edx
// 0061c512  7317                 jae 0x61c52b
// 0061c514  8b07                 mov eax, dword ptr [edi]
// 0061c516  8d4c240c             lea ecx, [esp + 0xc]
// 0061c51a  51                   push ecx
// 0061c51b  8bce                 mov ecx, esi
// 0061c51d  89442410             mov dword ptr [esp + 0x10], eax
// 0061c521  e8baffffff           call 0x61c4e0
// 0061c526  5f                   pop edi
// 0061c527  5e                   pop esi
// 0061c528  c20400               ret 4
// 0061c52b  6a00                 push 0
// 0061c52d  83c001               add eax, 1
// 0061c530  50                   push eax
// 0061c531  8bce                 mov ecx, esi
// 0061c533  e818ebf5ff           call 0x57b050
// 0061c538  8b0f                 mov ecx, dword ptr [edi]
// 0061c53a  8b5604               mov edx, dword ptr [esi + 4]
// 0061c53d  8b06                 mov eax, dword ptr [esi]
// 0061c53f  5f                   pop edi
// 0061c540  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0061c544  5e                   pop esi
// 0061c545  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
