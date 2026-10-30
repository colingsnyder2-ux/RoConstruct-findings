// roc 2007-03 0065b9f0  unit: seg_00650000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065b9f0
//
// 0065b9f0  56                   push esi
// 0065b9f1  57                   push edi
// 0065b9f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065b9f6  85ff                 test edi, edi
// 0065b9f8  8bf1                 mov esi, ecx
// 0065b9fa  7425                 je 0x65ba21
// 0065b9fc  8bcf                 mov ecx, edi
// 0065b9fe  e8bd530600           call 0x6c0dc0
// 0065ba03  85c0                 test eax, eax
// 0065ba05  741a                 je 0x65ba21
// 0065ba07  8bce                 mov ecx, esi
// 0065ba09  e802f2ffff           call 0x65ac10
// 0065ba0e  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0065ba14  57                   push edi
// 0065ba15  e8066f0600           call 0x6c2920
// 0065ba1a  8bce                 mov ecx, esi
// 0065ba1c  e88ffcffff           call 0x65b6b0
// 0065ba21  5f                   pop edi
// 0065ba22  5e                   pop esi
// 0065ba23  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetLayout@CXTPDockingPaneManager@@QAEXPBVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
