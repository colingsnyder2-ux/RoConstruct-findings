// roc 2012-06 00a31670  unit: CXTPDockingPaneBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31670
//
// 00a31670  56                   push esi
// 00a31671  57                   push edi
// 00a31672  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a31676  8bf1                 mov esi, ecx
// 00a31678  6a00                 push 0
// 00a3167a  8d4604               lea eax, [esi + 4]
// 00a3167d  50                   push eax
// 00a3167e  688006c200           push 0xc20680
// 00a31683  57                   push edi
// 00a31684  e8976cfaff           call 0x9d8320
// 00a31689  6a00                 push 0
// 00a3168b  83c608               add esi, 8
// 00a3168e  56                   push esi
// 00a3168f  687406c200           push 0xc20674
// 00a31694  57                   push edi
// 00a31695  e8866cfaff           call 0x9d8320
// 00a3169a  83c420               add esp, 0x20
// 00a3169d  5f                   pop edi
// 00a3169e  b801000000           mov eax, 1
// 00a316a3  5e                   pop esi
// 00a316a4  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?DoPropExchange@CXTPDockingPaneBase@@MAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
