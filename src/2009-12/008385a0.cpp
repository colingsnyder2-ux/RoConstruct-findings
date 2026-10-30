// roc 2009-12 008385a0  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008385a0
//
// 008385a0  56                   push esi
// 008385a1  57                   push edi
// 008385a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008385a6  8bf1                 mov esi, ecx
// 008385a8  85ff                 test edi, edi
// 008385aa  7411                 je 0x8385bd
// 008385ac  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008385b2  e825b8fbff           call 0x7f3ddc
// 008385b7  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 008385bd  5f                   pop edi
// 008385be  5e                   pop esi
// 008385bf  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
