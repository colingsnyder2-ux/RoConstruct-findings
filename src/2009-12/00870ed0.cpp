// roc 2009-12 00870ed0  unit: CXTPHookManager::CHookSink  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870ed0
//
// 00870ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00870ed4  56                   push esi
// 00870ed5  57                   push edi
// 00870ed6  8bf1                 mov esi, ecx
// 00870ed8  6a00                 push 0
// 00870eda  8d7e14               lea edi, [esi + 0x14]
// 00870edd  50                   push eax
// 00870ede  8bcf                 mov ecx, edi
// 00870ee0  e88bf30400           call 0x8c0270
// 00870ee5  85c0                 test eax, eax
// 00870ee7  7408                 je 0x870ef1
// 00870ee9  50                   push eax
// 00870eea  8bcf                 mov ecx, edi
// 00870eec  e87f260700           call 0x8e3570
// 00870ef1  837e2000             cmp dword ptr [esi + 0x20], 0
// 00870ef5  7512                 jne 0x870f09
// 00870ef7  6a00                 push 0
// 00870ef9  8bce                 mov ecx, esi
// 00870efb  e8d0feffff           call 0x870dd0
// 00870f00  6a00                 push 0
// 00870f02  8bce                 mov ecx, esi
// 00870f04  e877feffff           call 0x870d80
// 00870f09  5f                   pop edi
// 00870f0a  5e                   pop esi
// 00870f0b  c20400               ret 4
// copied from an identical function in another client (function ?UnhookKeyboard@CXTPKeyboardManager@@QAEXPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp