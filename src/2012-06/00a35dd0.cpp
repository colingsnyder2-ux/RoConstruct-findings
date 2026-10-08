// roc 2012-06 00a35dd0  unit: CXTPDockingPaneWindowSelect  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a35dd0
//
// 00a35dd0  83ec20               sub esp, 0x20
// 00a35dd3  56                   push esi
// 00a35dd4  8bf1                 mov esi, ecx
// 00a35dd6  57                   push edi
// 00a35dd7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00a35ddb  8d8640010000         lea eax, [esi + 0x140]
// 00a35de1  50                   push eax
// 00a35de2  57                   push edi
// 00a35de3  8d4c2420             lea ecx, [esp + 0x20]
// 00a35de7  e844f7f9ff           call 0x9d5530
// 00a35dec  8b5708               mov edx, dword ptr [edi + 8]
// 00a35def  8d4c2408             lea ecx, [esp + 8]
// 00a35df3  51                   push ecx
// 00a35df4  6a01                 push 1
// 00a35df6  68ecf3b400           push 0xb4f3ec
// 00a35dfb  52                   push edx
// 00a35dfc  ff154021b200         call dword ptr [0xb22140]
// 00a35e02  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00a35e08  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 00a35e0e  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 00a35e14  8b9088000000         mov edx, dword ptr [eax + 0x88]
// 00a35e1a  8b808c000000         mov eax, dword ptr [eax + 0x8c]
// 00a35e20  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a35e24  83c004               add eax, 4
// 00a35e27  83c104               add ecx, 4
// 00a35e2a  3bc1                 cmp eax, ecx
// 00a35e2c  89542410             mov dword ptr [esp + 0x10], edx
// 00a35e30  8bf0                 mov esi, eax
// 00a35e32  7f02                 jg 0xa35e36
// 00a35e34  8bf1                 mov esi, ecx
// 00a35e36  8d4c2418             lea ecx, [esp + 0x18]
// 00a35e3a  e871f7f9ff           call 0x9d55b0
// 00a35e3f  5f                   pop edi
// 00a35e40  8bc6                 mov eax, esi
// 00a35e42  5e                   pop esi
// 00a35e43  83c420               add esp, 0x20
// 00a35e46  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?CalcItemHeight@CXTPDockingPaneWindowSelect@@AAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
