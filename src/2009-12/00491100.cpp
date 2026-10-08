// roc 2009-12 00491100  unit: Ogre::RbxEntity  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00491100
//
// 00491100  55                   push ebp
// 00491101  56                   push esi
// 00491102  8bf1                 mov esi, ecx
// 00491104  8b460c               mov eax, dword ptr [esi + 0xc]
// 00491107  57                   push edi
// 00491108  85c0                 test eax, eax
// 0049110a  7504                 jne 0x491110
// 0049110c  33ed                 xor ebp, ebp
// 0049110e  eb05                 jmp 0x491115
// 00491110  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00491113  2be8                 sub ebp, eax
// 00491115  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00491119  85ff                 test edi, edi
// 0049111b  0f845e010000         je 0x49127f
// 00491121  53                   push ebx
// 00491122  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00491125  8bc8                 mov ecx, eax
// 00491127  2bcb                 sub ecx, ebx
// 00491129  49                   dec ecx
// 0049112a  3bcf                 cmp ecx, edi
// 0049112c  7305                 jae 0x491133
// 0049112e  e82d10fbff           call 0x442160
// 00491133  8bd3                 mov edx, ebx
// 00491135  2bd0                 sub edx, eax
// 00491137  8d043a               lea eax, [edx + edi]
// 0049113a  3be8                 cmp ebp, eax
// 0049113c  0f83a5000000         jae 0x4911e7
// 00491142  8bcd                 mov ecx, ebp
// 00491144  d1e9                 shr ecx, 1
// 00491146  83caff               or edx, 0xffffffff
// 00491149  2bd1                 sub edx, ecx
// 0049114b  3bd5                 cmp edx, ebp
// 0049114d  7304                 jae 0x491153
// 0049114f  33ed                 xor ebp, ebp
// 00491151  eb02                 jmp 0x491155
// 00491153  03e9                 add ebp, ecx
// 00491155  3be8                 cmp ebp, eax
// 00491157  0f42e8               cmovb ebp, eax
// 0049115a  6a00                 push 0
// 0049115c  55                   push ebp
// 0049115d  e8fef7ffff           call 0x490960
// 00491162  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00491166  8bd8                 mov ebx, eax
// 00491168  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049116c  2b460c               sub eax, dword ptr [esi + 0xc]
// 0049116f  83c408               add esp, 8
// 00491172  51                   push ecx
// 00491173  03c3                 add eax, ebx
// 00491175  57                   push edi
// 00491176  50                   push eax
// 00491177  8bce                 mov ecx, esi
// 00491179  89442428             mov dword ptr [esp + 0x28], eax
// 0049117d  e82efeffff           call 0x490fb0
// 00491182  8b542418             mov edx, dword ptr [esp + 0x18]
// 00491186  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00491189  8bc2                 mov eax, edx
// 0049118b  2bc1                 sub eax, ecx
// 0049118d  7411                 je 0x4911a0
// 0049118f  50                   push eax
// 00491190  51                   push ecx
// 00491191  50                   push eax
// 00491192  53                   push ebx
// 00491193  ff15c0b79800         call dword ptr [0x98b7c0]
// 00491199  8b542428             mov edx, dword ptr [esp + 0x28]
// 0049119d  83c410               add esp, 0x10
// 004911a0  8b4610               mov eax, dword ptr [esi + 0x10]
// 004911a3  2bc2                 sub eax, edx
// 004911a5  7413                 je 0x4911ba
// 004911a7  50                   push eax
// 004911a8  52                   push edx
// 004911a9  8b542424             mov edx, dword ptr [esp + 0x24]
// 004911ad  50                   push eax
// 004911ae  03d7                 add edx, edi
// 004911b0  52                   push edx
// 004911b1  ff15c0b79800         call dword ptr [0x98b7c0]
// 004911b7  83c410               add esp, 0x10
// 004911ba  8b460c               mov eax, dword ptr [esi + 0xc]
// 004911bd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004911c0  2bc8                 sub ecx, eax
// 004911c2  03f9                 add edi, ecx
// 004911c4  85c0                 test eax, eax
// 004911c6  7409                 je 0x4911d1
// 004911c8  50                   push eax
// 004911c9  e88c263600           call 0x7f385a
// 004911ce  83c404               add esp, 4
// 004911d1  8d142b               lea edx, [ebx + ebp]
// 004911d4  8d043b               lea eax, [ebx + edi]
// 004911d7  895e0c               mov dword ptr [esi + 0xc], ebx
// 004911da  5b                   pop ebx
// 004911db  5f                   pop edi
// 004911dc  895614               mov dword ptr [esi + 0x14], edx
// 004911df  894610               mov dword ptr [esi + 0x10], eax
// 004911e2  5e                   pop esi
// 004911e3  5d                   pop ebp
// 004911e4  c21000               ret 0x10
// 004911e7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004911eb  8b542420             mov edx, dword ptr [esp + 0x20]
// 004911ef  8bcb                 mov ecx, ebx
// 004911f1  2bc8                 sub ecx, eax
// 004911f3  3bcf                 cmp ecx, edi
// 004911f5  734e                 jae 0x491245
// 004911f7  8a0a                 mov cl, byte ptr [edx]
// 004911f9  8d1438               lea edx, [eax + edi]
// 004911fc  52                   push edx
// 004911fd  53                   push ebx
// 004911fe  884c2428             mov byte ptr [esp + 0x28], cl
// 00491202  50                   push eax
// 00491203  8bce                 mov ecx, esi
// 00491205  e876faffff           call 0x490c80
// 0049120a  8b4610               mov eax, dword ptr [esi + 0x10]
// 0049120d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00491211  8d4c2420             lea ecx, [esp + 0x20]
// 00491215  51                   push ecx
// 00491216  2bd0                 sub edx, eax
// 00491218  03d7                 add edx, edi
// 0049121a  52                   push edx
// 0049121b  50                   push eax
// 0049121c  8bce                 mov ecx, esi
// 0049121e  e88dfdffff           call 0x490fb0
// 00491223  017e10               add dword ptr [esi + 0x10], edi
// 00491226  8b7610               mov esi, dword ptr [esi + 0x10]
// 00491229  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049122d  8d442420             lea eax, [esp + 0x20]
// 00491231  50                   push eax
// 00491232  2bf7                 sub esi, edi
// 00491234  56                   push esi
// 00491235  51                   push ecx
// 00491236  e855f8ffff           call 0x490a90
// 0049123b  83c40c               add esp, 0xc
// 0049123e  5b                   pop ebx
// 0049123f  5f                   pop edi
// 00491240  5e                   pop esi
// 00491241  5d                   pop ebp
// 00491242  c21000               ret 0x10
// 00491245  8a02                 mov al, byte ptr [edx]
// 00491247  53                   push ebx
// 00491248  8beb                 mov ebp, ebx
// 0049124a  53                   push ebx
// 0049124b  2bef                 sub ebp, edi
// 0049124d  55                   push ebp
// 0049124e  8bce                 mov ecx, esi
// 00491250  8844242c             mov byte ptr [esp + 0x2c], al
// 00491254  e827faffff           call 0x490c80
// 00491259  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049125d  53                   push ebx
// 0049125e  55                   push ebp
// 0049125f  51                   push ecx
// 00491260  894610               mov dword ptr [esi + 0x10], eax
// 00491263  e848f8ffff           call 0x490ab0
// 00491268  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049126c  8d54242c             lea edx, [esp + 0x2c]
// 00491270  52                   push edx
// 00491271  8d0c38               lea ecx, [eax + edi]
// 00491274  51                   push ecx
// 00491275  50                   push eax
// 00491276  e815f8ffff           call 0x490a90
// 0049127b  83c418               add esp, 0x18
// 0049127e  5b                   pop ebx
// 0049127f  5f                   pop edi
// 00491280  5e                   pop esi
// 00491281  5d                   pop ebp
// 00491282  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?_Insert_n@?$vector@EV?$allocator@E@std@@@std@@IAEXV?$_Vector_const_iterator@EV?$allocator@E@std@@@2@IABE@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
