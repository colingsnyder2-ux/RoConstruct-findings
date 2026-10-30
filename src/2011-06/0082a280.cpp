// roc 2011-06 0082a280  unit: MyXTPCommandBars  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a280
//
// 0082a280  8b542404             mov edx, dword ptr [esp + 4]
// 0082a284  53                   push ebx
// 0082a285  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0082a289  56                   push esi
// 0082a28a  8bf1                 mov esi, ecx
// 0082a28c  8d0c1a               lea ecx, [edx + ebx]
// 0082a28f  85d2                 test edx, edx
// 0082a291  7c46                 jl 0x82a2d9
// 0082a293  85db                 test ebx, ebx
// 0082a295  7c42                 jl 0x82a2d9
// 0082a297  8b4608               mov eax, dword ptr [esi + 8]
// 0082a29a  3bc8                 cmp ecx, eax
// 0082a29c  7f3b                 jg 0x82a2d9
// 0082a29e  3bca                 cmp ecx, edx
// 0082a2a0  7c37                 jl 0x82a2d9
// 0082a2a2  3bcb                 cmp ecx, ebx
// 0082a2a4  7c33                 jl 0x82a2d9
// 0082a2a6  2bc1                 sub eax, ecx
// 0082a2a8  57                   push edi
// 0082a2a9  8bf8                 mov edi, eax
// 0082a2ab  7423                 je 0x82a2d0
// 0082a2ad  8b4604               mov eax, dword ptr [esi + 4]
// 0082a2b0  8d0c88               lea ecx, [eax + ecx*4]
// 0082a2b3  8d1490               lea edx, [eax + edx*4]
// 0082a2b6  8d04bd00000000       lea eax, [edi*4]
// 0082a2bd  50                   push eax
// 0082a2be  51                   push ecx
// 0082a2bf  50                   push eax
// 0082a2c0  52                   push edx
// 0082a2c1  ff15fc09a400         call dword ptr [0xa409fc]
// 0082a2c7  50                   push eax
// 0082a2c8  e84391bdff           call 0x403410
// 0082a2cd  83c414               add esp, 0x14
// 0082a2d0  295e08               sub dword ptr [esi + 8], ebx
// 0082a2d3  5f                   pop edi
// 0082a2d4  5e                   pop esi
// 0082a2d5  5b                   pop ebx
// 0082a2d6  c20800               ret 8
// 0082a2d9  e82c00feff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp