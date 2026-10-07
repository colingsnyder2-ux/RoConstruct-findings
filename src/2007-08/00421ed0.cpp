// roc 2007-08 00421ed0  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00421ed0
//
// 00421ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00421ed4  8b542408             mov edx, dword ptr [esp + 8]
// 00421ed8  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00421edb  50                   push eax
// 00421edc  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00421edf  52                   push edx
// 00421ee0  680a110000           push 0x110a
// 00421ee5  50                   push eax
// 00421ee6  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00421eec  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeBase.cpp (function ?GetNextItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeBase.cpp
