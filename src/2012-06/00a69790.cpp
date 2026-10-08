// roc 2012-06 00a69790  unit: CXTCaptionButtonThemeFactory  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69790
//
// 00a69790  56                   push esi
// 00a69791  6a00                 push 0
// 00a69793  8bf1                 mov esi, ecx
// 00a69795  e856040100           call 0xa79bf0
// 00a6979a  c7067459c200         mov dword ptr [esi], 0xc25974
// 00a697a0  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 00a697aa  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00a697b4  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00a697bb  8bc6                 mov eax, esi
// 00a697bd  5e                   pop esi
// 00a697be  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ??0CXTCaptionButtonThemeOfficeXP@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
