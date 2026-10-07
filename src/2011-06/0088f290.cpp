// roc 2011-06 0088f290  unit: CXTPRibbonTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088f290
//
// 0088f290  8b442404             mov eax, dword ptr [esp + 4]
// 0088f294  50                   push eax
// 0088f295  e8e6ffffff           call 0x88f280
// 0088f29a  8bc8                 mov ecx, eax
// 0088f29c  e8cff20500           call 0x8ee570
// 0088f2a1  c20400               ret 4
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?PlayEventSound@CXTPSkinPopupMenuState@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObjectMenu.cpp
