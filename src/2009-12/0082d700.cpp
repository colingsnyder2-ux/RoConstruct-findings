// roc 2009-12 0082d700  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d700
//
// 0082d700  53                   push ebx
// 0082d701  57                   push edi
// 0082d702  8bd9                 mov ebx, ecx
// 0082d704  33ff                 xor edi, edi
// 0082d706  e815f5ffff           call 0x82cc20
// 0082d70b  85c0                 test eax, eax
// 0082d70d  7e60                 jle 0x82d76f
// 0082d70f  55                   push ebp
// 0082d710  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0082d714  56                   push esi
// 0082d715  8b03                 mov eax, dword ptr [ebx]
// 0082d717  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0082d71a  57                   push edi
// 0082d71b  8bcb                 mov ecx, ebx
// 0082d71d  ffd2                 call edx
// 0082d71f  8bf0                 mov esi, eax
// 0082d721  897e6c               mov dword ptr [esi + 0x6c], edi
// 0082d724  85ed                 test ebp, ebp
// 0082d726  7439                 je 0x82d761
// 0082d728  8b06                 mov eax, dword ptr [esi]
// 0082d72a  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0082d730  8bce                 mov ecx, esi
// 0082d732  ffd2                 call edx
// 0082d734  85c0                 test eax, eax
// 0082d736  7429                 je 0x82d761
// 0082d738  8b06                 mov eax, dword ptr [esi]
// 0082d73a  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0082d740  8bce                 mov ecx, esi
// 0082d742  ffd2                 call edx
// 0082d744  85c0                 test eax, eax
// 0082d746  7419                 je 0x82d761
// 0082d748  8b06                 mov eax, dword ptr [esi]
// 0082d74a  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0082d750  8bce                 mov ecx, esi
// 0082d752  ffd2                 call edx
// 0082d754  8b10                 mov edx, dword ptr [eax]
// 0082d756  8bc8                 mov ecx, eax
// 0082d758  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0082d75e  55                   push ebp
// 0082d75f  ffd0                 call eax
// 0082d761  8bcb                 mov ecx, ebx
// 0082d763  47                   inc edi
// 0082d764  e8b7f4ffff           call 0x82cc20
// 0082d769  3bf8                 cmp edi, eax
// 0082d76b  7ca8                 jl 0x82d715
// 0082d76d  5e                   pop esi
// 0082d76e  5d                   pop ebp
// 0082d76f  5f                   pop edi
// 0082d770  5b                   pop ebx
// 0082d771  c20400               ret 4
// copied from an identical function in another client (function ?RefreshChildIndices@CXTPReportRows@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRows.cpp