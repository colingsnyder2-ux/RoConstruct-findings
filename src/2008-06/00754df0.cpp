// roc 2008-06 00754df0  unit: CXTPDockingPaneBase  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754df0
//
// 00754df0  83ec14               sub esp, 0x14
// 00754df3  53                   push ebx
// 00754df4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00754df8  55                   push ebp
// 00754df9  56                   push esi
// 00754dfa  8bf1                 mov esi, ecx
// 00754dfc  57                   push edi
// 00754dfd  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00754e01  8d6e60               lea ebp, [esi + 0x60]
// 00754e04  c744241004000000     mov dword ptr [esp + 0x10], 4
// 00754e0c  8d642400             lea esp, [esp]
// 00754e10  8b4d00               mov ecx, dword ptr [ebp]
// 00754e13  85c9                 test ecx, ecx
// 00754e15  7411                 je 0x754e28
// 00754e17  8b01                 mov eax, dword ptr [ecx]
// 00754e19  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 00754e1f  57                   push edi
// 00754e20  8d542430             lea edx, [esp + 0x30]
// 00754e24  52                   push edx
// 00754e25  53                   push ebx
// 00754e26  ffd0                 call eax
// 00754e28  83c504               add ebp, 4
// 00754e2b  836c241001           sub dword ptr [esp + 0x10], 1
// 00754e30  75de                 jne 0x754e10
// 00754e32  833f00               cmp dword ptr [edi], 0
// 00754e35  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00754e3b  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 00754e41  89442414             mov dword ptr [esp + 0x14], eax
// 00754e45  89442418             mov dword ptr [esp + 0x18], eax
// 00754e49  8944241c             mov dword ptr [esp + 0x1c], eax
// 00754e4d  89442420             mov dword ptr [esp + 0x20], eax
// 00754e51  7413                 je 0x754e66
// 00754e53  8d542414             lea edx, [esp + 0x14]
// 00754e57  52                   push edx
// 00754e58  8d442430             lea eax, [esp + 0x30]
// 00754e5c  50                   push eax
// 00754e5d  8bce                 mov ecx, esi
// 00754e5f  e8bcfdffff           call 0x754c20
// 00754e64  eb10                 jmp 0x754e76
// 00754e66  0144242c             add dword ptr [esp + 0x2c], eax
// 00754e6a  01442430             add dword ptr [esp + 0x30], eax
// 00754e6e  29442434             sub dword ptr [esp + 0x34], eax
// 00754e72  29442438             sub dword ptr [esp + 0x38], eax
// 00754e76  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00754e7a  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00754e7d  8b11                 mov edx, dword ptr [ecx]
// 00754e7f  57                   push edi
// 00754e80  83ec10               sub esp, 0x10
// 00754e83  8bc4                 mov eax, esp
// 00754e85  8928                 mov dword ptr [eax], ebp
// 00754e87  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00754e8b  896804               mov dword ptr [eax + 4], ebp
// 00754e8e  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00754e92  896808               mov dword ptr [eax + 8], ebp
// 00754e95  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00754e99  89680c               mov dword ptr [eax + 0xc], ebp
// 00754e9c  8b4224               mov eax, dword ptr [edx + 0x24]
// 00754e9f  53                   push ebx
// 00754ea0  ffd0                 call eax
// 00754ea2  8b7620               mov esi, dword ptr [esi + 0x20]
// 00754ea5  8b5620               mov edx, dword ptr [esi + 0x20]
// 00754ea8  8d4e20               lea ecx, [esi + 0x20]
// 00754eab  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00754eaf  57                   push edi
// 00754eb0  83ec10               sub esp, 0x10
// 00754eb3  8bc4                 mov eax, esp
// 00754eb5  8930                 mov dword ptr [eax], esi
// 00754eb7  8b742444             mov esi, dword ptr [esp + 0x44]
// 00754ebb  897004               mov dword ptr [eax + 4], esi
// 00754ebe  8b742448             mov esi, dword ptr [esp + 0x48]
// 00754ec2  897008               mov dword ptr [eax + 8], esi
// 00754ec5  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00754ec9  89700c               mov dword ptr [eax + 0xc], esi
// 00754ecc  8b4224               mov eax, dword ptr [edx + 0x24]
// 00754ecf  53                   push ebx
// 00754ed0  ffd0                 call eax
// 00754ed2  5f                   pop edi
// 00754ed3  5e                   pop esi
// 00754ed4  5d                   pop ebp
// 00754ed5  5b                   pop ebx
// 00754ed6  83c414               add esp, 0x14
// 00754ed9  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?OnSizeParent@CXTPDockingPaneLayout@@AAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneLayout.cpp
