// roc 2009-12 008eb6b0  unit: CXTPScrollBase  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb6b0
//
// 008eb6b0  8b4108               mov eax, dword ptr [ecx + 8]
// 008eb6b3  85c0                 test eax, eax
// 008eb6b5  741b                 je 0x8eb6d2
// 008eb6b7  33c9                 xor ecx, ecx
// 008eb6b9  394c2404             cmp dword ptr [esp + 4], ecx
// 008eb6bd  0f94c1               sete cl
// 008eb6c0  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 008eb6c7  51                   push ecx
// 008eb6c8  50                   push eax
// 008eb6c9  ff15d8c99800         call dword ptr [0x98c9d8]
// 008eb6cf  c20400               ret 4
// 008eb6d2  33c0                 xor eax, eax
// 008eb6d4  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
