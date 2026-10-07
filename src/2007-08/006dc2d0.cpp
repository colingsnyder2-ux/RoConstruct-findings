// roc 2007-08 006dc2d0  unit: CXTPDockingPaneWindowSelect  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc2d0
//
// 006dc2d0  83ec20               sub esp, 0x20
// 006dc2d3  56                   push esi
// 006dc2d4  8bf1                 mov esi, ecx
// 006dc2d6  57                   push edi
// 006dc2d7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006dc2db  8d862c010000         lea eax, [esi + 0x12c]
// 006dc2e1  50                   push eax
// 006dc2e2  57                   push edi
// 006dc2e3  8d4c2420             lea ecx, [esp + 0x20]
// 006dc2e7  e86442faff           call 0x680550
// 006dc2ec  8b5708               mov edx, dword ptr [edi + 8]
// 006dc2ef  8d4c2408             lea ecx, [esp + 8]
// 006dc2f3  51                   push ecx
// 006dc2f4  6a01                 push 1
// 006dc2f6  6834707800           push 0x787034
// 006dc2fb  52                   push edx
// 006dc2fc  ff15b8d07700         call dword ptr [0x77d0b8]
// 006dc302  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 006dc308  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 006dc30e  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 006dc314  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 006dc31a  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 006dc320  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dc324  83c004               add eax, 4
// 006dc327  83c104               add ecx, 4
// 006dc32a  3bc1                 cmp eax, ecx
// 006dc32c  89542410             mov dword ptr [esp + 0x10], edx
// 006dc330  8bf0                 mov esi, eax
// 006dc332  7f02                 jg 0x6dc336
// 006dc334  8bf1                 mov esi, ecx
// 006dc336  8d4c2418             lea ecx, [esp + 0x18]
// 006dc33a  e89142faff           call 0x6805d0
// 006dc33f  5f                   pop edi
// 006dc340  8bc6                 mov eax, esi
// 006dc342  5e                   pop esi
// 006dc343  83c420               add esp, 0x20
// 006dc346  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?CalcItemHeight@CXTPDockingPaneWindowSelect@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
