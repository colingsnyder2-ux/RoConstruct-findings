// roc 2012-06 00a6a1e0  unit: CXTCaptionButtonThemeOffice2003  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a1e0
//
// 00a6a1e0  83ec44               sub esp, 0x44
// 00a6a1e3  53                   push ebx
// 00a6a1e4  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00a6a1e8  894c2404             mov dword ptr [esp + 4], ecx
// 00a6a1ec  85db                 test ebx, ebx
// 00a6a1ee  7504                 jne 0xa6a1f4
// 00a6a1f0  33c0                 xor eax, eax
// 00a6a1f2  eb03                 jmp 0xa6a1f7
// 00a6a1f4  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a6a1f7  50                   push eax
// 00a6a1f8  ff15143bb200         call dword ptr [0xb23b14]
// 00a6a1fe  85c0                 test eax, eax
// 00a6a200  7507                 jne 0xa6a209
// 00a6a202  5b                   pop ebx
// 00a6a203  83c444               add esp, 0x44
// 00a6a206  c20800               ret 8
// 00a6a209  55                   push ebp
// 00a6a20a  56                   push esi
// 00a6a20b  8b742454             mov esi, dword ptr [esp + 0x54]
// 00a6a20f  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a6a212  57                   push edi
// 00a6a213  50                   push eax
// 00a6a214  e859f30200           call 0xa99572
// 00a6a219  8d4e1c               lea ecx, [esi + 0x1c]
// 00a6a21c  51                   push ecx
// 00a6a21d  8d542418             lea edx, [esp + 0x18]
// 00a6a221  52                   push edx
// 00a6a222  8bf8                 mov edi, eax
// 00a6a224  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a6a22a  8babac000000         mov ebp, dword ptr [ebx + 0xac]
// 00a6a230  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a6a233  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a6a237  85ed                 test ebp, ebp
// 00a6a239  7504                 jne 0xa6a23f
// 00a6a23b  33c0                 xor eax, eax
// 00a6a23d  eb03                 jmp 0xa6a242
// 00a6a23f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00a6a242  50                   push eax
// 00a6a243  ff15143bb200         call dword ptr [0xb23b14]
// 00a6a249  85c0                 test eax, eax
// 00a6a24b  0f84e5000000         je 0xa6a336
// 00a6a251  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 00a6a258  750f                 jne 0xa6a269
// 00a6a25a  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a6a260  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 00a6a263  7404                 je 0xa6a269
// 00a6a265  33c9                 xor ecx, ecx
// 00a6a267  eb05                 jmp 0xa6a26e
// 00a6a269  b901000000           mov ecx, 1
// 00a6a26e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a6a272  83e001               and eax, 1
// 00a6a275  7557                 jne 0xa6a2ce
// 00a6a277  85c9                 test ecx, ecx
// 00a6a279  755f                 jne 0xa6a2da
// 00a6a27b  53                   push ebx
// 00a6a27c  8d4c2428             lea ecx, [esp + 0x28]
// 00a6a280  e8bbaef6ff           call 0x9d5140
// 00a6a285  8d4c2434             lea ecx, [esp + 0x34]
// 00a6a289  e8822af5ff           call 0x9bcd10
// 00a6a28e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6a292  8b11                 mov edx, dword ptr [ecx]
// 00a6a294  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00a6a297  8d442434             lea eax, [esp + 0x34]
// 00a6a29b  50                   push eax
// 00a6a29c  55                   push ebp
// 00a6a29d  8d44242c             lea eax, [esp + 0x2c]
// 00a6a2a1  50                   push eax
// 00a6a2a2  ffd2                 call edx
// 00a6a2a4  6a00                 push 0
// 00a6a2a6  6a00                 push 0
// 00a6a2a8  8d44243c             lea eax, [esp + 0x3c]
// 00a6a2ac  50                   push eax
// 00a6a2ad  8d4c2420             lea ecx, [esp + 0x20]
// 00a6a2b1  51                   push ecx
// 00a6a2b2  57                   push edi
// 00a6a2b3  e8d8cef6ff           call 0x9d7190
// 00a6a2b8  8bc8                 mov ecx, eax
// 00a6a2ba  e8f1d1f6ff           call 0x9d74b0
// 00a6a2bf  5f                   pop edi
// 00a6a2c0  5e                   pop esi
// 00a6a2c1  5d                   pop ebp
// 00a6a2c2  b801000000           mov eax, 1
// 00a6a2c7  5b                   pop ebx
// 00a6a2c8  83c444               add esp, 0x44
// 00a6a2cb  c20800               ret 8
// 00a6a2ce  e88d35f5ff           call 0x9bd860
// 00a6a2d3  0520010000           add eax, 0x120
// 00a6a2d8  eb0a                 jmp 0xa6a2e4
// 00a6a2da  e88135f5ff           call 0x9bd860
// 00a6a2df  0540010000           add eax, 0x140
// 00a6a2e4  6a00                 push 0
// 00a6a2e6  6a00                 push 0
// 00a6a2e8  50                   push eax
// 00a6a2e9  8d542420             lea edx, [esp + 0x20]
// 00a6a2ed  52                   push edx
// 00a6a2ee  57                   push edi
// 00a6a2ef  e89ccef6ff           call 0x9d7190
// 00a6a2f4  8bc8                 mov ecx, eax
// 00a6a2f6  e8b5d1f6ff           call 0x9d74b0
// 00a6a2fb  e86035f5ff           call 0x9bd860
// 00a6a300  6a20                 push 0x20
// 00a6a302  8bc8                 mov ecx, eax
// 00a6a304  e8072ff5ff           call 0x9bd210
// 00a6a309  8bf0                 mov esi, eax
// 00a6a30b  e85035f5ff           call 0x9bd860
// 00a6a310  56                   push esi
// 00a6a311  6a20                 push 0x20
// 00a6a313  8bc8                 mov ecx, eax
// 00a6a315  e8f62ef5ff           call 0x9bd210
// 00a6a31a  50                   push eax
// 00a6a31b  8d44241c             lea eax, [esp + 0x1c]
// 00a6a31f  50                   push eax
// 00a6a320  8bcf                 mov ecx, edi
// 00a6a322  e87f8bf1ff           call 0x982ea6
// 00a6a327  5f                   pop edi
// 00a6a328  5e                   pop esi
// 00a6a329  5d                   pop ebp
// 00a6a32a  b801000000           mov eax, 1
// 00a6a32f  5b                   pop ebx
// 00a6a330  83c444               add esp, 0x44
// 00a6a333  c20800               ret 8
// 00a6a336  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6a33a  53                   push ebx
// 00a6a33b  56                   push esi
// 00a6a33c  e86f0e0100           call 0xa7b1b0
// 00a6a341  5f                   pop edi
// 00a6a342  5e                   pop esi
// 00a6a343  5d                   pop ebp
// 00a6a344  5b                   pop ebx
// 00a6a345  83c444               add esp, 0x44
// 00a6a348  c20800               ret 8
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp
