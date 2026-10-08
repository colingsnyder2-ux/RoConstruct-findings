// roc 2012-06 00a79e60  unit: CXTCaptionButtonThemeOfficeXP  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79e60
//
// 00a79e60  56                   push esi
// 00a79e61  6a00                 push 0
// 00a79e63  8bf1                 mov esi, ecx
// 00a79e65  e886fdffff           call 0xa79bf0
// 00a79e6a  8b442408             mov eax, dword ptr [esp + 8]
// 00a79e6e  898680000000         mov dword ptr [esi + 0x80], eax
// 00a79e74  c706649ac200         mov dword ptr [esi], 0xc29a64
// 00a79e7a  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00a79e81  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00a79e8b  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 00a79e95  8bc6                 mov eax, esi
// 00a79e97  5e                   pop esi
// 00a79e98  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ??0CXTButtonThemeOffice2003@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
