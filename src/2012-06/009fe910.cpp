// from server: 100% by auto
// roc 2012-06 009fe910  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fe910
//
// 009fe910  8b442404             mov eax, dword ptr [esp + 4]
// 009fe914  50                   push eax
// 009fe915  e816b9ffff           call 0x9fa230
// 009fe91a  8bc8                 mov ecx, eax
// 009fe91c  e82ff2ffff           call 0x9fdb50
// 009fe921  c20400               ret 4
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?PlayEventSound@CXTPSkinPopupMenuState@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObjectMenu.cpp
