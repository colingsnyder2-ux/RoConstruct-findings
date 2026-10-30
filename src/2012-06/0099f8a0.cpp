// from server: 100% by auto
// roc 2012-06 0099f8a0  unit: CXTPToolBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f8a0
//
// 0099f8a0  8b442408             mov eax, dword ptr [esp + 8]
// 0099f8a4  56                   push esi
// 0099f8a5  8b742408             mov esi, dword ptr [esp + 8]
// 0099f8a9  50                   push eax
// 0099f8aa  56                   push esi
// 0099f8ab  e80035ffff           call 0x992db0
// 0099f8b0  8bc8                 mov ecx, eax
// 0099f8b2  e8e989feff           call 0x9882a0
// 0099f8b7  8bc6                 mov eax, esi
// 0099f8b9  5e                   pop esi
// 0099f8ba  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPToolBar.cpp (function ?GetAutoIconSize@CXTPCommandBar@@IBE?AVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPToolBar.cpp
