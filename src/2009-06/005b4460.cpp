// roc 2009-06 005b4460  unit: seg_005b0000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b4460
//
// 005b4460  55                   push ebp
// 005b4461  8bec                 mov ebp, esp
// 005b4463  83ec24               sub esp, 0x24
// 005b4466  894ddc               mov dword ptr [ebp - 0x24], ecx
// 005b4469  8d45f8               lea eax, [ebp - 8]
// 005b446c  50                   push eax
// 005b446d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005b4470  e88bffffff           call 0x5b4400
// 005b4475  50                   push eax
// 005b4476  8d4d0c               lea ecx, [ebp + 0xc]
// 005b4479  e822d00000           call 0x5c14a0
// 005b447e  0fb6c8               movzx ecx, al
// 005b4481  85c9                 test ecx, ecx
// 005b4483  7437                 je 0x5b44bc
// 005b4485  8d55f0               lea edx, [ebp - 0x10]
// 005b4488  52                   push edx
// 005b4489  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005b448c  e89fffffff           call 0x5b4430
// 005b4491  50                   push eax
// 005b4492  8d4d14               lea ecx, [ebp + 0x14]
// 005b4495  e806d00000           call 0x5c14a0
// 005b449a  0fb6c0               movzx eax, al
// 005b449d  85c0                 test eax, eax
// 005b449f  741b                 je 0x5b44bc
// 005b44a1  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005b44a4  e817170000           call 0x5b5bc0
// 005b44a9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b44ac  51                   push ecx
// 005b44ad  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005b44b0  e84bffffff           call 0x5b4400
// 005b44b5  8b4508               mov eax, dword ptr [ebp + 8]
// 005b44b8  eb4f                 jmp 0x5b4509
// 005b44ba  eb4d                 jmp 0x5b4509
// 005b44bc  8d5514               lea edx, [ebp + 0x14]
// 005b44bf  52                   push edx
// 005b44c0  8d4d0c               lea ecx, [ebp + 0xc]
// 005b44c3  e878b90000           call 0x5bfe40
// 005b44c8  0fb6c0               movzx eax, al
// 005b44cb  85c0                 test eax, eax
// 005b44cd  7423                 je 0x5b44f2
// 005b44cf  6a00                 push 0
// 005b44d1  8d4de8               lea ecx, [ebp - 0x18]
// 005b44d4  51                   push ecx
// 005b44d5  8d4d0c               lea ecx, [ebp + 0xc]
// 005b44d8  e8131d0000           call 0x5b61f0
// 005b44dd  8b5004               mov edx, dword ptr [eax + 4]
// 005b44e0  52                   push edx
// 005b44e1  8b00                 mov eax, dword ptr [eax]
// 005b44e3  50                   push eax
// 005b44e4  8d4de0               lea ecx, [ebp - 0x20]
// 005b44e7  51                   push ecx
// 005b44e8  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005b44eb  e8000f0000           call 0x5b53f0
// 005b44f0  ebca                 jmp 0x5b44bc
// 005b44f2  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005b44f5  52                   push edx
// 005b44f6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b44f9  50                   push eax
// 005b44fa  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b44fd  51                   push ecx
// 005b44fe  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 005b4501  e88a96ffff           call 0x5adb90
// 005b4506  8b4508               mov eax, dword ptr [ebp + 8]
// 005b4509  8be5                 mov esp, ebp
// 005b450b  5d                   pop ebp
// 005b450c  c21400               ret 0x14
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp