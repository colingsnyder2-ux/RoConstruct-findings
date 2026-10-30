// roc 2009-12 00870d60  unit: CXTPHookManager::CHookSink  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870d60
//
// 00870d60  8b442404             mov eax, dword ptr [esp + 4]
// 00870d64  50                   push eax
// 00870d65  e856fbffff           call 0x8708c0
// 00870d6a  85c0                 test eax, eax
// 00870d6c  740c                 je 0x870d7a
// 00870d6e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00870d72  51                   push ecx
// 00870d73  8bc8                 mov ecx, eax
// 00870d75  e8e6fdffff           call 0x870b60
// 00870d7a  c20800               ret 8
// copied from an identical function in another client (function ?RemoveHook@CXTPHookManager@@QAEXPAUHWND__@@PAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp