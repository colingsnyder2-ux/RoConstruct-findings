// from server: 100% by auto
// roc 2007-08 00669390  unit: CXTPColorManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00669390
//
// 00669390  8b442408             mov eax, dword ptr [esp + 8]
// 00669394  8b542404             mov edx, dword ptr [esp + 4]
// 00669398  50                   push eax
// 00669399  52                   push edx
// 0066939a  e851ffffff           call 0x6692f0
// 0066939f  e8687afcff           call 0x630e0c
// 006693a4  d95c2408             fstp dword ptr [esp + 8]
// 006693a8  d9442408             fld dword ptr [esp + 8]
// 006693ac  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?Length@CXTPColorManager@@AAEMKK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
