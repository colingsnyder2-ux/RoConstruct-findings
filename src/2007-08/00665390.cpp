// from server: 100% by auto
// roc 2007-08 00665390  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665390
//
// 00665390  8b442404             mov eax, dword ptr [esp + 4]
// 00665394  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00665397  50                   push eax
// 00665398  6a06                 push 6
// 0066539a  680a110000           push 0x110a
// 0066539f  51                   push ecx
// 006653a0  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006653a6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetNextVisibleItem@CTreeCtrl@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
