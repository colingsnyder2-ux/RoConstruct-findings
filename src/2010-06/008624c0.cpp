// roc 2010-06 008624c0  unit: CXTPDockingPaneWindowSelect  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008624c0
//
// 008624c0  56                   push esi
// 008624c1  57                   push edi
// 008624c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008624c6  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008624cc  8bf1                 mov esi, ecx
// 008624ce  85c0                 test eax, eax
// 008624d0  0f84a9000000         je 0x86257f
// 008624d6  8b4020               mov eax, dword ptr [eax + 0x20]
// 008624d9  50                   push eax
// 008624da  e891fbffff           call 0x862070
// 008624df  837c241000           cmp dword ptr [esp + 0x10], 0
// 008624e4  7464                 je 0x86254a
// 008624e6  85c0                 test eax, eax
// 008624e8  0f8591000000         jne 0x86257f
// 008624ee  394604               cmp dword ptr [esi + 4], eax
// 008624f1  7522                 jne 0x862515
// 008624f3  53                   push ebx
// 008624f4  e86557f4ff           call 0x7a7c5e
// 008624f9  8b5808               mov ebx, dword ptr [eax + 8]
// 008624fc  ff1594a39e00         call dword ptr [0x9ea394]
// 00862502  50                   push eax
// 00862503  53                   push ebx
// 00862504  6840218600           push 0x862140
// 00862509  6a02                 push 2
// 0086250b  ff15a0ba9e00         call dword ptr [0x9ebaa0]
// 00862511  894604               mov dword ptr [esi + 4], eax
// 00862514  5b                   pop ebx
// 00862515  e84457f4ff           call 0x7a7c5e
// 0086251a  894624               mov dword ptr [esi + 0x24], eax
// 0086251d  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00862523  85c0                 test eax, eax
// 00862525  7510                 jne 0x862537
// 00862527  50                   push eax
// 00862528  8d4e08               lea ecx, [esi + 8]
// 0086252b  e850a8f4ff           call 0x7acd80
// 00862530  8938                 mov dword ptr [eax], edi
// 00862532  5f                   pop edi
// 00862533  5e                   pop esi
// 00862534  c20800               ret 8
// 00862537  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086253a  50                   push eax
// 0086253b  8d4e08               lea ecx, [esi + 8]
// 0086253e  e83da8f4ff           call 0x7acd80
// 00862543  8938                 mov dword ptr [eax], edi
// 00862545  5f                   pop edi
// 00862546  5e                   pop esi
// 00862547  c20800               ret 8
// 0086254a  85c0                 test eax, eax
// 0086254c  7416                 je 0x862564
// 0086254e  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00862554  85c0                 test eax, eax
// 00862556  7403                 je 0x86255b
// 00862558  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086255b  50                   push eax
// 0086255c  8d4e08               lea ecx, [esi + 8]
// 0086255f  e80c55feff           call 0x847a70
// 00862564  8b4604               mov eax, dword ptr [esi + 4]
// 00862567  85c0                 test eax, eax
// 00862569  7414                 je 0x86257f
// 0086256b  837e1400             cmp dword ptr [esi + 0x14], 0
// 0086256f  750e                 jne 0x86257f
// 00862571  50                   push eax
// 00862572  ff159cba9e00         call dword ptr [0x9eba9c]
// 00862578  c7460400000000       mov dword ptr [esi + 4], 0
// 0086257f  5f                   pop edi
// 00862580  5e                   pop esi
// 00862581  c20800               ret 8
// copied from an identical function in another client (function ?SetupKeyboardHook@CXTPDockingPaneKeyboardHook@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp