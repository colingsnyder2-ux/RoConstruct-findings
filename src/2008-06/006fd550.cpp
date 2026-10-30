// from server: 100% by auto
// roc 2008-06 006fd550  unit: CXTCaptionButtonTheme  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fd550
//
// 006fd550  55                   push ebp
// 006fd551  8bec                 mov ebp, esp
// 006fd553  6aff                 push -1
// 006fd555  68d03c7e00           push 0x7e3cd0
// 006fd55a  64a100000000         mov eax, dword ptr fs:[0]
// 006fd560  50                   push eax
// 006fd561  83ec14               sub esp, 0x14
// 006fd564  53                   push ebx
// 006fd565  56                   push esi
// 006fd566  57                   push edi
// 006fd567  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006fd56c  33c5                 xor eax, ebp
// 006fd56e  50                   push eax
// 006fd56f  8d45f4               lea eax, [ebp - 0xc]
// 006fd572  64a300000000         mov dword ptr fs:[0], eax
// 006fd578  8965f0               mov dword ptr [ebp - 0x10], esp
// 006fd57b  8b7508               mov esi, dword ptr [ebp + 8]
// 006fd57e  33db                 xor ebx, ebx
// 006fd580  3bf3                 cmp esi, ebx
// 006fd582  7514                 jne 0x6fd598
// 006fd584  33c0                 xor eax, eax
// 006fd586  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006fd589  64890d00000000       mov dword ptr fs:[0], ecx
// 006fd590  59                   pop ecx
// 006fd591  5f                   pop edi
// 006fd592  5e                   pop esi
// 006fd593  5b                   pop ebx
// 006fd594  8be5                 mov esp, ebp
// 006fd596  5d                   pop ebp
// 006fd597  c3                   ret 
// 006fd598  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006fd59b  8b06                 mov eax, dword ptr [esi]
// 006fd59d  8b5068               mov edx, dword ptr [eax + 0x68]
// 006fd5a0  51                   push ecx
// 006fd5a1  8bce                 mov ecx, esi
// 006fd5a3  ffd2                 call edx
// 006fd5a5  8bf8                 mov edi, eax
// 006fd5a7  897dec               mov dword ptr [ebp - 0x14], edi
// 006fd5aa  3bfb                 cmp edi, ebx
// 006fd5ac  74d6                 je 0x6fd584
// 006fd5ae  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006fd5b1  8b01                 mov eax, dword ptr [ecx]
// 006fd5b3  8b5008               mov edx, dword ptr [eax + 8]
// 006fd5b6  57                   push edi
// 006fd5b7  895de8               mov dword ptr [ebp - 0x18], ebx
// 006fd5ba  895dfc               mov dword ptr [ebp - 4], ebx
// 006fd5bd  ffd2                 call edx
// 006fd5bf  c745e801000000       mov dword ptr [ebp - 0x18], 1
// 006fd5c6  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006fd5cd  eb30                 jmp 0x6fd5ff
// 006fd5cf  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 006fd5d2  e87933faff           call 0x6a0950
// 006fd5d7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006fd5de  b8f9d56f00           mov eax, 0x6fd5f9
// 006fd5e3  c3                   ret 
// 006fd5e4  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 006fd5e7  e86433faff           call 0x6a0950
// 006fd5ec  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006fd5f3  b8f9d56f00           mov eax, 0x6fd5f9
// 006fd5f8  c3                   ret 
// 006fd5f9  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 006fd5fc  8b7508               mov esi, dword ptr [ebp + 8]
// 006fd5ff  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 006fd602  8b06                 mov eax, dword ptr [esi]
// 006fd604  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006fd607  57                   push edi
// 006fd608  51                   push ecx
// 006fd609  8bce                 mov ecx, esi
// 006fd60b  ffd2                 call edx
// 006fd60d  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 006fd610  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006fd613  64890d00000000       mov dword ptr fs:[0], ecx
// 006fd61a  59                   pop ecx
// 006fd61b  5f                   pop edi
// 006fd61c  5e                   pop esi
// 006fd61d  5b                   pop ebx
// 006fd61e  8be5                 mov esp, ebp
// 006fd620  5d                   pop ebp
// 006fd621  c3                   ret 

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
