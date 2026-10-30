// roc 2009-12 00870e90  unit: CXTPHookManager::CHookSink  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870e90
//
// 00870e90  56                   push esi
// 00870e91  57                   push edi
// 00870e92  6a01                 push 1
// 00870e94  8bf1                 mov esi, ecx
// 00870e96  e8e5feffff           call 0x870d80
// 00870e9b  6a01                 push 1
// 00870e9d  8bce                 mov ecx, esi
// 00870e9f  e82cffffff           call 0x870dd0
// 00870ea4  e8752cf8ff           call 0x7f3b1e
// 00870ea9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00870ead  894610               mov dword ptr [esi + 0x10], eax
// 00870eb0  6a00                 push 0
// 00870eb2  83c614               add esi, 0x14
// 00870eb5  57                   push edi
// 00870eb6  8bce                 mov ecx, esi
// 00870eb8  e8b3f30400           call 0x8c0270
// 00870ebd  85c0                 test eax, eax
// 00870ebf  7508                 jne 0x870ec9
// 00870ec1  57                   push edi
// 00870ec2  8bce                 mov ecx, esi
// 00870ec4  e8b72c0500           call 0x8c3b80
// 00870ec9  5f                   pop edi
// 00870eca  5e                   pop esi
// 00870ecb  c20400               ret 4
// copied from an identical function in another client (function ?HookKeyboard@CXTPKeyboardManager@@QAEXPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp