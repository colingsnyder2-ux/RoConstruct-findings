// roc 2008-06 00701f20  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701f20
//
// 00701f20  83ec28               sub esp, 0x28
// 00701f23  53                   push ebx
// 00701f24  55                   push ebp
// 00701f25  56                   push esi
// 00701f26  8bf1                 mov esi, ecx
// 00701f28  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00701f2b  8b01                 mov eax, dword ptr [ecx]
// 00701f2d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00701f30  57                   push edi
// 00701f31  ffd2                 call edx
// 00701f33  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00701f39  8b01                 mov eax, dword ptr [ecx]
// 00701f3b  8b4010               mov eax, dword ptr [eax + 0x10]
// 00701f3e  8d542428             lea edx, [esp + 0x28]
// 00701f42  52                   push edx
// 00701f43  ffd0                 call eax
// 00701f45  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00701f49  8b5704               mov edx, dword ptr [edi + 4]
// 00701f4c  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00701f4f  8b0f                 mov ecx, dword ptr [edi]
// 00701f51  8b470c               mov eax, dword ptr [edi + 0xc]
// 00701f54  8b6f08               mov ebp, dword ptr [edi + 8]
// 00701f57  8954241c             mov dword ptr [esp + 0x1c], edx
// 00701f5b  8b13                 mov edx, dword ptr [ebx]
// 00701f5d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00701f61  89442424             mov dword ptr [esp + 0x24], eax
// 00701f65  8b4248               mov eax, dword ptr [edx + 0x48]
// 00701f68  8bcb                 mov ecx, ebx
// 00701f6a  ffd0                 call eax
// 00701f6c  83f802               cmp eax, 2
// 00701f6f  740d                 je 0x701f7e
// 00701f71  8b13                 mov edx, dword ptr [ebx]
// 00701f73  8b4248               mov eax, dword ptr [edx + 0x48]
// 00701f76  8bcb                 mov ecx, ebx
// 00701f78  ffd0                 call eax
// 00701f7a  85c0                 test eax, eax
// 00701f7c  7508                 jne 0x701f86
// 00701f7e  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 00701f82  8bdd                 mov ebx, ebp
// 00701f84  eb08                 jmp 0x701f8e
// 00701f86  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00701f8a  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 00701f8e  8b16                 mov edx, dword ptr [esi]
// 00701f90  8b5208               mov edx, dword ptr [edx + 8]
// 00701f93  8d442410             lea eax, [esp + 0x10]
// 00701f97  50                   push eax
// 00701f98  8bce                 mov ecx, esi
// 00701f9a  ffd2                 call edx
// 00701f9c  2b18                 sub ebx, dword ptr [eax]
// 00701f9e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00701fa1  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 00701fa5  2b5c2428             sub ebx, dword ptr [esp + 0x28]
// 00701fa9  e8f2a10700           call 0x77c1a0
// 00701fae  33c9                 xor ecx, ecx
// 00701fb0  3bc3                 cmp eax, ebx
// 00701fb2  0f9fc1               setg cl
// 00701fb5  57                   push edi
// 00701fb6  894e30               mov dword ptr [esi + 0x30], ecx
// 00701fb9  8bce                 mov ecx, esi
// 00701fbb  e800960700           call 0x77b5c0
// 00701fc0  5f                   pop edi
// 00701fc1  5e                   pop esi
// 00701fc2  5d                   pop ebp
// 00701fc3  5b                   pop ebx
// 00701fc4  83c428               add esp, 0x28
// 00701fc7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
