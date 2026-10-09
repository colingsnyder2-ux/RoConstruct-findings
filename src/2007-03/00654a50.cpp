// roc 2007-03 00654a50  unit: seg_00650000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654a50
//
// 00654a50  0fb6442405           movzx eax, byte ptr [esp + 5]
// 00654a55  89442404             mov dword ptr [esp + 4], eax
// 00654a59  db442404             fild dword ptr [esp + 4]
// 00654a5d  dc0d58777c00         fmul qword ptr [0x7c7758]
// 00654a63  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?GetGDelta@CXTPColorManager@@AAENK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
