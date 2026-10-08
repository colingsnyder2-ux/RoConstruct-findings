// roc 2009-06 00810b10  unit: CXTPScrollBase  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810b10
//
// 00810b10  8b4108               mov eax, dword ptr [ecx + 8]
// 00810b13  85c0                 test eax, eax
// 00810b15  741b                 je 0x810b32
// 00810b17  33c9                 xor ecx, ecx
// 00810b19  394c2404             cmp dword ptr [esp + 4], ecx
// 00810b1d  0f94c1               sete cl
// 00810b20  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 00810b27  51                   push ecx
// 00810b28  50                   push eax
// 00810b29  ff1558ed8900         call dword ptr [0x89ed58]
// 00810b2f  c20400               ret 4
// 00810b32  33c0                 xor eax, eax
// 00810b34  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
