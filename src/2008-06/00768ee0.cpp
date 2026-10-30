// from server: 100% by auto
// roc 2008-06 00768ee0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00768ee0
//
// 00768ee0  8b442408             mov eax, dword ptr [esp + 8]
// 00768ee4  56                   push esi
// 00768ee5  8b742408             mov esi, dword ptr [esp + 8]
// 00768ee9  8b0e                 mov ecx, dword ptr [esi]
// 00768eeb  3bc1                 cmp eax, ecx
// 00768eed  7d04                 jge 0x768ef3
// 00768eef  2bc1                 sub eax, ecx
// 00768ef1  eb0d                 jmp 0x768f00
// 00768ef3  8b4e08               mov ecx, dword ptr [esi + 8]
// 00768ef6  3bc1                 cmp eax, ecx
// 00768ef8  7e04                 jle 0x768efe
// 00768efa  2bc1                 sub eax, ecx
// 00768efc  eb02                 jmp 0x768f00
// 00768efe  33c0                 xor eax, eax
// 00768f00  8b5604               mov edx, dword ptr [esi + 4]
// 00768f03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00768f07  3bca                 cmp ecx, edx
// 00768f09  7c07                 jl 0x768f12
// 00768f0b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00768f0e  3bca                 cmp ecx, edx
// 00768f10  7e0d                 jle 0x768f1f
// 00768f12  2bca                 sub ecx, edx
// 00768f14  51                   push ecx
// 00768f15  50                   push eax
// 00768f16  56                   push esi
// 00768f17  ff15682d8000         call dword ptr [0x802d68]
// 00768f1d  5e                   pop esi
// 00768f1e  c3                   ret 
// 00768f1f  33c9                 xor ecx, ecx
// 00768f21  51                   push ecx
// 00768f22  50                   push eax
// 00768f23  56                   push esi
// 00768f24  ff15682d8000         call dword ptr [0x802d68]
// 00768f2a  5e                   pop esi
// 00768f2b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?AdjustRectangle@CXTPDockContext@@CAXAAVCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
