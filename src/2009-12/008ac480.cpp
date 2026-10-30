// roc 2009-12 008ac480  unit: CXTPDockingPaneWindowSelect  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac480
//
// 008ac480  83ec20               sub esp, 0x20
// 008ac483  56                   push esi
// 008ac484  8bf1                 mov esi, ecx
// 008ac486  57                   push edi
// 008ac487  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008ac48b  8d8640010000         lea eax, [esi + 0x140]
// 008ac491  50                   push eax
// 008ac492  57                   push edi
// 008ac493  8d4c2420             lea ecx, [esp + 0x20]
// 008ac497  e8c4f1f9ff           call 0x84b660
// 008ac49c  8b5708               mov edx, dword ptr [edi + 8]
// 008ac49f  8d4c2408             lea ecx, [esp + 8]
// 008ac4a3  51                   push ecx
// 008ac4a4  6a01                 push 1
// 008ac4a6  6868619a00           push 0x9a6168
// 008ac4ab  52                   push edx
// 008ac4ac  ff156cb19800         call dword ptr [0x98b16c]
// 008ac4b2  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008ac4b8  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 008ac4be  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 008ac4c4  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 008ac4ca  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 008ac4d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ac4d4  83c004               add eax, 4
// 008ac4d7  83c104               add ecx, 4
// 008ac4da  3bc1                 cmp eax, ecx
// 008ac4dc  89542410             mov dword ptr [esp + 0x10], edx
// 008ac4e0  8bf0                 mov esi, eax
// 008ac4e2  7f02                 jg 0x8ac4e6
// 008ac4e4  8bf1                 mov esi, ecx
// 008ac4e6  8d4c2418             lea ecx, [esp + 0x18]
// 008ac4ea  e8f1f1f9ff           call 0x84b6e0
// 008ac4ef  5f                   pop edi
// 008ac4f0  8bc6                 mov eax, esi
// 008ac4f2  5e                   pop esi
// 008ac4f3  83c420               add esp, 0x20
// 008ac4f6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?CalcItemHeight@CXTPDockingPaneWindowSelect@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
