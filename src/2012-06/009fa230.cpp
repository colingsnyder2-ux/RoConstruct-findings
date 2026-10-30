// from server: 100% by auto
// roc 2012-06 009fa230  unit: CXTPControlComboBoxGalleryPopupBar  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa230
//
// 009fa230  6a00                 push 0
// 009fa232  e8d998f9ff           call 0x993b10
// 009fa237  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?GetGalleryItem@CXTPControlComboBoxGalleryPopupBar@@IBEPAVCXTPControlGallery@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
