// from server: 100% by auto
// roc 2012-06 009bf760  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf760
//
// 009bf760  8b442404             mov eax, dword ptr [esp + 4]
// 009bf764  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009bf767  50                   push eax
// 009bf768  6a07                 push 7
// 009bf76a  680a110000           push 0x110a
// 009bf76f  51                   push ecx
// 009bf770  ff15043cb200         call dword ptr [0xb23c04]
// 009bf776  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetPrevVisibleItem@CTreeCtrl@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
