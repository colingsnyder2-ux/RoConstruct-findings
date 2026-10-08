// roc 2007-03 005c7f50  unit: seg_005c0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c7f50
//
// 005c7f50  56                   push esi
// 005c7f51  8bf1                 mov esi, ecx
// 005c7f53  8b4604               mov eax, dword ptr [esi + 4]
// 005c7f56  3b4608               cmp eax, dword ptr [esi + 8]
// 005c7f59  8b0e                 mov ecx, dword ptr [esi]
// 005c7f5b  7d17                 jge 0x5c7f74
// 005c7f5d  8d0481               lea eax, [ecx + eax*4]
// 005c7f60  85c0                 test eax, eax
// 005c7f62  7408                 je 0x5c7f6c
// 005c7f64  8b542408             mov edx, dword ptr [esp + 8]
// 005c7f68  8b0a                 mov ecx, dword ptr [edx]
// 005c7f6a  8908                 mov dword ptr [eax], ecx
// 005c7f6c  83460401             add dword ptr [esi + 4], 1
// 005c7f70  5e                   pop esi
// 005c7f71  c20400               ret 4
// 005c7f74  57                   push edi
// 005c7f75  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005c7f79  3bf9                 cmp edi, ecx
// 005c7f7b  721e                 jb 0x5c7f9b
// 005c7f7d  8d1481               lea edx, [ecx + eax*4]
// 005c7f80  3bfa                 cmp edi, edx
// 005c7f82  7317                 jae 0x5c7f9b
// 005c7f84  8b07                 mov eax, dword ptr [edi]
// 005c7f86  8d4c240c             lea ecx, [esp + 0xc]
// 005c7f8a  51                   push ecx
// 005c7f8b  8bce                 mov ecx, esi
// 005c7f8d  89442410             mov dword ptr [esp + 0x10], eax
// 005c7f91  e8baffffff           call 0x5c7f50
// 005c7f96  5f                   pop edi
// 005c7f97  5e                   pop esi
// 005c7f98  c20400               ret 4
// 005c7f9b  6a00                 push 0
// 005c7f9d  83c001               add eax, 1
// 005c7fa0  50                   push eax
// 005c7fa1  8bce                 mov ecx, esi
// 005c7fa3  e808fdffff           call 0x5c7cb0
// 005c7fa8  8b0f                 mov ecx, dword ptr [edi]
// 005c7faa  8b5604               mov edx, dword ptr [esi + 4]
// 005c7fad  8b06                 mov eax, dword ptr [esi]
// 005c7faf  5f                   pop edi
// 005c7fb0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005c7fb4  5e                   pop esi
// 005c7fb5  c20400               ret 4
// library rbxgs/tool\DragUtilities.cpp (function ?append@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
