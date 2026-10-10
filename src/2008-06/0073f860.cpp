// roc 2008-06 0073f860  unit: XTPPaintThemes::CXTPOfficeTheme  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073f860
//
// 0073f860  83ec14               sub esp, 0x14
// 0073f863  53                   push ebx
// 0073f864  55                   push ebp
// 0073f865  56                   push esi
// 0073f866  8b742428             mov esi, dword ptr [esp + 0x28]
// 0073f86a  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0073f870  8b16                 mov edx, dword ptr [esi]
// 0073f872  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 0073f878  8b9ec8000000         mov ebx, dword ptr [esi + 0xc8]
// 0073f87e  57                   push edi
// 0073f87f  8bf9                 mov edi, ecx
// 0073f881  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0073f887  89442414             mov dword ptr [esp + 0x14], eax
// 0073f88b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0073f88e  894c2420             mov dword ptr [esp + 0x20], ecx
// 0073f892  8bce                 mov ecx, esi
// 0073f894  ffd0                 call eax
// 0073f896  8b16                 mov edx, dword ptr [esi]
// 0073f898  8944242c             mov dword ptr [esp + 0x2c], eax
// 0073f89c  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0073f8a2  8bce                 mov ecx, esi
// 0073f8a4  ffd0                 call eax
// 0073f8a6  89442410             mov dword ptr [esp + 0x10], eax
// 0073f8aa  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0073f8b0  83f8ff               cmp eax, -1
// 0073f8b3  750f                 jne 0x73f8c4
// 0073f8b5  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0073f8bb  85c9                 test ecx, ecx
// 0073f8bd  7405                 je 0x73f8c4
// 0073f8bf  e8fcbef6ff           call 0x6ab7c0
// 0073f8c4  837c241000           cmp dword ptr [esp + 0x10], 0
// 0073f8c9  7441                 je 0x73f90c
// 0073f8cb  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0073f8d0  743a                 je 0x73f90c
// 0073f8d2  85c0                 test eax, eax
// 0073f8d4  743a                 je 0x73f910
// 0073f8d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073f8da  6a21                 push 0x21
// 0073f8dc  6a20                 push 0x20
// 0073f8de  83ec10               sub esp, 0x10
// 0073f8e1  8bc4                 mov eax, esp
// 0073f8e3  8bcb                 mov ecx, ebx
// 0073f8e5  2b8fcc000000         sub ecx, dword ptr [edi + 0xcc]
// 0073f8eb  52                   push edx
// 0073f8ec  8908                 mov dword ptr [eax], ecx
// 0073f8ee  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073f8f2  896804               mov dword ptr [eax + 4], ebp
// 0073f8f5  895808               mov dword ptr [eax + 8], ebx
// 0073f8f8  89480c               mov dword ptr [eax + 0xc], ecx
// 0073f8fb  8bcf                 mov ecx, edi
// 0073f8fd  e8cef7f6ff           call 0x6af0d0
// 0073f902  5f                   pop edi
// 0073f903  5e                   pop esi
// 0073f904  5d                   pop ebp
// 0073f905  5b                   pop ebx
// 0073f906  83c414               add esp, 0x14
// 0073f909  c20800               ret 8
// 0073f90c  85c0                 test eax, eax
// 0073f90e  750c                 jne 0x73f91c
// 0073f910  8b07                 mov eax, dword ptr [edi]
// 0073f912  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0073f915  56                   push esi
// 0073f916  8bcf                 mov ecx, edi
// 0073f918  ffd2                 call edx
// 0073f91a  eb14                 jmp 0x73f930
// 0073f91c  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0073f921  8bcf                 mov ecx, edi
// 0073f923  7404                 je 0x73f929
// 0073f925  6a20                 push 0x20
// 0073f927  eb02                 jmp 0x73f92b
// 0073f929  6a10                 push 0x10
// 0073f92b  e840e7f6ff           call 0x6ae070
// 0073f930  2b9fcc000000         sub ebx, dword ptr [edi + 0xcc]
// 0073f936  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073f93a  50                   push eax
// 0073f93b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073f93f  48                   dec eax
// 0073f940  50                   push eax
// 0073f941  45                   inc ebp
// 0073f942  55                   push ebp
// 0073f943  53                   push ebx
// 0073f944  51                   push ecx
// 0073f945  8bcf                 mov ecx, edi
// 0073f947  e884e9f6ff           call 0x6ae2d0
// 0073f94c  5f                   pop edi
// 0073f94d  5e                   pop esi
// 0073f94e  5d                   pop ebp
// 0073f94f  5b                   pop ebx
// 0073f950  83c414               add esp, 0x14
// 0073f953  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawSplitButtonPopup@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp
