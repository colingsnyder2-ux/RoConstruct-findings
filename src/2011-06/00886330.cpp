// roc 2011-06 00886330  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00886330
//
// 00886330  8b442404             mov eax, dword ptr [esp + 4]
// 00886334  50                   push eax
// 00886335  e8e6b8ffff           call 0x881c20
// 0088633a  8bc8                 mov ecx, eax
// 0088633c  e82ff2ffff           call 0x885570
// 00886341  c20400               ret 4
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?PlayEventSound@CXTPSkinPopupMenuState@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObjectMenu.cpp
