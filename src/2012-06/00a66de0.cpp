// roc 2012-06 00a66de0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a66de0
//
// 00a66de0  8b442404             mov eax, dword ptr [esp + 4]
// 00a66de4  85c0                 test eax, eax
// 00a66de6  7517                 jne 0xa66dff
// 00a66de8  83c8ff               or eax, 0xffffffff
// 00a66deb  6a00                 push 0
// 00a66ded  894170               mov dword ptr [ecx + 0x70], eax
// 00a66df0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a66df3  6a00                 push 0
// 00a66df5  50                   push eax
// 00a66df6  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a66dfc  c20400               ret 4
// 00a66dff  8b4004               mov eax, dword ptr [eax + 4]
// 00a66e02  6a00                 push 0
// 00a66e04  894170               mov dword ptr [ecx + 0x70], eax
// 00a66e07  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a66e0a  6a00                 push 0
// 00a66e0c  50                   push eax
// 00a66e0d  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a66e13  c20400               ret 4
// library xtp-13.2.1/Source\Controls\XTColorSelectorCtrl.cpp (function ?SelectColorCell@CXTColorSelectorCtrl@@UAEXPAUCOLOR_CELL@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorSelectorCtrl.cpp
