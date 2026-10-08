// roc 2012-06 00a6a350  unit: CXTCaptionButtonThemeOfficeXP  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a350
//
// 00a6a350  53                   push ebx
// 00a6a351  8a5c2408             mov bl, byte ptr [esp + 8]
// 00a6a355  57                   push edi
// 00a6a356  8bf9                 mov edi, ecx
// 00a6a358  f6c304               test bl, 4
// 00a6a35b  7413                 je 0xa6a370
// 00a6a35d  e8fe34f5ff           call 0x9bd860
// 00a6a362  6a11                 push 0x11
// 00a6a364  8bc8                 mov ecx, eax
// 00a6a366  e8752cf5ff           call 0x9bcfe0
// 00a6a36b  5f                   pop edi
// 00a6a36c  5b                   pop ebx
// 00a6a36d  c20800               ret 8
// 00a6a370  56                   push esi
// 00a6a371  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a6a375  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00a6a37c  7546                 jne 0xa6a3c4
// 00a6a37e  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a6a384  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00a6a387  743b                 je 0xa6a3c4
// 00a6a389  f6c301               test bl, 1
// 00a6a38c  7536                 jne 0xa6a3c4
// 00a6a38e  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 00a6a394  85f6                 test esi, esi
// 00a6a396  7504                 jne 0xa6a39c
// 00a6a398  33c0                 xor eax, eax
// 00a6a39a  eb03                 jmp 0xa6a39f
// 00a6a39c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6a39f  50                   push eax
// 00a6a3a0  ff15143bb200         call dword ptr [0xb23b14]
// 00a6a3a6  85c0                 test eax, eax
// 00a6a3a8  7409                 je 0xa6a3b3
// 00a6a3aa  8b4678               mov eax, dword ptr [esi + 0x78]
// 00a6a3ad  5e                   pop esi
// 00a6a3ae  5f                   pop edi
// 00a6a3af  5b                   pop ebx
// 00a6a3b0  c20800               ret 8
// 00a6a3b3  8b4734               mov eax, dword ptr [edi + 0x34]
// 00a6a3b6  83f8ff               cmp eax, -1
// 00a6a3b9  751a                 jne 0xa6a3d5
// 00a6a3bb  8b4730               mov eax, dword ptr [edi + 0x30]
// 00a6a3be  5e                   pop esi
// 00a6a3bf  5f                   pop edi
// 00a6a3c0  5b                   pop ebx
// 00a6a3c1  c20800               ret 8
// 00a6a3c4  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00a6a3ca  83f8ff               cmp eax, -1
// 00a6a3cd  7506                 jne 0xa6a3d5
// 00a6a3cf  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 00a6a3d5  5e                   pop esi
// 00a6a3d6  5f                   pop edi
// 00a6a3d7  5b                   pop ebx
// 00a6a3d8  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
