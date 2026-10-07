// roc 2007-08 006ebdc0  unit: CXTPDockingPanePaintManager  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ebdc0
//
// 006ebdc0  8b442408             mov eax, dword ptr [esp + 8]
// 006ebdc4  56                   push esi
// 006ebdc5  8b742408             mov esi, dword ptr [esp + 8]
// 006ebdc9  8b0e                 mov ecx, dword ptr [esi]
// 006ebdcb  3bc1                 cmp eax, ecx
// 006ebdcd  7d04                 jge 0x6ebdd3
// 006ebdcf  2bc1                 sub eax, ecx
// 006ebdd1  eb0d                 jmp 0x6ebde0
// 006ebdd3  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ebdd6  3bc1                 cmp eax, ecx
// 006ebdd8  7e04                 jle 0x6ebdde
// 006ebdda  2bc1                 sub eax, ecx
// 006ebddc  eb02                 jmp 0x6ebde0
// 006ebdde  33c0                 xor eax, eax
// 006ebde0  8b5604               mov edx, dword ptr [esi + 4]
// 006ebde3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006ebde7  3bca                 cmp ecx, edx
// 006ebde9  7c07                 jl 0x6ebdf2
// 006ebdeb  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ebdee  3bca                 cmp ecx, edx
// 006ebdf0  7e0d                 jle 0x6ebdff
// 006ebdf2  2bca                 sub ecx, edx
// 006ebdf4  51                   push ecx
// 006ebdf5  50                   push eax
// 006ebdf6  56                   push esi
// 006ebdf7  ff15d8ed7700         call dword ptr [0x77edd8]
// 006ebdfd  5e                   pop esi
// 006ebdfe  c3                   ret 
// 006ebdff  33c9                 xor ecx, ecx
// 006ebe01  51                   push ecx
// 006ebe02  50                   push eax
// 006ebe03  56                   push esi
// 006ebe04  ff15d8ed7700         call dword ptr [0x77edd8]
// 006ebe0a  5e                   pop esi
// 006ebe0b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockContext.cpp (function ?AdjustRectangle@CXTPDockContext@@CAXAAVCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockContext.cpp
