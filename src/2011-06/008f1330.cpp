// roc 2011-06 008f1330  unit: CXTCaptionThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1330
//
// 008f1330  6aff                 push -1
// 008f1332  6888f6a000           push 0xa0f688
// 008f1337  64a100000000         mov eax, dword ptr fs:[0]
// 008f133d  50                   push eax
// 008f133e  51                   push ecx
// 008f133f  56                   push esi
// 008f1340  a12058c900           mov eax, dword ptr [0xc95820]
// 008f1345  33c4                 xor eax, esp
// 008f1347  50                   push eax
// 008f1348  8d44240c             lea eax, [esp + 0xc]
// 008f134c  64a300000000         mov dword ptr fs:[0], eax
// 008f1352  8bf1                 mov esi, ecx
// 008f1354  89742408             mov dword ptr [esp + 8], esi
// 008f1358  e8f3a2f7ff           call 0x86b650
// 008f135d  8d4e14               lea ecx, [esi + 0x14]
// 008f1360  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008f1368  c7060ca2ad00         mov dword ptr [esi], 0xada20c
// 008f136e  e84d35f5ff           call 0x8448c0
// 008f1373  8d4e20               lea ecx, [esi + 0x20]
// 008f1376  e84535f5ff           call 0x8448c0
// 008f137b  8bc6                 mov eax, esi
// 008f137d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f1381  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1388  59                   pop ecx
// 008f1389  5e                   pop esi
// 008f138a  83c410               add esp, 0x10
// 008f138d  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp