// roc 2009-06 007522c0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007522c0
//
// 007522c0  6aff                 push -1
// 007522c2  6808618700           push 0x876108
// 007522c7  64a100000000         mov eax, dword ptr fs:[0]
// 007522cd  50                   push eax
// 007522ce  83ec10               sub esp, 0x10
// 007522d1  53                   push ebx
// 007522d2  55                   push ebp
// 007522d3  56                   push esi
// 007522d4  57                   push edi
// 007522d5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007522da  33c4                 xor eax, esp
// 007522dc  50                   push eax
// 007522dd  8d442424             lea eax, [esp + 0x24]
// 007522e1  64a300000000         mov dword ptr fs:[0], eax
// 007522e7  8bf9                 mov edi, ecx
// 007522e9  897c2414             mov dword ptr [esp + 0x14], edi
// 007522ed  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007522f1  8b03                 mov eax, dword ptr [ebx]
// 007522f3  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007522f9  68b04b8f00           push 0x8f4bb0
// 007522fe  8bcb                 mov ecx, ebx
// 00752300  ffd2                 call edx
// 00752302  8bf0                 mov esi, eax
// 00752304  8974241c             mov dword ptr [esp + 0x1c], esi
// 00752308  33ed                 xor ebp, ebp
// 0075230a  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0075230e  8bcf                 mov ecx, edi
// 00752310  396b28               cmp dword ptr [ebx + 0x28], ebp
// 00752313  0f85aa000000         jne 0x7523c3
// 00752319  e892fbffff           call 0x751eb0
// 0075231e  8bd8                 mov ebx, eax
// 00752320  8b06                 mov eax, dword ptr [esi]
// 00752322  8b5004               mov edx, dword ptr [eax + 4]
// 00752325  6a01                 push 1
// 00752327  53                   push ebx
// 00752328  8bce                 mov ecx, esi
// 0075232a  ffd2                 call edx
// 0075232c  3bdd                 cmp ebx, ebp
// 0075232e  89442418             mov dword ptr [esp + 0x18], eax
// 00752332  7f30                 jg 0x752364
// 00752334  8b06                 mov eax, dword ptr [esi]
// 00752336  8b10                 mov edx, dword ptr [eax]
// 00752338  6a01                 push 1
// 0075233a  8bce                 mov ecx, esi
// 0075233c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00752344  ffd2                 call edx
// 00752346  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0075234a  64890d00000000       mov dword ptr fs:[0], ecx
// 00752351  59                   pop ecx
// 00752352  5f                   pop edi
// 00752353  5e                   pop esi
// 00752354  5d                   pop ebp
// 00752355  5b                   pop ebx
// 00752356  83c41c               add esp, 0x1c
// 00752359  c20400               ret 4
// 0075235c  8d642400             lea esp, [esp]
// 00752360  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00752364  55                   push ebp
// 00752365  8bcf                 mov ecx, edi
// 00752367  e854fbffff           call 0x751ec0
// 0075236c  89442434             mov dword ptr [esp + 0x34], eax
// 00752370  8b06                 mov eax, dword ptr [esi]
// 00752372  8b5008               mov edx, dword ptr [eax + 8]
// 00752375  8d4c2418             lea ecx, [esp + 0x18]
// 00752379  51                   push ecx
// 0075237a  8bce                 mov ecx, esi
// 0075237c  ffd2                 call edx
// 0075237e  8bf8                 mov edi, eax
// 00752380  897c2420             mov dword ptr [esp + 0x20], edi
// 00752384  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00752389  e8b2dbffff           call 0x74ff40
// 0075238e  8b17                 mov edx, dword ptr [edi]
// 00752390  8b5264               mov edx, dword ptr [edx + 0x64]
// 00752393  50                   push eax
// 00752394  8d442438             lea eax, [esp + 0x38]
// 00752398  50                   push eax
// 00752399  8bcf                 mov ecx, edi
// 0075239b  ffd2                 call edx
// 0075239d  85c0                 test eax, eax
// 0075239f  740c                 je 0x7523ad
// 007523a1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007523a5  8b01                 mov eax, dword ptr [ecx]
// 007523a7  8b5060               mov edx, dword ptr [eax + 0x60]
// 007523aa  57                   push edi
// 007523ab  ffd2                 call edx
// 007523ad  8bcf                 mov ecx, edi
// 007523af  c644242c00           mov byte ptr [esp + 0x2c], 0
// 007523b4  e8ef6bfcff           call 0x718fa8
// 007523b9  45                   inc ebp
// 007523ba  3beb                 cmp ebp, ebx
// 007523bc  7ca2                 jl 0x752360
// 007523be  e971ffffff           jmp 0x752334
// 007523c3  e818faffff           call 0x751de0
// 007523c8  8b06                 mov eax, dword ptr [esi]
// 007523ca  8b5004               mov edx, dword ptr [eax + 4]
// 007523cd  6a01                 push 1
// 007523cf  55                   push ebp
// 007523d0  8bce                 mov ecx, esi
// 007523d2  ffd2                 call edx
// 007523d4  89442418             mov dword ptr [esp + 0x18], eax
// 007523d8  3bc5                 cmp eax, ebp
// 007523da  0f8454ffffff         je 0x752334
// 007523e0  b302                 mov bl, 2
// 007523e2  c744243400000000     mov dword ptr [esp + 0x34], 0
// 007523ea  8b06                 mov eax, dword ptr [esi]
// 007523ec  8b5008               mov edx, dword ptr [eax + 8]
// 007523ef  8d4c2418             lea ecx, [esp + 0x18]
// 007523f3  51                   push ecx
// 007523f4  8bce                 mov ecx, esi
// 007523f6  ffd2                 call edx
// 007523f8  8bf8                 mov edi, eax
// 007523fa  897c2420             mov dword ptr [esp + 0x20], edi
// 007523fe  885c242c             mov byte ptr [esp + 0x2c], bl
// 00752402  e839dbffff           call 0x74ff40
// 00752407  8b17                 mov edx, dword ptr [edi]
// 00752409  8b5264               mov edx, dword ptr [edx + 0x64]
// 0075240c  50                   push eax
// 0075240d  8d442438             lea eax, [esp + 0x38]
// 00752411  50                   push eax
// 00752412  8bcf                 mov ecx, edi
// 00752414  ffd2                 call edx
// 00752416  85c0                 test eax, eax
// 00752418  740c                 je 0x752426
// 0075241a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0075241e  8b01                 mov eax, dword ptr [ecx]
// 00752420  8b5060               mov edx, dword ptr [eax + 0x60]
// 00752423  57                   push edi
// 00752424  ffd2                 call edx
// 00752426  8b442434             mov eax, dword ptr [esp + 0x34]
// 0075242a  85c0                 test eax, eax
// 0075242c  7422                 je 0x752450
// 0075242e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00752432  50                   push eax
// 00752433  e808feffff           call 0x752240
// 00752438  8bcf                 mov ecx, edi
// 0075243a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0075243f  e8646bfcff           call 0x718fa8
// 00752444  837c241800           cmp dword ptr [esp + 0x18], 0
// 00752449  7597                 jne 0x7523e2
// 0075244b  e9e4feffff           jmp 0x752334
// 00752450  6a00                 push 0
// 00752452  6a06                 push 6
// 00752454  e84971fcff           call 0x7195a2
// copied from an identical function in another client (function ?_DoPropExchange@CXTPReportRecords@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp