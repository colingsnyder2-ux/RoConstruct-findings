// roc 2009-12 0082a310  unit: CXTPReportHeader  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082a310
//
// 0082a310  8b442408             mov eax, dword ptr [esp + 8]
// 0082a314  83ec20               sub esp, 0x20
// 0082a317  53                   push ebx
// 0082a318  8bd9                 mov ebx, ecx
// 0082a31a  3b436c               cmp eax, dword ptr [ebx + 0x6c]
// 0082a31d  0f8d03010000         jge 0x82a426
// 0082a323  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 0082a326  0f8efa000000         jle 0x82a426
// 0082a32c  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0082a32f  55                   push ebp
// 0082a330  e8cb300400           call 0x86d400
// 0082a335  8b5324               mov edx, dword ptr [ebx + 0x24]
// 0082a338  8bc8                 mov ecx, eax
// 0082a33a  33c0                 xor eax, eax
// 0082a33c  33ed                 xor ebp, ebp
// 0082a33e  39ab8c000000         cmp dword ptr [ebx + 0x8c], ebp
// 0082a344  0f95c0               setne al
// 0082a347  2bc8                 sub ecx, eax
// 0082a349  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 0082a34f  3bc1                 cmp eax, ecx
// 0082a351  894c2414             mov dword ptr [esp + 0x14], ecx
// 0082a355  89442408             mov dword ptr [esp + 8], eax
// 0082a359  7c04                 jl 0x82a35f
// 0082a35b  894c2408             mov dword ptr [esp + 8], ecx
// 0082a35f  3bcd                 cmp ecx, ebp
// 0082a361  56                   push esi
// 0082a362  57                   push edi
// 0082a363  896c2414             mov dword ptr [esp + 0x14], ebp
// 0082a367  0f8ea1000000         jle 0x82a40e
// 0082a36d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0082a371  8d4c08ff             lea ecx, [eax + ecx - 1]
// 0082a375  894c2418             mov dword ptr [esp + 0x18], ecx
// 0082a379  8da42400000000       lea esp, [esp]
// 0082a380  33d2                 xor edx, edx
// 0082a382  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0082a386  8bc5                 mov eax, ebp
// 0082a388  0f9cc2               setl dl
// 0082a38b  8bfa                 mov edi, edx
// 0082a38d  85ff                 test edi, edi
// 0082a38f  7504                 jne 0x82a395
// 0082a391  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082a395  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0082a398  50                   push eax
// 0082a399  e862310400           call 0x86d500
// 0082a39e  8bf0                 mov esi, eax
// 0082a3a0  837e6800             cmp dword ptr [esi + 0x68], 0
// 0082a3a4  7459                 je 0x82a3ff
// 0082a3a6  8d442420             lea eax, [esp + 0x20]
// 0082a3aa  50                   push eax
// 0082a3ab  8bce                 mov ecx, esi
// 0082a3ad  e81ed7ffff           call 0x827ad0
// 0082a3b2  8b4808               mov ecx, dword ptr [eax + 8]
// 0082a3b5  85ff                 test edi, edi
// 0082a3b7  740c                 je 0x82a3c5
// 0082a3b9  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0082a3bd  7f0c                 jg 0x82a3cb
// 0082a3bf  894c2414             mov dword ptr [esp + 0x14], ecx
// 0082a3c3  eb06                 jmp 0x82a3cb
// 0082a3c5  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0082a3c9  7e43                 jle 0x82a40e
// 0082a3cb  8b442434             mov eax, dword ptr [esp + 0x34]
// 0082a3cf  2bc1                 sub eax, ecx
// 0082a3d1  99                   cdq 
// 0082a3d2  33c2                 xor eax, edx
// 0082a3d4  2bc2                 sub eax, edx
// 0082a3d6  3b8390000000         cmp eax, dword ptr [ebx + 0x90]
// 0082a3dc  7f21                 jg 0x82a3ff
// 0082a3de  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 0082a3e5  7433                 je 0x82a41a
// 0082a3e7  56                   push esi
// 0082a3e8  8bcb                 mov ecx, ebx
// 0082a3ea  e8a1f6ffff           call 0x829a90
// 0082a3ef  85c0                 test eax, eax
// 0082a3f1  750c                 jne 0x82a3ff
// 0082a3f3  56                   push esi
// 0082a3f4  8bcb                 mov ecx, ebx
// 0082a3f6  e835f6ffff           call 0x829a30
// 0082a3fb  85c0                 test eax, eax
// 0082a3fd  741b                 je 0x82a41a
// 0082a3ff  ff4c2418             dec dword ptr [esp + 0x18]
// 0082a403  45                   inc ebp
// 0082a404  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0082a408  0f8c72ffffff         jl 0x82a380
// 0082a40e  5f                   pop edi
// 0082a40f  5e                   pop esi
// 0082a410  5d                   pop ebp
// 0082a411  33c0                 xor eax, eax
// 0082a413  5b                   pop ebx
// 0082a414  83c420               add esp, 0x20
// 0082a417  c20800               ret 8
// 0082a41a  5f                   pop edi
// 0082a41b  8bc6                 mov eax, esi
// 0082a41d  5e                   pop esi
// 0082a41e  5d                   pop ebp
// 0082a41f  5b                   pop ebx
// 0082a420  83c420               add esp, 0x20
// 0082a423  c20800               ret 8
// 0082a426  33c0                 xor eax, eax
// 0082a428  5b                   pop ebx
// 0082a429  83c420               add esp, 0x20
// 0082a42c  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?MouseOverColumnResizeArea@CXTPReportHeader@@QAEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
