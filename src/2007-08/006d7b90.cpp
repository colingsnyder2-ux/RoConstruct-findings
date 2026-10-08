// from server: 100% by auto
// roc 2007-08 006d7b90  unit: CXTPDockingPaneBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7b90
//
// 006d7b90  56                   push esi
// 006d7b91  57                   push edi
// 006d7b92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d7b96  8bf1                 mov esi, ecx
// 006d7b98  6a00                 push 0
// 006d7b9a  8d4604               lea eax, [esi + 4]
// 006d7b9d  50                   push eax
// 006d7b9e  68108c7d00           push 0x7d8c10
// 006d7ba3  57                   push edi
// 006d7ba4  e877dbfaff           call 0x685720
// 006d7ba9  6a00                 push 0
// 006d7bab  83c608               add esi, 8
// 006d7bae  56                   push esi
// 006d7baf  68048c7d00           push 0x7d8c04
// 006d7bb4  57                   push edi
// 006d7bb5  e866dbfaff           call 0x685720
// 006d7bba  83c420               add esp, 0x20
// 006d7bbd  5f                   pop edi
// 006d7bbe  b801000000           mov eax, 1
// 006d7bc3  5e                   pop esi
// 006d7bc4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?DoPropExchange@CXTPDockingPaneBase@@MAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
