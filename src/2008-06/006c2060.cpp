// roc 2008-06 006c2060  unit: CXTPToolBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c2060
//
// 006c2060  8b442408             mov eax, dword ptr [esp + 8]
// 006c2064  56                   push esi
// 006c2065  8b742408             mov esi, dword ptr [esp + 8]
// 006c2069  50                   push eax
// 006c206a  56                   push esi
// 006c206b  e8602effff           call 0x6b4ed0
// 006c2070  8bc8                 mov ecx, eax
// 006c2072  e809cafeff           call 0x6aea80
// 006c2077  8bc6                 mov eax, esi
// 006c2079  5e                   pop esi
// 006c207a  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?GetAutoIconSize@CXTPCommandBar@@IBE?AVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
