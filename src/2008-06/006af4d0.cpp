// roc 2008-06 006af4d0  unit: CXTPPaintManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006af4d0
//
// 006af4d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006af4d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006af4d8  83ec08               sub esp, 8
// 006af4db  56                   push esi
// 006af4dc  8b742410             mov esi, dword ptr [esp + 0x10]
// 006af4e0  50                   push eax
// 006af4e1  51                   push ecx
// 006af4e2  8d54240c             lea edx, [esp + 0xc]
// 006af4e6  52                   push edx
// 006af4e7  8bce                 mov ecx, esi
// 006af4e9  e83c1fffff           call 0x6a142a
// 006af4ee  8b442420             mov eax, dword ptr [esp + 0x20]
// 006af4f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006af4f6  50                   push eax
// 006af4f7  51                   push ecx
// 006af4f8  8bce                 mov ecx, esi
// 006af4fa  e8251fffff           call 0x6a1424
// 006af4ff  5e                   pop esi
// 006af500  83c408               add esp, 8
// 006af503  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?Line@CXTPPaintManager@@QAEXPAVCDC@@VCPoint@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
