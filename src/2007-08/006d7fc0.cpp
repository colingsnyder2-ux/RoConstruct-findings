// roc 2007-08 006d7fc0  unit: CXTPDockingPaneBase  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7fc0
//
// 006d7fc0  83ec14               sub esp, 0x14
// 006d7fc3  53                   push ebx
// 006d7fc4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006d7fc8  55                   push ebp
// 006d7fc9  56                   push esi
// 006d7fca  8bf1                 mov esi, ecx
// 006d7fcc  57                   push edi
// 006d7fcd  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006d7fd1  8d6e60               lea ebp, [esi + 0x60]
// 006d7fd4  c744241004000000     mov dword ptr [esp + 0x10], 4
// 006d7fdc  8d642400             lea esp, [esp]
// 006d7fe0  8b4d00               mov ecx, dword ptr [ebp]
// 006d7fe3  85c9                 test ecx, ecx
// 006d7fe5  7411                 je 0x6d7ff8
// 006d7fe7  8b01                 mov eax, dword ptr [ecx]
// 006d7fe9  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 006d7fef  57                   push edi
// 006d7ff0  8d542430             lea edx, [esp + 0x30]
// 006d7ff4  52                   push edx
// 006d7ff5  53                   push ebx
// 006d7ff6  ffd0                 call eax
// 006d7ff8  83c504               add ebp, 4
// 006d7ffb  836c241001           sub dword ptr [esp + 0x10], 1
// 006d8000  75de                 jne 0x6d7fe0
// 006d8002  833f00               cmp dword ptr [edi], 0
// 006d8005  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 006d800b  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 006d8011  89442414             mov dword ptr [esp + 0x14], eax
// 006d8015  89442418             mov dword ptr [esp + 0x18], eax
// 006d8019  8944241c             mov dword ptr [esp + 0x1c], eax
// 006d801d  89442420             mov dword ptr [esp + 0x20], eax
// 006d8021  7413                 je 0x6d8036
// 006d8023  8d542414             lea edx, [esp + 0x14]
// 006d8027  52                   push edx
// 006d8028  8d442430             lea eax, [esp + 0x30]
// 006d802c  50                   push eax
// 006d802d  8bce                 mov ecx, esi
// 006d802f  e8bcfdffff           call 0x6d7df0
// 006d8034  eb10                 jmp 0x6d8046
// 006d8036  0144242c             add dword ptr [esp + 0x2c], eax
// 006d803a  01442430             add dword ptr [esp + 0x30], eax
// 006d803e  29442434             sub dword ptr [esp + 0x34], eax
// 006d8042  29442438             sub dword ptr [esp + 0x38], eax
// 006d8046  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006d804a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d804d  8b11                 mov edx, dword ptr [ecx]
// 006d804f  57                   push edi
// 006d8050  83ec10               sub esp, 0x10
// 006d8053  8bc4                 mov eax, esp
// 006d8055  8928                 mov dword ptr [eax], ebp
// 006d8057  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 006d805b  896804               mov dword ptr [eax + 4], ebp
// 006d805e  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 006d8062  896808               mov dword ptr [eax + 8], ebp
// 006d8065  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 006d8069  89680c               mov dword ptr [eax + 0xc], ebp
// 006d806c  8b4224               mov eax, dword ptr [edx + 0x24]
// 006d806f  53                   push ebx
// 006d8070  ffd0                 call eax
// 006d8072  8b7620               mov esi, dword ptr [esi + 0x20]
// 006d8075  8b5620               mov edx, dword ptr [esi + 0x20]
// 006d8078  8d4e20               lea ecx, [esi + 0x20]
// 006d807b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006d807f  57                   push edi
// 006d8080  83ec10               sub esp, 0x10
// 006d8083  8bc4                 mov eax, esp
// 006d8085  8930                 mov dword ptr [eax], esi
// 006d8087  8b742444             mov esi, dword ptr [esp + 0x44]
// 006d808b  897004               mov dword ptr [eax + 4], esi
// 006d808e  8b742448             mov esi, dword ptr [esp + 0x48]
// 006d8092  897008               mov dword ptr [eax + 8], esi
// 006d8095  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 006d8099  89700c               mov dword ptr [eax + 0xc], esi
// 006d809c  8b4224               mov eax, dword ptr [edx + 0x24]
// 006d809f  53                   push ebx
// 006d80a0  ffd0                 call eax
// 006d80a2  5f                   pop edi
// 006d80a3  5e                   pop esi
// 006d80a4  5d                   pop ebp
// 006d80a5  5b                   pop ebx
// 006d80a6  83c414               add esp, 0x14
// 006d80a9  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?OnSizeParent@CXTPDockingPaneLayout@@AAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
