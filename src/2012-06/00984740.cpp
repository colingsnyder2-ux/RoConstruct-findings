// roc 2012-06 00984740  unit: CRobloxControlColorSelector  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984740
//
// 00984740  8b01                 mov eax, dword ptr [ecx]
// 00984742  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00984748  6a00                 push 0
// 0098474a  ffd2                 call edx
// 0098474c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnRemoved@CXTPControl@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
