// roc 2011-06 008bf910  unit: CXTPDockingPaneWindowSelect  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bf910
//
// 008bf910  56                   push esi
// 008bf911  57                   push edi
// 008bf912  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008bf916  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008bf91c  8bf1                 mov esi, ecx
// 008bf91e  85c0                 test eax, eax
// 008bf920  0f84a9000000         je 0x8bf9cf
// 008bf926  8b4020               mov eax, dword ptr [eax + 0x20]
// 008bf929  50                   push eax
// 008bf92a  e821fbffff           call 0x8bf450
// 008bf92f  837c241000           cmp dword ptr [esp + 0x10], 0
// 008bf934  7464                 je 0x8bf99a
// 008bf936  85c0                 test eax, eax
// 008bf938  0f8591000000         jne 0x8bf9cf
// 008bf93e  394604               cmp dword ptr [esi + 4], eax
// 008bf941  7522                 jne 0x8bf965
// 008bf943  53                   push ebx
// 008bf944  e8d3a9f4ff           call 0x80a31c
// 008bf949  8b5808               mov ebx, dword ptr [eax + 8]
// 008bf94c  ff157003a400         call dword ptr [0xa40370]
// 008bf952  50                   push eax
// 008bf953  53                   push ebx
// 008bf954  6890f58b00           push 0x8bf590
// 008bf959  6a02                 push 2
// 008bf95b  ff15001ba400         call dword ptr [0xa41b00]
// 008bf961  894604               mov dword ptr [esi + 4], eax
// 008bf964  5b                   pop ebx
// 008bf965  e8b2a9f4ff           call 0x80a31c
// 008bf96a  894624               mov dword ptr [esi + 0x24], eax
// 008bf96d  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008bf973  85c0                 test eax, eax
// 008bf975  7510                 jne 0x8bf987
// 008bf977  50                   push eax
// 008bf978  8d4e08               lea ecx, [esi + 8]
// 008bf97b  e800fbffff           call 0x8bf480
// 008bf980  8938                 mov dword ptr [eax], edi
// 008bf982  5f                   pop edi
// 008bf983  5e                   pop esi
// 008bf984  c20800               ret 8
// 008bf987  8b4020               mov eax, dword ptr [eax + 0x20]
// 008bf98a  50                   push eax
// 008bf98b  8d4e08               lea ecx, [esi + 8]
// 008bf98e  e8edfaffff           call 0x8bf480
// 008bf993  8938                 mov dword ptr [eax], edi
// 008bf995  5f                   pop edi
// 008bf996  5e                   pop esi
// 008bf997  c20800               ret 8
// 008bf99a  85c0                 test eax, eax
// 008bf99c  7416                 je 0x8bf9b4
// 008bf99e  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 008bf9a4  85c0                 test eax, eax
// 008bf9a6  7403                 je 0x8bf9ab
// 008bf9a8  8b4020               mov eax, dword ptr [eax + 0x20]
// 008bf9ab  50                   push eax
// 008bf9ac  8d4e08               lea ecx, [esi + 8]
// 008bf9af  e80c1ff6ff           call 0x8218c0
// 008bf9b4  8b4604               mov eax, dword ptr [esi + 4]
// 008bf9b7  85c0                 test eax, eax
// 008bf9b9  7414                 je 0x8bf9cf
// 008bf9bb  837e1400             cmp dword ptr [esi + 0x14], 0
// 008bf9bf  750e                 jne 0x8bf9cf
// 008bf9c1  50                   push eax
// 008bf9c2  ff15041ba400         call dword ptr [0xa41b04]
// 008bf9c8  c7460400000000       mov dword ptr [esi + 4], 0
// 008bf9cf  5f                   pop edi
// 008bf9d0  5e                   pop esi
// 008bf9d1  c20800               ret 8
// copied from an identical function in another client (function ?SetupKeyboardHook@CXTPDockingPaneKeyboardHook@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneKeyboardHook.cpp