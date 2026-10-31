// roc 2009-12 0040d580  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040d580
//
// 0040d580  56                   push esi
// 0040d581  8bf1                 mov esi, ecx
// 0040d583  837e0400             cmp dword ptr [esi + 4], 0
// 0040d587  752b                 jne 0x40d5b4
// 0040d589  6a04                 push 4
// 0040d58b  6a04                 push 4
// 0040d58d  ff15b0b79800         call dword ptr [0x98b7b0]
// 0040d593  83c408               add esp, 8
// 0040d596  85c0                 test eax, eax
// 0040d598  7504                 jne 0x40d59e
// 0040d59a  5e                   pop esi
// 0040d59b  c20400               ret 4
// 0040d59e  33c9                 xor ecx, ecx
// 0040d5a0  8908                 mov dword ptr [eax], ecx
// 0040d5a2  894804               mov dword ptr [eax + 4], ecx
// 0040d5a5  894808               mov dword ptr [eax + 8], ecx
// 0040d5a8  89480c               mov dword ptr [eax + 0xc], ecx
// 0040d5ab  8906                 mov dword ptr [esi], eax
// 0040d5ad  c7460404000000       mov dword ptr [esi + 4], 4
// 0040d5b4  8b0e                 mov ecx, dword ptr [esi]
// 0040d5b6  8b5604               mov edx, dword ptr [esi + 4]
// 0040d5b9  53                   push ebx
// 0040d5ba  57                   push edi
// 0040d5bb  8bf9                 mov edi, ecx
// 0040d5bd  8d3c97               lea edi, [edi + edx*4]
// 0040d5c0  b801000000           mov eax, 1
// 0040d5c5  3bcf                 cmp ecx, edi
// 0040d5c7  731b                 jae 0x40d5e4
// 0040d5c9  8da42400000000       lea esp, [esp]
// 0040d5d0  833900               cmp dword ptr [ecx], 0
// 0040d5d3  742b                 je 0x40d600
// 0040d5d5  8b1e                 mov ebx, dword ptr [esi]
// 0040d5d7  8bfa                 mov edi, edx
// 0040d5d9  83c104               add ecx, 4
// 0040d5dc  8d3cbb               lea edi, [ebx + edi*4]
// 0040d5df  40                   inc eax
// 0040d5e0  3bcf                 cmp ecx, edi
// 0040d5e2  72ec                 jb 0x40d5d0
// 0040d5e4  8b06                 mov eax, dword ptr [esi]
// 0040d5e6  8d3c12               lea edi, [edx + edx]
// 0040d5e9  57                   push edi
// 0040d5ea  6a04                 push 4
// 0040d5ec  50                   push eax
// 0040d5ed  ff158cb79800         call dword ptr [0x98b78c]
// 0040d5f3  83c40c               add esp, 0xc
// 0040d5f6  85c0                 test eax, eax
// 0040d5f8  7512                 jne 0x40d60c
// 0040d5fa  5f                   pop edi
// 0040d5fb  5b                   pop ebx
// 0040d5fc  5e                   pop esi
// 0040d5fd  c20400               ret 4
// 0040d600  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040d604  5f                   pop edi
// 0040d605  5b                   pop ebx
// 0040d606  8911                 mov dword ptr [ecx], edx
// 0040d608  5e                   pop esi
// 0040d609  c20400               ret 4
// 0040d60c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040d60f  03c9                 add ecx, ecx
// 0040d611  03c9                 add ecx, ecx
// 0040d613  51                   push ecx
// 0040d614  03c8                 add ecx, eax
// 0040d616  6a00                 push 0
// 0040d618  51                   push ecx
// 0040d619  8906                 mov dword ptr [esi], eax
// 0040d61b  e884743e00           call 0x7f4aa4
// 0040d620  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040d623  8b16                 mov edx, dword ptr [esi]
// 0040d625  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040d629  89048a               mov dword ptr [edx + ecx*4], eax
// 0040d62c  8b4604               mov eax, dword ptr [esi + 4]
// 0040d62f  83c40c               add esp, 0xc
// 0040d632  897e04               mov dword ptr [esi + 4], edi
// 0040d635  5f                   pop edi
// 0040d636  5b                   pop ebx
// 0040d637  40                   inc eax
// 0040d638  5e                   pop esi
// 0040d639  c20400               ret 4
// copied from an identical function in another client (function ?Add@CComDynamicUnkArray@ATL@@QAEKPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp