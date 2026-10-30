// roc 2009-12 0082d280  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d280
//
// 0082d280  8b542404             mov edx, dword ptr [esp + 4]
// 0082d284  53                   push ebx
// 0082d285  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0082d289  56                   push esi
// 0082d28a  8bf1                 mov esi, ecx
// 0082d28c  8d0c1a               lea ecx, [edx + ebx]
// 0082d28f  85d2                 test edx, edx
// 0082d291  7c46                 jl 0x82d2d9
// 0082d293  85db                 test ebx, ebx
// 0082d295  7c42                 jl 0x82d2d9
// 0082d297  8b4608               mov eax, dword ptr [esi + 8]
// 0082d29a  3bc8                 cmp ecx, eax
// 0082d29c  7f3b                 jg 0x82d2d9
// 0082d29e  3bca                 cmp ecx, edx
// 0082d2a0  7c37                 jl 0x82d2d9
// 0082d2a2  3bcb                 cmp ecx, ebx
// 0082d2a4  7c33                 jl 0x82d2d9
// 0082d2a6  2bc1                 sub eax, ecx
// 0082d2a8  57                   push edi
// 0082d2a9  8bf8                 mov edi, eax
// 0082d2ab  7423                 je 0x82d2d0
// 0082d2ad  8b4604               mov eax, dword ptr [esi + 4]
// 0082d2b0  8d0c88               lea ecx, [eax + ecx*4]
// 0082d2b3  8d1490               lea edx, [eax + edx*4]
// 0082d2b6  8d04bd00000000       lea eax, [edi*4]
// 0082d2bd  50                   push eax
// 0082d2be  51                   push ecx
// 0082d2bf  50                   push eax
// 0082d2c0  52                   push edx
// 0082d2c1  ff15c0b79800         call dword ptr [0x98b7c0]
// 0082d2c7  50                   push eax
// 0082d2c8  e82357bdff           call 0x4029f0
// 0082d2cd  83c414               add esp, 0x14
// 0082d2d0  295e08               sub dword ptr [esi + 8], ebx
// 0082d2d3  5f                   pop edi
// 0082d2d4  5e                   pop esi
// 0082d2d5  5b                   pop ebx
// 0082d2d6  c20800               ret 8
// 0082d2d9  e82e68fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAt@?$CArray@PAVCXTPControlGalleryItem@@PAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp