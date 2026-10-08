// roc 2008-06 004cf380  unit: RBX::Network::PhysicsSender  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cf380
//
// 004cf380  56                   push esi
// 004cf381  8bf1                 mov esi, ecx
// 004cf383  8b4608               mov eax, dword ptr [esi + 8]
// 004cf386  57                   push edi
// 004cf387  394604               cmp dword ptr [esi + 4], eax
// 004cf38a  7552                 jne 0x4cf3de
// 004cf38c  85c0                 test eax, eax
// 004cf38e  7509                 jne 0x4cf399
// 004cf390  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004cf397  eb05                 jmp 0x4cf39e
// 004cf399  03c0                 add eax, eax
// 004cf39b  894608               mov dword ptr [esi + 8], eax
// 004cf39e  8b4608               mov eax, dword ptr [esi + 8]
// 004cf3a1  33c9                 xor ecx, ecx
// 004cf3a3  ba04000000           mov edx, 4
// 004cf3a8  f7e2                 mul edx
// 004cf3aa  0f90c1               seto cl
// 004cf3ad  f7d9                 neg ecx
// 004cf3af  0bc8                 or ecx, eax
// 004cf3b1  51                   push ecx
// 004cf3b2  e869151d00           call 0x6a0920
// 004cf3b7  8bf8                 mov edi, eax
// 004cf3b9  33c0                 xor eax, eax
// 004cf3bb  83c404               add esp, 4
// 004cf3be  394604               cmp dword ptr [esi + 4], eax
// 004cf3c1  760e                 jbe 0x4cf3d1
// 004cf3c3  8b0e                 mov ecx, dword ptr [esi]
// 004cf3c5  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004cf3c8  891487               mov dword ptr [edi + eax*4], edx
// 004cf3cb  40                   inc eax
// 004cf3cc  3b4604               cmp eax, dword ptr [esi + 4]
// 004cf3cf  72f2                 jb 0x4cf3c3
// 004cf3d1  8b06                 mov eax, dword ptr [esi]
// 004cf3d3  50                   push eax
// 004cf3d4  e8a1121d00           call 0x6a067a
// 004cf3d9  83c404               add esp, 4
// 004cf3dc  893e                 mov dword ptr [esi], edi
// 004cf3de  8b4604               mov eax, dword ptr [esi + 4]
// 004cf3e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cf3e5  3bc2                 cmp eax, edx
// 004cf3e7  7417                 je 0x4cf400
// 004cf3e9  8da42400000000       lea esp, [esp]
// 004cf3f0  8b0e                 mov ecx, dword ptr [esi]
// 004cf3f2  8b7c81fc             mov edi, dword ptr [ecx + eax*4 - 4]
// 004cf3f6  8d0c81               lea ecx, [ecx + eax*4]
// 004cf3f9  48                   dec eax
// 004cf3fa  8939                 mov dword ptr [ecx], edi
// 004cf3fc  3bc2                 cmp eax, edx
// 004cf3fe  75f0                 jne 0x4cf3f0
// 004cf400  8b06                 mov eax, dword ptr [esi]
// 004cf402  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cf406  890c90               mov dword ptr [eax + edx*4], ecx
// 004cf409  ff4604               inc dword ptr [esi + 4]
// 004cf40c  5f                   pop edi
// 004cf40d  5e                   pop esi
// 004cf40e  c20800               ret 8
// library rbxgs-raknet/DS_Table.cpp (function ?Insert@?$List@PAURow@Table@DataStructures@@@DataStructures@@QAEXQAURow@Table@2@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp
