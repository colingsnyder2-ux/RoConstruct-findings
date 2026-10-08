// roc 2011-06 008f1fd0  unit: CXTCaptionButtonThemeOfficeXP  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1fd0
//
// 008f1fd0  53                   push ebx
// 008f1fd1  8a5c2408             mov bl, byte ptr [esp + 8]
// 008f1fd5  57                   push edi
// 008f1fd6  8bf9                 mov edi, ecx
// 008f1fd8  f6c304               test bl, 4
// 008f1fdb  7413                 je 0x8f1ff0
// 008f1fdd  e8fe33f5ff           call 0x8453e0
// 008f1fe2  6a11                 push 0x11
// 008f1fe4  8bc8                 mov ecx, eax
// 008f1fe6  e8c52bf5ff           call 0x844bb0
// 008f1feb  5f                   pop edi
// 008f1fec  5b                   pop ebx
// 008f1fed  c20800               ret 8
// 008f1ff0  56                   push esi
// 008f1ff1  8b742414             mov esi, dword ptr [esp + 0x14]
// 008f1ff5  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008f1ffc  7546                 jne 0x8f2044
// 008f1ffe  ff15381ba400         call dword ptr [0xa41b38]
// 008f2004  3b4620               cmp eax, dword ptr [esi + 0x20]
// 008f2007  743b                 je 0x8f2044
// 008f2009  f6c301               test bl, 1
// 008f200c  7536                 jne 0x8f2044
// 008f200e  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 008f2014  85f6                 test esi, esi
// 008f2016  7504                 jne 0x8f201c
// 008f2018  33c0                 xor eax, eax
// 008f201a  eb03                 jmp 0x8f201f
// 008f201c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f201f  50                   push eax
// 008f2020  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f2026  85c0                 test eax, eax
// 008f2028  7409                 je 0x8f2033
// 008f202a  8b4678               mov eax, dword ptr [esi + 0x78]
// 008f202d  5e                   pop esi
// 008f202e  5f                   pop edi
// 008f202f  5b                   pop ebx
// 008f2030  c20800               ret 8
// 008f2033  8b4734               mov eax, dword ptr [edi + 0x34]
// 008f2036  83f8ff               cmp eax, -1
// 008f2039  751a                 jne 0x8f2055
// 008f203b  8b4730               mov eax, dword ptr [edi + 0x30]
// 008f203e  5e                   pop esi
// 008f203f  5f                   pop edi
// 008f2040  5b                   pop ebx
// 008f2041  c20800               ret 8
// 008f2044  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 008f204a  83f8ff               cmp eax, -1
// 008f204d  7506                 jne 0x8f2055
// 008f204f  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 008f2055  5e                   pop esi
// 008f2056  5f                   pop edi
// 008f2057  5b                   pop ebx
// 008f2058  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
