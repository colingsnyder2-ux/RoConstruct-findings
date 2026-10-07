// roc 2007-08 006653b0  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006653b0
//
// 006653b0  8b442404             mov eax, dword ptr [esp + 4]
// 006653b4  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006653b7  50                   push eax
// 006653b8  6a07                 push 7
// 006653ba  680a110000           push 0x110a
// 006653bf  51                   push ecx
// 006653c0  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006653c6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetPrevVisibleItem@CTreeCtrl@@QBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
