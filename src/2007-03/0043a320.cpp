// roc 2007-03 0043a320  unit: seg_00430000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043a320
//
// 0043a320  56                   push esi
// 0043a321  57                   push edi
// 0043a322  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043a326  8bf1                 mov esi, ecx
// 0043a328  3bf7                 cmp esi, edi
// 0043a32a  0f840e010000         je 0x43a43e
// 0043a330  53                   push ebx
// 0043a331  8b5f04               mov ebx, dword ptr [edi + 4]
// 0043a334  85db                 test ebx, ebx
// 0043a336  55                   push ebp
// 0043a337  740c                 je 0x43a345
// 0043a339  8b6f08               mov ebp, dword ptr [edi + 8]
// 0043a33c  8bd5                 mov edx, ebp
// 0043a33e  2bd3                 sub edx, ebx
// 0043a340  c1fa02               sar edx, 2
// 0043a343  750e                 jne 0x43a353
// 0043a345  e8c6f8ffff           call 0x439c10
// 0043a34a  5d                   pop ebp
// 0043a34b  5b                   pop ebx
// 0043a34c  5f                   pop edi
// 0043a34d  8bc6                 mov eax, esi
// 0043a34f  5e                   pop esi
// 0043a350  c20400               ret 4
// 0043a353  8b4604               mov eax, dword ptr [esi + 4]
// 0043a356  85c0                 test eax, eax
// 0043a358  7504                 jne 0x43a35e
// 0043a35a  33c9                 xor ecx, ecx
// 0043a35c  eb08                 jmp 0x43a366
// 0043a35e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0043a361  2bc8                 sub ecx, eax
// 0043a363  c1f902               sar ecx, 2
// 0043a366  3bd1                 cmp edx, ecx
// 0043a368  7740                 ja 0x43a3aa
// 0043a36a  50                   push eax
// 0043a36b  55                   push ebp
// 0043a36c  53                   push ebx
// 0043a36d  e80ef4ffff           call 0x439780
// 0043a372  8b4704               mov eax, dword ptr [edi + 4]
// 0043a375  83c40c               add esp, 0xc
// 0043a378  85c0                 test eax, eax
// 0043a37a  7514                 jne 0x43a390
// 0043a37c  8b4604               mov eax, dword ptr [esi + 4]
// 0043a37f  5d                   pop ebp
// 0043a380  33ff                 xor edi, edi
// 0043a382  8d0cb8               lea ecx, [eax + edi*4]
// 0043a385  5b                   pop ebx
// 0043a386  5f                   pop edi
// 0043a387  894e08               mov dword ptr [esi + 8], ecx
// 0043a38a  8bc6                 mov eax, esi
// 0043a38c  5e                   pop esi
// 0043a38d  c20400               ret 4
// 0043a390  8b7f08               mov edi, dword ptr [edi + 8]
// 0043a393  2bf8                 sub edi, eax
// 0043a395  8b4604               mov eax, dword ptr [esi + 4]
// 0043a398  5d                   pop ebp
// 0043a399  c1ff02               sar edi, 2
// 0043a39c  8d0cb8               lea ecx, [eax + edi*4]
// 0043a39f  5b                   pop ebx
// 0043a3a0  5f                   pop edi
// 0043a3a1  894e08               mov dword ptr [esi + 8], ecx
// 0043a3a4  8bc6                 mov eax, esi
// 0043a3a6  5e                   pop esi
// 0043a3a7  c20400               ret 4
// 0043a3aa  85c0                 test eax, eax
// 0043a3ac  7504                 jne 0x43a3b2
// 0043a3ae  33c9                 xor ecx, ecx
// 0043a3b0  eb08                 jmp 0x43a3ba
// 0043a3b2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0043a3b5  2bc8                 sub ecx, eax
// 0043a3b7  c1f902               sar ecx, 2
// 0043a3ba  3bd1                 cmp edx, ecx
// 0043a3bc  773c                 ja 0x43a3fa
// 0043a3be  85c0                 test eax, eax
// 0043a3c0  7504                 jne 0x43a3c6
// 0043a3c2  33c9                 xor ecx, ecx
// 0043a3c4  eb08                 jmp 0x43a3ce
// 0043a3c6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0043a3c9  2bc8                 sub ecx, eax
// 0043a3cb  c1f902               sar ecx, 2
// 0043a3ce  8bd3                 mov edx, ebx
// 0043a3d0  50                   push eax
// 0043a3d1  8d1c8a               lea ebx, [edx + ecx*4]
// 0043a3d4  53                   push ebx
// 0043a3d5  52                   push edx
// 0043a3d6  e8a5f3ffff           call 0x439780
// 0043a3db  8b5608               mov edx, dword ptr [esi + 8]
// 0043a3de  8b4708               mov eax, dword ptr [edi + 8]
// 0043a3e1  83c40c               add esp, 0xc
// 0043a3e4  52                   push edx
// 0043a3e5  50                   push eax
// 0043a3e6  53                   push ebx
// 0043a3e7  8bce                 mov ecx, esi
// 0043a3e9  e882631300           call 0x570770
// 0043a3ee  5d                   pop ebp
// 0043a3ef  5b                   pop ebx
// 0043a3f0  894608               mov dword ptr [esi + 8], eax
// 0043a3f3  5f                   pop edi
// 0043a3f4  8bc6                 mov eax, esi
// 0043a3f6  5e                   pop esi
// 0043a3f7  c20400               ret 4
// 0043a3fa  85c0                 test eax, eax
// 0043a3fc  7409                 je 0x43a407
// 0043a3fe  50                   push eax
// 0043a3ff  e8ec3c1e00           call 0x61e0f0
// 0043a404  83c404               add esp, 4
// 0043a407  8b4f04               mov ecx, dword ptr [edi + 4]
// 0043a40a  85c9                 test ecx, ecx
// 0043a40c  7504                 jne 0x43a412
// 0043a40e  33c0                 xor eax, eax
// 0043a410  eb08                 jmp 0x43a41a
// 0043a412  8b4708               mov eax, dword ptr [edi + 8]
// 0043a415  2bc1                 sub eax, ecx
// 0043a417  c1f802               sar eax, 2
// 0043a41a  50                   push eax
// 0043a41b  8bce                 mov ecx, esi
// 0043a41d  e87ef4ffff           call 0x4398a0
// 0043a422  84c0                 test al, al
// 0043a424  7416                 je 0x43a43c
// 0043a426  8b4e04               mov ecx, dword ptr [esi + 4]
// 0043a429  8b5708               mov edx, dword ptr [edi + 8]
// 0043a42c  8b4704               mov eax, dword ptr [edi + 4]
// 0043a42f  51                   push ecx
// 0043a430  52                   push edx
// 0043a431  50                   push eax
// 0043a432  8bce                 mov ecx, esi
// 0043a434  e837631300           call 0x570770
// 0043a439  894608               mov dword ptr [esi + 8], eax
// 0043a43c  5d                   pop ebp
// 0043a43d  5b                   pop ebx
// 0043a43e  5f                   pop edi
// 0043a43f  8bc6                 mov eax, esi
// 0043a441  5e                   pop esi
// 0043a442  c20400               ret 4
// library rbxgs/v8world\SpatialHash.cpp (function ??4?$vector@PAVSpatialNode@RBX@@V?$allocator@PAVSpatialNode@RBX@@@std@@@std@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SpatialHash.cpp
