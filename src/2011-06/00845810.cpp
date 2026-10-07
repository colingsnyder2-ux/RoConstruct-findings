// roc 2011-06 00845810  unit: CXTPColorManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00845810
//
// 00845810  8b442408             mov eax, dword ptr [esp + 8]
// 00845814  8b542404             mov edx, dword ptr [esp + 4]
// 00845818  50                   push eax
// 00845819  52                   push edx
// 0084581a  e851ffffff           call 0x845770
// 0084581f  e8ac62fcff           call 0x80bad0
// 00845824  d95c2408             fstp dword ptr [esp + 8]
// 00845828  d9442408             fld dword ptr [esp + 8]
// 0084582c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?Length@CXTPColorManager@@AAEMKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
