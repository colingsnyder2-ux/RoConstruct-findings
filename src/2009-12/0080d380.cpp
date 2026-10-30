// roc 2009-12 0080d380  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d380
//
// 0080d380  83ec08               sub esp, 8
// 0080d383  53                   push ebx
// 0080d384  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0080d388  55                   push ebp
// 0080d389  33ed                 xor ebp, ebp
// 0080d38b  57                   push edi
// 0080d38c  8bf9                 mov edi, ecx
// 0080d38e  896c240c             mov dword ptr [esp + 0xc], ebp
// 0080d392  83fb01               cmp ebx, 1
// 0080d395  7427                 je 0x80d3be
// 0080d397  3bdd                 cmp ebx, ebp
// 0080d399  7423                 je 0x80d3be
// 0080d39b  8d44240c             lea eax, [esp + 0xc]
// 0080d39f  50                   push eax
// 0080d3a0  53                   push ebx
// 0080d3a1  8d4f20               lea ecx, [edi + 0x20]
// 0080d3a4  896c2420             mov dword ptr [esp + 0x20], ebp
// 0080d3a8  e8d3f5ffff           call 0x80c980
// 0080d3ad  85c0                 test eax, eax
// 0080d3af  7417                 je 0x80d3c8
// 0080d3b1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080d3b5  5f                   pop edi
// 0080d3b6  5d                   pop ebp
// 0080d3b7  5b                   pop ebx
// 0080d3b8  83c408               add esp, 8
// 0080d3bb  c20800               ret 8
// 0080d3be  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0080d3c6  eb15                 jmp 0x80d3dd
// 0080d3c8  396c241c             cmp dword ptr [esp + 0x1c], ebp
// 0080d3cc  750b                 jne 0x80d3d9
// 0080d3ce  5f                   pop edi
// 0080d3cf  5d                   pop ebp
// 0080d3d0  33c0                 xor eax, eax
// 0080d3d2  5b                   pop ebx
// 0080d3d3  83c408               add esp, 8
// 0080d3d6  c20800               ret 8
// 0080d3d9  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0080d3dd  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0080d3e0  56                   push esi
// 0080d3e1  33f6                 xor esi, esi
// 0080d3e3  f7d8                 neg eax
// 0080d3e5  1bc0                 sbb eax, eax
// 0080d3e7  89442414             mov dword ptr [esp + 0x14], eax
// 0080d3eb  746a                 je 0x80d457
// 0080d3ed  83c720               add edi, 0x20
// 0080d3f0  8d4c2410             lea ecx, [esp + 0x10]
// 0080d3f4  51                   push ecx
// 0080d3f5  8d542424             lea edx, [esp + 0x24]
// 0080d3f9  52                   push edx
// 0080d3fa  8d44241c             lea eax, [esp + 0x1c]
// 0080d3fe  50                   push eax
// 0080d3ff  8bcf                 mov ecx, edi
// 0080d401  e81ac4ffff           call 0x809820
// 0080d406  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0080d40b  741f                 je 0x80d42c
// 0080d40d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080d411  85f6                 test esi, esi
// 0080d413  7413                 je 0x80d428
// 0080d415  85db                 test ebx, ebx
// 0080d417  7506                 jne 0x80d41f
// 0080d419  3bc6                 cmp eax, esi
// 0080d41b  720b                 jb 0x80d428
// 0080d41d  eb31                 jmp 0x80d450
// 0080d41f  83fb01               cmp ebx, 1
// 0080d422  752c                 jne 0x80d450
// 0080d424  3bc6                 cmp eax, esi
// 0080d426  7628                 jbe 0x80d450
// 0080d428  8bf0                 mov esi, eax
// 0080d42a  eb20                 jmp 0x80d44c
// 0080d42c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080d430  85f6                 test esi, esi
// 0080d432  740d                 je 0x80d441
// 0080d434  8bc1                 mov eax, ecx
// 0080d436  2bc3                 sub eax, ebx
// 0080d438  99                   cdq 
// 0080d439  33c2                 xor eax, edx
// 0080d43b  2bc2                 sub eax, edx
// 0080d43d  3bc6                 cmp eax, esi
// 0080d43f  730f                 jae 0x80d450
// 0080d441  8bc1                 mov eax, ecx
// 0080d443  2bc3                 sub eax, ebx
// 0080d445  99                   cdq 
// 0080d446  8bf0                 mov esi, eax
// 0080d448  33f2                 xor esi, edx
// 0080d44a  2bf2                 sub esi, edx
// 0080d44c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0080d450  837c241400           cmp dword ptr [esp + 0x14], 0
// 0080d455  7599                 jne 0x80d3f0
// 0080d457  5e                   pop esi
// 0080d458  5f                   pop edi
// 0080d459  8bc5                 mov eax, ebp
// 0080d45b  5d                   pop ebp
// 0080d45c  5b                   pop ebx
// 0080d45d  83c408               add esp, 8
// 0080d460  c20800               ret 8
// copied from an identical function in another client (function ?GetIcon@CXTPImageManagerIconSet@@QAEPAVCXTPImageManagerIcon@@IH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp