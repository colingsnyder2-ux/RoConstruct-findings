// roc 2011-06 00848280  unit: CRobloxTreeCtrl  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848280
//
// 00848280  837c240800           cmp dword ptr [esp + 8], 0
// 00848285  56                   push esi
// 00848286  57                   push edi
// 00848287  8bf1                 mov esi, ecx
// 00848289  0f8491000000         je 0x848320
// 0084828f  53                   push ebx
// 00848290  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00848294  f6c304               test bl, 4
// 00848297  744a                 je 0x8482e3
// 00848299  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0084829d  7519                 jne 0x8482b8
// 0084829f  8b4634               mov eax, dword ptr [esi + 0x34]
// 008482a2  8b4020               mov eax, dword ptr [eax + 0x20]
// 008482a5  6a00                 push 0
// 008482a7  6a09                 push 9
// 008482a9  680a110000           push 0x110a
// 008482ae  50                   push eax
// 008482af  ff15c019a400         call dword ptr [0xa419c0]
// 008482b5  89460c               mov dword ptr [esi + 0xc], eax
// 008482b8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008482bc  6a01                 push 1
// 008482be  6a01                 push 1
// 008482c0  57                   push edi
// 008482c1  8bce                 mov ecx, esi
// 008482c3  e898f8ffff           call 0x847b60
// 008482c8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008482cb  c1eb03               shr ebx, 3
// 008482ce  f7d3                 not ebx
// 008482d0  83e301               and ebx, 1
// 008482d3  53                   push ebx
// 008482d4  57                   push edi
// 008482d5  51                   push ecx
// 008482d6  8bce                 mov ecx, esi
// 008482d8  e853feffff           call 0x848130
// 008482dd  5b                   pop ebx
// 008482de  5f                   pop edi
// 008482df  5e                   pop esi
// 008482e0  c20c00               ret 0xc
// 008482e3  f6c308               test bl, 8
// 008482e6  752b                 jne 0x848313
// 008482e8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008482ec  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008482ef  6a02                 push 2
// 008482f1  57                   push edi
// 008482f2  e861451800           call 0x9cc858
// 008482f7  a802                 test al, 2
// 008482f9  750c                 jne 0x848307
// 008482fb  8b16                 mov edx, dword ptr [esi]
// 008482fd  8b4250               mov eax, dword ptr [edx + 0x50]
// 00848300  57                   push edi
// 00848301  6a00                 push 0
// 00848303  8bce                 mov ecx, esi
// 00848305  ffd0                 call eax
// 00848307  6a03                 push 3
// 00848309  6a03                 push 3
// 0084830b  57                   push edi
// 0084830c  8bce                 mov ecx, esi
// 0084830e  e84df8ffff           call 0x847b60
// 00848313  5b                   pop ebx
// 00848314  5f                   pop edi
// 00848315  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0084831c  5e                   pop esi
// 0084831d  c20c00               ret 0xc
// 00848320  8a442414             mov al, byte ptr [esp + 0x14]
// 00848324  a80c                 test al, 0xc
// 00848326  7410                 je 0x848338
// 00848328  a804                 test al, 4
// 0084832a  75b2                 jne 0x8482de
// 0084832c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00848330  5f                   pop edi
// 00848331  894e0c               mov dword ptr [esi + 0xc], ecx
// 00848334  5e                   pop esi
// 00848335  c20c00               ret 0xc
// 00848338  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0084833c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084833f  6a02                 push 2
// 00848341  57                   push edi
// 00848342  e811451800           call 0x9cc858
// 00848347  a802                 test al, 2
// 00848349  750c                 jne 0x848357
// 0084834b  8b16                 mov edx, dword ptr [esi]
// 0084834d  8b4250               mov eax, dword ptr [edx + 0x50]
// 00848350  57                   push edi
// 00848351  6a00                 push 0
// 00848353  8bce                 mov ecx, esi
// 00848355  ffd0                 call eax
// 00848357  6a03                 push 3
// 00848359  6a03                 push 3
// 0084835b  57                   push edi
// 0084835c  8bce                 mov ecx, esi
// 0084835e  e8fdf7ffff           call 0x847b60
// 00848363  5f                   pop edi
// 00848364  5e                   pop esi
// 00848365  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?DoPreSelection@CXTPTreeBase@@MAEXPAU_TREEITEM@@HI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
