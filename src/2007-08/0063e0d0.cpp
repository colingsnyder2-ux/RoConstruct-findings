// roc 2007-08 0063e0d0  unit: CXTPPaintManager  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063e0d0
//
// 0063e0d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063e0d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063e0d8  56                   push esi
// 0063e0d9  8b742408             mov esi, dword ptr [esp + 8]
// 0063e0dd  50                   push eax
// 0063e0de  51                   push ecx
// 0063e0df  8d542414             lea edx, [esp + 0x14]
// 0063e0e3  52                   push edx
// 0063e0e4  8bce                 mov ecx, esi
// 0063e0e6  e89128ffff           call 0x63097c
// 0063e0eb  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063e0ef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0063e0f3  50                   push eax
// 0063e0f4  51                   push ecx
// 0063e0f5  8bce                 mov ecx, esi
// 0063e0f7  e87a28ffff           call 0x630976
// 0063e0fc  5e                   pop esi
// 0063e0fd  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?Line@CXTPPaintManager@@QAEXPAVCDC@@VCPoint@@1@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
