// roc 2011-06 00815a80  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00815a80
//
// 00815a80  6a0c                 push 0xc
// 00815a82  e8299bffff           call 0x80f5b0
// 00815a87  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00815a8b  50                   push eax
// 00815a8c  8d44240c             lea eax, [esp + 0xc]
// 00815a90  50                   push eax
// 00815a91  e88a53ffff           call 0x80ae20
// 00815a96  c22400               ret 0x24
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?FillWorkspace@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
