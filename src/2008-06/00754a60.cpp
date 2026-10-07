// roc 2008-06 00754a60  unit: CXTPDockingPaneBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754a60
//
// 00754a60  56                   push esi
// 00754a61  57                   push edi
// 00754a62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00754a66  8bf1                 mov esi, ecx
// 00754a68  6a00                 push 0
// 00754a6a  8d4604               lea eax, [esi + 4]
// 00754a6d  50                   push eax
// 00754a6e  68344e8600           push 0x864e34
// 00754a73  57                   push edi
// 00754a74  e89788faff           call 0x6fd310
// 00754a79  6a00                 push 0
// 00754a7b  83c608               add esi, 8
// 00754a7e  56                   push esi
// 00754a7f  68284e8600           push 0x864e28
// 00754a84  57                   push edi
// 00754a85  e88688faff           call 0x6fd310
// 00754a8a  83c420               add esp, 0x20
// 00754a8d  5f                   pop edi
// 00754a8e  b801000000           mov eax, 1
// 00754a93  5e                   pop esi
// 00754a94  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?DoPropExchange@CXTPDockingPaneBase@@MAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
