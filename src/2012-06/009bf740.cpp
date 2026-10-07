// roc 2012-06 009bf740  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf740
//
// 009bf740  8b442404             mov eax, dword ptr [esp + 4]
// 009bf744  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009bf747  50                   push eax
// 009bf748  6a06                 push 6
// 009bf74a  680a110000           push 0x110a
// 009bf74f  51                   push ecx
// 009bf750  ff15043cb200         call dword ptr [0xb23c04]
// 009bf756  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetNextVisibleItem@CTreeCtrl@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
