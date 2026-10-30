// from server: 100% by auto
// roc 2011-06 008b9180  unit: CXTPDockingPaneBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b9180
//
// 008b9180  56                   push esi
// 008b9181  57                   push edi
// 008b9182  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b9186  8bf1                 mov esi, ecx
// 008b9188  6a00                 push 0
// 008b918a  8d4604               lea eax, [esi + 4]
// 008b918d  50                   push eax
// 008b918e  68e84fad00           push 0xad4fe8
// 008b9193  57                   push edi
// 008b9194  e8b76dfaff           call 0x85ff50
// 008b9199  6a00                 push 0
// 008b919b  83c608               add esi, 8
// 008b919e  56                   push esi
// 008b919f  68dc4fad00           push 0xad4fdc
// 008b91a4  57                   push edi
// 008b91a5  e8a66dfaff           call 0x85ff50
// 008b91aa  83c420               add esp, 0x20
// 008b91ad  5f                   pop edi
// 008b91ae  b801000000           mov eax, 1
// 008b91b3  5e                   pop esi
// 008b91b4  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?DoPropExchange@CXTPDockingPaneBase@@MAEHPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
