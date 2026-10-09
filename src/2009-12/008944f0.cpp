// roc 2009-12 008944f0  unit: CXTPMenuBar  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008944f0
//
// 008944f0  53                   push ebx
// 008944f1  56                   push esi
// 008944f2  8bf1                 mov esi, ecx
// 008944f4  e83702f7ff           call 0x804730
// 008944f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008944fd  8bd8                 mov ebx, eax
// 008944ff  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 00894505  7506                 jne 0x89450d
// 00894507  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 0089450d  85db                 test ebx, ebx
// 0089450f  7433                 je 0x894544
// 00894511  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 00894517  85c0                 test eax, eax
// 00894519  7429                 je 0x894544
// 0089451b  3bc3                 cmp eax, ebx
// 0089451d  7425                 je 0x894544
// 0089451f  57                   push edi
// 00894520  51                   push ecx
// 00894521  e8c4f9f5ff           call 0x7f3eea
// 00894526  8bf8                 mov edi, eax
// 00894528  85ff                 test edi, edi
// 0089452a  7417                 je 0x894543
// 0089452c  8b4704               mov eax, dword ptr [edi + 4]
// 0089452f  50                   push eax
// 00894530  ff1540cc9800         call dword ptr [0x98cc40]
// 00894536  85c0                 test eax, eax
// 00894538  7409                 je 0x894543
// 0089453a  57                   push edi
// 0089453b  53                   push ebx
// 0089453c  8bce                 mov ecx, esi
// 0089453e  e8fdfcffff           call 0x894240
// 00894543  5f                   pop edi
// 00894544  5e                   pop esi
// 00894545  5b                   pop ebx
// 00894546  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
