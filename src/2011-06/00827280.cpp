// roc 2011-06 00827280  unit: CXTPToolBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00827280
//
// 00827280  8b442408             mov eax, dword ptr [esp + 8]
// 00827284  56                   push esi
// 00827285  8b742408             mov esi, dword ptr [esp + 8]
// 00827289  50                   push eax
// 0082728a  56                   push esi
// 0082728b  e8c038ffff           call 0x81ab50
// 00827290  8bc8                 mov ecx, eax
// 00827292  e8298dfeff           call 0x80ffc0
// 00827297  8bc6                 mov eax, esi
// 00827299  5e                   pop esi
// 0082729a  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPToolBar.cpp (function ?GetAutoIconSize@CXTPCommandBar@@IBE?AVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPToolBar.cpp
