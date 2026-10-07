// roc 2007-08 004b6d30  unit: Exposer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b6d30
//
// 004b6d30  8a442404             mov al, byte ptr [esp + 4]
// 004b6d34  884109               mov byte ptr [ecx + 9], al
// 004b6d37  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTOutBarCtrl.cpp (function ?SelectItem@CXTOutBarItem@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTOutBarCtrl.cpp
