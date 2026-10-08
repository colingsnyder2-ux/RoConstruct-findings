// from server: 100% by auto
// roc 2008-06 0078ea70  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078ea70
//
// 0078ea70  8b442404             mov eax, dword ptr [esp + 4]
// 0078ea74  85c0                 test eax, eax
// 0078ea76  7517                 jne 0x78ea8f
// 0078ea78  83c8ff               or eax, 0xffffffff
// 0078ea7b  6a00                 push 0
// 0078ea7d  894170               mov dword ptr [ecx + 0x70], eax
// 0078ea80  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0078ea83  6a00                 push 0
// 0078ea85  50                   push eax
// 0078ea86  ff15182e8000         call dword ptr [0x802e18]
// 0078ea8c  c20400               ret 4
// 0078ea8f  8b4004               mov eax, dword ptr [eax + 4]
// 0078ea92  6a00                 push 0
// 0078ea94  894170               mov dword ptr [ecx + 0x70], eax
// 0078ea97  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0078ea9a  6a00                 push 0
// 0078ea9c  50                   push eax
// 0078ea9d  ff15182e8000         call dword ptr [0x802e18]
// 0078eaa3  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrl.cpp (function ?SelectColorCell@CXTColorSelectorCtrl@@UAEXPAUCOLOR_CELL@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrl.cpp
