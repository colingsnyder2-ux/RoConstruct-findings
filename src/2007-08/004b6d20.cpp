// roc 2007-08 004b6d20  unit: Exposer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b6d20
//
// 004b6d20  8a442404             mov al, byte ptr [esp + 4]
// 004b6d24  884108               mov byte ptr [ecx + 8], al
// 004b6d27  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTOutBarCtrl.cpp (function ?EnableItem@CXTOutBarItem@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTOutBarCtrl.cpp
