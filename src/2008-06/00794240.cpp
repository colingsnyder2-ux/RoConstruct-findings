// from server: 100% by auto
// roc 2008-06 00794240  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794240
//
// 00794240  8b4108               mov eax, dword ptr [ecx + 8]
// 00794243  85c0                 test eax, eax
// 00794245  741b                 je 0x794262
// 00794247  33c9                 xor ecx, ecx
// 00794249  394c2404             cmp dword ptr [esp + 4], ecx
// 0079424d  0f94c1               sete cl
// 00794250  8d0c8decffffff       lea ecx, [ecx*4 - 0x14]
// 00794257  51                   push ecx
// 00794258  50                   push eax
// 00794259  ff15bc2d8000         call dword ptr [0x802dbc]
// 0079425f  c20400               ret 4
// 00794262  33c0                 xor eax, eax
// 00794264  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetSiteStyle@CXTPOffice2007FrameHook@@IBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
