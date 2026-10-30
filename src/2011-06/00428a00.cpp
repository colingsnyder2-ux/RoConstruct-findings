// from server: 100% by auto
// roc 2011-06 00428a00  unit: CRobloxTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00428a00
//
// 00428a00  8b442404             mov eax, dword ptr [esp + 4]
// 00428a04  8b542408             mov edx, dword ptr [esp + 8]
// 00428a08  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00428a0b  50                   push eax
// 00428a0c  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00428a0f  52                   push edx
// 00428a10  680a110000           push 0x110a
// 00428a15  50                   push eax
// 00428a16  ff15c019a400         call dword ptr [0xa419c0]
// 00428a1c  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeBase.cpp (function ?GetNextItem@CXTPTreeBase@@UBEPAU_TREEITEM@@PAU2@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeBase.cpp
