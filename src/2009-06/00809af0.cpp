// roc 2009-06 00809af0  unit: CXTPDockingPaneAutoHidePanel  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00809af0
//
// 00809af0  56                   push esi
// 00809af1  6a00                 push 0
// 00809af3  8bf1                 mov esi, ecx
// 00809af5  e806fa0000           call 0x819500
// 00809afa  c7064cc09000         mov dword ptr [esi], 0x90c04c
// 00809b00  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 00809b0a  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00809b14  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00809b1b  8bc6                 mov eax, esi
// 00809b1d  5e                   pop esi
// 00809b1e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonThemeOfficeXP@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
