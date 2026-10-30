// roc 2009-12 008f1d70  unit: CXTPRibbonControlSystemButton  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1d70
//
// 008f1d70  56                   push esi
// 008f1d71  8bf1                 mov esi, ecx
// 008f1d73  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008f1d79  57                   push edi
// 008f1d7a  50                   push eax
// 008f1d7b  e8002cfaff           call 0x894980
// 008f1d80  50                   push eax
// 008f1d81  e8b81ef0ff           call 0x7f3c3e
// 008f1d86  8bf8                 mov edi, eax
// 008f1d88  83c408               add esp, 8
// 008f1d8b  85ff                 test edi, edi
// 008f1d8d  7516                 jne 0x8f1da5
// 008f1d8f  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f1d93  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f1d97  50                   push eax
// 008f1d98  51                   push ecx
// 008f1d99  8bce                 mov ecx, esi
// 008f1d9b  e8c093f4ff           call 0x83b160
// 008f1da0  5f                   pop edi
// 008f1da1  5e                   pop esi
// 008f1da2  c20800               ret 8
// 008f1da5  8bcf                 mov ecx, edi
// 008f1da7  e8a431faff           call 0x894f50
// 008f1dac  85c0                 test eax, eax
// 008f1dae  7437                 je 0x8f1de7
// 008f1db0  8bcf                 mov ecx, edi
// 008f1db2  e8d930faff           call 0x894e90
// 008f1db7  85c0                 test eax, eax
// 008f1db9  742c                 je 0x8f1de7
// 008f1dbb  8b16                 mov edx, dword ptr [esi]
// 008f1dbd  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008f1dc3  8bce                 mov ecx, esi
// 008f1dc5  ffd0                 call eax
// 008f1dc7  50                   push eax
// 008f1dc8  e813fcffff           call 0x8f19e0
// 008f1dcd  50                   push eax
// 008f1dce  e86b1ef0ff           call 0x7f3c3e
// 008f1dd3  83c408               add esp, 8
// 008f1dd6  85c0                 test eax, eax
// 008f1dd8  740d                 je 0x8f1de7
// 008f1dda  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f1dde  83400cee             add dword ptr [eax + 0xc], -0x12
// 008f1de2  5f                   pop edi
// 008f1de3  5e                   pop esi
// 008f1de4  c20800               ret 8
// 008f1de7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f1deb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008f1def  51                   push ecx
// 008f1df0  52                   push edx
// 008f1df1  8bce                 mov ecx, esi
// 008f1df3  e86893f4ff           call 0x83b160
// 008f1df8  5f                   pop edi
// 008f1df9  5e                   pop esi
// 008f1dfa  c20800               ret 8
// copied from an identical function in another client (function ?AdjustExcludeRect@CXTPRibbonControlSystemButton@@MAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp