// roc 2007-03 0070f120  unit: seg_00700000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f120
//
// 0070f120  8b4108               mov eax, dword ptr [ecx + 8]
// 0070f123  85c0                 test eax, eax
// 0070f125  741b                 je 0x70f142
// 0070f127  33c9                 xor ecx, ecx
// 0070f129  394c2404             cmp dword ptr [esp + 4], ecx
// 0070f12d  0f94c1               sete cl
// 0070f130  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 0070f137  51                   push ecx
// 0070f138  50                   push eax
// 0070f139  ff1504ed7700         call dword ptr [0x77ed04]
// 0070f13f  c20400               ret 4
// 0070f142  33c0                 xor eax, eax
// 0070f144  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
