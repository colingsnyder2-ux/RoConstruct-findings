// roc 2012-06 00999150  unit: CXTPImageManagerResource::CBitmapDC  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999150
//
// 00999150  83ec2c               sub esp, 0x2c
// 00999153  56                   push esi
// 00999154  8b742438             mov esi, dword ptr [esp + 0x38]
// 00999158  85f6                 test esi, esi
// 0099915a  7507                 jne 0x999163
// 0099915c  33c0                 xor eax, eax
// 0099915e  5e                   pop esi
// 0099915f  83c42c               add esp, 0x2c
// 00999162  c3                   ret 
// 00999163  53                   push ebx
// 00999164  6a2c                 push 0x2c
// 00999166  8d44240c             lea eax, [esp + 0xc]
// 0099916a  6a00                 push 0
// 0099916c  50                   push eax
// 0099916d  e802a2feff           call 0x983374
// 00999172  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00999176  83c40c               add esp, 0xc
// 00999179  c744240828000000     mov dword ptr [esp + 8], 0x28
// 00999181  85db                 test ebx, ebx
// 00999183  7504                 jne 0x999189
// 00999185  33c0                 xor eax, eax
// 00999187  eb03                 jmp 0x99918c
// 00999189  8b4304               mov eax, dword ptr [ebx + 4]
// 0099918c  55                   push ebp
// 0099918d  8b2d6821b200         mov ebp, dword ptr [0xb22168]
// 00999193  6a00                 push 0
// 00999195  8d4c2410             lea ecx, [esp + 0x10]
// 00999199  51                   push ecx
// 0099919a  6a00                 push 0
// 0099919c  6a00                 push 0
// 0099919e  6a00                 push 0
// 009991a0  56                   push esi
// 009991a1  50                   push eax
// 009991a2  ffd5                 call ebp
// 009991a4  85c0                 test eax, eax
// 009991a6  7408                 je 0x9991b0
// 009991a8  66837c241a20         cmp word ptr [esp + 0x1a], 0x20
// 009991ae  7409                 je 0x9991b9
// 009991b0  5d                   pop ebp
// 009991b1  5b                   pop ebx
// 009991b2  33c0                 xor eax, eax
// 009991b4  5e                   pop esi
// 009991b5  83c42c               add esp, 0x2c
// 009991b8  c3                   ret 
// 009991b9  8b442410             mov eax, dword ptr [esp + 0x10]
// 009991bd  0faf442414           imul eax, dword ptr [esp + 0x14]
// 009991c2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 009991c6  03c0                 add eax, eax
// 009991c8  03c0                 add eax, eax
// 009991ca  57                   push edi
// 009991cb  8b3df829b200         mov edi, dword ptr [0xb229f8]
// 009991d1  50                   push eax
// 009991d2  8902                 mov dword ptr [edx], eax
// 009991d4  ffd7                 call edi
// 009991d6  8b742450             mov esi, dword ptr [esp + 0x50]
// 009991da  83c404               add esp, 4
// 009991dd  8906                 mov dword ptr [esi], eax
// 009991df  85c0                 test eax, eax
// 009991e1  0f8494000000         je 0x99927b
// 009991e7  6a34                 push 0x34
// 009991e9  ffd7                 call edi
// 009991eb  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 009991ef  83c404               add esp, 4
// 009991f2  8907                 mov dword ptr [edi], eax
// 009991f4  85c0                 test eax, eax
// 009991f6  7520                 jne 0x999218
// 009991f8  8b06                 mov eax, dword ptr [esi]
// 009991fa  85c0                 test eax, eax
// 009991fc  7410                 je 0x99920e
// 009991fe  50                   push eax
// 009991ff  ff15c829b200         call dword ptr [0xb229c8]
// 00999205  83c404               add esp, 4
// 00999208  c70600000000         mov dword ptr [esi], 0
// 0099920e  5f                   pop edi
// 0099920f  5d                   pop ebp
// 00999210  5b                   pop ebx
// 00999211  33c0                 xor eax, eax
// 00999213  5e                   pop esi
// 00999214  83c42c               add esp, 0x2c
// 00999217  c3                   ret 
// 00999218  6a28                 push 0x28
// 0099921a  8d4c2414             lea ecx, [esp + 0x14]
// 0099921e  51                   push ecx
// 0099921f  6a28                 push 0x28
// 00999221  50                   push eax
// 00999222  ff15fc29b200         call dword ptr [0xb229fc]
// 00999228  83c410               add esp, 0x10
// 0099922b  85db                 test ebx, ebx
// 0099922d  7504                 jne 0x999233
// 0099922f  33c0                 xor eax, eax
// 00999231  eb03                 jmp 0x999236
// 00999233  8b4304               mov eax, dword ptr [ebx + 4]
// 00999236  8b17                 mov edx, dword ptr [edi]
// 00999238  8b0e                 mov ecx, dword ptr [esi]
// 0099923a  6a00                 push 0
// 0099923c  52                   push edx
// 0099923d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00999241  51                   push ecx
// 00999242  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00999246  52                   push edx
// 00999247  6a00                 push 0
// 00999249  51                   push ecx
// 0099924a  50                   push eax
// 0099924b  ffd5                 call ebp
// 0099924d  85c0                 test eax, eax
// 0099924f  7534                 jne 0x999285
// 00999251  8b06                 mov eax, dword ptr [esi]
// 00999253  8b1dc829b200         mov ebx, dword ptr [0xb229c8]
// 00999259  85c0                 test eax, eax
// 0099925b  740c                 je 0x999269
// 0099925d  50                   push eax
// 0099925e  ffd3                 call ebx
// 00999260  83c404               add esp, 4
// 00999263  c70600000000         mov dword ptr [esi], 0
// 00999269  8b07                 mov eax, dword ptr [edi]
// 0099926b  85c0                 test eax, eax
// 0099926d  740c                 je 0x99927b
// 0099926f  50                   push eax
// 00999270  ffd3                 call ebx
// 00999272  83c404               add esp, 4
// 00999275  c70700000000         mov dword ptr [edi], 0
// 0099927b  5f                   pop edi
// 0099927c  5d                   pop ebp
// 0099927d  5b                   pop ebx
// 0099927e  33c0                 xor eax, eax
// 00999280  5e                   pop esi
// 00999281  83c42c               add esp, 0x2c
// 00999284  c3                   ret 
// 00999285  5f                   pop edi
// 00999286  5d                   pop ebp
// 00999287  5b                   pop ebx
// 00999288  b801000000           mov eax, 1
// 0099928d  5e                   pop esi
// 0099928e  83c42c               add esp, 0x2c
// 00999291  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPImageManager.cpp (function ?GetBitmapBits@CXTPImageManagerIcon@@SAHAAVCDC@@PAUHBITMAP__@@AAPAUtagBITMAPINFO@@AAPAXAAI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPImageManager.cpp
