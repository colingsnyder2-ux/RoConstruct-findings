// from server: 100% by auto
// roc 2012-06 009fe8f0  unit: CXTPControlComboBoxGalleryPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fe8f0
//
// 009fe8f0  8b442404             mov eax, dword ptr [esp + 4]
// 009fe8f4  50                   push eax
// 009fe8f5  e836b9ffff           call 0x9fa230
// 009fe8fa  8bc8                 mov ecx, eax
// 009fe8fc  e8aff3ffff           call 0x9fdcb0
// 009fe901  c20400               ret 4
// library xtp-15.2.1/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?PlayEventSound@CXTPSkinPopupMenuState@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SkinFramework/XTPSkinObjectMenu.cpp
