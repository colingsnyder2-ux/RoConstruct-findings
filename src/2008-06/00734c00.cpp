// roc 2008-06 00734c00  unit: XTPPaintThemes::CXTPDefaultTheme  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00734c00
//
// 00734c00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00734c04  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00734c0a  85c0                 test eax, eax
// 00734c0c  745b                 je 0x734c69
// 00734c0e  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 00734c15  7452                 je 0x734c69
// 00734c17  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00734c1e  7433                 je 0x734c53
// 00734c20  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00734c25  7416                 je 0x734c3d
// 00734c27  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00734c2f  c744240800000000     mov dword ptr [esp + 8], 0
// 00734c37  ff25282d8000         jmp dword ptr [0x802d28]
// 00734c3d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00734c45  c744240801000000     mov dword ptr [esp + 8], 1
// 00734c4d  ff25282d8000         jmp dword ptr [0x802d28]
// 00734c53  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00734c5b  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00734c63  ff25282d8000         jmp dword ptr [0x802d28]
// 00734c69  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?AdjustExcludeRect@CXTPDefaultTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
