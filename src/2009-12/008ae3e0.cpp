// roc 2009-12 008ae3e0  unit: CXTPDockingPaneWindowSelect  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae3e0
//
// 008ae3e0  56                   push esi
// 008ae3e1  57                   push edi
// 008ae3e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008ae3e6  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008ae3ec  8bf1                 mov esi, ecx
// 008ae3ee  85c0                 test eax, eax
// 008ae3f0  0f84a9000000         je 0x8ae49f
// 008ae3f6  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ae3f9  50                   push eax
// 008ae3fa  e891fbffff           call 0x8adf90
// 008ae3ff  837c241000           cmp dword ptr [esp + 0x10], 0
// 008ae404  7464                 je 0x8ae46a
// 008ae406  85c0                 test eax, eax
// 008ae408  0f8591000000         jne 0x8ae49f
// 008ae40e  394604               cmp dword ptr [esi + 4], eax
// 008ae411  7522                 jne 0x8ae435
// 008ae413  53                   push ebx
// 008ae414  e80557f4ff           call 0x7f3b1e
// 008ae419  8b5808               mov ebx, dword ptr [eax + 8]
// 008ae41c  ff1524b29800         call dword ptr [0x98b224]
// 008ae422  50                   push eax
// 008ae423  53                   push ebx
// 008ae424  6860e08a00           push 0x8ae060
// 008ae429  6a02                 push 2
// 008ae42b  ff15d0ca9800         call dword ptr [0x98cad0]
// 008ae431  894604               mov dword ptr [esi + 4], eax
// 008ae434  5b                   pop ebx
// 008ae435  e8e456f4ff           call 0x7f3b1e
// 008ae43a  894624               mov dword ptr [esi + 0x24], eax
// 008ae43d  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008ae443  85c0                 test eax, eax
// 008ae445  7510                 jne 0x8ae457
// 008ae447  50                   push eax
// 008ae448  8d4e08               lea ecx, [esi + 8]
// 008ae44b  e8305dfeff           call 0x894180
// 008ae450  8938                 mov dword ptr [eax], edi
// 008ae452  5f                   pop edi
// 008ae453  5e                   pop esi
// 008ae454  c20800               ret 8
// 008ae457  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ae45a  50                   push eax
// 008ae45b  8d4e08               lea ecx, [esi + 8]
// 008ae45e  e81d5dfeff           call 0x894180
// 008ae463  8938                 mov dword ptr [eax], edi
// 008ae465  5f                   pop edi
// 008ae466  5e                   pop esi
// 008ae467  c20800               ret 8
// 008ae46a  85c0                 test eax, eax
// 008ae46c  7416                 je 0x8ae484
// 008ae46e  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008ae474  85c0                 test eax, eax
// 008ae476  7403                 je 0x8ae47b
// 008ae478  8b4020               mov eax, dword ptr [eax + 0x20]
// 008ae47b  50                   push eax
// 008ae47c  8d4e08               lea ecx, [esi + 8]
// 008ae47f  e84ce4ffff           call 0x8ac8d0
// 008ae484  8b4604               mov eax, dword ptr [esi + 4]
// 008ae487  85c0                 test eax, eax
// 008ae489  7414                 je 0x8ae49f
// 008ae48b  837e1400             cmp dword ptr [esi + 0x14], 0
// 008ae48f  750e                 jne 0x8ae49f
// 008ae491  50                   push eax
// 008ae492  ff15ccca9800         call dword ptr [0x98cacc]
// 008ae498  c7460400000000       mov dword ptr [esi + 4], 0
// 008ae49f  5f                   pop edi
// 008ae4a0  5e                   pop esi
// 008ae4a1  c20800               ret 8
// copied from an identical function in another client (function ?SetupKeyboardHook@CXTPDockingPaneKeyboardHook@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp