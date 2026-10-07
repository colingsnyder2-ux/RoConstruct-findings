// roc 2008-06 007590b0  unit: CXTPDockingPaneWindowSelect  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007590b0
//
// 007590b0  83ec20               sub esp, 0x20
// 007590b3  56                   push esi
// 007590b4  8bf1                 mov esi, ecx
// 007590b6  57                   push edi
// 007590b7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007590bb  8d8640010000         lea eax, [esi + 0x140]
// 007590c1  50                   push eax
// 007590c2  57                   push edi
// 007590c3  8d4c2420             lea ecx, [esp + 0x20]
// 007590c7  e8f4edf9ff           call 0x6f7ec0
// 007590cc  8b5708               mov edx, dword ptr [edi + 8]
// 007590cf  8d4c2408             lea ecx, [esp + 8]
// 007590d3  51                   push ecx
// 007590d4  6a01                 push 1
// 007590d6  68582e8100           push 0x812e58
// 007590db  52                   push edx
// 007590dc  ff1540218000         call dword ptr [0x802140]
// 007590e2  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 007590e8  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 007590ee  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 007590f4  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 007590fa  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00759100  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00759104  83c004               add eax, 4
// 00759107  83c104               add ecx, 4
// 0075910a  3bc1                 cmp eax, ecx
// 0075910c  89542410             mov dword ptr [esp + 0x10], edx
// 00759110  8bf0                 mov esi, eax
// 00759112  7f02                 jg 0x759116
// 00759114  8bf1                 mov esi, ecx
// 00759116  8d4c2418             lea ecx, [esp + 0x18]
// 0075911a  e821eef9ff           call 0x6f7f40
// 0075911f  5f                   pop edi
// 00759120  8bc6                 mov eax, esi
// 00759122  5e                   pop esi
// 00759123  83c420               add esp, 0x20
// 00759126  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?CalcItemHeight@CXTPDockingPaneWindowSelect@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
