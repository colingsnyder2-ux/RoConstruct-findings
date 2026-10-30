// roc 2012-06 00a7a1d0  unit: CXTCaptionButtonTheme  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a1d0
//
// 00a7a1d0  83ec10               sub esp, 0x10
// 00a7a1d3  56                   push esi
// 00a7a1d4  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a7a1d8  56                   push esi
// 00a7a1d9  8d4c2408             lea ecx, [esp + 8]
// 00a7a1dd  e8beaff5ff           call 0x9d51a0
// 00a7a1e2  8b06                 mov eax, dword ptr [esi]
// 00a7a1e4  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00a7a1ea  8bce                 mov ecx, esi
// 00a7a1ec  ffd2                 call edx
// 00a7a1ee  a804                 test al, 4
// 00a7a1f0  741e                 je 0xa7a210
// 00a7a1f2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a7a1f6  2b442404             sub eax, dword ptr [esp + 4]
// 00a7a1fa  b900000000           mov ecx, 0
// 00a7a1ff  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00a7a203  99                   cdq 
// 00a7a204  2bc2                 sub eax, edx
// 00a7a206  d1f8                 sar eax, 1
// 00a7a208  0f98c1               sets cl
// 00a7a20b  49                   dec ecx
// 00a7a20c  23c1                 and eax, ecx
// 00a7a20e  eb03                 jmp 0xa7a213
// 00a7a210  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00a7a213  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a7a217  8901                 mov dword ptr [ecx], eax
// 00a7a219  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a7a21d  2b442408             sub eax, dword ptr [esp + 8]
// 00a7a221  5e                   pop esi
// 00a7a222  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00a7a226  99                   cdq 
// 00a7a227  2bc2                 sub eax, edx
// 00a7a229  d1f8                 sar eax, 1
// 00a7a22b  ba00000000           mov edx, 0
// 00a7a230  0f98c2               sets dl
// 00a7a233  4a                   dec edx
// 00a7a234  23c2                 and eax, edx
// 00a7a236  894104               mov dword ptr [ecx + 4], eax
// 00a7a239  83c410               add esp, 0x10
// 00a7a23c  c21000               ret 0x10
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?OffsetPoint@CXTButtonTheme@@MAEXAAVCPoint@@VCSize@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp
