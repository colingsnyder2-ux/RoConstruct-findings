// roc 2009-12 008f4440  unit: CXTCaptionButtonThemeOfficeXP  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4440
//
// 008f4440  56                   push esi
// 008f4441  6a00                 push 0
// 008f4443  8bf1                 mov esi, ecx
// 008f4445  e8a6fdffff           call 0x8f41f0
// 008f444a  8b442408             mov eax, dword ptr [esp + 8]
// 008f444e  898680000000         mov dword ptr [esi + 0x80], eax
// 008f4454  c70654fca000         mov dword ptr [esi], 0xa0fc54
// 008f445a  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008f4461  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 008f446b  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 008f4475  8bc6                 mov eax, esi
// 008f4477  5e                   pop esi
// 008f4478  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ??0CXTButtonThemeOffice2003@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
