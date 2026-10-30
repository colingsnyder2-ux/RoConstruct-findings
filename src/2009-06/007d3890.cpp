// roc 2009-06 007d3890  unit: CXTPDockingPaneWindowSelect  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3890
//
// 007d3890  56                   push esi
// 007d3891  57                   push edi
// 007d3892  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007d3896  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 007d389c  8bf1                 mov esi, ecx
// 007d389e  85c0                 test eax, eax
// 007d38a0  0f84a9000000         je 0x7d394f
// 007d38a6  8b4020               mov eax, dword ptr [eax + 0x20]
// 007d38a9  50                   push eax
// 007d38aa  e8e1faffff           call 0x7d3390
// 007d38af  837c241000           cmp dword ptr [esp + 0x10], 0
// 007d38b4  7464                 je 0x7d391a
// 007d38b6  85c0                 test eax, eax
// 007d38b8  0f8591000000         jne 0x7d394f
// 007d38be  394604               cmp dword ptr [esi + 4], eax
// 007d38c1  7522                 jne 0x7d38e5
// 007d38c3  53                   push ebx
// 007d38c4  e82d54f4ff           call 0x718cf6
// 007d38c9  8b5808               mov ebx, dword ptr [eax + 8]
// 007d38cc  ff15ece18900         call dword ptr [0x89e1ec]
// 007d38d2  50                   push eax
// 007d38d3  53                   push ebx
// 007d38d4  6860347d00           push 0x7d3460
// 007d38d9  6a02                 push 2
// 007d38db  ff15c4ee8900         call dword ptr [0x89eec4]
// 007d38e1  894604               mov dword ptr [esi + 4], eax
// 007d38e4  5b                   pop ebx
// 007d38e5  e80c54f4ff           call 0x718cf6
// 007d38ea  894624               mov dword ptr [esi + 0x24], eax
// 007d38ed  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 007d38f3  85c0                 test eax, eax
// 007d38f5  7510                 jne 0x7d3907
// 007d38f7  50                   push eax
// 007d38f8  8d4e08               lea ecx, [esi + 8]
// 007d38fb  e8202bf6ff           call 0x736420
// 007d3900  8938                 mov dword ptr [eax], edi
// 007d3902  5f                   pop edi
// 007d3903  5e                   pop esi
// 007d3904  c20800               ret 8
// 007d3907  8b4020               mov eax, dword ptr [eax + 0x20]
// 007d390a  50                   push eax
// 007d390b  8d4e08               lea ecx, [esi + 8]
// 007d390e  e80d2bf6ff           call 0x736420
// 007d3913  8938                 mov dword ptr [eax], edi
// 007d3915  5f                   pop edi
// 007d3916  5e                   pop esi
// 007d3917  c20800               ret 8
// 007d391a  85c0                 test eax, eax
// 007d391c  7416                 je 0x7d3934
// 007d391e  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 007d3924  85c0                 test eax, eax
// 007d3926  7403                 je 0x7d392b
// 007d3928  8b4020               mov eax, dword ptr [eax + 0x20]
// 007d392b  50                   push eax
// 007d392c  8d4e08               lea ecx, [esi + 8]
// 007d392f  e83ce3ffff           call 0x7d1c70
// 007d3934  8b4604               mov eax, dword ptr [esi + 4]
// 007d3937  85c0                 test eax, eax
// 007d3939  7414                 je 0x7d394f
// 007d393b  837e1400             cmp dword ptr [esi + 0x14], 0
// 007d393f  750e                 jne 0x7d394f
// 007d3941  50                   push eax
// 007d3942  ff15c0ee8900         call dword ptr [0x89eec0]
// 007d3948  c7460400000000       mov dword ptr [esi + 4], 0
// 007d394f  5f                   pop edi
// 007d3950  5e                   pop esi
// 007d3951  c20800               ret 8
// copied from an identical function in another client (function ?SetupKeyboardHook@CXTPDockingPaneKeyboardHook@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp