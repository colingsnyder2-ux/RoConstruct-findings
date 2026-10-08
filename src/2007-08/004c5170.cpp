// roc 2007-08 004c5170  unit: RakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5170
//
// 004c5170  56                   push esi
// 004c5171  8bf1                 mov esi, ecx
// 004c5173  8b4608               mov eax, dword ptr [esi + 8]
// 004c5176  394604               cmp dword ptr [esi + 4], eax
// 004c5179  57                   push edi
// 004c517a  7554                 jne 0x4c51d0
// 004c517c  85c0                 test eax, eax
// 004c517e  7509                 jne 0x4c5189
// 004c5180  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004c5187  eb05                 jmp 0x4c518e
// 004c5189  03c0                 add eax, eax
// 004c518b  894608               mov dword ptr [esi + 8], eax
// 004c518e  8b4608               mov eax, dword ptr [esi + 8]
// 004c5191  33c9                 xor ecx, ecx
// 004c5193  ba04000000           mov edx, 4
// 004c5198  f7e2                 mul edx
// 004c519a  0f90c1               seto cl
// 004c519d  f7d9                 neg ecx
// 004c519f  0bc8                 or ecx, eax
// 004c51a1  51                   push ecx
// 004c51a2  e84fad1600           call 0x62fef6
// 004c51a7  8bf8                 mov edi, eax
// 004c51a9  33c0                 xor eax, eax
// 004c51ab  83c404               add esp, 4
// 004c51ae  394604               cmp dword ptr [esi + 4], eax
// 004c51b1  7610                 jbe 0x4c51c3
// 004c51b3  8b0e                 mov ecx, dword ptr [esi]
// 004c51b5  8b1481               mov edx, dword ptr [ecx + eax*4]
// 004c51b8  891487               mov dword ptr [edi + eax*4], edx
// 004c51bb  83c001               add eax, 1
// 004c51be  3b4604               cmp eax, dword ptr [esi + 4]
// 004c51c1  72f0                 jb 0x4c51b3
// 004c51c3  8b06                 mov eax, dword ptr [esi]
// 004c51c5  50                   push eax
// 004c51c6  e897aa1600           call 0x62fc62
// 004c51cb  83c404               add esp, 4
// 004c51ce  893e                 mov dword ptr [esi], edi
// 004c51d0  8b4604               mov eax, dword ptr [esi + 4]
// 004c51d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c51d7  3bc2                 cmp eax, edx
// 004c51d9  7417                 je 0x4c51f2
// 004c51db  eb03                 jmp 0x4c51e0
// 004c51dd  8d4900               lea ecx, [ecx]
// 004c51e0  8b0e                 mov ecx, dword ptr [esi]
// 004c51e2  8b7c81fc             mov edi, dword ptr [ecx + eax*4 - 4]
// 004c51e6  8d0c81               lea ecx, [ecx + eax*4]
// 004c51e9  83e801               sub eax, 1
// 004c51ec  3bc2                 cmp eax, edx
// 004c51ee  8939                 mov dword ptr [ecx], edi
// 004c51f0  75ee                 jne 0x4c51e0
// 004c51f2  8b06                 mov eax, dword ptr [esi]
// 004c51f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c51f8  890c90               mov dword ptr [eax + edx*4], ecx
// 004c51fb  83460401             add dword ptr [esi + 4], 1
// 004c51ff  5f                   pop edi
// 004c5200  5e                   pop esi
// 004c5201  c20800               ret 8
// library rbxgs-raknet/DS_Table.cpp (function ?Insert@?$List@PAURow@Table@DataStructures@@@DataStructures@@QAEXQAURow@Table@2@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet DS_Table.cpp
