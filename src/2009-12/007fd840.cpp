// roc 2009-12 007fd840  unit: CXTPPaintManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd840
//
// 007fd840  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fd844  50                   push eax
// 007fd845  8bd1                 mov edx, ecx
// 007fd847  e8f4fdffff           call 0x7fd640
// 007fd84c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fd850  50                   push eax
// 007fd851  51                   push ecx
// 007fd852  8bca                 mov ecx, edx
// 007fd854  e8e7fdffff           call 0x7fd640
// 007fd859  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fd85d  50                   push eax
// 007fd85e  8d542410             lea edx, [esp + 0x10]
// 007fd862  52                   push edx
// 007fd863  e8906dffff           call 0x7f45f8
// 007fd868  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Draw3dRect@CXTPPaintManager@@QAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp