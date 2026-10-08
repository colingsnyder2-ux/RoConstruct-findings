// from server: 100% by auto
// roc 2008-06 004baaa0  unit: Exposer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004baaa0
//
// 004baaa0  8a442404             mov al, byte ptr [esp + 4]
// 004baaa4  884109               mov byte ptr [ecx + 9], al
// 004baaa7  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTOutBarCtrl.cpp (function ?SelectItem@CXTOutBarItem@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTOutBarCtrl.cpp
