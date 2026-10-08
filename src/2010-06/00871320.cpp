// roc 2010-06 00871320  unit: CXTPDockingPaneContext  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00871320
//
// 00871320  83ec14               sub esp, 0x14
// 00871323  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00871329  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087132d  56                   push esi
// 0087132e  57                   push edi
// 0087132f  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 00871335  51                   push ecx
// 00871336  8d4c2410             lea ecx, [esp + 0x10]
// 0087133a  897c240c             mov dword ptr [esp + 0xc], edi
// 0087133e  e86ddff8ff           call 0x7ff2b0
// 00871343  8b542410             mov edx, dword ptr [esp + 0x10]
// 00871347  8b742420             mov esi, dword ptr [esp + 0x20]
// 0087134b  2bd7                 sub edx, edi
// 0087134d  39560c               cmp dword ptr [esi + 0xc], edx
// 00871350  0f8c31010000         jl 0x871487
// 00871356  8b4604               mov eax, dword ptr [esi + 4]
// 00871359  55                   push ebp
// 0087135a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0087135e  8d0c2f               lea ecx, [edi + ebp]
// 00871361  3bc1                 cmp eax, ecx
// 00871363  0f8f1d010000         jg 0x871486
// 00871369  53                   push ebx
// 0087136a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0087136e  8bd3                 mov edx, ebx
// 00871370  2bd7                 sub edx, edi
// 00871372  395608               cmp dword ptr [esi + 8], edx
// 00871375  0f8c0a010000         jl 0x871485
// 0087137b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087137f  8d1439               lea edx, [ecx + edi]
// 00871382  3916                 cmp dword ptr [esi], edx
// 00871384  0f8ffb000000         jg 0x871485
// 0087138a  2be8                 sub ebp, eax
// 0087138c  8bc5                 mov eax, ebp
// 0087138e  99                   cdq 
// 0087138f  33c2                 xor eax, edx
// 00871391  2bc2                 sub eax, edx
// 00871393  3bc7                 cmp eax, edi
// 00871395  8b3d40bc9e00         mov edi, dword ptr [0x9ebc40]
// 0087139b  7d0e                 jge 0x8713ab
// 0087139d  55                   push ebp
// 0087139e  6a00                 push 0
// 008713a0  56                   push esi
// 008713a1  ffd7                 call edi
// 008713a3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008713a7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008713ab  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 008713ae  8bc5                 mov eax, ebp
// 008713b0  2b442418             sub eax, dword ptr [esp + 0x18]
// 008713b4  99                   cdq 
// 008713b5  33c2                 xor eax, edx
// 008713b7  2bc2                 sub eax, edx
// 008713b9  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008713bd  7d14                 jge 0x8713d3
// 008713bf  8b442418             mov eax, dword ptr [esp + 0x18]
// 008713c3  2bc5                 sub eax, ebp
// 008713c5  50                   push eax
// 008713c6  6a00                 push 0
// 008713c8  56                   push esi
// 008713c9  ffd7                 call edi
// 008713cb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008713cf  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008713d3  8beb                 mov ebp, ebx
// 008713d5  2b6e08               sub ebp, dword ptr [esi + 8]
// 008713d8  8bc5                 mov eax, ebp
// 008713da  99                   cdq 
// 008713db  33c2                 xor eax, edx
// 008713dd  2bc2                 sub eax, edx
// 008713df  3b442410             cmp eax, dword ptr [esp + 0x10]
// 008713e3  7d0e                 jge 0x8713f3
// 008713e5  6a00                 push 0
// 008713e7  55                   push ebp
// 008713e8  56                   push esi
// 008713e9  ffd7                 call edi
// 008713eb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008713ef  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008713f3  8b2e                 mov ebp, dword ptr [esi]
// 008713f5  8bc5                 mov eax, ebp
// 008713f7  2bc1                 sub eax, ecx
// 008713f9  99                   cdq 
// 008713fa  33c2                 xor eax, edx
// 008713fc  2bc2                 sub eax, edx
// 008713fe  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00871402  7d10                 jge 0x871414
// 00871404  6a00                 push 0
// 00871406  2bcd                 sub ecx, ebp
// 00871408  51                   push ecx
// 00871409  56                   push esi
// 0087140a  ffd7                 call edi
// 0087140c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00871410  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00871414  8b2e                 mov ebp, dword ptr [esi]
// 00871416  8bc5                 mov eax, ebp
// 00871418  2bc3                 sub eax, ebx
// 0087141a  99                   cdq 
// 0087141b  33c2                 xor eax, edx
// 0087141d  2bc2                 sub eax, edx
// 0087141f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00871423  7d0c                 jge 0x871431
// 00871425  6a00                 push 0
// 00871427  2bdd                 sub ebx, ebp
// 00871429  53                   push ebx
// 0087142a  56                   push esi
// 0087142b  ffd7                 call edi
// 0087142d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00871431  8b5e08               mov ebx, dword ptr [esi + 8]
// 00871434  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00871438  8bc3                 mov eax, ebx
// 0087143a  2bc1                 sub eax, ecx
// 0087143c  99                   cdq 
// 0087143d  33c2                 xor eax, edx
// 0087143f  2bc2                 sub eax, edx
// 00871441  3bc5                 cmp eax, ebp
// 00871443  7d08                 jge 0x87144d
// 00871445  6a00                 push 0
// 00871447  2bcb                 sub ecx, ebx
// 00871449  51                   push ecx
// 0087144a  56                   push esi
// 0087144b  ffd7                 call edi
// 0087144d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00871450  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00871454  8bc3                 mov eax, ebx
// 00871456  2bc1                 sub eax, ecx
// 00871458  99                   cdq 
// 00871459  33c2                 xor eax, edx
// 0087145b  2bc2                 sub eax, edx
// 0087145d  3bc5                 cmp eax, ebp
// 0087145f  7d08                 jge 0x871469
// 00871461  2bcb                 sub ecx, ebx
// 00871463  51                   push ecx
// 00871464  6a00                 push 0
// 00871466  56                   push esi
// 00871467  ffd7                 call edi
// 00871469  8b5e04               mov ebx, dword ptr [esi + 4]
// 0087146c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00871470  8bc3                 mov eax, ebx
// 00871472  2bc1                 sub eax, ecx
// 00871474  99                   cdq 
// 00871475  33c2                 xor eax, edx
// 00871477  2bc2                 sub eax, edx
// 00871479  3bc5                 cmp eax, ebp
// 0087147b  7d08                 jge 0x871485
// 0087147d  2bcb                 sub ecx, ebx
// 0087147f  51                   push ecx
// 00871480  6a00                 push 0
// 00871482  56                   push esi
// 00871483  ffd7                 call edi
// 00871485  5b                   pop ebx
// 00871486  5d                   pop ebp
// 00871487  5f                   pop edi
// 00871488  5e                   pop esi
// 00871489  83c414               add esp, 0x14
// 0087148c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
