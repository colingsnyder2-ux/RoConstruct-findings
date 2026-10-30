// roc 2009-12 007fcfb0  unit: CPatchedControlComboBox  size: 474 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fcfb0
//
// 007fcfb0  56                   push esi
// 007fcfb1  8bf1                 mov esi, ecx
// 007fcfb3  8b06                 mov eax, dword ptr [esi]
// 007fcfb5  8b5074               mov edx, dword ptr [eax + 0x74]
// 007fcfb8  ffd2                 call edx
// 007fcfba  85c0                 test eax, eax
// 007fcfbc  7504                 jne 0x7fcfc2
// 007fcfbe  5e                   pop esi
// 007fcfbf  c20800               ret 8
// 007fcfc2  53                   push ebx
// 007fcfc3  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007fcfc7  83fb2e               cmp ebx, 0x2e
// 007fcfca  7409                 je 0x7fcfd5
// 007fcfcc  83fb08               cmp ebx, 8
// 007fcfcf  7404                 je 0x7fcfd5
// 007fcfd1  33c0                 xor eax, eax
// 007fcfd3  eb05                 jmp 0x7fcfda
// 007fcfd5  b801000000           mov eax, 1
// 007fcfda  8986b0010000         mov dword ptr [esi + 0x1b0], eax
// 007fcfe0  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fcfe6  85c0                 test eax, eax
// 007fcfe8  7410                 je 0x7fcffa
// 007fcfea  83785400             cmp dword ptr [eax + 0x54], 0
// 007fcfee  740a                 je 0x7fcffa
// 007fcff0  5b                   pop ebx
// 007fcff1  b802000000           mov eax, 2
// 007fcff6  5e                   pop esi
// 007fcff7  c20800               ret 8
// 007fcffa  83fb09               cmp ebx, 9
// 007fcffd  7519                 jne 0x7fd018
// 007fcfff  83bed001000000       cmp dword ptr [esi + 0x1d0], 0
// 007fd006  7409                 je 0x7fd011
// 007fd008  f686b401000008       test byte ptr [esi + 0x1b4], 8
// 007fd00f  755f                 jne 0x7fd070
// 007fd011  5b                   pop ebx
// 007fd012  33c0                 xor eax, eax
// 007fd014  5e                   pop esi
// 007fd015  c20800               ret 8
// 007fd018  83fb0d               cmp ebx, 0xd
// 007fd01b  74f4                 je 0x7fd011
// 007fd01d  83fb1b               cmp ebx, 0x1b
// 007fd020  754e                 jne 0x7fd070
// 007fd022  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 007fd028  8b01                 mov eax, dword ptr [ecx]
// 007fd02a  8b9088010000         mov edx, dword ptr [eax + 0x188]
// 007fd030  ffd2                 call edx
// 007fd032  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 007fd038  50                   push eax
// 007fd039  8bce                 mov ecx, esi
// 007fd03b  e810daffff           call 0x7faa50
// 007fd040  8d8e94010000         lea ecx, [esi + 0x194]
// 007fd046  51                   push ecx
// 007fd047  8bce                 mov ecx, esi
// 007fd049  e8c2eeffff           call 0x7fbf10
// 007fd04e  8b16                 mov edx, dword ptr [esi]
// 007fd050  8b4270               mov eax, dword ptr [edx + 0x70]
// 007fd053  6a00                 push 0
// 007fd055  8bce                 mov ecx, esi
// 007fd057  ffd0                 call eax
// 007fd059  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fd05f  33c0                 xor eax, eax
// 007fd061  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 007fd068  5b                   pop ebx
// 007fd069  0f94c0               sete al
// 007fd06c  5e                   pop esi
// 007fd06d  c20800               ret 8
// 007fd070  55                   push ebp
// 007fd071  8b2d30cc9800         mov ebp, dword ptr [0x98cc30]
// 007fd077  85c0                 test eax, eax
// 007fd079  743a                 je 0x7fd0b5
// 007fd07b  83782000             cmp dword ptr [eax + 0x20], 0
// 007fd07f  7434                 je 0x7fd0b5
// 007fd081  6a12                 push 0x12
// 007fd083  ffd5                 call ebp
// 007fd085  6685c0               test ax, ax
// 007fd088  7d2b                 jge 0x7fd0b5
// 007fd08a  6a11                 push 0x11
// 007fd08c  ffd5                 call ebp
// 007fd08e  6685c0               test ax, ax
// 007fd091  7c22                 jl 0x7fd0b5
// 007fd093  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fd099  e832740000           call 0x8044d0
// 007fd09e  85c0                 test eax, eax
// 007fd0a0  7413                 je 0x7fd0b5
// 007fd0a2  0fbed3               movsx edx, bl
// 007fd0a5  52                   push edx
// 007fd0a6  8bc8                 mov ecx, eax
// 007fd0a8  e8638e0100           call 0x815f10
// 007fd0ad  85c0                 test eax, eax
// 007fd0af  0f859e000000         jne 0x7fd153
// 007fd0b5  83fb73               cmp ebx, 0x73
// 007fd0b8  7573                 jne 0x7fd12d
// 007fd0ba  6a12                 push 0x12
// 007fd0bc  ffd5                 call ebp
// 007fd0be  6685c0               test ax, ax
// 007fd0c1  7d7d                 jge 0x7fd140
// 007fd0c3  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 007fd0c9  57                   push edi
// 007fd0ca  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007fd0ce  85c9                 test ecx, ecx
// 007fd0d0  740b                 je 0x7fd0dd
// 007fd0d2  57                   push edi
// 007fd0d3  53                   push ebx
// 007fd0d4  e807c0ffff           call 0x7f90e0
// 007fd0d9  85c0                 test eax, eax
// 007fd0db  7544                 jne 0x7fd121
// 007fd0dd  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 007fd0e4  741d                 je 0x7fd103
// 007fd0e6  83fb26               cmp ebx, 0x26
// 007fd0e9  740f                 je 0x7fd0fa
// 007fd0eb  83fb28               cmp ebx, 0x28
// 007fd0ee  740a                 je 0x7fd0fa
// 007fd0f0  83fb22               cmp ebx, 0x22
// 007fd0f3  7405                 je 0x7fd0fa
// 007fd0f5  83fb21               cmp ebx, 0x21
// 007fd0f8  7564                 jne 0x7fd15e
// 007fd0fa  6a12                 push 0x12
// 007fd0fc  ffd5                 call ebp
// 007fd0fe  6685c0               test ax, ax
// 007fd101  7c5b                 jl 0x7fd15e
// 007fd103  8bce                 mov ecx, esi
// 007fd105  e856f8ffff           call 0x7fc960
// 007fd10a  85c0                 test eax, eax
// 007fd10c  7450                 je 0x7fd15e
// 007fd10e  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 007fd114  8b11                 mov edx, dword ptr [ecx]
// 007fd116  8b8228020000         mov eax, dword ptr [edx + 0x228]
// 007fd11c  57                   push edi
// 007fd11d  53                   push ebx
// 007fd11e  56                   push esi
// 007fd11f  ffd0                 call eax
// 007fd121  5f                   pop edi
// 007fd122  5d                   pop ebp
// 007fd123  5b                   pop ebx
// 007fd124  b801000000           mov eax, 1
// 007fd129  5e                   pop esi
// 007fd12a  c20800               ret 8
// 007fd12d  83fb26               cmp ebx, 0x26
// 007fd130  7405                 je 0x7fd137
// 007fd132  83fb28               cmp ebx, 0x28
// 007fd135  758c                 jne 0x7fd0c3
// 007fd137  6a12                 push 0x12
// 007fd139  ffd5                 call ebp
// 007fd13b  6685c0               test ax, ax
// 007fd13e  7d83                 jge 0x7fd0c3
// 007fd140  8b16                 mov edx, dword ptr [esi]
// 007fd142  33c9                 xor ecx, ecx
// 007fd144  51                   push ecx
// 007fd145  33c0                 xor eax, eax
// 007fd147  50                   push eax
// 007fd148  8b82e8000000         mov eax, dword ptr [edx + 0xe8]
// 007fd14e  51                   push ecx
// 007fd14f  8bce                 mov ecx, esi
// 007fd151  ffd0                 call eax
// 007fd153  5d                   pop ebp
// 007fd154  5b                   pop ebx
// 007fd155  b801000000           mov eax, 1
// 007fd15a  5e                   pop esi
// 007fd15b  c20800               ret 8
// 007fd15e  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fd164  85c9                 test ecx, ecx
// 007fd166  7416                 je 0x7fd17e
// 007fd168  83792000             cmp dword ptr [ecx + 0x20], 0
// 007fd16c  7410                 je 0x7fd17e
// 007fd16e  57                   push edi
// 007fd16f  53                   push ebx
// 007fd170  e8abbdffff           call 0x7f8f20
// 007fd175  85c0                 test eax, eax
// 007fd177  b801000000           mov eax, 1
// 007fd17c  7505                 jne 0x7fd183
// 007fd17e  b802000000           mov eax, 2
// 007fd183  5f                   pop edi
// 007fd184  5d                   pop ebp
// 007fd185  5b                   pop ebx
// 007fd186  5e                   pop esi
// 007fd187  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPControlComboBox@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp