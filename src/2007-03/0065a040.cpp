// roc 2007-03 0065a040  unit: seg_00650000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a040
//
// 0065a040  56                   push esi
// 0065a041  57                   push edi
// 0065a042  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065a046  85ff                 test edi, edi
// 0065a048  8bf1                 mov esi, ecx
// 0065a04a  7411                 je 0x65a05d
// 0065a04c  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0065a052  e81b46fcff           call 0x61e672
// 0065a057  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 0065a05d  5f                   pop edi
// 0065a05e  5e                   pop esi
// 0065a05f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
