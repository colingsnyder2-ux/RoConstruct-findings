// roc 2012-06 00a00ad0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a00ad0
//
// 00a00ad0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a00ad4  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00a00ada  85c0                 test eax, eax
// 00a00adc  745b                 je 0xa00b39
// 00a00ade  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 00a00ae5  7452                 je 0xa00b39
// 00a00ae7  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00a00aee  7433                 je 0xa00b23
// 00a00af0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a00af5  7416                 je 0xa00b0d
// 00a00af7  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00a00aff  c744240800000000     mov dword ptr [esp + 8], 0
// 00a00b07  ff254c3bb200         jmp dword ptr [0xb23b4c]
// 00a00b0d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00a00b15  c744240801000000     mov dword ptr [esp + 8], 1
// 00a00b1d  ff254c3bb200         jmp dword ptr [0xb23b4c]
// 00a00b23  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00a00b2b  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00a00b33  ff254c3bb200         jmp dword ptr [0xb23b4c]
// 00a00b39  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?AdjustExcludeRect@CXTPDefaultTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
