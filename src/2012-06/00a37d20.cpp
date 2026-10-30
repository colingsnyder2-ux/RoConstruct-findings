// roc 2012-06 00a37d20  unit: CXTPDockingPaneWindowSelect  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a37d20
//
// 00a37d20  56                   push esi
// 00a37d21  57                   push edi
// 00a37d22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a37d26  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00a37d2c  8bf1                 mov esi, ecx
// 00a37d2e  85c0                 test eax, eax
// 00a37d30  0f84a9000000         je 0xa37ddf
// 00a37d36  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a37d39  50                   push eax
// 00a37d3a  e891fbffff           call 0xa378d0
// 00a37d3f  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a37d44  7464                 je 0xa37daa
// 00a37d46  85c0                 test eax, eax
// 00a37d48  0f8591000000         jne 0xa37ddf
// 00a37d4e  394604               cmp dword ptr [esi + 4], eax
// 00a37d51  7522                 jne 0xa37d75
// 00a37d53  53                   push ebx
// 00a37d54  e879a6f4ff           call 0x9823d2
// 00a37d59  8b5808               mov ebx, dword ptr [eax + 8]
// 00a37d5c  ff15a021b200         call dword ptr [0xb221a0]
// 00a37d62  50                   push eax
// 00a37d63  53                   push ebx
// 00a37d64  68a079a300           push 0xa379a0
// 00a37d69  6a02                 push 2
// 00a37d6b  ff15f43cb200         call dword ptr [0xb23cf4]
// 00a37d71  894604               mov dword ptr [esi + 4], eax
// 00a37d74  5b                   pop ebx
// 00a37d75  e858a6f4ff           call 0x9823d2
// 00a37d7a  894624               mov dword ptr [esi + 0x24], eax
// 00a37d7d  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00a37d83  85c0                 test eax, eax
// 00a37d85  7510                 jne 0xa37d97
// 00a37d87  50                   push eax
// 00a37d88  8d4e08               lea ecx, [esi + 8]
// 00a37d8b  e8c03cf6ff           call 0x99ba50
// 00a37d90  8938                 mov dword ptr [eax], edi
// 00a37d92  5f                   pop edi
// 00a37d93  5e                   pop esi
// 00a37d94  c20800               ret 8
// 00a37d97  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a37d9a  50                   push eax
// 00a37d9b  8d4e08               lea ecx, [esi + 8]
// 00a37d9e  e8ad3cf6ff           call 0x99ba50
// 00a37da3  8938                 mov dword ptr [eax], edi
// 00a37da5  5f                   pop edi
// 00a37da6  5e                   pop esi
// 00a37da7  c20800               ret 8
// 00a37daa  85c0                 test eax, eax
// 00a37dac  7416                 je 0xa37dc4
// 00a37dae  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00a37db4  85c0                 test eax, eax
// 00a37db6  7403                 je 0xa37dbb
// 00a37db8  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a37dbb  50                   push eax
// 00a37dbc  8d4e08               lea ecx, [esi + 8]
// 00a37dbf  e89c52feff           call 0xa1d060
// 00a37dc4  8b4604               mov eax, dword ptr [esi + 4]
// 00a37dc7  85c0                 test eax, eax
// 00a37dc9  7414                 je 0xa37ddf
// 00a37dcb  837e1400             cmp dword ptr [esi + 0x14], 0
// 00a37dcf  750e                 jne 0xa37ddf
// 00a37dd1  50                   push eax
// 00a37dd2  ff15f03cb200         call dword ptr [0xb23cf0]
// 00a37dd8  c7460400000000       mov dword ptr [esi + 4], 0
// 00a37ddf  5f                   pop edi
// 00a37de0  5e                   pop esi
// 00a37de1  c20800               ret 8
// copied from an identical function in another client (function ?SetupKeyboardHook@CXTPDockingPaneKeyboardHook@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp