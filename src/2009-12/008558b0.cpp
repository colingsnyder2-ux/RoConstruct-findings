// roc 2009-12 008558b0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008558b0
//
// 008558b0  83ec28               sub esp, 0x28
// 008558b3  53                   push ebx
// 008558b4  55                   push ebp
// 008558b5  56                   push esi
// 008558b6  8bf1                 mov esi, ecx
// 008558b8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008558bb  8b01                 mov eax, dword ptr [ecx]
// 008558bd  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008558c0  57                   push edi
// 008558c1  ffd2                 call edx
// 008558c3  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008558c9  8b01                 mov eax, dword ptr [ecx]
// 008558cb  8b4010               mov eax, dword ptr [eax + 0x10]
// 008558ce  8d542428             lea edx, [esp + 0x28]
// 008558d2  52                   push edx
// 008558d3  ffd0                 call eax
// 008558d5  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008558d9  8b5704               mov edx, dword ptr [edi + 4]
// 008558dc  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 008558df  8b0f                 mov ecx, dword ptr [edi]
// 008558e1  8b470c               mov eax, dword ptr [edi + 0xc]
// 008558e4  8b6f08               mov ebp, dword ptr [edi + 8]
// 008558e7  8954241c             mov dword ptr [esp + 0x1c], edx
// 008558eb  8b13                 mov edx, dword ptr [ebx]
// 008558ed  894c2418             mov dword ptr [esp + 0x18], ecx
// 008558f1  89442424             mov dword ptr [esp + 0x24], eax
// 008558f5  8b4248               mov eax, dword ptr [edx + 0x48]
// 008558f8  8bcb                 mov ecx, ebx
// 008558fa  ffd0                 call eax
// 008558fc  83f802               cmp eax, 2
// 008558ff  740d                 je 0x85590e
// 00855901  8b13                 mov edx, dword ptr [ebx]
// 00855903  8b4248               mov eax, dword ptr [edx + 0x48]
// 00855906  8bcb                 mov ecx, ebx
// 00855908  ffd0                 call eax
// 0085590a  85c0                 test eax, eax
// 0085590c  7508                 jne 0x855916
// 0085590e  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 00855912  8bdd                 mov ebx, ebp
// 00855914  eb08                 jmp 0x85591e
// 00855916  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0085591a  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 0085591e  8b16                 mov edx, dword ptr [esi]
// 00855920  8b5208               mov edx, dword ptr [edx + 8]
// 00855923  8d442410             lea eax, [esp + 0x10]
// 00855927  50                   push eax
// 00855928  8bce                 mov ecx, esi
// 0085592a  ffd2                 call edx
// 0085592c  2b18                 sub ebx, dword ptr [eax]
// 0085592e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00855931  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 00855935  2b5c2428             sub ebx, dword ptr [esp + 0x28]
// 00855939  e8d29a0700           call 0x8cf410
// 0085593e  33c9                 xor ecx, ecx
// 00855940  3bc3                 cmp eax, ebx
// 00855942  0f9fc1               setg cl
// 00855945  57                   push edi
// 00855946  894e30               mov dword ptr [esi + 0x30], ecx
// 00855949  8bce                 mov ecx, esi
// 0085594b  e8708f0700           call 0x8ce8c0
// 00855950  5f                   pop edi
// 00855951  5e                   pop esi
// 00855952  5d                   pop ebp
// 00855953  5b                   pop ebx
// 00855954  83c428               add esp, 0x28
// 00855957  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
