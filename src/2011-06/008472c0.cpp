// from server: 100% by auto
// roc 2011-06 008472c0  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008472c0
//
// 008472c0  8b442404             mov eax, dword ptr [esp + 4]
// 008472c4  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008472c7  50                   push eax
// 008472c8  6a06                 push 6
// 008472ca  680a110000           push 0x110a
// 008472cf  51                   push ecx
// 008472d0  ff15c019a400         call dword ptr [0xa419c0]
// 008472d6  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetNextVisibleItem@CTreeCtrl@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
