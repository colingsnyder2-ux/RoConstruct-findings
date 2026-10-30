// roc 2009-12 00870f80  unit: CXTPHookManager::CHookSink  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870f80
//
// 00870f80  53                   push ebx
// 00870f81  56                   push esi
// 00870f82  57                   push edi
// 00870f83  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00870f87  57                   push edi
// 00870f88  8bd9                 mov ebx, ecx
// 00870f8a  e831f9ffff           call 0x8708c0
// 00870f8f  8bf0                 mov esi, eax
// 00870f91  85f6                 test esi, esi
// 00870f93  742b                 je 0x870fc0
// 00870f95  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00870f99  57                   push edi
// 00870f9a  8bce                 mov ecx, esi
// 00870f9c  e84fdeffff           call 0x86edf0
// 00870fa1  83f8ff               cmp eax, -1
// 00870fa4  7550                 jne 0x870ff6
// 00870fa6  8b4608               mov eax, dword ptr [esi + 8]
// 00870fa9  57                   push edi
// 00870faa  50                   push eax
// 00870fab  8bce                 mov ecx, esi
// 00870fad  e8be9cffff           call 0x86ac70
// 00870fb2  e8672bf8ff           call 0x7f3b1e
// 00870fb7  5f                   pop edi
// 00870fb8  894620               mov dword ptr [esi + 0x20], eax
// 00870fbb  5e                   pop esi
// 00870fbc  5b                   pop ebx
// 00870fbd  c20800               ret 8
// 00870fc0  6a24                 push 0x24
// 00870fc2  e89928f8ff           call 0x7f3860
// 00870fc7  83c404               add esp, 4
// 00870fca  85c0                 test eax, eax
// 00870fcc  740c                 je 0x870fda
// 00870fce  57                   push edi
// 00870fcf  8bc8                 mov ecx, eax
// 00870fd1  e83affffff           call 0x870f10
// 00870fd6  8bf0                 mov esi, eax
// 00870fd8  eb02                 jmp 0x870fdc
// 00870fda  33f6                 xor esi, esi
// 00870fdc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00870fe0  8b5608               mov edx, dword ptr [esi + 8]
// 00870fe3  51                   push ecx
// 00870fe4  52                   push edx
// 00870fe5  8bce                 mov ecx, esi
// 00870fe7  e8849cffff           call 0x86ac70
// 00870fec  57                   push edi
// 00870fed  8bcb                 mov ecx, ebx
// 00870fef  e88c310200           call 0x894180
// 00870ff4  8930                 mov dword ptr [eax], esi
// 00870ff6  e8232bf8ff           call 0x7f3b1e
// 00870ffb  5f                   pop edi
// 00870ffc  894620               mov dword ptr [esi + 0x20], eax
// 00870fff  5e                   pop esi
// 00871000  5b                   pop ebx
// 00871001  c20800               ret 8
// copied from an identical function in another client (function ?SetHook@CXTPHookManager@@QAEXPAUHWND__@@PAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPHookManager.cpp