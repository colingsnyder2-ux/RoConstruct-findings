// roc 2012-06 009dd0c0  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dd0c0
//
// 009dd0c0  83ec28               sub esp, 0x28
// 009dd0c3  53                   push ebx
// 009dd0c4  55                   push ebp
// 009dd0c5  56                   push esi
// 009dd0c6  8bf1                 mov esi, ecx
// 009dd0c8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009dd0cb  8b01                 mov eax, dword ptr [ecx]
// 009dd0cd  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009dd0d0  57                   push edi
// 009dd0d1  ffd2                 call edx
// 009dd0d3  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 009dd0d9  8b01                 mov eax, dword ptr [ecx]
// 009dd0db  8b4010               mov eax, dword ptr [eax + 0x10]
// 009dd0de  8d542428             lea edx, [esp + 0x28]
// 009dd0e2  52                   push edx
// 009dd0e3  ffd0                 call eax
// 009dd0e5  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 009dd0e9  8b5704               mov edx, dword ptr [edi + 4]
// 009dd0ec  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 009dd0ef  8b0f                 mov ecx, dword ptr [edi]
// 009dd0f1  8b470c               mov eax, dword ptr [edi + 0xc]
// 009dd0f4  8b6f08               mov ebp, dword ptr [edi + 8]
// 009dd0f7  8954241c             mov dword ptr [esp + 0x1c], edx
// 009dd0fb  8b13                 mov edx, dword ptr [ebx]
// 009dd0fd  894c2418             mov dword ptr [esp + 0x18], ecx
// 009dd101  89442424             mov dword ptr [esp + 0x24], eax
// 009dd105  8b4248               mov eax, dword ptr [edx + 0x48]
// 009dd108  8bcb                 mov ecx, ebx
// 009dd10a  ffd0                 call eax
// 009dd10c  83f802               cmp eax, 2
// 009dd10f  740d                 je 0x9dd11e
// 009dd111  8b13                 mov edx, dword ptr [ebx]
// 009dd113  8b4248               mov eax, dword ptr [edx + 0x48]
// 009dd116  8bcb                 mov ecx, ebx
// 009dd118  ffd0                 call eax
// 009dd11a  85c0                 test eax, eax
// 009dd11c  7508                 jne 0x9dd126
// 009dd11e  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 009dd122  8bdd                 mov ebx, ebp
// 009dd124  eb08                 jmp 0x9dd12e
// 009dd126  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 009dd12a  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 009dd12e  8b16                 mov edx, dword ptr [esi]
// 009dd130  8b5208               mov edx, dword ptr [edx + 8]
// 009dd133  8d442410             lea eax, [esp + 0x10]
// 009dd137  50                   push eax
// 009dd138  8bce                 mov ecx, esi
// 009dd13a  ffd2                 call edx
// 009dd13c  2b18                 sub ebx, dword ptr [eax]
// 009dd13e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 009dd141  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 009dd145  2b5c2428             sub ebx, dword ptr [esp + 0x28]
// 009dd149  e8e2f60600           call 0xa4c830
// 009dd14e  33c9                 xor ecx, ecx
// 009dd150  3bc3                 cmp eax, ebx
// 009dd152  0f9fc1               setg cl
// 009dd155  57                   push edi
// 009dd156  894e30               mov dword ptr [esi + 0x30], ecx
// 009dd159  8bce                 mov ecx, esi
// 009dd15b  e880eb0600           call 0xa4bce0
// 009dd160  5f                   pop edi
// 009dd161  5e                   pop esi
// 009dd162  5d                   pop ebp
// 009dd163  5b                   pop ebx
// 009dd164  83c428               add esp, 0x28
// 009dd167  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
