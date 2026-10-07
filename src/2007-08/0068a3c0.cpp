// roc 2007-08 0068a3c0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a3c0
//
// 0068a3c0  83ec28               sub esp, 0x28
// 0068a3c3  53                   push ebx
// 0068a3c4  55                   push ebp
// 0068a3c5  56                   push esi
// 0068a3c6  8bf1                 mov esi, ecx
// 0068a3c8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0068a3cb  8b01                 mov eax, dword ptr [ecx]
// 0068a3cd  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0068a3d0  57                   push edi
// 0068a3d1  ffd2                 call edx
// 0068a3d3  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0068a3d9  8b01                 mov eax, dword ptr [ecx]
// 0068a3db  8b4010               mov eax, dword ptr [eax + 0x10]
// 0068a3de  8d542428             lea edx, [esp + 0x28]
// 0068a3e2  52                   push edx
// 0068a3e3  ffd0                 call eax
// 0068a3e5  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0068a3e9  8b5704               mov edx, dword ptr [edi + 4]
// 0068a3ec  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0068a3ef  8b0f                 mov ecx, dword ptr [edi]
// 0068a3f1  8b470c               mov eax, dword ptr [edi + 0xc]
// 0068a3f4  8b6f08               mov ebp, dword ptr [edi + 8]
// 0068a3f7  8954241c             mov dword ptr [esp + 0x1c], edx
// 0068a3fb  8b13                 mov edx, dword ptr [ebx]
// 0068a3fd  894c2418             mov dword ptr [esp + 0x18], ecx
// 0068a401  89442424             mov dword ptr [esp + 0x24], eax
// 0068a405  8b4248               mov eax, dword ptr [edx + 0x48]
// 0068a408  8bcb                 mov ecx, ebx
// 0068a40a  ffd0                 call eax
// 0068a40c  83f802               cmp eax, 2
// 0068a40f  740d                 je 0x68a41e
// 0068a411  8b13                 mov edx, dword ptr [ebx]
// 0068a413  8b4248               mov eax, dword ptr [edx + 0x48]
// 0068a416  8bcb                 mov ecx, ebx
// 0068a418  ffd0                 call eax
// 0068a41a  85c0                 test eax, eax
// 0068a41c  7508                 jne 0x68a426
// 0068a41e  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 0068a422  8bdd                 mov ebx, ebp
// 0068a424  eb08                 jmp 0x68a42e
// 0068a426  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0068a42a  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 0068a42e  8b16                 mov edx, dword ptr [esi]
// 0068a430  8b5208               mov edx, dword ptr [edx + 8]
// 0068a433  8d442410             lea eax, [esp + 0x10]
// 0068a437  50                   push eax
// 0068a438  8bce                 mov ecx, esi
// 0068a43a  ffd2                 call edx
// 0068a43c  2b18                 sub ebx, dword ptr [eax]
// 0068a43e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0068a441  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 0068a445  2b5c2428             sub ebx, dword ptr [esp + 0x28]
// 0068a449  e882410700           call 0x6fe5d0
// 0068a44e  33c9                 xor ecx, ecx
// 0068a450  3bc3                 cmp eax, ebx
// 0068a452  0f9fc1               setg cl
// 0068a455  57                   push edi
// 0068a456  894e30               mov dword ptr [esi + 0x30], ecx
// 0068a459  8bce                 mov ecx, esi
// 0068a45b  e810360700           call 0x6fda70
// 0068a460  5f                   pop edi
// 0068a461  5e                   pop esi
// 0068a462  5d                   pop ebp
// 0068a463  5b                   pop ebx
// 0068a464  83c428               add esp, 0x28
// 0068a467  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
