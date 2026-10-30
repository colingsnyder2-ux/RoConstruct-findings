// roc 2009-12 008a3090  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3090
//
// 008a3090  53                   push ebx
// 008a3091  56                   push esi
// 008a3092  8b742410             mov esi, dword ptr [esp + 0x10]
// 008a3096  57                   push edi
// 008a3097  8bf9                 mov edi, ecx
// 008a3099  85f6                 test esi, esi
// 008a309b  746c                 je 0x8a3109
// 008a309d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008a30a1  85db                 test ebx, ebx
// 008a30a3  7c64                 jl 0x8a3109
// 008a30a5  837e0800             cmp dword ptr [esi + 8], 0
// 008a30a9  7e53                 jle 0x8a30fe
// 008a30ab  8b4608               mov eax, dword ptr [esi + 8]
// 008a30ae  85c0                 test eax, eax
// 008a30b0  7e57                 jle 0x8a3109
// 008a30b2  50                   push eax
// 008a30b3  8b4604               mov eax, dword ptr [esi + 4]
// 008a30b6  8b08                 mov ecx, dword ptr [eax]
// 008a30b8  51                   push ecx
// 008a30b9  53                   push ebx
// 008a30ba  8bcf                 mov ecx, edi
// 008a30bc  e87faa0400           call 0x8edb40
// 008a30c1  8b4e08               mov ecx, dword ptr [esi + 8]
// 008a30c4  33c0                 xor eax, eax
// 008a30c6  85c9                 test ecx, ecx
// 008a30c8  7e34                 jle 0x8a30fe
// 008a30ca  8d149d00000000       lea edx, [ebx*4]
// 008a30d1  55                   push ebp
// 008a30d2  85c0                 test eax, eax
// 008a30d4  7c2e                 jl 0x8a3104
// 008a30d6  3bc1                 cmp eax, ecx
// 008a30d8  7d2a                 jge 0x8a3104
// 008a30da  8d0c18               lea ecx, [eax + ebx]
// 008a30dd  85c9                 test ecx, ecx
// 008a30df  7c23                 jl 0x8a3104
// 008a30e1  3b4f08               cmp ecx, dword ptr [edi + 8]
// 008a30e4  7d1e                 jge 0x8a3104
// 008a30e6  8b4e04               mov ecx, dword ptr [esi + 4]
// 008a30e9  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008a30ec  8b6f04               mov ebp, dword ptr [edi + 4]
// 008a30ef  890c2a               mov dword ptr [edx + ebp], ecx
// 008a30f2  8b4e08               mov ecx, dword ptr [esi + 8]
// 008a30f5  40                   inc eax
// 008a30f6  83c204               add edx, 4
// 008a30f9  3bc1                 cmp eax, ecx
// 008a30fb  7cd5                 jl 0x8a30d2
// 008a30fd  5d                   pop ebp
// 008a30fe  5f                   pop edi
// 008a30ff  5e                   pop esi
// 008a3100  5b                   pop ebx
// 008a3101  c20800               ret 8
// 008a3104  e8030af5ff           call 0x7f3b0c
// 008a3109  e8fe09f5ff           call 0x7f3b0c
// copied from an identical function in another client (function ?InsertAt@?$CArray@PAVCXTPReportHyperlink@@PAV1@@@QAEXHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp