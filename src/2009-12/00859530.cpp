// roc 2009-12 00859530  unit: CXTPTabClientWnd  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00859530
//
// 00859530  56                   push esi
// 00859531  8bf1                 mov esi, ecx
// 00859533  83bed800000000       cmp dword ptr [esi + 0xd8], 0
// 0085953a  57                   push edi
// 0085953b  7512                 jne 0x85954f
// 0085953d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00859541  50                   push eax
// 00859542  e8e9f8ffff           call 0x858e30
// 00859547  50                   push eax
// 00859548  8bce                 mov ecx, esi
// 0085954a  e811e1ffff           call 0x857660
// 0085954f  8bce                 mov ecx, esi
// 00859551  e8daa8f9ff           call 0x7f3e30
// 00859556  8b16                 mov edx, dword ptr [esi]
// 00859558  8bf8                 mov edi, eax
// 0085955a  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 00859560  8bce                 mov ecx, esi
// 00859562  ffd0                 call eax
// 00859564  8bc7                 mov eax, edi
// 00859566  5f                   pop edi
// 00859567  5e                   pop esi
// 00859568  c20800               ret 8
// copied from an identical function in another client (function ?OnMDIDestroy@CXTPTabClientWnd@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp