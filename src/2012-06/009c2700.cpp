// roc 2012-06 009c2700  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2700
//
// 009c2700  55                   push ebp
// 009c2701  8bec                 mov ebp, esp
// 009c2703  83e4f8               and esp, 0xfffffff8
// 009c2706  81eca4000000         sub esp, 0xa4
// 009c270c  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c2711  33c4                 xor eax, esp
// 009c2713  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 009c271a  53                   push ebx
// 009c271b  8b5d08               mov ebx, dword ptr [ebp + 8]
// 009c271e  8b4318               mov eax, dword ptr [ebx + 0x18]
// 009c2721  56                   push esi
// 009c2722  57                   push edi
// 009c2723  f7d0                 not eax
// 009c2725  8bf9                 mov edi, ecx
// 009c2727  897c2410             mov dword ptr [esp + 0x10], edi
// 009c272b  a801                 test al, 1
// 009c272d  7472                 je 0x9c27a1
// 009c272f  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 009c2732  51                   push ecx
// 009c2733  8bcb                 mov ecx, ebx
// 009c2735  e84405fcff           call 0x982c7e
// 009c273a  837f0c00             cmp dword ptr [edi + 0xc], 0
// 009c273e  0f84dd000000         je 0x9c2821
// 009c2744  33c0                 xor eax, eax
// 009c2746  8944240c             mov dword ptr [esp + 0xc], eax
// 009c274a  394708               cmp dword ptr [edi + 8], eax
// 009c274d  0f86ce000000         jbe 0x9c2821
// 009c2753  8b5704               mov edx, dword ptr [edi + 4]
// 009c2756  8b3482               mov esi, dword ptr [edx + eax*4]
// 009c2759  85f6                 test esi, esi
// 009c275b  7423                 je 0x9c2780
// 009c275d  8d4900               lea ecx, [ecx]
// 009c2760  6a01                 push 1
// 009c2762  56                   push esi
// 009c2763  53                   push ebx
// 009c2764  e897750800           call 0xa49d00
// 009c2769  6a01                 push 1
// 009c276b  8d4604               lea eax, [esi + 4]
// 009c276e  50                   push eax
// 009c276f  53                   push ebx
// 009c2770  e8fbe8ffff           call 0x9c1070
// 009c2775  8b7648               mov esi, dword ptr [esi + 0x48]
// 009c2778  85f6                 test esi, esi
// 009c277a  75e4                 jne 0x9c2760
// 009c277c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c2780  40                   inc eax
// 009c2781  8944240c             mov dword ptr [esp + 0xc], eax
// 009c2785  3b4708               cmp eax, dword ptr [edi + 8]
// 009c2788  72c9                 jb 0x9c2753
// 009c278a  5f                   pop edi
// 009c278b  5e                   pop esi
// 009c278c  5b                   pop ebx
// 009c278d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 009c2794  33cc                 xor ecx, esp
// 009c2796  e89c12fcff           call 0x983a37
// 009c279b  8be5                 mov esp, ebp
// 009c279d  5d                   pop ebp
// 009c279e  c20400               ret 4
// 009c27a1  8bcb                 mov ecx, ebx
// 009c27a3  e8d004fcff           call 0x982c78
// 009c27a8  8944240c             mov dword ptr [esp + 0xc], eax
// 009c27ac  85c0                 test eax, eax
// 009c27ae  7471                 je 0x9c2821
// 009c27b0  ff4c240c             dec dword ptr [esp + 0xc]
// 009c27b4  6a3c                 push 0x3c
// 009c27b6  83c8ff               or eax, 0xffffffff
// 009c27b9  8d4c2464             lea ecx, [esp + 0x64]
// 009c27bd  6a00                 push 0
// 009c27bf  51                   push ecx
// 009c27c0  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 009c27c7  898424ac000000       mov dword ptr [esp + 0xac], eax
// 009c27ce  e8a10bfcff           call 0x983374
// 009c27d3  83c40c               add esp, 0xc
// 009c27d6  6a01                 push 1
// 009c27d8  8d542418             lea edx, [esp + 0x18]
// 009c27dc  52                   push edx
// 009c27dd  53                   push ebx
// 009c27de  e81d750800           call 0xa49d00
// 009c27e3  6a01                 push 1
// 009c27e5  8d442464             lea eax, [esp + 0x64]
// 009c27e9  50                   push eax
// 009c27ea  53                   push ebx
// 009c27eb  e880e8ffff           call 0x9c1070
// 009c27f0  b911000000           mov ecx, 0x11
// 009c27f5  8d742460             lea esi, [esp + 0x60]
// 009c27f9  8d7c2418             lea edi, [esp + 0x18]
// 009c27fd  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c27ff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c2803  51                   push ecx
// 009c2804  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c2808  e8d3fcffff           call 0x9c24e0
// 009c280d  837c240c00           cmp dword ptr [esp + 0xc], 0
// 009c2812  b911000000           mov ecx, 0x11
// 009c2817  8d742418             lea esi, [esp + 0x18]
// 009c281b  8bf8                 mov edi, eax
// 009c281d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c281f  758f                 jne 0x9c27b0
// 009c2821  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 009c2828  5f                   pop edi
// 009c2829  5e                   pop esi
// 009c282a  5b                   pop ebx
// 009c282b  33cc                 xor ecx, esp
// 009c282d  e80512fcff           call 0x983a37
// 009c2832  8be5                 mov esp, ebp
// 009c2834  5d                   pop ebp
// 009c2835  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@UAEXAAVCArchive@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp