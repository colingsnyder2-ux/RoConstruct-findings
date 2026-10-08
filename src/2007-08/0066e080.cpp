// from server: 100% by auto
// roc 2007-08 0066e080  unit: CXTPControls  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e080
//
// 0066e080  56                   push esi
// 0066e081  57                   push edi
// 0066e082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066e086  85ff                 test edi, edi
// 0066e088  8bf1                 mov esi, ecx
// 0066e08a  7411                 je 0x66e09d
// 0066e08c  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0066e092  e84d21fcff           call 0x6301e4
// 0066e097  89bee4000000         mov dword ptr [esi + 0xe4], edi
// 0066e09d  5f                   pop edi
// 0066e09e  5e                   pop esi
// 0066e09f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?SetImageManager@CXTPDockingPaneManager@@QAEXPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
