// roc 2010-06 00848680  unit: CXTPMenuBar  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848680
//
// 00848680  53                   push ebx
// 00848681  56                   push esi
// 00848682  8bf1                 mov esi, ecx
// 00848684  e8a701f7ff           call 0x7b8830
// 00848689  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084868d  8bd8                 mov ebx, eax
// 0084868f  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 00848695  7506                 jne 0x84869d
// 00848697  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 0084869d  85db                 test ebx, ebx
// 0084869f  7433                 je 0x8486d4
// 008486a1  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 008486a7  85c0                 test eax, eax
// 008486a9  7429                 je 0x8486d4
// 008486ab  3bc3                 cmp eax, ebx
// 008486ad  7425                 je 0x8486d4
// 008486af  57                   push edi
// 008486b0  51                   push ecx
// 008486b1  e874f9f5ff           call 0x7a802a
// 008486b6  8bf8                 mov edi, eax
// 008486b8  85ff                 test edi, edi
// 008486ba  7417                 je 0x8486d3
// 008486bc  8b4704               mov eax, dword ptr [edi + 4]
// 008486bf  50                   push eax
// 008486c0  ff156cbc9e00         call dword ptr [0x9ebc6c]
// 008486c6  85c0                 test eax, eax
// 008486c8  7409                 je 0x8486d3
// 008486ca  57                   push edi
// 008486cb  53                   push ebx
// 008486cc  8bce                 mov ecx, esi
// 008486ce  e8fdfcffff           call 0x8483d0
// 008486d3  5f                   pop edi
// 008486d4  5e                   pop esi
// 008486d5  5b                   pop ebx
// 008486d6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
