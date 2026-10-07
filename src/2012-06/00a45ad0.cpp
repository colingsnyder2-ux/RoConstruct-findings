// roc 2012-06 00a45ad0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a45ad0
//
// 00a45ad0  8b442408             mov eax, dword ptr [esp + 8]
// 00a45ad4  56                   push esi
// 00a45ad5  8b742408             mov esi, dword ptr [esp + 8]
// 00a45ad9  8b0e                 mov ecx, dword ptr [esi]
// 00a45adb  3bc1                 cmp eax, ecx
// 00a45add  7d04                 jge 0xa45ae3
// 00a45adf  2bc1                 sub eax, ecx
// 00a45ae1  eb0d                 jmp 0xa45af0
// 00a45ae3  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a45ae6  3bc1                 cmp eax, ecx
// 00a45ae8  7e04                 jle 0xa45aee
// 00a45aea  2bc1                 sub eax, ecx
// 00a45aec  eb02                 jmp 0xa45af0
// 00a45aee  33c0                 xor eax, eax
// 00a45af0  8b5604               mov edx, dword ptr [esi + 4]
// 00a45af3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a45af7  3bca                 cmp ecx, edx
// 00a45af9  7c07                 jl 0xa45b02
// 00a45afb  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a45afe  3bca                 cmp ecx, edx
// 00a45b00  7e0d                 jle 0xa45b0f
// 00a45b02  2bca                 sub ecx, edx
// 00a45b04  51                   push ecx
// 00a45b05  50                   push eax
// 00a45b06  56                   push esi
// 00a45b07  ff15f43ab200         call dword ptr [0xb23af4]
// 00a45b0d  5e                   pop esi
// 00a45b0e  c3                   ret 
// 00a45b0f  33c9                 xor ecx, ecx
// 00a45b11  51                   push ecx
// 00a45b12  50                   push eax
// 00a45b13  56                   push esi
// 00a45b14  ff15f43ab200         call dword ptr [0xb23af4]
// 00a45b1a  5e                   pop esi
// 00a45b1b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPDockContext.cpp (function ?AdjustRectangle@CXTPDockContext@@CAXAAVCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockContext.cpp
