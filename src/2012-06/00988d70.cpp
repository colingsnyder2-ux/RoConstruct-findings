// from server: 100% by auto
// roc 2012-06 00988d70  unit: CXTPPaintManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988d70
//
// 00988d70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00988d74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00988d78  83ec08               sub esp, 8
// 00988d7b  56                   push esi
// 00988d7c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00988d80  50                   push eax
// 00988d81  51                   push ecx
// 00988d82  8d54240c             lea edx, [esp + 0xc]
// 00988d86  52                   push edx
// 00988d87  8bce                 mov ecx, esi
// 00988d89  e874a2ffff           call 0x983002
// 00988d8e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00988d92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00988d96  50                   push eax
// 00988d97  51                   push ecx
// 00988d98  8bce                 mov ecx, esi
// 00988d9a  e85da2ffff           call 0x982ffc
// 00988d9f  5e                   pop esi
// 00988da0  83c408               add esp, 8
// 00988da3  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?Line@CXTPPaintManager@@QAEXPAVCDC@@VCPoint@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
