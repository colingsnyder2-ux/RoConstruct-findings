// from server: 100% by auto
// roc 2008-06 007a1cd0  unit: CXTCaptionButtonThemeOfficeXP  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1cd0
//
// 007a1cd0  56                   push esi
// 007a1cd1  6a00                 push 0
// 007a1cd3  8bf1                 mov esi, ecx
// 007a1cd5  e886fdffff           call 0x7a1a60
// 007a1cda  8b442408             mov eax, dword ptr [esp + 8]
// 007a1cde  898680000000         mov dword ptr [esi + 0x80], eax
// 007a1ce4  c706a4f28600         mov dword ptr [esi], 0x86f2a4
// 007a1cea  c7461800000000       mov dword ptr [esi + 0x18], 0
// 007a1cf1  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 007a1cfb  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 007a1d05  8bc6                 mov eax, esi
// 007a1d07  5e                   pop esi
// 007a1d08  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ??0CXTButtonThemeOffice2003@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
