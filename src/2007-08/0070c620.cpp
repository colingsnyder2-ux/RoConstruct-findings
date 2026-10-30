// from server: 100% by auto
// roc 2007-08 0070c620  unit: CXTColorBase  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070c620
//
// 0070c620  51                   push ecx
// 0070c621  dd442410             fld qword ptr [esp + 0x10]
// 0070c625  83ec18               sub esp, 0x18
// 0070c628  dd5c2410             fstp qword ptr [esp + 0x10]
// 0070c62c  8d442418             lea eax, [esp + 0x18]
// 0070c630  dd442430             fld qword ptr [esp + 0x30]
// 0070c634  dd5c2408             fstp qword ptr [esp + 8]
// 0070c638  dd442420             fld qword ptr [esp + 0x20]
// 0070c63c  dd1c24               fstp qword ptr [esp]
// 0070c63f  50                   push eax
// 0070c640  e8eb380100           call 0x71ff30
// 0070c645  8b00                 mov eax, dword ptr [eax]
// 0070c647  83c420               add esp, 0x20
// 0070c64a  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?HLStoRGB@CXTColorBase@@SAKNNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
