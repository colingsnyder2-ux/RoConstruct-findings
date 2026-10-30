// roc 2010-06 007b8a40  unit: CXTPCommandBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8a40
//
// 007b8a40  8b542404             mov edx, dword ptr [esp + 4]
// 007b8a44  53                   push ebx
// 007b8a45  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007b8a49  56                   push esi
// 007b8a4a  8bf1                 mov esi, ecx
// 007b8a4c  8d0c1a               lea ecx, [edx + ebx]
// 007b8a4f  85d2                 test edx, edx
// 007b8a51  7c46                 jl 0x7b8a99
// 007b8a53  85db                 test ebx, ebx
// 007b8a55  7c42                 jl 0x7b8a99
// 007b8a57  8b4608               mov eax, dword ptr [esi + 8]
// 007b8a5a  3bc8                 cmp ecx, eax
// 007b8a5c  7f3b                 jg 0x7b8a99
// 007b8a5e  3bca                 cmp ecx, edx
// 007b8a60  7c37                 jl 0x7b8a99
// 007b8a62  3bcb                 cmp ecx, ebx
// 007b8a64  7c33                 jl 0x7b8a99
// 007b8a66  2bc1                 sub eax, ecx
// 007b8a68  57                   push edi
// 007b8a69  8bf8                 mov edi, eax
// 007b8a6b  7423                 je 0x7b8a90
// 007b8a6d  8b4604               mov eax, dword ptr [esi + 4]
// 007b8a70  8d0c88               lea ecx, [eax + ecx*4]
// 007b8a73  8d1490               lea edx, [eax + edx*4]
// 007b8a76  8d04bd00000000       lea eax, [edi*4]
// 007b8a7d  50                   push eax
// 007b8a7e  51                   push ecx
// 007b8a7f  50                   push eax
// 007b8a80  52                   push edx
// 007b8a81  ff1580a89e00         call dword ptr [0x9ea880]
// 007b8a87  50                   push eax
// 007b8a88  e8b39fc4ff           call 0x402a40
// 007b8a8d  83c414               add esp, 0x14
// 007b8a90  295e08               sub dword ptr [esi + 8], ebx
// 007b8a93  5f                   pop edi
// 007b8a94  5e                   pop esi
// 007b8a95  5b                   pop ebx
// 007b8a96  c20800               ret 8
// 007b8a99  e8aef1feff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp