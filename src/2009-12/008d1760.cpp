// roc 2009-12 008d1760  unit: PAVCXTPTabManagerAtom::?$CArray  size: 365 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1760
//
// 008d1760  6aff                 push -1
// 008d1762  68b2519600           push 0x9651b2
// 008d1767  64a100000000         mov eax, dword ptr fs:[0]
// 008d176d  50                   push eax
// 008d176e  56                   push esi
// 008d176f  57                   push edi
// 008d1770  a10052b600           mov eax, dword ptr [0xb65200]
// 008d1775  33c4                 xor eax, esp
// 008d1777  50                   push eax
// 008d1778  8d44240c             lea eax, [esp + 0xc]
// 008d177c  64a300000000         mov dword ptr fs:[0], eax
// 008d1782  8bf9                 mov edi, ecx
// 008d1784  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d1788  898700010000         mov dword ptr [edi + 0x100], eax
// 008d178e  83f802               cmp eax, 2
// 008d1791  7537                 jne 0x8d17ca
// 008d1793  6808020000           push 0x208
// 008d1798  e8c320f2ff           call 0x7f3860
// 008d179d  8bf0                 mov esi, eax
// 008d179f  83c404               add esp, 4
// 008d17a2  8974241c             mov dword ptr [esp + 0x1c], esi
// 008d17a6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d17ae  85f6                 test esi, esi
// 008d17b0  0f84f1000000         je 0x8d18a7
// 008d17b6  8bce                 mov ecx, esi
// 008d17b8  e823580100           call 0x8e6fe0
// 008d17bd  c706ec7ba000         mov dword ptr [esi], 0xa07bec
// 008d17c3  8bc6                 mov eax, esi
// 008d17c5  e9df000000           jmp 0x8d18a9
// 008d17ca  83f804               cmp eax, 4
// 008d17cd  752d                 jne 0x8d17fc
// 008d17cf  6818020000           push 0x218
// 008d17d4  e88720f2ff           call 0x7f3860
// 008d17d9  83c404               add esp, 4
// 008d17dc  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d17e0  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008d17e8  85c0                 test eax, eax
// 008d17ea  0f84b7000000         je 0x8d18a7
// 008d17f0  8bc8                 mov ecx, eax
// 008d17f2  e8d90efaff           call 0x8726d0
// 008d17f7  e9ad000000           jmp 0x8d18a9
// 008d17fc  83f808               cmp eax, 8
// 008d17ff  752a                 jne 0x8d182b
// 008d1801  6820020000           push 0x220
// 008d1806  e85520f2ff           call 0x7f3860
// 008d180b  83c404               add esp, 4
// 008d180e  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d1812  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008d181a  85c0                 test eax, eax
// 008d181c  0f8485000000         je 0x8d18a7
// 008d1822  8bc8                 mov ecx, eax
// 008d1824  e877f3ffff           call 0x8d0ba0
// 008d1829  eb7e                 jmp 0x8d18a9
// 008d182b  83f810               cmp eax, 0x10
// 008d182e  7526                 jne 0x8d1856
// 008d1830  681c020000           push 0x21c
// 008d1835  e82620f2ff           call 0x7f3860
// 008d183a  83c404               add esp, 4
// 008d183d  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d1841  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008d1849  85c0                 test eax, eax
// 008d184b  745a                 je 0x8d18a7
// 008d184d  8bc8                 mov ecx, eax
// 008d184f  e8bc790100           call 0x8e9210
// 008d1854  eb53                 jmp 0x8d18a9
// 008d1856  83f820               cmp eax, 0x20
// 008d1859  7526                 jne 0x8d1881
// 008d185b  6818020000           push 0x218
// 008d1860  e8fb1ff2ff           call 0x7f3860
// 008d1865  83c404               add esp, 4
// 008d1868  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d186c  c744241404000000     mov dword ptr [esp + 0x14], 4
// 008d1874  85c0                 test eax, eax
// 008d1876  742f                 je 0x8d18a7
// 008d1878  8bc8                 mov ecx, eax
// 008d187a  e801f4ffff           call 0x8d0c80
// 008d187f  eb28                 jmp 0x8d18a9
// 008d1881  6808020000           push 0x208
// 008d1886  e8d51ff2ff           call 0x7f3860
// 008d188b  83c404               add esp, 4
// 008d188e  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d1892  c744241405000000     mov dword ptr [esp + 0x14], 5
// 008d189a  85c0                 test eax, eax
// 008d189c  7409                 je 0x8d18a7
// 008d189e  8bc8                 mov ecx, eax
// 008d18a0  e8abfdf9ff           call 0x871650
// 008d18a5  eb02                 jmp 0x8d18a9
// 008d18a7  33c0                 xor eax, eax
// 008d18a9  50                   push eax
// 008d18aa  8bcf                 mov ecx, edi
// 008d18ac  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008d18b4  e897eeffff           call 0x8d0750
// 008d18b9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d18bd  64890d00000000       mov dword ptr fs:[0], ecx
// 008d18c4  59                   pop ecx
// 008d18c5  5f                   pop edi
// 008d18c6  5e                   pop esi
// 008d18c7  83c40c               add esp, 0xc
// 008d18ca  c20400               ret 4
// copied from an identical function in another client (function ?SetColor@CXTPTabPaintManager@@QAEPAVCColorSet@1@W4XTPTabColorStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManager.cpp