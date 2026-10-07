// roc 2008-06 00791a20  unit: CXTCaptionButtonThemeOfficeXP  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791a20
//
// 00791a20  53                   push ebx
// 00791a21  8a5c2408             mov bl, byte ptr [esp + 8]
// 00791a25  57                   push edi
// 00791a26  8bf9                 mov edi, ecx
// 00791a28  f6c304               test bl, 4
// 00791a2b  7413                 je 0x791a40
// 00791a2d  e80ee3f4ff           call 0x6dfd40
// 00791a32  6a11                 push 0x11
// 00791a34  8bc8                 mov ecx, eax
// 00791a36  e8e5daf4ff           call 0x6df520
// 00791a3b  5f                   pop edi
// 00791a3c  5b                   pop ebx
// 00791a3d  c20800               ret 8
// 00791a40  56                   push esi
// 00791a41  8b742414             mov esi, dword ptr [esp + 0x14]
// 00791a45  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00791a4c  7546                 jne 0x791a94
// 00791a4e  ff15ac2d8000         call dword ptr [0x802dac]
// 00791a54  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00791a57  743b                 je 0x791a94
// 00791a59  f6c301               test bl, 1
// 00791a5c  7536                 jne 0x791a94
// 00791a5e  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 00791a64  85f6                 test esi, esi
// 00791a66  7504                 jne 0x791a6c
// 00791a68  33c0                 xor eax, eax
// 00791a6a  eb03                 jmp 0x791a6f
// 00791a6c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00791a6f  50                   push eax
// 00791a70  ff15502d8000         call dword ptr [0x802d50]
// 00791a76  85c0                 test eax, eax
// 00791a78  7409                 je 0x791a83
// 00791a7a  8b4678               mov eax, dword ptr [esi + 0x78]
// 00791a7d  5e                   pop esi
// 00791a7e  5f                   pop edi
// 00791a7f  5b                   pop ebx
// 00791a80  c20800               ret 8
// 00791a83  8b4734               mov eax, dword ptr [edi + 0x34]
// 00791a86  83f8ff               cmp eax, -1
// 00791a89  751a                 jne 0x791aa5
// 00791a8b  8b4730               mov eax, dword ptr [edi + 0x30]
// 00791a8e  5e                   pop esi
// 00791a8f  5f                   pop edi
// 00791a90  5b                   pop ebx
// 00791a91  c20800               ret 8
// 00791a94  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00791a9a  83f8ff               cmp eax, -1
// 00791a9d  7506                 jne 0x791aa5
// 00791a9f  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 00791aa5  5e                   pop esi
// 00791aa6  5f                   pop edi
// 00791aa7  5b                   pop ebx
// 00791aa8  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
