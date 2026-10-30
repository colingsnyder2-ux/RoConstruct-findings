// roc 2009-12 00894860  unit: CXTPMenuBar  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894860
//
// 00894860  83ec08               sub esp, 8
// 00894863  56                   push esi
// 00894864  8bf1                 mov esi, ecx
// 00894866  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0089486c  57                   push edi
// 0089486d  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 00894877  e8f40fc4ff           call 0x4d5870
// 0089487c  85c0                 test eax, eax
// 0089487e  7e1a                 jle 0x89489a
// 00894880  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 00894886  6a00                 push 0
// 00894888  50                   push eax
// 00894889  8bce                 mov ecx, esi
// 0089488b  e8b0f9ffff           call 0x894240
// 00894890  c786c001000001000000 mov dword ptr [esi + 0x1c0], 1
// 0089489a  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008948a0  33ff                 xor edi, edi
// 008948a2  e8d9e5ffff           call 0x892e80
// 008948a7  89442408             mov dword ptr [esp + 8], eax
// 008948ab  85c0                 test eax, eax
// 008948ad  743a                 je 0x8948e9
// 008948af  53                   push ebx
// 008948b0  8d4c2410             lea ecx, [esp + 0x10]
// 008948b4  51                   push ecx
// 008948b5  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008948bb  8d542410             lea edx, [esp + 0x10]
// 008948bf  52                   push edx
// 008948c0  e8cbe5ffff           call 0x892e90
// 008948c5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008948c9  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008948cc  e87f22fbff           call 0x846b50
// 008948d1  894334               mov dword ptr [ebx + 0x34], eax
// 008948d4  85ff                 test edi, edi
// 008948d6  7504                 jne 0x8948dc
// 008948d8  85c0                 test eax, eax
// 008948da  7405                 je 0x8948e1
// 008948dc  bf01000000           mov edi, 1
// 008948e1  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008948e6  75c8                 jne 0x8948b0
// 008948e8  5b                   pop ebx
// 008948e9  8bc7                 mov eax, edi
// 008948eb  5f                   pop edi
// 008948ec  5e                   pop esi
// 008948ed  83c408               add esp, 8
// 008948f0  c3                   ret 
// copied from an identical function in another client (function ?IsMDIMenusChanged@CXTPMenuBar@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp