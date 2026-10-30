// roc 2009-06 00819760  unit: CXTCaptionButtonThemeOfficeXP  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819760
//
// 00819760  56                   push esi
// 00819761  6a00                 push 0
// 00819763  8bf1                 mov esi, ecx
// 00819765  e896fdffff           call 0x819500
// 0081976a  8b442408             mov eax, dword ptr [esp + 8]
// 0081976e  898680000000         mov dword ptr [esi + 0x80], eax
// 00819774  c706e4f79000         mov dword ptr [esi], 0x90f7e4
// 0081977a  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00819781  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 0081978b  c7868800000000000000 mov dword ptr [esi + 0x88], 0
// 00819795  8bc6                 mov eax, esi
// 00819797  5e                   pop esi
// 00819798  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ??0CXTButtonThemeOffice2003@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
