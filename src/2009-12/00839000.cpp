// roc 2009-12 00839000  unit: CXTPDockingPaneManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839000
//
// 00839000  83b9d000000000       cmp dword ptr [ecx + 0xd0], 0
// 00839007  742a                 je 0x839033
// 00839009  e872f6ffff           call 0x838680
// 0083900e  8b4004               mov eax, dword ptr [eax + 4]
// 00839011  85c0                 test eax, eax
// 00839013  741e                 je 0x839033
// 00839015  8b542404             mov edx, dword ptr [esp + 4]
// 00839019  8da42400000000       lea esp, [esp]
// 00839020  8bc8                 mov ecx, eax
// 00839022  8b4908               mov ecx, dword ptr [ecx + 8]
// 00839025  8b00                 mov eax, dword ptr [eax]
// 00839027  3991b8000000         cmp dword ptr [ecx + 0xb8], edx
// 0083902d  7409                 je 0x839038
// 0083902f  85c0                 test eax, eax
// 00839031  75ed                 jne 0x839020
// 00839033  33c0                 xor eax, eax
// 00839035  c20400               ret 4
// 00839038  8bc1                 mov eax, ecx
// 0083903a  c20400               ret 4
// copied from an identical function in another client (function ?FindPane@CXTPDockingPaneManager@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp