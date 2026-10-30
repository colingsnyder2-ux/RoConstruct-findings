// roc 2010-06 00857200  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857200
//
// 00857200  53                   push ebx
// 00857201  56                   push esi
// 00857202  8b742410             mov esi, dword ptr [esp + 0x10]
// 00857206  57                   push edi
// 00857207  8bf9                 mov edi, ecx
// 00857209  85f6                 test esi, esi
// 0085720b  746c                 je 0x857279
// 0085720d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00857211  85db                 test ebx, ebx
// 00857213  7c64                 jl 0x857279
// 00857215  837e0800             cmp dword ptr [esi + 8], 0
// 00857219  7e53                 jle 0x85726e
// 0085721b  8b4608               mov eax, dword ptr [esi + 8]
// 0085721e  85c0                 test eax, eax
// 00857220  7e57                 jle 0x857279
// 00857222  50                   push eax
// 00857223  8b4604               mov eax, dword ptr [esi + 4]
// 00857226  8b08                 mov ecx, dword ptr [eax]
// 00857228  51                   push ecx
// 00857229  53                   push ebx
// 0085722a  8bcf                 mov ecx, edi
// 0085722c  e88f47f5ff           call 0x7ab9c0
// 00857231  8b4e08               mov ecx, dword ptr [esi + 8]
// 00857234  33c0                 xor eax, eax
// 00857236  85c9                 test ecx, ecx
// 00857238  7e34                 jle 0x85726e
// 0085723a  8d149d00000000       lea edx, [ebx*4]
// 00857241  55                   push ebp
// 00857242  85c0                 test eax, eax
// 00857244  7c2e                 jl 0x857274
// 00857246  3bc1                 cmp eax, ecx
// 00857248  7d2a                 jge 0x857274
// 0085724a  8d0c18               lea ecx, [eax + ebx]
// 0085724d  85c9                 test ecx, ecx
// 0085724f  7c23                 jl 0x857274
// 00857251  3b4f08               cmp ecx, dword ptr [edi + 8]
// 00857254  7d1e                 jge 0x857274
// 00857256  8b4e04               mov ecx, dword ptr [esi + 4]
// 00857259  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0085725c  8b6f04               mov ebp, dword ptr [edi + 4]
// 0085725f  890c2a               mov dword ptr [edx + ebp], ecx
// 00857262  8b4e08               mov ecx, dword ptr [esi + 8]
// 00857265  40                   inc eax
// 00857266  83c204               add edx, 4
// 00857269  3bc1                 cmp eax, ecx
// 0085726b  7cd5                 jl 0x857242
// 0085726d  5d                   pop ebp
// 0085726e  5f                   pop edi
// 0085726f  5e                   pop esi
// 00857270  5b                   pop ebx
// 00857271  c20800               ret 8
// 00857274  e8d309f5ff           call 0x7a7c4c
// 00857279  e8ce09f5ff           call 0x7a7c4c
// copied from an identical function in another client (function ?InsertAt@?$CArray@II@@QAEXHPAV1@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarEventLabel.cpp