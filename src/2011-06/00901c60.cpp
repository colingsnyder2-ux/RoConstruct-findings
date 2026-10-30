// roc 2011-06 00901c60  unit: CXTCaptionButtonThemeOfficeXP  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901c60
//
// 00901c60  56                   push esi
// 00901c61  6a00                 push 0
// 00901c63  8bf1                 mov esi, ecx
// 00901c65  e896fdffff           call 0x901a00
// 00901c6a  8b442408             mov eax, dword ptr [esp + 8]
// 00901c6e  898680000000         mov dword ptr [esi + 0x80], eax
// 00901c74  c706a4e3ad00         mov dword ptr [esi], 0xade3a4
// 00901c7a  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00901c81  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00901c8b  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 00901c95  8bc6                 mov eax, esi
// 00901c97  5e                   pop esi
// 00901c98  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ??0CXTButtonThemeOffice2003@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
