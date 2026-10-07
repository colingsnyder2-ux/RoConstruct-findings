// roc 2008-06 006dc160  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc160
//
// 006dc160  8b442404             mov eax, dword ptr [esp + 4]
// 006dc164  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006dc167  50                   push eax
// 006dc168  6a06                 push 6
// 006dc16a  680a110000           push 0x110a
// 006dc16f  51                   push ecx
// 006dc170  ff15142e8000         call dword ptr [0x802e14]
// 006dc176  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetNextVisibleItem@CTreeCtrl@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
