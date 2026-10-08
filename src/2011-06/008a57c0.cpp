// roc 2011-06 008a57c0  unit: CXTPMenuBar  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a57c0
//
// 008a57c0  53                   push ebx
// 008a57c1  56                   push esi
// 008a57c2  8bf1                 mov esi, ecx
// 008a57c4  e82755f7ff           call 0x81acf0
// 008a57c9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a57cd  8bd8                 mov ebx, eax
// 008a57cf  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 008a57d5  7506                 jne 0x8a57dd
// 008a57d7  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 008a57dd  85db                 test ebx, ebx
// 008a57df  7433                 je 0x8a5814
// 008a57e1  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 008a57e7  85c0                 test eax, eax
// 008a57e9  7429                 je 0x8a5814
// 008a57eb  3bc3                 cmp eax, ebx
// 008a57ed  7425                 je 0x8a5814
// 008a57ef  57                   push edi
// 008a57f0  51                   push ecx
// 008a57f1  e8f24ef6ff           call 0x80a6e8
// 008a57f6  8bf8                 mov edi, eax
// 008a57f8  85ff                 test edi, edi
// 008a57fa  7417                 je 0x8a5813
// 008a57fc  8b4704               mov eax, dword ptr [edi + 4]
// 008a57ff  50                   push eax
// 008a5800  ff158c1ca400         call dword ptr [0xa41c8c]
// 008a5806  85c0                 test eax, eax
// 008a5808  7409                 je 0x8a5813
// 008a580a  57                   push edi
// 008a580b  53                   push ebx
// 008a580c  8bce                 mov ecx, esi
// 008a580e  e8fdfcffff           call 0x8a5510
// 008a5813  5f                   pop edi
// 008a5814  5e                   pop esi
// 008a5815  5b                   pop ebx
// 008a5816  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
