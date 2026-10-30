// roc 2009-12 008708c0  unit: CXTPHookManager::CHookSink  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008708c0
//
// 008708c0  8b542404             mov edx, dword ptr [esp + 4]
// 008708c4  8d442404             lea eax, [esp + 4]
// 008708c8  50                   push eax
// 008708c9  52                   push edx
// 008708ca  e8b1c0f9ff           call 0x80c980
// 008708cf  f7d8                 neg eax
// 008708d1  1bc0                 sbb eax, eax
// 008708d3  23442404             and eax, dword ptr [esp + 4]
// 008708d7  c20400               ret 4
// copied from an identical function in another client (function ?Lookup@CXTPHookManager@@QAEPAVCHookSink@1@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp