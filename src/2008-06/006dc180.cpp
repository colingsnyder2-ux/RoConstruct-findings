// roc 2008-06 006dc180  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc180
//
// 006dc180  8b442404             mov eax, dword ptr [esp + 4]
// 006dc184  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006dc187  50                   push eax
// 006dc188  6a07                 push 7
// 006dc18a  680a110000           push 0x110a
// 006dc18f  51                   push ecx
// 006dc190  ff15142e8000         call dword ptr [0x802e14]
// 006dc196  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetPrevVisibleItem@CTreeCtrl@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
