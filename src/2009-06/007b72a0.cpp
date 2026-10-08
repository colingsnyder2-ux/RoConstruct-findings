// roc 2009-06 007b72a0  unit: CXTPMenuBar  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b72a0
//
// 007b72a0  53                   push ebx
// 007b72a1  56                   push esi
// 007b72a2  8bf1                 mov esi, ecx
// 007b72a4  e84763f7ff           call 0x72d5f0
// 007b72a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007b72ad  8bd8                 mov ebx, eax
// 007b72af  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 007b72b5  7506                 jne 0x7b72bd
// 007b72b7  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 007b72bd  85db                 test ebx, ebx
// 007b72bf  7433                 je 0x7b72f4
// 007b72c1  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 007b72c7  85c0                 test eax, eax
// 007b72c9  7429                 je 0x7b72f4
// 007b72cb  3bc3                 cmp eax, ebx
// 007b72cd  7425                 je 0x7b72f4
// 007b72cf  57                   push edi
// 007b72d0  51                   push ecx
// 007b72d1  e8ec1df6ff           call 0x7190c2
// 007b72d6  8bf8                 mov edi, eax
// 007b72d8  85ff                 test edi, edi
// 007b72da  7417                 je 0x7b72f3
// 007b72dc  8b4704               mov eax, dword ptr [edi + 4]
// 007b72df  50                   push eax
// 007b72e0  ff1524ee8900         call dword ptr [0x89ee24]
// 007b72e6  85c0                 test eax, eax
// 007b72e8  7409                 je 0x7b72f3
// 007b72ea  57                   push edi
// 007b72eb  53                   push ebx
// 007b72ec  8bce                 mov ecx, esi
// 007b72ee  e8fdfcffff           call 0x7b6ff0
// 007b72f3  5f                   pop edi
// 007b72f4  5e                   pop esi
// 007b72f5  5b                   pop ebx
// 007b72f6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
