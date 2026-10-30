// roc 2012-06 009849f0  unit: CRobloxControlColorSelector  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009849f0
//
// 009849f0  8bc1                 mov eax, ecx
// 009849f2  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 009849f8  85c9                 test ecx, ecx
// 009849fa  7405                 je 0x984a01
// 009849fc  e9afe30000           jmp 0x992db0
// 00984a01  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00984a07  85c9                 test ecx, ecx
// 00984a09  7410                 je 0x984a1b
// 00984a0b  e8a0a50400           call 0x9cefb0
// 00984a10  85c0                 test eax, eax
// 00984a12  7407                 je 0x984a1b
// 00984a14  8bc8                 mov ecx, eax
// 00984a16  e945de0100           jmp 0x9a2860
// 00984a1b  833d0893e50000       cmp dword ptr [0xe59308], 0
// 00984a22  750a                 jne 0x984a2e
// 00984a24  6a00                 push 0
// 00984a26  e8453e0000           call 0x988870
// 00984a2b  83c404               add esp, 4
// 00984a2e  a10893e500           mov eax, dword ptr [0xe59308]
// 00984a33  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetPaintManager@CXTPControl@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
