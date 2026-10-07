// roc 2008-06 00425ba0  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425ba0
//
// 00425ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00425ba4  8b542408             mov edx, dword ptr [esp + 8]
// 00425ba8  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00425bab  50                   push eax
// 00425bac  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00425baf  52                   push edx
// 00425bb0  680a110000           push 0x110a
// 00425bb5  50                   push eax
// 00425bb6  ff15142e8000         call dword ptr [0x802e14]
// 00425bbc  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTShellTreeBase.cpp (function ?GetNextItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeBase.cpp
