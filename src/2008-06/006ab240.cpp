// roc 2008-06 006ab240  unit: CRobloxControlColorSelector  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab240
//
// 006ab240  8bc1                 mov eax, ecx
// 006ab242  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 006ab248  85c9                 test ecx, ecx
// 006ab24a  7405                 je 0x6ab251
// 006ab24c  e97f9c0000           jmp 0x6b4ed0
// 006ab251  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 006ab257  85c9                 test ecx, ecx
// 006ab259  7410                 je 0x6ab26b
// 006ab25b  e880670400           call 0x6f19e0
// 006ab260  85c0                 test eax, eax
// 006ab262  7407                 je 0x6ab26b
// 006ab264  8bc8                 mov ecx, eax
// 006ab266  e9f57cffff           jmp 0x6a2f60
// 006ab26b  833d60e0970000       cmp dword ptr [0x97e060], 0
// 006ab272  750a                 jne 0x6ab27e
// 006ab274  6a00                 push 0
// 006ab276  e8253e0000           call 0x6af0a0
// 006ab27b  83c404               add esp, 4
// 006ab27e  a160e09700           mov eax, dword ptr [0x97e060]
// 006ab283  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetPaintManager@CXTPControl@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
