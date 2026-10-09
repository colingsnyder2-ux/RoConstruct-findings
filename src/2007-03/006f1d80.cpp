// roc 2007-03 006f1d80  unit: seg_006f0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f1d80
//
// 006f1d80  56                   push esi
// 006f1d81  8bf1                 mov esi, ecx
// 006f1d83  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 006f1d89  85c0                 test eax, eax
// 006f1d8b  c70684af7d00         mov dword ptr [esi], 0x7daf84
// 006f1d91  7407                 je 0x6f1d9a
// 006f1d93  50                   push eax
// 006f1d94  ff159cd27700         call dword ptr [0x77d29c]
// 006f1d9a  8bce                 mov ecx, esi
// 006f1d9c  5e                   pop esi
// 006f1d9d  e9388d0400           jmp 0x73aada
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ??1CXTPRichRender@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
