// roc 2011-06 00864a90  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864a90
//
// 00864a90  83ec28               sub esp, 0x28
// 00864a93  53                   push ebx
// 00864a94  55                   push ebp
// 00864a95  56                   push esi
// 00864a96  8bf1                 mov esi, ecx
// 00864a98  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00864a9b  8b01                 mov eax, dword ptr [ecx]
// 00864a9d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00864aa0  57                   push edi
// 00864aa1  ffd2                 call edx
// 00864aa3  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00864aa9  8b01                 mov eax, dword ptr [ecx]
// 00864aab  8b4010               mov eax, dword ptr [eax + 0x10]
// 00864aae  8d542428             lea edx, [esp + 0x28]
// 00864ab2  52                   push edx
// 00864ab3  ffd0                 call eax
// 00864ab5  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00864ab9  8b5704               mov edx, dword ptr [edi + 4]
// 00864abc  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00864abf  8b0f                 mov ecx, dword ptr [edi]
// 00864ac1  8b470c               mov eax, dword ptr [edi + 0xc]
// 00864ac4  8b6f08               mov ebp, dword ptr [edi + 8]
// 00864ac7  8954241c             mov dword ptr [esp + 0x1c], edx
// 00864acb  8b13                 mov edx, dword ptr [ebx]
// 00864acd  894c2418             mov dword ptr [esp + 0x18], ecx
// 00864ad1  89442424             mov dword ptr [esp + 0x24], eax
// 00864ad5  8b4248               mov eax, dword ptr [edx + 0x48]
// 00864ad8  8bcb                 mov ecx, ebx
// 00864ada  ffd0                 call eax
// 00864adc  83f802               cmp eax, 2
// 00864adf  740d                 je 0x864aee
// 00864ae1  8b13                 mov edx, dword ptr [ebx]
// 00864ae3  8b4248               mov eax, dword ptr [edx + 0x48]
// 00864ae6  8bcb                 mov ecx, ebx
// 00864ae8  ffd0                 call eax
// 00864aea  85c0                 test eax, eax
// 00864aec  7508                 jne 0x864af6
// 00864aee  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 00864af2  8bdd                 mov ebx, ebp
// 00864af4  eb08                 jmp 0x864afe
// 00864af6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00864afa  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 00864afe  8b16                 mov edx, dword ptr [esi]
// 00864b00  8b5208               mov edx, dword ptr [edx + 8]
// 00864b03  8d442410             lea eax, [esp + 0x10]
// 00864b07  50                   push eax
// 00864b08  8bce                 mov ecx, esi
// 00864b0a  ffd2                 call edx
// 00864b0c  2b18                 sub ebx, dword ptr [eax]
// 00864b0e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00864b11  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 00864b15  2b5c2428             sub ebx, dword ptr [esp + 0x28]
// 00864b19  e8c2f90600           call 0x8d44e0
// 00864b1e  33c9                 xor ecx, ecx
// 00864b20  3bc3                 cmp eax, ebx
// 00864b22  0f9fc1               setg cl
// 00864b25  57                   push edi
// 00864b26  894e30               mov dword ptr [esi + 0x30], ecx
// 00864b29  8bce                 mov ecx, esi
// 00864b2b  e880ee0600           call 0x8d39b0
// 00864b30  5f                   pop edi
// 00864b31  5e                   pop esi
// 00864b32  5d                   pop ebp
// 00864b33  5b                   pop ebx
// 00864b34  83c428               add esp, 0x28
// 00864b37  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
