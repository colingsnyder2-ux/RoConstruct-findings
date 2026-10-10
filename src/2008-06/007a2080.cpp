// roc 2008-06 007a2080  unit: CXTCaptionButtonTheme  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a2080
//
// 007a2080  83ec10               sub esp, 0x10
// 007a2083  56                   push esi
// 007a2084  8b742424             mov esi, dword ptr [esp + 0x24]
// 007a2088  56                   push esi
// 007a2089  8d4c2408             lea ecx, [esp + 8]
// 007a208d  e89e5af5ff           call 0x6f7b30
// 007a2092  8b06                 mov eax, dword ptr [esi]
// 007a2094  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 007a209a  8bce                 mov ecx, esi
// 007a209c  ffd2                 call edx
// 007a209e  a804                 test al, 4
// 007a20a0  741e                 je 0x7a20c0
// 007a20a2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a20a6  2b442404             sub eax, dword ptr [esp + 4]
// 007a20aa  b900000000           mov ecx, 0
// 007a20af  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007a20b3  99                   cdq 
// 007a20b4  2bc2                 sub eax, edx
// 007a20b6  d1f8                 sar eax, 1
// 007a20b8  0f98c1               sets cl
// 007a20bb  49                   dec ecx
// 007a20bc  23c1                 and eax, ecx
// 007a20be  eb03                 jmp 0x7a20c3
// 007a20c0  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a20c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a20c7  8901                 mov dword ptr [ecx], eax
// 007a20c9  8b442410             mov eax, dword ptr [esp + 0x10]
// 007a20cd  2b442408             sub eax, dword ptr [esp + 8]
// 007a20d1  5e                   pop esi
// 007a20d2  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007a20d6  99                   cdq 
// 007a20d7  2bc2                 sub eax, edx
// 007a20d9  d1f8                 sar eax, 1
// 007a20db  ba00000000           mov edx, 0
// 007a20e0  0f98c2               sets dl
// 007a20e3  4a                   dec edx
// 007a20e4  23c2                 and eax, edx
// 007a20e6  894104               mov dword ptr [ecx + 4], eax
// 007a20e9  83c410               add esp, 0x10
// 007a20ec  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButtonTheme.cpp (function ?OffsetPoint@CXTButtonTheme@@MAEXAAVCPoint@@VCSize@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp
