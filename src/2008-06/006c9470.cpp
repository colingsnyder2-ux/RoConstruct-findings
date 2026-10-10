// roc 2008-06 006c9470  unit: CXTPReportControl  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9470
//
// 006c9470  51                   push ecx
// 006c9471  53                   push ebx
// 006c9472  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006c9476  55                   push ebp
// 006c9477  8be9                 mov ebp, ecx
// 006c9479  85db                 test ebx, ebx
// 006c947b  0f84dc000000         je 0x6c955d
// 006c9481  8b4500               mov eax, dword ptr [ebp]
// 006c9484  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 006c948a  57                   push edi
// 006c948b  53                   push ebx
// 006c948c  ffd2                 call edx
// 006c948e  33ff                 xor edi, edi
// 006c9490  8bcb                 mov ecx, ebx
// 006c9492  897c240c             mov dword ptr [esp + 0xc], edi
// 006c9496  e8b50b0100           call 0x6da050
// 006c949b  85c0                 test eax, eax
// 006c949d  0f8eab000000         jle 0x6c954e
// 006c94a3  56                   push esi
// 006c94a4  8b03                 mov eax, dword ptr [ebx]
// 006c94a6  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006c94a9  57                   push edi
// 006c94aa  8bcb                 mov ecx, ebx
// 006c94ac  ffd2                 call edx
// 006c94ae  8bf0                 mov esi, eax
// 006c94b0  85f6                 test esi, esi
// 006c94b2  0f8481000000         je 0x6c9539
// 006c94b8  8b06                 mov eax, dword ptr [esi]
// 006c94ba  8b5060               mov edx, dword ptr [eax + 0x60]
// 006c94bd  8bce                 mov ecx, esi
// 006c94bf  ffd2                 call edx
// 006c94c1  85c0                 test eax, eax
// 006c94c3  741c                 je 0x6c94e1
// 006c94c5  8b06                 mov eax, dword ptr [esi]
// 006c94c7  8b5060               mov edx, dword ptr [eax + 0x60]
// 006c94ca  8bce                 mov ecx, esi
// 006c94cc  ffd2                 call edx
// 006c94ce  8bc8                 mov ecx, eax
// 006c94d0  e84bea0000           call 0x6d7f20
// 006c94d5  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006c94dd  85c0                 test eax, eax
// 006c94df  7508                 jne 0x6c94e9
// 006c94e1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006c94e9  8b06                 mov eax, dword ptr [esi]
// 006c94eb  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 006c94f1  8bce                 mov ecx, esi
// 006c94f3  ffd2                 call edx
// 006c94f5  85c0                 test eax, eax
// 006c94f7  7440                 je 0x6c9539
// 006c94f9  8b06                 mov eax, dword ptr [esi]
// 006c94fb  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006c9501  8bce                 mov ecx, esi
// 006c9503  ffd2                 call edx
// 006c9505  85c0                 test eax, eax
// 006c9507  7430                 je 0x6c9539
// 006c9509  837c241800           cmp dword ptr [esp + 0x18], 0
// 006c950e  7409                 je 0x6c9519
// 006c9510  83bdbc01000000       cmp dword ptr [ebp + 0x1bc], 0
// 006c9517  7420                 je 0x6c9539
// 006c9519  8b06                 mov eax, dword ptr [esi]
// 006c951b  8b7d00               mov edi, dword ptr [ebp]
// 006c951e  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 006c9524  8bce                 mov ecx, esi
// 006c9526  81c7b8010000         add edi, 0x1b8
// 006c952c  ffd2                 call edx
// 006c952e  50                   push eax
// 006c952f  8b07                 mov eax, dword ptr [edi]
// 006c9531  8bcd                 mov ecx, ebp
// 006c9533  ffd0                 call eax
// 006c9535  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c9539  47                   inc edi
// 006c953a  8bcb                 mov ecx, ebx
// 006c953c  897c2410             mov dword ptr [esp + 0x10], edi
// 006c9540  e80b0b0100           call 0x6da050
// 006c9545  3bf8                 cmp edi, eax
// 006c9547  0f8c57ffffff         jl 0x6c94a4
// 006c954d  5e                   pop esi
// 006c954e  8b13                 mov edx, dword ptr [ebx]
// 006c9550  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 006c9556  6a00                 push 0
// 006c9558  8bcb                 mov ecx, ebx
// 006c955a  ffd0                 call eax
// 006c955c  5f                   pop edi
// 006c955d  5d                   pop ebp
// 006c955e  5b                   pop ebx
// 006c955f  59                   pop ecx
// 006c9560  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?SortTree@CXTPReportControl@@MAEXPAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
