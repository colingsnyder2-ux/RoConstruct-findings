// roc 2008-06 007949d0  unit: CXTPRibbonGroup  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007949d0
//
// 007949d0  83ec10               sub esp, 0x10
// 007949d3  53                   push ebx
// 007949d4  55                   push ebp
// 007949d5  8bd9                 mov ebx, ecx
// 007949d7  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007949da  56                   push esi
// 007949db  33f6                 xor esi, esi
// 007949dd  57                   push edi
// 007949de  85c0                 test eax, eax
// 007949e0  7e61                 jle 0x794a43
// 007949e2  8b2d2c2d8000         mov ebp, dword ptr [0x802d2c]
// 007949e8  85f6                 test esi, esi
// 007949ea  7c11                 jl 0x7949fd
// 007949ec  3bf0                 cmp esi, eax
// 007949ee  7d0d                 jge 0x7949fd
// 007949f0  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 007949f3  7d5a                 jge 0x794a4f
// 007949f5  8b4324               mov eax, dword ptr [ebx + 0x24]
// 007949f8  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 007949fb  eb02                 jmp 0x7949ff
// 007949fd  33ff                 xor edi, edi
// 007949ff  8bcf                 mov ecx, edi
// 00794a01  e8ca340000           call 0x797ed0
// 00794a06  85c0                 test eax, eax
// 00794a08  7431                 je 0x794a3b
// 00794a0a  8b5738               mov edx, dword ptr [edi + 0x38]
// 00794a0d  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00794a10  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00794a13  894c2410             mov dword ptr [esp + 0x10], ecx
// 00794a17  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00794a1a  89542414             mov dword ptr [esp + 0x14], edx
// 00794a1e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00794a22  89442418             mov dword ptr [esp + 0x18], eax
// 00794a26  8b442424             mov eax, dword ptr [esp + 0x24]
// 00794a2a  52                   push edx
// 00794a2b  894c2420             mov dword ptr [esp + 0x20], ecx
// 00794a2f  50                   push eax
// 00794a30  8d4c2418             lea ecx, [esp + 0x18]
// 00794a34  51                   push ecx
// 00794a35  ffd5                 call ebp
// 00794a37  85c0                 test eax, eax
// 00794a39  7519                 jne 0x794a54
// 00794a3b  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00794a3e  46                   inc esi
// 00794a3f  3bf0                 cmp esi, eax
// 00794a41  7ca5                 jl 0x7949e8
// 00794a43  5f                   pop edi
// 00794a44  5e                   pop esi
// 00794a45  5d                   pop ebp
// 00794a46  33c0                 xor eax, eax
// 00794a48  5b                   pop ebx
// 00794a49  83c410               add esp, 0x10
// 00794a4c  c20800               ret 8
// 00794a4f  e8f0bef0ff           call 0x6a0944
// 00794a54  8bc7                 mov eax, edi
// 00794a56  5f                   pop edi
// 00794a57  5e                   pop esi
// 00794a58  5d                   pop ebp
// 00794a59  5b                   pop ebx
// 00794a5a  83c410               add esp, 0x10
// 00794a5d  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?HitTest@CXTPRibbonGroups@@QBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
