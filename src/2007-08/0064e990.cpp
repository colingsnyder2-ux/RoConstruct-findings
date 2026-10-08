// from server: 100% by auto
// roc 2007-08 0064e990  unit: CXTPImageManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064e990
//
// 0064e990  8b442408             mov eax, dword ptr [esp + 8]
// 0064e994  50                   push eax
// 0064e995  8b442408             mov eax, dword ptr [esp + 8]
// 0064e999  50                   push eax
// 0064e99a  50                   push eax
// 0064e99b  e870ffffff           call 0x64e910
// 0064e9a0  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?SetIcons@CXTPImageManager@@QAEHIW4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
