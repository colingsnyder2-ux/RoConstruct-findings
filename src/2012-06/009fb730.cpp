// roc 2012-06 009fb730  unit: CXTPControlComboBoxGalleryPopupBar  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fb730
//
// 009fb730  e8fbeaffff           call 0x9fa230
// 009fb735  8bc8                 mov ecx, eax
// 009fb737  e964e5ffff           jmp 0x9f9ca0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
