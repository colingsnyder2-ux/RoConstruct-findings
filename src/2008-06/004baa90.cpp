// from server: 100% by auto
// roc 2008-06 004baa90  unit: Exposer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004baa90
//
// 004baa90  8a442404             mov al, byte ptr [esp + 4]
// 004baa94  884108               mov byte ptr [ecx + 8], al
// 004baa97  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTOutBarCtrl.cpp (function ?EnableItem@CXTOutBarItem@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTOutBarCtrl.cpp
