// from server: 100% by auto
// roc 2012-06 009bdc90  unit: CXTPColorManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bdc90
//
// 009bdc90  8b442408             mov eax, dword ptr [esp + 8]
// 009bdc94  8b542404             mov edx, dword ptr [esp + 4]
// 009bdc98  50                   push eax
// 009bdc99  52                   push edx
// 009bdc9a  e851ffffff           call 0x9bdbf0
// 009bdc9f  e8265ffcff           call 0x983bca
// 009bdca4  d95c2408             fstp dword ptr [esp + 8]
// 009bdca8  d9442408             fld dword ptr [esp + 8]
// 009bdcac  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?Length@CXTPColorManager@@AAEMKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
