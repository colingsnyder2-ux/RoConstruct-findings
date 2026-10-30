// roc 2009-12 008576c0  unit: CXTPTabClientWnd  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008576c0
//
// 008576c0  83ec08               sub esp, 8
// 008576c3  837c241001           cmp dword ptr [esp + 0x10], 1
// 008576c8  53                   push ebx
// 008576c9  56                   push esi
// 008576ca  57                   push edi
// 008576cb  8bf1                 mov esi, ecx
// 008576cd  7560                 jne 0x85772f
// 008576cf  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 008576d6  7457                 je 0x85772f
// 008576d8  8d44240c             lea eax, [esp + 0xc]
// 008576dc  50                   push eax
// 008576dd  ff1538cc9800         call dword ptr [0x98cc38]
// 008576e3  8b5620               mov edx, dword ptr [esi + 0x20]
// 008576e6  8d4c240c             lea ecx, [esp + 0xc]
// 008576ea  51                   push ecx
// 008576eb  52                   push edx
// 008576ec  ff1534cc9800         call dword ptr [0x98cc34]
// 008576f2  8bce                 mov ecx, esi
// 008576f4  33ff                 xor edi, edi
// 008576f6  e855efffff           call 0x856650
// 008576fb  85c0                 test eax, eax
// 008576fd  7e30                 jle 0x85772f
// 008576ff  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 00857705  57                   push edi
// 00857706  8bce                 mov ecx, esi
// 00857708  e833feffff           call 0x857540
// 0085770d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00857711  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00857715  51                   push ecx
// 00857716  52                   push edx
// 00857717  05a0000000           add eax, 0xa0
// 0085771c  50                   push eax
// 0085771d  ffd3                 call ebx
// 0085771f  85c0                 test eax, eax
// 00857721  751c                 jne 0x85773f
// 00857723  8bce                 mov ecx, esi
// 00857725  47                   inc edi
// 00857726  e825efffff           call 0x856650
// 0085772b  3bf8                 cmp edi, eax
// 0085772d  7cd6                 jl 0x857705
// 0085772f  8bce                 mov ecx, esi
// 00857731  e8fac6f9ff           call 0x7f3e30
// 00857736  5f                   pop edi
// 00857737  5e                   pop esi
// 00857738  5b                   pop ebx
// 00857739  83c408               add esp, 8
// 0085773c  c20c00               ret 0xc
// 0085773f  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00857746  751b                 jne 0x857763
// 00857748  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 0085774e  56                   push esi
// 0085774f  ff1520ca9800         call dword ptr [0x98ca20]
// 00857755  5f                   pop edi
// 00857756  5e                   pop esi
// 00857757  b801000000           mov eax, 1
// 0085775c  5b                   pop ebx
// 0085775d  83c408               add esp, 8
// 00857760  c20c00               ret 0xc
// 00857763  8bb6a4000000         mov esi, dword ptr [esi + 0xa4]
// 00857769  56                   push esi
// 0085776a  ff1520ca9800         call dword ptr [0x98ca20]
// 00857770  5f                   pop edi
// 00857771  5e                   pop esi
// 00857772  b801000000           mov eax, 1
// 00857777  5b                   pop ebx
// 00857778  83c408               add esp, 8
// 0085777b  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSetCursor@CXTPTabClientWnd@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp