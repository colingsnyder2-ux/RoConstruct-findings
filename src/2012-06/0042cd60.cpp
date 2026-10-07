// roc 2012-06 0042cd60  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042cd60
//
// 0042cd60  8b442404             mov eax, dword ptr [esp + 4]
// 0042cd64  8b542408             mov edx, dword ptr [esp + 8]
// 0042cd68  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0042cd6b  50                   push eax
// 0042cd6c  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0042cd6f  52                   push edx
// 0042cd70  680a110000           push 0x110a
// 0042cd75  50                   push eax
// 0042cd76  ff15043cb200         call dword ptr [0xb23c04]
// 0042cd7c  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeBase.cpp (function ?GetNextItem@CXTPTreeBase@@UBEPAU_TREEITEM@@PAU2@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeBase.cpp
