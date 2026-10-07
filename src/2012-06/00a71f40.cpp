// roc 2012-06 00a71f40  unit: CXTPRibbonGroup  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71f40
//
// 00a71f40  83ec10               sub esp, 0x10
// 00a71f43  53                   push ebx
// 00a71f44  55                   push ebp
// 00a71f45  8bd9                 mov ebx, ecx
// 00a71f47  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00a71f4a  56                   push esi
// 00a71f4b  33f6                 xor esi, esi
// 00a71f4d  57                   push edi
// 00a71f4e  85c0                 test eax, eax
// 00a71f50  7e61                 jle 0xa71fb3
// 00a71f52  8b2d483bb200         mov ebp, dword ptr [0xb23b48]
// 00a71f58  85f6                 test esi, esi
// 00a71f5a  7c11                 jl 0xa71f6d
// 00a71f5c  3bf0                 cmp esi, eax
// 00a71f5e  7d0d                 jge 0xa71f6d
// 00a71f60  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 00a71f63  7d5a                 jge 0xa71fbf
// 00a71f65  8b4324               mov eax, dword ptr [ebx + 0x24]
// 00a71f68  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 00a71f6b  eb02                 jmp 0xa71f6f
// 00a71f6d  33ff                 xor edi, edi
// 00a71f6f  8bcf                 mov ecx, edi
// 00a71f71  e8cad2ffff           call 0xa6f240
// 00a71f76  85c0                 test eax, eax
// 00a71f78  7431                 je 0xa71fab
// 00a71f7a  8b5738               mov edx, dword ptr [edi + 0x38]
// 00a71f7d  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00a71f80  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00a71f83  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a71f87  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00a71f8a  89542414             mov dword ptr [esp + 0x14], edx
// 00a71f8e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a71f92  89442418             mov dword ptr [esp + 0x18], eax
// 00a71f96  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a71f9a  52                   push edx
// 00a71f9b  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a71f9f  50                   push eax
// 00a71fa0  8d4c2418             lea ecx, [esp + 0x18]
// 00a71fa4  51                   push ecx
// 00a71fa5  ffd5                 call ebp
// 00a71fa7  85c0                 test eax, eax
// 00a71fa9  7519                 jne 0xa71fc4
// 00a71fab  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00a71fae  46                   inc esi
// 00a71faf  3bf0                 cmp esi, eax
// 00a71fb1  7ca5                 jl 0xa71f58
// 00a71fb3  5f                   pop edi
// 00a71fb4  5e                   pop esi
// 00a71fb5  5d                   pop ebp
// 00a71fb6  33c0                 xor eax, eax
// 00a71fb8  5b                   pop ebx
// 00a71fb9  83c410               add esp, 0x10
// 00a71fbc  c20800               ret 8
// 00a71fbf  e8fc03f1ff           call 0x9823c0
// 00a71fc4  8bc7                 mov eax, edi
// 00a71fc6  5f                   pop edi
// 00a71fc7  5e                   pop esi
// 00a71fc8  5d                   pop ebp
// 00a71fc9  5b                   pop ebx
// 00a71fca  83c410               add esp, 0x10
// 00a71fcd  c20800               ret 8
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?HitTest@CXTPRibbonGroups@@QBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
