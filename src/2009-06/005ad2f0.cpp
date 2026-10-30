// roc 2009-06 005ad2f0  unit: RBX::Mesh  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ad2f0
//
// 005ad2f0  55                   push ebp
// 005ad2f1  8bec                 mov ebp, esp
// 005ad2f3  83ec24               sub esp, 0x24
// 005ad2f6  894ddc               mov dword ptr [ebp - 0x24], ecx
// 005ad2f9  8d45f8               lea eax, [ebp - 8]
// 005ad2fc  50                   push eax
// 005ad2fd  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005ad300  e8fb700000           call 0x5b4400
// 005ad305  50                   push eax
// 005ad306  8d4d0c               lea ecx, [ebp + 0xc]
// 005ad309  e892410100           call 0x5c14a0
// 005ad30e  0fb6c8               movzx ecx, al
// 005ad311  85c9                 test ecx, ecx
// 005ad313  7437                 je 0x5ad34c
// 005ad315  8d55f0               lea edx, [ebp - 0x10]
// 005ad318  52                   push edx
// 005ad319  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005ad31c  e80f710000           call 0x5b4430
// 005ad321  50                   push eax
// 005ad322  8d4d14               lea ecx, [ebp + 0x14]
// 005ad325  e876410100           call 0x5c14a0
// 005ad32a  0fb6c0               movzx eax, al
// 005ad32d  85c0                 test eax, eax
// 005ad32f  741b                 je 0x5ad34c
// 005ad331  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005ad334  e857100000           call 0x5ae390
// 005ad339  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ad33c  51                   push ecx
// 005ad33d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005ad340  e8bb700000           call 0x5b4400
// 005ad345  8b4508               mov eax, dword ptr [ebp + 8]
// 005ad348  eb4f                 jmp 0x5ad399
// 005ad34a  eb4d                 jmp 0x5ad399
// 005ad34c  8d5514               lea edx, [ebp + 0x14]
// 005ad34f  52                   push edx
// 005ad350  8d4d0c               lea ecx, [ebp + 0xc]
// 005ad353  e8e82a0100           call 0x5bfe40
// 005ad358  0fb6c0               movzx eax, al
// 005ad35b  85c0                 test eax, eax
// 005ad35d  7423                 je 0x5ad382
// 005ad35f  6a00                 push 0
// 005ad361  8d4de8               lea ecx, [ebp - 0x18]
// 005ad364  51                   push ecx
// 005ad365  8d4d0c               lea ecx, [ebp + 0xc]
// 005ad368  e893120000           call 0x5ae600
// 005ad36d  8b5004               mov edx, dword ptr [eax + 4]
// 005ad370  52                   push edx
// 005ad371  8b00                 mov eax, dword ptr [eax]
// 005ad373  50                   push eax
// 005ad374  8d4de0               lea ecx, [ebp - 0x20]
// 005ad377  51                   push ecx
// 005ad378  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005ad37b  e840080000           call 0x5adbc0
// 005ad380  ebca                 jmp 0x5ad34c
// 005ad382  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005ad385  52                   push edx
// 005ad386  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ad389  50                   push eax
// 005ad38a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ad38d  51                   push ecx
// 005ad38e  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005ad391  e8fa070000           call 0x5adb90
// 005ad396  8b4508               mov eax, dword ptr [ebp + 8]
// 005ad399  8be5                 mov esp, ebp
// 005ad39b  5d                   pop ebp
// 005ad39c  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp