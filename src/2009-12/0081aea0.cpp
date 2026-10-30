// roc 2009-12 0081aea0  unit: CInstanceRecord::CNameItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081aea0
//
// 0081aea0  53                   push ebx
// 0081aea1  55                   push ebp
// 0081aea2  56                   push esi
// 0081aea3  57                   push edi
// 0081aea4  8bf9                 mov edi, ecx
// 0081aea6  8b07                 mov eax, dword ptr [edi]
// 0081aea8  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081aeae  ffd2                 call edx
// 0081aeb0  8bd8                 mov ebx, eax
// 0081aeb2  33f6                 xor esi, esi
// 0081aeb4  85db                 test ebx, ebx
// 0081aeb6  7e32                 jle 0x81aeea
// 0081aeb8  8b2d5cca9800         mov ebp, dword ptr [0x98ca5c]
// 0081aebe  8bff                 mov edi, edi
// 0081aec0  8b07                 mov eax, dword ptr [edi]
// 0081aec2  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 0081aec8  56                   push esi
// 0081aec9  8bcf                 mov ecx, edi
// 0081aecb  ffd2                 call edx
// 0081aecd  85c0                 test eax, eax
// 0081aecf  7414                 je 0x81aee5
// 0081aed1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081aed5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0081aed9  51                   push ecx
// 0081aeda  52                   push edx
// 0081aedb  83c020               add eax, 0x20
// 0081aede  50                   push eax
// 0081aedf  ffd5                 call ebp
// 0081aee1  85c0                 test eax, eax
// 0081aee3  750f                 jne 0x81aef4
// 0081aee5  46                   inc esi
// 0081aee6  3bf3                 cmp esi, ebx
// 0081aee8  7cd6                 jl 0x81aec0
// 0081aeea  5f                   pop edi
// 0081aeeb  5e                   pop esi
// 0081aeec  5d                   pop ebp
// 0081aeed  83c8ff               or eax, 0xffffffff
// 0081aef0  5b                   pop ebx
// 0081aef1  c20800               ret 8
// 0081aef4  5f                   pop edi
// 0081aef5  8bc6                 mov eax, esi
// 0081aef7  5e                   pop esi
// 0081aef8  5d                   pop ebp
// 0081aef9  5b                   pop ebx
// 0081aefa  c20800               ret 8
// copied from an identical function in another client (function ?HitTestHyperlink@CXTPReportRecordItem@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp