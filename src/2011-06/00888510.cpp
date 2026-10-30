// roc 2011-06 00888510  unit: XTPPaintThemes::CXTPDefaultTheme  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888510
//
// 00888510  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00888514  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0088851a  85c0                 test eax, eax
// 0088851c  745b                 je 0x888579
// 0088851e  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 00888525  7452                 je 0x888579
// 00888527  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0088852e  7433                 je 0x888563
// 00888530  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00888535  7416                 je 0x88854d
// 00888537  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0088853f  c744240800000000     mov dword ptr [esp + 8], 0
// 00888547  ff25e41ba400         jmp dword ptr [0xa41be4]
// 0088854d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00888555  c744240801000000     mov dword ptr [esp + 8], 1
// 0088855d  ff25e41ba400         jmp dword ptr [0xa41be4]
// 00888563  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0088856b  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00888573  ff25e41ba400         jmp dword ptr [0xa41be4]
// 00888579  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?AdjustExcludeRect@CXTPDefaultTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
