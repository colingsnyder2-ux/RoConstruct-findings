// roc 2009-12 00839f90  unit: CXTPDockingPaneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839f90
//
// 00839f90  56                   push esi
// 00839f91  57                   push edi
// 00839f92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00839f96  8bf1                 mov esi, ecx
// 00839f98  85ff                 test edi, edi
// 00839f9a  7425                 je 0x839fc1
// 00839f9c  8bcf                 mov ecx, edi
// 00839f9e  e89dde0600           call 0x8a7e40
// 00839fa3  85c0                 test eax, eax
// 00839fa5  741a                 je 0x839fc1
// 00839fa7  8bce                 mov ecx, esi
// 00839fa9  e8d2f1ffff           call 0x839180
// 00839fae  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00839fb4  57                   push edi
// 00839fb5  e816fa0600           call 0x8a99d0
// 00839fba  8bce                 mov ecx, esi
// 00839fbc  e88ffcffff           call 0x839c50
// 00839fc1  5f                   pop edi
// 00839fc2  5e                   pop esi
// 00839fc3  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
