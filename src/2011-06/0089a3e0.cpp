// roc 2011-06 0089a3e0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089a3e0
//
// 0089a3e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0089a3e4  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0089a3ea  85c0                 test eax, eax
// 0089a3ec  0f8489000000         je 0x89a47b
// 0089a3f2  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0089a3f9  746a                 je 0x89a465
// 0089a3fb  ba05000000           mov edx, 5
// 0089a400  3991fc000000         cmp dword ptr [ecx + 0xfc], edx
// 0089a406  7473                 je 0x89a47b
// 0089a408  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 0089a412  741e                 je 0x89a432
// 0089a414  399000010000         cmp dword ptr [eax + 0x100], edx
// 0089a41a  7516                 jne 0x89a432
// 0089a41c  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0089a424  c744240800000000     mov dword ptr [esp + 8], 0
// 0089a42c  ff25e41ba400         jmp dword ptr [0xa41be4]
// 0089a432  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0089a437  7416                 je 0x89a44f
// 0089a439  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0089a441  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0089a449  ff25e41ba400         jmp dword ptr [0xa41be4]
// 0089a44f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0089a457  c744240800000000     mov dword ptr [esp + 8], 0
// 0089a45f  ff25e41ba400         jmp dword ptr [0xa41be4]
// 0089a465  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0089a46d  c744240801000000     mov dword ptr [esp + 8], 1
// 0089a475  ff25e41ba400         jmp dword ptr [0xa41be4]
// 0089a47b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?AdjustExcludeRect@CXTPOfficeTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
