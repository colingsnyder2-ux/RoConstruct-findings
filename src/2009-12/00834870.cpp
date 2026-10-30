// roc 2009-12 00834870  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834870
//
// 00834870  83ec50               sub esp, 0x50
// 00834873  a10052b600           mov eax, dword ptr [0xb65200]
// 00834878  33c4                 xor eax, esp
// 0083487a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083487e  53                   push ebx
// 0083487f  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00834883  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00834886  55                   push ebp
// 00834887  56                   push esi
// 00834888  57                   push edi
// 00834889  f7d0                 not eax
// 0083488b  8bf9                 mov edi, ecx
// 0083488d  897c2414             mov dword ptr [esp + 0x14], edi
// 00834891  a801                 test al, 1
// 00834893  7462                 je 0x8348f7
// 00834895  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00834898  51                   push ecx
// 00834899  8bcb                 mov ecx, ebx
// 0083489b  e854fbfbff           call 0x7f43f4
// 008348a0  837f0c00             cmp dword ptr [edi + 0xc], 0
// 008348a4  0f84b4000000         je 0x83495e
// 008348aa  33ed                 xor ebp, ebp
// 008348ac  396f08               cmp dword ptr [edi + 8], ebp
// 008348af  0f86a9000000         jbe 0x83495e
// 008348b5  8b5704               mov edx, dword ptr [edi + 4]
// 008348b8  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 008348bb  85f6                 test esi, esi
// 008348bd  741d                 je 0x8348dc
// 008348bf  90                   nop 
// 008348c0  6a01                 push 1
// 008348c2  56                   push esi
// 008348c3  53                   push ebx
// 008348c4  e8d7600b00           call 0x8ea9a0
// 008348c9  6a01                 push 1
// 008348cb  8d4604               lea eax, [esi + 4]
// 008348ce  50                   push eax
// 008348cf  53                   push ebx
// 008348d0  e80be9ffff           call 0x8331e0
// 008348d5  8b7648               mov esi, dword ptr [esi + 0x48]
// 008348d8  85f6                 test esi, esi
// 008348da  75e4                 jne 0x8348c0
// 008348dc  45                   inc ebp
// 008348dd  3b6f08               cmp ebp, dword ptr [edi + 8]
// 008348e0  72d3                 jb 0x8348b5
// 008348e2  5f                   pop edi
// 008348e3  5e                   pop esi
// 008348e4  5d                   pop ebp
// 008348e5  5b                   pop ebx
// 008348e6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008348ea  33cc                 xor ecx, esp
// 008348ec  e8a90afcff           call 0x7f539a
// 008348f1  83c450               add esp, 0x50
// 008348f4  c20400               ret 4
// 008348f7  8bcb                 mov ecx, ebx
// 008348f9  e8f0fafbff           call 0x7f43ee
// 008348fe  8be8                 mov ebp, eax
// 00834900  85ed                 test ebp, ebp
// 00834902  745a                 je 0x83495e
// 00834904  eb04                 jmp 0x83490a
// 00834906  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083490a  6a3c                 push 0x3c
// 0083490c  83c8ff               or eax, 0xffffffff
// 0083490f  8d4c241c             lea ecx, [esp + 0x1c]
// 00834913  6a00                 push 0
// 00834915  51                   push ecx
// 00834916  4d                   dec ebp
// 00834917  89442460             mov dword ptr [esp + 0x60], eax
// 0083491b  89442464             mov dword ptr [esp + 0x64], eax
// 0083491f  e88001fcff           call 0x7f4aa4
// 00834924  83c40c               add esp, 0xc
// 00834927  6a01                 push 1
// 00834929  8d542414             lea edx, [esp + 0x14]
// 0083492d  52                   push edx
// 0083492e  53                   push ebx
// 0083492f  e86c600b00           call 0x8ea9a0
// 00834934  6a01                 push 1
// 00834936  8d44241c             lea eax, [esp + 0x1c]
// 0083493a  50                   push eax
// 0083493b  53                   push ebx
// 0083493c  e89fe8ffff           call 0x8331e0
// 00834941  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00834945  51                   push ecx
// 00834946  8bcf                 mov ecx, edi
// 00834948  e803fdffff           call 0x834650
// 0083494d  b911000000           mov ecx, 0x11
// 00834952  8d742418             lea esi, [esp + 0x18]
// 00834956  8bf8                 mov edi, eax
// 00834958  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0083495a  85ed                 test ebp, ebp
// 0083495c  75a8                 jne 0x834906
// 0083495e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00834962  5f                   pop edi
// 00834963  5e                   pop esi
// 00834964  5d                   pop ebp
// 00834965  5b                   pop ebx
// 00834966  33cc                 xor ecx, esp
// 00834968  e82d0afcff           call 0x7f539a
// 0083496d  83c450               add esp, 0x50
// 00834970  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp