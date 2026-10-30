// from server: 100% by auto
// roc 2012-06 00680ef0  unit: VAuthoringSettings::?$FactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00680ef0
//
// 00680ef0  56                   push esi
// 00680ef1  8bf1                 mov esi, ecx
// 00680ef3  e8e810eaff           call 0x521fe0
// 00680ef8  50                   push eax
// 00680ef9  8bce                 mov ecx, esi
// 00680efb  e800e8ffff           call 0x67f700
// 00680f00  5e                   pop esi
// 00680f01  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?BestFit@CXTPStatusBarPane@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
