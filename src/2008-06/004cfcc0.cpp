// roc 2008-06 004cfcc0  unit: RBX::Network::PhysicsSender  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cfcc0
//
// 004cfcc0  6aff                 push -1
// 004cfcc2  683bf47b00           push 0x7bf43b
// 004cfcc7  64a100000000         mov eax, dword ptr fs:[0]
// 004cfccd  50                   push eax
// 004cfcce  64892500000000       mov dword ptr fs:[0], esp
// 004cfcd5  51                   push ecx
// 004cfcd6  56                   push esi
// 004cfcd7  8bf1                 mov esi, ecx
// 004cfcd9  8b4608               mov eax, dword ptr [esi + 8]
// 004cfcdc  394604               cmp dword ptr [esi + 4], eax
// 004cfcdf  0f85bd000000         jne 0x4cfda2
// 004cfce5  85c0                 test eax, eax
// 004cfce7  7509                 jne 0x4cfcf2
// 004cfce9  c7460810000000       mov dword ptr [esi + 8], 0x10
// 004cfcf0  eb05                 jmp 0x4cfcf7
// 004cfcf2  03c0                 add eax, eax
// 004cfcf4  894608               mov dword ptr [esi + 8], eax
// 004cfcf7  55                   push ebp
// 004cfcf8  8b6e08               mov ebp, dword ptr [esi + 8]
// 004cfcfb  33c9                 xor ecx, ecx
// 004cfcfd  8bc5                 mov eax, ebp
// 004cfcff  ba08000000           mov edx, 8
// 004cfd04  f7e2                 mul edx
// 004cfd06  0f90c1               seto cl
// 004cfd09  57                   push edi
// 004cfd0a  f7d9                 neg ecx
// 004cfd0c  0bc8                 or ecx, eax
// 004cfd0e  33c0                 xor eax, eax
// 004cfd10  83c104               add ecx, 4
// 004cfd13  0f92c0               setb al
// 004cfd16  f7d8                 neg eax
// 004cfd18  0bc1                 or eax, ecx
// 004cfd1a  50                   push eax
// 004cfd1b  e8000c1d00           call 0x6a0920
// 004cfd20  83c404               add esp, 4
// 004cfd23  8944240c             mov dword ptr [esp + 0xc], eax
// 004cfd27  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004cfd2f  85c0                 test eax, eax
// 004cfd31  741a                 je 0x4cfd4d
// 004cfd33  6810d44700           push 0x47d410
// 004cfd38  68c0887100           push 0x7188c0
// 004cfd3d  55                   push ebp
// 004cfd3e  8d7804               lea edi, [eax + 4]
// 004cfd41  6a08                 push 8
// 004cfd43  57                   push edi
// 004cfd44  8928                 mov dword ptr [eax], ebp
// 004cfd46  e84d181d00           call 0x6a1598
// 004cfd4b  eb02                 jmp 0x4cfd4f
// 004cfd4d  33ff                 xor edi, edi
// 004cfd4f  833e00               cmp dword ptr [esi], 0
// 004cfd52  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004cfd5a  7442                 je 0x4cfd9e
// 004cfd5c  33c0                 xor eax, eax
// 004cfd5e  394604               cmp dword ptr [esi + 4], eax
// 004cfd61  7616                 jbe 0x4cfd79
// 004cfd63  8b0e                 mov ecx, dword ptr [esi]
// 004cfd65  8b14c1               mov edx, dword ptr [ecx + eax*8]
// 004cfd68  8914c7               mov dword ptr [edi + eax*8], edx
// 004cfd6b  8b4cc104             mov ecx, dword ptr [ecx + eax*8 + 4]
// 004cfd6f  894cc704             mov dword ptr [edi + eax*8 + 4], ecx
// 004cfd73  40                   inc eax
// 004cfd74  3b4604               cmp eax, dword ptr [esi + 4]
// 004cfd77  72ea                 jb 0x4cfd63
// 004cfd79  8b06                 mov eax, dword ptr [esi]
// 004cfd7b  85c0                 test eax, eax
// 004cfd7d  741f                 je 0x4cfd9e
// 004cfd7f  8b50fc               mov edx, dword ptr [eax - 4]
// 004cfd82  53                   push ebx
// 004cfd83  8d58fc               lea ebx, [eax - 4]
// 004cfd86  6810d44700           push 0x47d410
// 004cfd8b  52                   push edx
// 004cfd8c  6a08                 push 8
// 004cfd8e  50                   push eax
// 004cfd8f  e8c7181d00           call 0x6a165b
// 004cfd94  53                   push ebx
// 004cfd95  e8e0081d00           call 0x6a067a
// 004cfd9a  83c404               add esp, 4
// 004cfd9d  5b                   pop ebx
// 004cfd9e  893e                 mov dword ptr [esi], edi
// 004cfda0  5f                   pop edi
// 004cfda1  5d                   pop ebp
// 004cfda2  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cfda5  8b06                 mov eax, dword ptr [esi]
// 004cfda7  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cfdab  8914c8               mov dword ptr [eax + ecx*8], edx
// 004cfdae  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004cfdb2  8954c804             mov dword ptr [eax + ecx*8 + 4], edx
// 004cfdb6  ff4604               inc dword ptr [esi + 4]
// 004cfdb9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cfdbd  5e                   pop esi
// 004cfdbe  64890d00000000       mov dword ptr fs:[0], ecx
// 004cfdc5  83c410               add esp, 0x10
// 004cfdc8  c20800               ret 8
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?Insert@?$List@U?$RangeNode@I@DataStructures@@@DataStructures@@QAEXU?$RangeNode@I@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
