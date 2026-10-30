// roc 2010-06 0082b470  unit: XTPPaintThemes::CXTPDefaultTheme  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082b470
//
// 0082b470  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082b474  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0082b47a  85c0                 test eax, eax
// 0082b47c  745b                 je 0x82b4d9
// 0082b47e  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 0082b485  7452                 je 0x82b4d9
// 0082b487  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0082b48e  7433                 je 0x82b4c3
// 0082b490  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0082b495  7416                 je 0x82b4ad
// 0082b497  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0082b49f  c744240800000000     mov dword ptr [esp + 8], 0
// 0082b4a7  ff25dcbb9e00         jmp dword ptr [0x9ebbdc]
// 0082b4ad  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0082b4b5  c744240801000000     mov dword ptr [esp + 8], 1
// 0082b4bd  ff25dcbb9e00         jmp dword ptr [0x9ebbdc]
// 0082b4c3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0082b4cb  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0082b4d3  ff25dcbb9e00         jmp dword ptr [0x9ebbdc]
// 0082b4d9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?AdjustExcludeRect@CXTPDefaultTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
