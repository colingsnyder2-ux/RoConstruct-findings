// roc 2009-12 008ac190  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManagersArray  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac190
//
// 008ac190  6aff                 push -1
// 008ac192  682d2b9600           push 0x962b2d
// 008ac197  64a100000000         mov eax, dword ptr fs:[0]
// 008ac19d  50                   push eax
// 008ac19e  51                   push ecx
// 008ac19f  56                   push esi
// 008ac1a0  57                   push edi
// 008ac1a1  a10052b600           mov eax, dword ptr [0xb65200]
// 008ac1a6  33c4                 xor eax, esp
// 008ac1a8  50                   push eax
// 008ac1a9  8d442410             lea eax, [esp + 0x10]
// 008ac1ad  64a300000000         mov dword ptr fs:[0], eax
// 008ac1b3  8bf1                 mov esi, ecx
// 008ac1b5  8974240c             mov dword ptr [esp + 0xc], esi
// 008ac1b9  e88a7ff4ff           call 0x7f4148
// 008ac1be  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ac1c2  50                   push eax
// 008ac1c3  8d7e54               lea edi, [esi + 0x54]
// 008ac1c6  6a05                 push 5
// 008ac1c8  8bcf                 mov ecx, edi
// 008ac1ca  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008ac1d2  e8896d0400           call 0x8f2f60
// 008ac1d7  6a18                 push 0x18
// 008ac1d9  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008ac1de  c706d468a000         mov dword ptr [esi], 0xa068d4
// 008ac1e4  c7077468a000         mov dword ptr [edi], 0xa06874
// 008ac1ea  c786ac00000000000000 mov dword ptr [esi + 0xac], 0
// 008ac1f4  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 008ac1fe  e85d76f4ff           call 0x7f3860
// 008ac203  8bf8                 mov edi, eax
// 008ac205  83c404               add esp, 4
// 008ac208  85ff                 test edi, edi
// 008ac20a  740f                 je 0x8ac21b
// 008ac20c  8bcf                 mov ecx, edi
// 008ac20e  e86df0ffff           call 0x8ab280
// 008ac213  c7075c68a000         mov dword ptr [edi], 0xa0685c
// 008ac219  eb02                 jmp 0x8ac21d
// 008ac21b  33ff                 xor edi, edi
// 008ac21d  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 008ac223  6a38                 push 0x38
// 008ac225  897714               mov dword ptr [edi + 0x14], esi
// 008ac228  e83376f4ff           call 0x7f3860
// 008ac22d  8bf8                 mov edi, eax
// 008ac22f  83c404               add esp, 4
// 008ac232  897c2420             mov dword ptr [esp + 0x20], edi
// 008ac236  c644241802           mov byte ptr [esp + 0x18], 2
// 008ac23b  85ff                 test edi, edi
// 008ac23d  740f                 je 0x8ac24e
// 008ac23f  8bcf                 mov ecx, edi
// 008ac241  e86684f4ff           call 0x7f46ac
// 008ac246  c707e464a000         mov dword ptr [edi], 0xa064e4
// 008ac24c  eb02                 jmp 0x8ac250
// 008ac24e  33ff                 xor edi, edi
// 008ac250  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008ac256  51                   push ecx
// 008ac257  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 008ac25d  ff159cca9800         call dword ptr [0x98ca9c]
// 008ac263  8bc6                 mov eax, esi
// 008ac265  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ac269  64890d00000000       mov dword ptr fs:[0], ecx
// 008ac270  59                   pop ecx
// 008ac271  5f                   pop edi
// 008ac272  5e                   pop esi
// 008ac273  83c410               add esp, 0x10
// 008ac276  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPDockingPaneAutoHidePanel@@IAE@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp