// from server: 100% by auto
// roc 2011-06 00886310  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00886310
//
// 00886310  8b442404             mov eax, dword ptr [esp + 4]
// 00886314  50                   push eax
// 00886315  e806b9ffff           call 0x881c20
// 0088631a  8bc8                 mov ecx, eax
// 0088631c  e8aff3ffff           call 0x8856d0
// 00886321  c20400               ret 4
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?PlayEventSound@CXTPSkinPopupMenuState@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObjectMenu.cpp
