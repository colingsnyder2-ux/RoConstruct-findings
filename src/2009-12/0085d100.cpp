// roc 2009-12 0085d100  unit: CXTPDockingPane  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d100
//
// 0085d100  6aff                 push -1
// 0085d102  686ae59500           push 0x95e56a
// 0085d107  64a100000000         mov eax, dword ptr fs:[0]
// 0085d10d  50                   push eax
// 0085d10e  83ec24               sub esp, 0x24
// 0085d111  53                   push ebx
// 0085d112  55                   push ebp
// 0085d113  56                   push esi
// 0085d114  57                   push edi
// 0085d115  a10052b600           mov eax, dword ptr [0xb65200]
// 0085d11a  33c4                 xor eax, esp
// 0085d11c  50                   push eax
// 0085d11d  8d442438             lea eax, [esp + 0x38]
// 0085d121  64a300000000         mov dword ptr fs:[0], eax
// 0085d127  8be9                 mov ebp, ecx
// 0085d129  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0085d12d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0085d131  33ff                 xor edi, edi
// 0085d133  3bdf                 cmp ebx, edi
// 0085d135  750b                 jne 0x85d142
// 0085d137  3bcf                 cmp ecx, edi
// 0085d139  7507                 jne 0x85d142
// 0085d13b  33c0                 xor eax, eax
// 0085d13d  e9e6000000           jmp 0x85d228
// 0085d142  33c0                 xor eax, eax
// 0085d144  89442424             mov dword ptr [esp + 0x24], eax
// 0085d148  89442428             mov dword ptr [esp + 0x28], eax
// 0085d14c  8944242c             mov dword ptr [esp + 0x2c], eax
// 0085d150  89442430             mov dword ptr [esp + 0x30], eax
// 0085d154  89442434             mov dword ptr [esp + 0x34], eax
// 0085d158  3bdf                 cmp ebx, edi
// 0085d15a  7527                 jne 0x85d183
// 0085d15c  8b442450             mov eax, dword ptr [esp + 0x50]
// 0085d160  897c2430             mov dword ptr [esp + 0x30], edi
// 0085d164  897c2434             mov dword ptr [esp + 0x34], edi
// 0085d168  897c242c             mov dword ptr [esp + 0x2c], edi
// 0085d16c  89442428             mov dword ptr [esp + 0x28], eax
// 0085d170  894c2424             mov dword ptr [esp + 0x24], ecx
// 0085d174  3bc7                 cmp eax, edi
// 0085d176  7407                 je 0x85d17f
// 0085d178  8b4028               mov eax, dword ptr [eax + 0x28]
// 0085d17b  8944242c             mov dword ptr [esp + 0x2c], eax
// 0085d17f  8d5c2424             lea ebx, [esp + 0x24]
// 0085d183  68e8000000           push 0xe8
// 0085d188  e8d366f9ff           call 0x7f3860
// 0085d18d  83c404               add esp, 4
// 0085d190  89442454             mov dword ptr [esp + 0x54], eax
// 0085d194  897c2440             mov dword ptr [esp + 0x40], edi
// 0085d198  3bc7                 cmp eax, edi
// 0085d19a  740b                 je 0x85d1a7
// 0085d19c  8bc8                 mov ecx, eax
// 0085d19e  e8636cf9ff           call 0x7f3e06
// 0085d1a3  8bf0                 mov esi, eax
// 0085d1a5  eb02                 jmp 0x85d1a9
// 0085d1a7  33f6                 xor esi, esi
// 0085d1a9  8b442448             mov eax, dword ptr [esp + 0x48]
// 0085d1ad  8b16                 mov edx, dword ptr [esi]
// 0085d1af  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 0085d1b5  53                   push ebx
// 0085d1b6  57                   push edi
// 0085d1b7  57                   push edi
// 0085d1b8  50                   push eax
// 0085d1b9  8d4c2424             lea ecx, [esp + 0x24]
// 0085d1bd  51                   push ecx
// 0085d1be  6800000046           push 0x46000000
// 0085d1c3  57                   push edi
// 0085d1c4  57                   push edi
// 0085d1c5  8bce                 mov ecx, esi
// 0085d1c7  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0085d1cf  897c2434             mov dword ptr [esp + 0x34], edi
// 0085d1d3  897c2438             mov dword ptr [esp + 0x38], edi
// 0085d1d7  897c243c             mov dword ptr [esp + 0x3c], edi
// 0085d1db  897c2440             mov dword ptr [esp + 0x40], edi
// 0085d1df  ffd2                 call edx
// 0085d1e1  57                   push edi
// 0085d1e2  57                   push edi
// 0085d1e3  6800020000           push 0x200
// 0085d1e8  8bce                 mov ecx, esi
// 0085d1ea  e8116cf9ff           call 0x7f3e00
// 0085d1ef  56                   push esi
// 0085d1f0  8bcd                 mov ecx, ebp
// 0085d1f2  e879feffff           call 0x85d070
// 0085d1f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085d1fa  6a01                 push 1
// 0085d1fc  6800e90000           push 0xe900
// 0085d201  50                   push eax
// 0085d202  e8e96cf9ff           call 0x7f3ef0
// 0085d207  8bf8                 mov edi, eax
// 0085d209  57                   push edi
// 0085d20a  e84170f9ff           call 0x7f4250
// 0085d20f  50                   push eax
// 0085d210  e8296af9ff           call 0x7f3c3e
// 0085d215  83c408               add esp, 8
// 0085d218  85c0                 test eax, eax
// 0085d21a  740a                 je 0x85d226
// 0085d21c  6a01                 push 1
// 0085d21e  57                   push edi
// 0085d21f  8bce                 mov ecx, esi
// 0085d221  e86274f9ff           call 0x7f4688
// 0085d226  8bc7                 mov eax, edi
// 0085d228  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0085d22c  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d233  59                   pop ecx
// 0085d234  5f                   pop edi
// 0085d235  5e                   pop esi
// 0085d236  5d                   pop ebp
// 0085d237  5b                   pop ebx
// 0085d238  83c430               add esp, 0x30
// 0085d23b  c21000               ret 0x10
// copied from an identical function in another client (function ?AttachView@CXTPDockingPane@@QAEPAVCWnd@@PAV2@PAUCRuntimeClass@@PAVCDocument@@PAUCCreateContext@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp