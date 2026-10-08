// roc 2010-06 008605d0  unit: CXTPDockingPaneWindowSelect  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008605d0
//
// 008605d0  83ec20               sub esp, 0x20
// 008605d3  56                   push esi
// 008605d4  8bf1                 mov esi, ecx
// 008605d6  57                   push edi
// 008605d7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008605db  8d8640010000         lea eax, [esi + 0x140]
// 008605e1  50                   push eax
// 008605e2  57                   push edi
// 008605e3  8d4c2420             lea ecx, [esp + 0x20]
// 008605e7  e8b4f0f9ff           call 0x7ff6a0
// 008605ec  8b5708               mov edx, dword ptr [edi + 8]
// 008605ef  8d4c2408             lea ecx, [esp + 8]
// 008605f3  51                   push ecx
// 008605f4  6a01                 push 1
// 008605f6  68e86ea000           push 0xa06ee8
// 008605fb  52                   push edx
// 008605fc  ff1594a19e00         call dword ptr [0x9ea194]
// 00860602  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00860608  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 0086060e  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00860614  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 0086061a  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00860620  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00860624  83c004               add eax, 4
// 00860627  83c104               add ecx, 4
// 0086062a  3bc1                 cmp eax, ecx
// 0086062c  89542410             mov dword ptr [esp + 0x10], edx
// 00860630  8bf0                 mov esi, eax
// 00860632  7f02                 jg 0x860636
// 00860634  8bf1                 mov esi, ecx
// 00860636  8d4c2418             lea ecx, [esp + 0x18]
// 0086063a  e8e1f0f9ff           call 0x7ff720
// 0086063f  5f                   pop edi
// 00860640  8bc6                 mov eax, esi
// 00860642  5e                   pop esi
// 00860643  83c420               add esp, 0x20
// 00860646  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?CalcItemHeight@CXTPDockingPaneWindowSelect@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
