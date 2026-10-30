// roc 2010-06 008a85a0  unit: CXTCaptionButtonThemeOfficeXP  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a85a0
//
// 008a85a0  56                   push esi
// 008a85a1  6a00                 push 0
// 008a85a3  8bf1                 mov esi, ecx
// 008a85a5  e886fdffff           call 0x8a8330
// 008a85aa  8b442408             mov eax, dword ptr [esp + 8]
// 008a85ae  898680000000         mov dword ptr [esi + 0x80], eax
// 008a85b4  c7064c3fa700         mov dword ptr [esi], 0xa73f4c
// 008a85ba  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008a85c1  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 008a85cb  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 008a85d5  8bc6                 mov eax, esi
// 008a85d7  5e                   pop esi
// 008a85d8  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ??0CXTButtonThemeOffice2003@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
