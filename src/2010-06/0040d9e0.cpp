// roc 2010-06 0040d9e0  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040d9e0
//
// 0040d9e0  56                   push esi
// 0040d9e1  8bf1                 mov esi, ecx
// 0040d9e3  837e0400             cmp dword ptr [esi + 4], 0
// 0040d9e7  752b                 jne 0x40da14
// 0040d9e9  6a04                 push 4
// 0040d9eb  6a04                 push 4
// 0040d9ed  ff1590a89e00         call dword ptr [0x9ea890]
// 0040d9f3  83c408               add esp, 8
// 0040d9f6  85c0                 test eax, eax
// 0040d9f8  7504                 jne 0x40d9fe
// 0040d9fa  5e                   pop esi
// 0040d9fb  c20400               ret 4
// 0040d9fe  33c9                 xor ecx, ecx
// 0040da00  8908                 mov dword ptr [eax], ecx
// 0040da02  894804               mov dword ptr [eax + 4], ecx
// 0040da05  894808               mov dword ptr [eax + 8], ecx
// 0040da08  89480c               mov dword ptr [eax + 0xc], ecx
// 0040da0b  8906                 mov dword ptr [esi], eax
// 0040da0d  c7460404000000       mov dword ptr [esi + 4], 4
// 0040da14  8b0e                 mov ecx, dword ptr [esi]
// 0040da16  8b5604               mov edx, dword ptr [esi + 4]
// 0040da19  53                   push ebx
// 0040da1a  57                   push edi
// 0040da1b  8bf9                 mov edi, ecx
// 0040da1d  8d3c97               lea edi, [edi + edx*4]
// 0040da20  b801000000           mov eax, 1
// 0040da25  3bcf                 cmp ecx, edi
// 0040da27  731b                 jae 0x40da44
// 0040da29  8da42400000000       lea esp, [esp]
// 0040da30  833900               cmp dword ptr [ecx], 0
// 0040da33  742b                 je 0x40da60
// 0040da35  8b1e                 mov ebx, dword ptr [esi]
// 0040da37  8bfa                 mov edi, edx
// 0040da39  83c104               add ecx, 4
// 0040da3c  8d3cbb               lea edi, [ebx + edi*4]
// 0040da3f  40                   inc eax
// 0040da40  3bcf                 cmp ecx, edi
// 0040da42  72ec                 jb 0x40da30
// 0040da44  8b06                 mov eax, dword ptr [esi]
// 0040da46  8d3c12               lea edi, [edx + edx]
// 0040da49  57                   push edi
// 0040da4a  6a04                 push 4
// 0040da4c  50                   push eax
// 0040da4d  ff15b4a89e00         call dword ptr [0x9ea8b4]
// 0040da53  83c40c               add esp, 0xc
// 0040da56  85c0                 test eax, eax
// 0040da58  7512                 jne 0x40da6c
// 0040da5a  5f                   pop edi
// 0040da5b  5b                   pop ebx
// 0040da5c  5e                   pop esi
// 0040da5d  c20400               ret 4
// 0040da60  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040da64  5f                   pop edi
// 0040da65  5b                   pop ebx
// 0040da66  8911                 mov dword ptr [ecx], edx
// 0040da68  5e                   pop esi
// 0040da69  c20400               ret 4
// 0040da6c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040da6f  03c9                 add ecx, ecx
// 0040da71  03c9                 add ecx, ecx
// 0040da73  51                   push ecx
// 0040da74  03c8                 add ecx, eax
// 0040da76  6a00                 push 0
// 0040da78  51                   push ecx
// 0040da79  8906                 mov dword ptr [esi], eax
// 0040da7b  e864b13900           call 0x7a8be4
// 0040da80  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040da83  8b16                 mov edx, dword ptr [esi]
// 0040da85  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040da89  89048a               mov dword ptr [edx + ecx*4], eax
// 0040da8c  8b4604               mov eax, dword ptr [esi + 4]
// 0040da8f  83c40c               add esp, 0xc
// 0040da92  897e04               mov dword ptr [esi + 4], edi
// 0040da95  5f                   pop edi
// 0040da96  5b                   pop ebx
// 0040da97  40                   inc eax
// 0040da98  5e                   pop esi
// 0040da99  c20400               ret 4
// copied from an identical function in another client (function ?Add@CComDynamicUnkArray@ATL@@QAEKPAUIUnknown@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_2e752666f44a81f5.cpp