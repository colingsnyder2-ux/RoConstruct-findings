// roc 2009-12 008f47b0  unit: CXTCaptionButtonTheme  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f47b0
//
// 008f47b0  83ec10               sub esp, 0x10
// 008f47b3  56                   push esi
// 008f47b4  8b742424             mov esi, dword ptr [esp + 0x24]
// 008f47b8  56                   push esi
// 008f47b9  8d4c2408             lea ecx, [esp + 8]
// 008f47bd  e80e6bf5ff           call 0x84b2d0
// 008f47c2  8b06                 mov eax, dword ptr [esi]
// 008f47c4  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008f47ca  8bce                 mov ecx, esi
// 008f47cc  ffd2                 call edx
// 008f47ce  a804                 test al, 4
// 008f47d0  741e                 je 0x8f47f0
// 008f47d2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f47d6  2b442404             sub eax, dword ptr [esp + 4]
// 008f47da  b900000000           mov ecx, 0
// 008f47df  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008f47e3  99                   cdq 
// 008f47e4  2bc2                 sub eax, edx
// 008f47e6  d1f8                 sar eax, 1
// 008f47e8  0f98c1               sets cl
// 008f47eb  49                   dec ecx
// 008f47ec  23c1                 and eax, ecx
// 008f47ee  eb03                 jmp 0x8f47f3
// 008f47f0  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008f47f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f47f7  8901                 mov dword ptr [ecx], eax
// 008f47f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f47fd  2b442408             sub eax, dword ptr [esp + 8]
// 008f4801  5e                   pop esi
// 008f4802  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008f4806  99                   cdq 
// 008f4807  2bc2                 sub eax, edx
// 008f4809  d1f8                 sar eax, 1
// 008f480b  ba00000000           mov edx, 0
// 008f4810  0f98c2               sets dl
// 008f4813  4a                   dec edx
// 008f4814  23c2                 and eax, edx
// 008f4816  894104               mov dword ptr [ecx + 4], eax
// 008f4819  83c410               add esp, 0x10
// 008f481c  c21000               ret 0x10
// copied from an identical function in another client (function ?OffsetPoint@CXTButtonTheme@@MAEXAAVCPoint@@VCSize@@PAVCXTButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp