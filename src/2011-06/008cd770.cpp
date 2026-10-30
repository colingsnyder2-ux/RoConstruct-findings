// from server: 100% by auto
// roc 2011-06 008cd770  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cd770
//
// 008cd770  8b442408             mov eax, dword ptr [esp + 8]
// 008cd774  56                   push esi
// 008cd775  8b742408             mov esi, dword ptr [esp + 8]
// 008cd779  8b0e                 mov ecx, dword ptr [esi]
// 008cd77b  3bc1                 cmp eax, ecx
// 008cd77d  7d04                 jge 0x8cd783
// 008cd77f  2bc1                 sub eax, ecx
// 008cd781  eb0d                 jmp 0x8cd790
// 008cd783  8b4e08               mov ecx, dword ptr [esi + 8]
// 008cd786  3bc1                 cmp eax, ecx
// 008cd788  7e04                 jle 0x8cd78e
// 008cd78a  2bc1                 sub eax, ecx
// 008cd78c  eb02                 jmp 0x8cd790
// 008cd78e  33c0                 xor eax, eax
// 008cd790  8b5604               mov edx, dword ptr [esi + 4]
// 008cd793  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cd797  3bca                 cmp ecx, edx
// 008cd799  7c07                 jl 0x8cd7a2
// 008cd79b  8b560c               mov edx, dword ptr [esi + 0xc]
// 008cd79e  3bca                 cmp ecx, edx
// 008cd7a0  7e0d                 jle 0x8cd7af
// 008cd7a2  2bca                 sub ecx, edx
// 008cd7a4  51                   push ecx
// 008cd7a5  50                   push eax
// 008cd7a6  56                   push esi
// 008cd7a7  ff15601ca400         call dword ptr [0xa41c60]
// 008cd7ad  5e                   pop esi
// 008cd7ae  c3                   ret 
// 008cd7af  33c9                 xor ecx, ecx
// 008cd7b1  51                   push ecx
// 008cd7b2  50                   push eax
// 008cd7b3  56                   push esi
// 008cd7b4  ff15601ca400         call dword ptr [0xa41c60]
// 008cd7ba  5e                   pop esi
// 008cd7bb  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockContext.cpp (function ?AdjustRectangle@CXTPDockContext@@CAXAAVCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockContext.cpp
