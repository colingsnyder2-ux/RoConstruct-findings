// roc 2010-06 00487140  unit: G3D::Texture  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487140
//
// 00487140  51                   push ecx
// 00487141  53                   push ebx
// 00487142  55                   push ebp
// 00487143  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00487147  56                   push esi
// 00487148  57                   push edi
// 00487149  8bf9                 mov edi, ecx
// 0048714b  8b7704               mov esi, dword ptr [edi + 4]
// 0048714e  3bee                 cmp ebp, esi
// 00487150  89742410             mov dword ptr [esp + 0x10], esi
// 00487154  896f04               mov dword ptr [edi + 4], ebp
// 00487157  7d61                 jge 0x4871ba
// 00487159  8da42400000000       lea esp, [esp]
// 00487160  8b07                 mov eax, dword ptr [edi]
// 00487162  8d1ca8               lea ebx, [eax + ebp*4]
// 00487165  8b03                 mov eax, dword ptr [ebx]
// 00487167  85c0                 test eax, eax
// 00487169  744a                 je 0x4871b5
// 0048716b  83c004               add eax, 4
// 0048716e  50                   push eax
// 0048716f  ff157ca39e00         call dword ptr [0x9ea37c]
// 00487175  85c0                 test eax, eax
// 00487177  7536                 jne 0x4871af
// 00487179  8b0b                 mov ecx, dword ptr [ebx]
// 0048717b  8b7108               mov esi, dword ptr [ecx + 8]
// 0048717e  85f6                 test esi, esi
// 00487180  741b                 je 0x48719d
// 00487182  8b0e                 mov ecx, dword ptr [esi]
// 00487184  8b11                 mov edx, dword ptr [ecx]
// 00487186  8b4204               mov eax, dword ptr [edx + 4]
// 00487189  ffd0                 call eax
// 0048718b  8bc6                 mov eax, esi
// 0048718d  8b7604               mov esi, dword ptr [esi + 4]
// 00487190  50                   push eax
// 00487191  e804083200           call 0x7a799a
// 00487196  83c404               add esp, 4
// 00487199  85f6                 test esi, esi
// 0048719b  75e5                 jne 0x487182
// 0048719d  8b0b                 mov ecx, dword ptr [ebx]
// 0048719f  85c9                 test ecx, ecx
// 004871a1  7408                 je 0x4871ab
// 004871a3  8b11                 mov edx, dword ptr [ecx]
// 004871a5  8b02                 mov eax, dword ptr [edx]
// 004871a7  6a01                 push 1
// 004871a9  ffd0                 call eax
// 004871ab  8b742410             mov esi, dword ptr [esp + 0x10]
// 004871af  c70300000000         mov dword ptr [ebx], 0
// 004871b5  45                   inc ebp
// 004871b6  3bee                 cmp ebp, esi
// 004871b8  7ca6                 jl 0x487160
// 004871ba  f6053431c00001       test byte ptr [0xc03134], 1
// 004871c1  7514                 jne 0x4871d7
// 004871c3  830d3431c00001       or dword ptr [0xc03134], 1
// 004871ca  bb0a000000           mov ebx, 0xa
// 004871cf  891d3031c000         mov dword ptr [0xc03130], ebx
// 004871d5  eb06                 jmp 0x4871dd
// 004871d7  8b1d3031c000         mov ebx, dword ptr [0xc03130]
// 004871dd  8b4f04               mov ecx, dword ptr [edi + 4]
// 004871e0  8b5708               mov edx, dword ptr [edi + 8]
// 004871e3  3bca                 cmp ecx, edx
// 004871e5  7e6f                 jle 0x487256
// 004871e7  85d2                 test edx, edx
// 004871e9  750d                 jne 0x4871f8
// 004871eb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004871ef  894f08               mov dword ptr [edi + 8], ecx
// 004871f2  56                   push esi
// 004871f3  e982000000           jmp 0x48727a
// 004871f8  3bcb                 cmp ecx, ebx
// 004871fa  7d06                 jge 0x487202
// 004871fc  895f08               mov dword ptr [edi + 8], ebx
// 004871ff  56                   push esi
// 00487200  eb78                 jmp 0x48727a
// 00487202  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0048720a  8bc2                 mov eax, edx
// 0048720c  03c0                 add eax, eax
// 0048720e  03c0                 add eax, eax
// 00487210  3d801a0600           cmp eax, 0x61a80
// 00487215  760a                 jbe 0x487221
// 00487217  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0048721f  eb0f                 jmp 0x487230
// 00487221  3d00fa0000           cmp eax, 0xfa00
// 00487226  7608                 jbe 0x487230
// 00487228  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00487230  8bc2                 mov eax, edx
// 00487232  f30f2ac8             cvtsi2ss xmm1, eax
// 00487236  f30f59c8             mulss xmm1, xmm0
// 0048723a  f30f2cd1             cvttss2si edx, xmm1
// 0048723e  2bd0                 sub edx, eax
// 00487240  8d040a               lea eax, [edx + ecx]
// 00487243  894708               mov dword ptr [edi + 8], eax
// 00487246  8b0d3031c000         mov ecx, dword ptr [0xc03130]
// 0048724c  3bc1                 cmp eax, ecx
// 0048724e  7d03                 jge 0x487253
// 00487250  894f08               mov dword ptr [edi + 8], ecx
// 00487253  56                   push esi
// 00487254  eb24                 jmp 0x48727a
// 00487256  b856555555           mov eax, 0x55555556
// 0048725b  f7ea                 imul edx
// 0048725d  8bc2                 mov eax, edx
// 0048725f  c1e81f               shr eax, 0x1f
// 00487262  03c2                 add eax, edx
// 00487264  3bc8                 cmp ecx, eax
// 00487266  7f19                 jg 0x487281
// 00487268  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0048726d  7412                 je 0x487281
// 0048726f  3bcb                 cmp ecx, ebx
// 00487271  7e0e                 jle 0x487281
// 00487273  3bce                 cmp ecx, esi
// 00487275  7c02                 jl 0x487279
// 00487277  8bce                 mov ecx, esi
// 00487279  51                   push ecx
// 0048727a  8bcf                 mov ecx, edi
// 0048727c  e80f880b00           call 0x53fa90
// 00487281  3b7704               cmp esi, dword ptr [edi + 4]
// 00487284  8bc6                 mov eax, esi
// 00487286  7d15                 jge 0x48729d
// 00487288  8b0f                 mov ecx, dword ptr [edi]
// 0048728a  8d0c81               lea ecx, [ecx + eax*4]
// 0048728d  85c9                 test ecx, ecx
// 0048728f  7406                 je 0x487297
// 00487291  c70100000000         mov dword ptr [ecx], 0
// 00487297  40                   inc eax
// 00487298  3b4704               cmp eax, dword ptr [edi + 4]
// 0048729b  7ceb                 jl 0x487288
// 0048729d  5f                   pop edi
// 0048729e  5e                   pop esi
// 0048729f  5d                   pop ebp
// 004872a0  5b                   pop ebx
// 004872a1  59                   pop ecx
// 004872a2  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
