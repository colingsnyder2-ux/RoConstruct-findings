// roc 2009-12 008932e0  unit: CXTPMenuBar::CControlMDIButton  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008932e0
//
// 008932e0  56                   push esi
// 008932e1  57                   push edi
// 008932e2  8bf1                 mov esi, ecx
// 008932e4  e809330900           call 0x9265f2
// 008932e9  50                   push eax
// 008932ea  8bce                 mov ecx, esi
// 008932ec  e89f3df7ff           call 0x807090
// 008932f1  8bc8                 mov ecx, eax
// 008932f3  e8f00af6ff           call 0x7f3de8
// 008932f8  8bce                 mov ecx, esi
// 008932fa  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00893300  e88b3df7ff           call 0x807090
// 00893305  8bf8                 mov edi, eax
// 00893307  83c654               add esi, 0x54
// 0089330a  85ff                 test edi, edi
// 0089330c  7403                 je 0x893311
// 0089330e  8b4720               mov eax, dword ptr [edi + 0x20]
// 00893311  56                   push esi
// 00893312  50                   push eax
// 00893313  e8c8d5fdff           call 0x8708e0
// 00893318  8bc8                 mov ecx, eax
// 0089331a  e861dcfdff           call 0x870f80
// 0089331f  57                   push edi
// 00893320  e8cd320900           call 0x9265f2
// 00893325  50                   push eax
// 00893326  e81309f6ff           call 0x7f3c3e
// 0089332b  83c408               add esp, 8
// 0089332e  85c0                 test eax, eax
// 00893330  7414                 je 0x893346
// 00893332  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 00893338  56                   push esi
// 00893339  50                   push eax
// 0089333a  e8a1d5fdff           call 0x8708e0
// 0089333f  8bc8                 mov ecx, eax
// 00893341  e83adcfdff           call 0x870f80
// 00893346  5f                   pop edi
// 00893347  5e                   pop esi
// 00893348  c3                   ret 
// copied from an identical function in another client (function ?SetupHook@CXTPMenuBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp