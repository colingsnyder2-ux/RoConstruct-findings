// roc 2011-06 00810a80  unit: CXTPPaintManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00810a80
//
// 00810a80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00810a84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00810a88  83ec08               sub esp, 8
// 00810a8b  56                   push esi
// 00810a8c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00810a90  50                   push eax
// 00810a91  51                   push ecx
// 00810a92  8d54240c             lea edx, [esp + 0xc]
// 00810a96  52                   push edx
// 00810a97  8bce                 mov ecx, esi
// 00810a99  e8d2a4ffff           call 0x80af70
// 00810a9e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00810aa2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00810aa6  50                   push eax
// 00810aa7  51                   push ecx
// 00810aa8  8bce                 mov ecx, esi
// 00810aaa  e8bba4ffff           call 0x80af6a
// 00810aaf  5e                   pop esi
// 00810ab0  83c408               add esp, 8
// 00810ab3  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?Line@CXTPPaintManager@@QAEXPAVCDC@@VCPoint@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
