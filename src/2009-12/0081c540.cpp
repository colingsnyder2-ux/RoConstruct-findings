// roc 2009-12 0081c540  unit: CXTPReportControl  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c540
//
// 0081c540  53                   push ebx
// 0081c541  8bd9                 mov ebx, ecx
// 0081c543  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081c547  8b01                 mov eax, dword ptr [ecx]
// 0081c549  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0081c54c  55                   push ebp
// 0081c54d  56                   push esi
// 0081c54e  ffd2                 call edx
// 0081c550  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 0081c556  8bf0                 mov esi, eax
// 0081c558  46                   inc esi
// 0081c559  33ed                 xor ebp, ebp
// 0081c55b  e8c0060100           call 0x82cc20
// 0081c560  3bf0                 cmp esi, eax
// 0081c562  7d7f                 jge 0x81c5e3
// 0081c564  57                   push edi
// 0081c565  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 0081c56b  8b01                 mov eax, dword ptr [ecx]
// 0081c56d  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081c570  56                   push esi
// 0081c571  ffd2                 call edx
// 0081c573  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081c577  8bf8                 mov edi, eax
// 0081c579  8b07                 mov eax, dword ptr [edi]
// 0081c57b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0081c581  51                   push ecx
// 0081c582  8bcf                 mov ecx, edi
// 0081c584  ffd2                 call edx
// 0081c586  85c0                 test eax, eax
// 0081c588  742c                 je 0x81c5b6
// 0081c58a  c7475c00000000       mov dword ptr [edi + 0x5c], 0
// 0081c591  c74728ffffffff       mov dword ptr [edi + 0x28], 0xffffffff
// 0081c598  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 0081c59e  8b01                 mov eax, dword ptr [ecx]
// 0081c5a0  8b5064               mov edx, dword ptr [eax + 0x64]
// 0081c5a3  56                   push esi
// 0081c5a4  ffd2                 call edx
// 0081c5a6  8b8be0000000         mov ecx, dword ptr [ebx + 0xe0]
// 0081c5ac  45                   inc ebp
// 0081c5ad  e86e060100           call 0x82cc20
// 0081c5b2  3bf0                 cmp esi, eax
// 0081c5b4  7caf                 jl 0x81c565
// 0081c5b6  85ed                 test ebp, ebp
// 0081c5b8  7e28                 jle 0x81c5e2
// 0081c5ba  8b8b28010000         mov ecx, dword ptr [ebx + 0x128]
// 0081c5c0  55                   push ebp
// 0081c5c1  8d7eff               lea edi, [esi - 1]
// 0081c5c4  57                   push edi
// 0081c5c5  e8461f0100           call 0x82e510
// 0081c5ca  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 0081c5d0  3bc6                 cmp eax, esi
// 0081c5d2  7c0e                 jl 0x81c5e2
// 0081c5d4  2bc5                 sub eax, ebp
// 0081c5d6  3bf8                 cmp edi, eax
// 0081c5d8  7e02                 jle 0x81c5dc
// 0081c5da  8bc7                 mov eax, edi
// 0081c5dc  89831c010000         mov dword ptr [ebx + 0x11c], eax
// 0081c5e2  5f                   pop edi
// 0081c5e3  5e                   pop esi
// 0081c5e4  5d                   pop ebp
// 0081c5e5  5b                   pop ebx
// 0081c5e6  c20400               ret 4
// copied from an identical function in another client (function ?_DoCollapse@CXTPReportControl@@MAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp