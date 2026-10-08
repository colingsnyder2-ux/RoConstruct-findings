// roc 2011-06 008bd8d0  unit: CXTPDockingPaneWindowSelect  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bd8d0
//
// 008bd8d0  83ec20               sub esp, 0x20
// 008bd8d3  56                   push esi
// 008bd8d4  8bf1                 mov esi, ecx
// 008bd8d6  57                   push edi
// 008bd8d7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008bd8db  8d8640010000         lea eax, [esi + 0x140]
// 008bd8e1  50                   push eax
// 008bd8e2  57                   push edi
// 008bd8e3  8d4c2420             lea ecx, [esp + 0x20]
// 008bd8e7  e834f8f9ff           call 0x85d120
// 008bd8ec  8b5708               mov edx, dword ptr [edi + 8]
// 008bd8ef  8d4c2408             lea ecx, [esp + 8]
// 008bd8f3  51                   push ecx
// 008bd8f4  6a01                 push 1
// 008bd8f6  686056a600           push 0xa65660
// 008bd8fb  52                   push edx
// 008bd8fc  ff153801a400         call dword ptr [0xa40138]
// 008bd902  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008bd908  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 008bd90e  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 008bd914  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 008bd91a  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008bd920  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bd924  83c004               add eax, 4
// 008bd927  83c104               add ecx, 4
// 008bd92a  3bc1                 cmp eax, ecx
// 008bd92c  89542410             mov dword ptr [esp + 0x10], edx
// 008bd930  8bf0                 mov esi, eax
// 008bd932  7f02                 jg 0x8bd936
// 008bd934  8bf1                 mov esi, ecx
// 008bd936  8d4c2418             lea ecx, [esp + 0x18]
// 008bd93a  e861f8f9ff           call 0x85d1a0
// 008bd93f  5f                   pop edi
// 008bd940  8bc6                 mov eax, esi
// 008bd942  5e                   pop esi
// 008bd943  83c420               add esp, 0x20
// 008bd946  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?CalcItemHeight@CXTPDockingPaneWindowSelect@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
