// from server: 100% by auto
// roc 2008-06 007408c0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007408c0
//
// 007408c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007408c4  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007408ca  85c0                 test eax, eax
// 007408cc  0f8489000000         je 0x74095b
// 007408d2  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007408d9  746a                 je 0x740945
// 007408db  ba05000000           mov edx, 5
// 007408e0  3991fc000000         cmp dword ptr [ecx + 0xfc], edx
// 007408e6  7473                 je 0x74095b
// 007408e8  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 007408f2  741e                 je 0x740912
// 007408f4  399000010000         cmp dword ptr [eax + 0x100], edx
// 007408fa  7516                 jne 0x740912
// 007408fc  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00740904  c744240800000000     mov dword ptr [esp + 8], 0
// 0074090c  ff25282d8000         jmp dword ptr [0x802d28]
// 00740912  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00740917  7416                 je 0x74092f
// 00740919  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00740921  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00740929  ff25282d8000         jmp dword ptr [0x802d28]
// 0074092f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00740937  c744240800000000     mov dword ptr [esp + 8], 0
// 0074093f  ff25282d8000         jmp dword ptr [0x802d28]
// 00740945  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0074094d  c744240801000000     mov dword ptr [esp + 8], 1
// 00740955  ff25282d8000         jmp dword ptr [0x802d28]
// 0074095b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?AdjustExcludeRect@CXTPOfficeTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
