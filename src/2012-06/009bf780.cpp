// from server: 100% by auto
// roc 2012-06 009bf780  unit: CXTTreeBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf780
//
// 009bf780  8b442404             mov eax, dword ptr [esp + 4]
// 009bf784  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009bf787  50                   push eax
// 009bf788  6a09                 push 9
// 009bf78a  680b110000           push 0x110b
// 009bf78f  51                   push ecx
// 009bf790  ff15043cb200         call dword ptr [0xb23c04]
// 009bf796  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPPropertyPageNavigator.cpp (function ?SelectItem@CTreeCtrl@@QAEHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPPropertyPageNavigator.cpp
