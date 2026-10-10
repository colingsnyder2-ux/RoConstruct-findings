// roc 2008-06 006f1f00  unit: CXTPControls  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1f00
//
// 006f1f00  53                   push ebx
// 006f1f01  55                   push ebp
// 006f1f02  8bd9                 mov ebx, ecx
// 006f1f04  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 006f1f07  56                   push esi
// 006f1f08  33f6                 xor esi, esi
// 006f1f0a  57                   push edi
// 006f1f0b  85c0                 test eax, eax
// 006f1f0d  7e4e                 jle 0x6f1f5d
// 006f1f0f  8b2d2c2d8000         mov ebp, dword ptr [0x802d2c]
// 006f1f15  85f6                 test esi, esi
// 006f1f17  7c11                 jl 0x6f1f2a
// 006f1f19  3bf0                 cmp esi, eax
// 006f1f1b  7d0d                 jge 0x6f1f2a
// 006f1f1d  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 006f1f20  7d44                 jge 0x6f1f66
// 006f1f22  8b4328               mov eax, dword ptr [ebx + 0x28]
// 006f1f25  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 006f1f28  eb02                 jmp 0x6f1f2c
// 006f1f2a  33ff                 xor edi, edi
// 006f1f2c  8b17                 mov edx, dword ptr [edi]
// 006f1f2e  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006f1f34  6a00                 push 0
// 006f1f36  8bcf                 mov ecx, edi
// 006f1f38  ffd0                 call eax
// 006f1f3a  85c0                 test eax, eax
// 006f1f3c  7417                 je 0x6f1f55
// 006f1f3e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f1f42  8b542414             mov edx, dword ptr [esp + 0x14]
// 006f1f46  51                   push ecx
// 006f1f47  52                   push edx
// 006f1f48  8d87c0000000         lea eax, [edi + 0xc0]
// 006f1f4e  50                   push eax
// 006f1f4f  ffd5                 call ebp
// 006f1f51  85c0                 test eax, eax
// 006f1f53  7516                 jne 0x6f1f6b
// 006f1f55  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 006f1f58  46                   inc esi
// 006f1f59  3bf0                 cmp esi, eax
// 006f1f5b  7cb8                 jl 0x6f1f15
// 006f1f5d  5f                   pop edi
// 006f1f5e  5e                   pop esi
// 006f1f5f  5d                   pop ebp
// 006f1f60  33c0                 xor eax, eax
// 006f1f62  5b                   pop ebx
// 006f1f63  c20800               ret 8
// 006f1f66  e8d9e9faff           call 0x6a0944
// 006f1f6b  8bc7                 mov eax, edi
// 006f1f6d  5f                   pop edi
// 006f1f6e  5e                   pop esi
// 006f1f6f  5d                   pop ebp
// 006f1f70  5b                   pop ebx
// 006f1f71  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?HitTest@CXTPControls@@QBEPAVCXTPControl@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
