// roc 2009-12 008bc810  unit: CXTPDockingPaneContextStickerWnd  size: 943 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bc810
//
// 008bc810  6aff                 push -1
// 008bc812  68c83a9600           push 0x963ac8
// 008bc817  64a100000000         mov eax, dword ptr fs:[0]
// 008bc81d  50                   push eax
// 008bc81e  83ec44               sub esp, 0x44
// 008bc821  53                   push ebx
// 008bc822  55                   push ebp
// 008bc823  56                   push esi
// 008bc824  57                   push edi
// 008bc825  a10052b600           mov eax, dword ptr [0xb65200]
// 008bc82a  33c4                 xor eax, esp
// 008bc82c  50                   push eax
// 008bc82d  8d442458             lea eax, [esp + 0x58]
// 008bc831  64a300000000         mov dword ptr fs:[0], eax
// 008bc837  8be9                 mov ebp, ecx
// 008bc839  55                   push ebp
// 008bc83a  8d4c2424             lea ecx, [esp + 0x24]
// 008bc83e  e88deaf8ff           call 0x84b2d0
// 008bc843  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008bc846  8d442468             lea eax, [esp + 0x68]
// 008bc84a  50                   push eax
// 008bc84b  51                   push ecx
// 008bc84c  ff1534cc9800         call dword ptr [0x98cc34]
// 008bc852  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008bc856  8b442468             mov eax, dword ptr [esp + 0x68]
// 008bc85a  52                   push edx
// 008bc85b  50                   push eax
// 008bc85c  8d4c2428             lea ecx, [esp + 0x28]
// 008bc860  51                   push ecx
// 008bc861  ff155cca9800         call dword ptr [0x98ca5c]
// 008bc867  85c0                 test eax, eax
// 008bc869  0f8438030000         je 0x8bcba7
// 008bc86f  55                   push ebp
// 008bc870  8d4c2448             lea ecx, [esp + 0x48]
// 008bc874  e85d7ef3ff           call 0x7f46d6
// 008bc879  33f6                 xor esi, esi
// 008bc87b  89742460             mov dword ptr [esp + 0x60], esi
// 008bc87f  8974241c             mov dword ptr [esp + 0x1c], esi
// 008bc883  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bc88b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008bc88f  2b442424             sub eax, dword ptr [esp + 0x24]
// 008bc893  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008bc897  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 008bc89b  8b542448             mov edx, dword ptr [esp + 0x48]
// 008bc89f  50                   push eax
// 008bc8a0  51                   push ecx
// 008bc8a1  52                   push edx
// 008bc8a2  c644246c01           mov byte ptr [esp + 0x6c], 1
// 008bc8a7  ff1550b19800         call dword ptr [0x98b150]
// 008bc8ad  50                   push eax
// 008bc8ae  8d4c241c             lea ecx, [esp + 0x1c]
// 008bc8b2  e87375f3ff           call 0x7f3e2a
// 008bc8b7  8d442418             lea eax, [esp + 0x18]
// 008bc8bb  50                   push eax
// 008bc8bc  8d4c2448             lea ecx, [esp + 0x48]
// 008bc8c0  51                   push ecx
// 008bc8c1  8d4c2438             lea ecx, [esp + 0x38]
// 008bc8c5  e8b6eff8ff           call 0x84b880
// 008bc8ca  56                   push esi
// 008bc8cb  8d542424             lea edx, [esp + 0x24]
// 008bc8cf  52                   push edx
// 008bc8d0  8d4c2438             lea ecx, [esp + 0x38]
// 008bc8d4  c644246802           mov byte ptr [esp + 0x68], 2
// 008bc8d9  e8207df3ff           call 0x7f45fe
// 008bc8de  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 008bc8e1  e85af8ffff           call 0x8bc140
// 008bc8e6  8bf0                 mov esi, eax
// 008bc8e8  4e                   dec esi
// 008bc8e9  f7de                 neg esi
// 008bc8eb  1bf6                 sbb esi, esi
// 008bc8ed  83e6fd               and esi, 0xfffffffd
// 008bc8f0  81c6ef240000         add esi, 0x24ef
// 008bc8f6  e845f8ffff           call 0x8bc140
// 008bc8fb  8b5554               mov edx, dword ptr [ebp + 0x54]
// 008bc8fe  8bf8                 mov edi, eax
// 008bc900  4f                   dec edi
// 008bc901  f7df                 neg edi
// 008bc903  1bff                 sbb edi, edi
// 008bc905  8bc2                 mov eax, edx
// 008bc907  83e7fc               and edi, 0xfffffffc
// 008bc90a  2420                 and al, 0x20
// 008bc90c  33db                 xor ebx, ebx
// 008bc90e  81c7ef240000         add edi, 0x24ef
// 008bc914  3c20                 cmp al, 0x20
// 008bc916  0f94c3               sete bl
// 008bc919  e822f8ffff           call 0x8bc140
// 008bc91e  c744241428bbb900     mov dword ptr [esp + 0x14], 0xb9bb28
// 008bc926  85c0                 test eax, eax
// 008bc928  7408                 je 0x8bc932
// 008bc92a  c744241430bcb900     mov dword ptr [esp + 0x14], 0xb9bc30
// 008bc932  f6c204               test dl, 4
// 008bc935  746b                 je 0x8bc9a2
// 008bc937  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bc93b  53                   push ebx
// 008bc93c  51                   push ecx
// 008bc93d  56                   push esi
// 008bc93e  8d54243c             lea edx, [esp + 0x3c]
// 008bc942  52                   push edx
// 008bc943  8bcd                 mov ecx, ebp
// 008bc945  e806faffff           call 0x8bc350
// 008bc94a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008bc94e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008bc952  8b542434             mov edx, dword ptr [esp + 0x34]
// 008bc956  50                   push eax
// 008bc957  51                   push ecx
// 008bc958  52                   push edx
// 008bc959  ff1518b19800         call dword ptr [0x98b118]
// 008bc95f  85c0                 test eax, eax
// 008bc961  743f                 je 0x8bc9a2
// 008bc963  8d4c2430             lea ecx, [esp + 0x30]
// 008bc967  c644246001           mov byte ptr [esp + 0x60], 1
// 008bc96c  e81ff0f8ff           call 0x84b990
// 008bc971  8d4c2418             lea ecx, [esp + 0x18]
// 008bc975  c644246000           mov byte ptr [esp + 0x60], 0
// 008bc97a  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bc982  e8a928b5ff           call 0x40f230
// 008bc987  8d4c2444             lea ecx, [esp + 0x44]
// 008bc98b  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008bc993  e8387df3ff           call 0x7f46d0
// 008bc998  b804000000           mov eax, 4
// 008bc99d  e907020000           jmp 0x8bcba9
// 008bc9a2  f6455401             test byte ptr [ebp + 0x54], 1
// 008bc9a6  746e                 je 0x8bca16
// 008bc9a8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008bc9ac  53                   push ebx
// 008bc9ad  83c018               add eax, 0x18
// 008bc9b0  50                   push eax
// 008bc9b1  56                   push esi
// 008bc9b2  8d4c243c             lea ecx, [esp + 0x3c]
// 008bc9b6  51                   push ecx
// 008bc9b7  8bcd                 mov ecx, ebp
// 008bc9b9  e892f9ffff           call 0x8bc350
// 008bc9be  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008bc9c2  8b442468             mov eax, dword ptr [esp + 0x68]
// 008bc9c6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008bc9ca  52                   push edx
// 008bc9cb  50                   push eax
// 008bc9cc  51                   push ecx
// 008bc9cd  ff1518b19800         call dword ptr [0x98b118]
// 008bc9d3  85c0                 test eax, eax
// 008bc9d5  743f                 je 0x8bca16
// 008bc9d7  8d4c2430             lea ecx, [esp + 0x30]
// 008bc9db  c644246001           mov byte ptr [esp + 0x60], 1
// 008bc9e0  e8abeff8ff           call 0x84b990
// 008bc9e5  8d4c2418             lea ecx, [esp + 0x18]
// 008bc9e9  c644246000           mov byte ptr [esp + 0x60], 0
// 008bc9ee  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bc9f6  e83528b5ff           call 0x40f230
// 008bc9fb  8d4c2444             lea ecx, [esp + 0x44]
// 008bc9ff  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008bca07  e8c47cf3ff           call 0x7f46d0
// 008bca0c  b801000000           mov eax, 1
// 008bca11  e993010000           jmp 0x8bcba9
// 008bca16  f6455408             test byte ptr [ebp + 0x54], 8
// 008bca1a  746e                 je 0x8bca8a
// 008bca1c  8b542414             mov edx, dword ptr [esp + 0x14]
// 008bca20  53                   push ebx
// 008bca21  83c230               add edx, 0x30
// 008bca24  52                   push edx
// 008bca25  56                   push esi
// 008bca26  8d44243c             lea eax, [esp + 0x3c]
// 008bca2a  50                   push eax
// 008bca2b  8bcd                 mov ecx, ebp
// 008bca2d  e81ef9ffff           call 0x8bc350
// 008bca32  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008bca36  8b542468             mov edx, dword ptr [esp + 0x68]
// 008bca3a  8b442434             mov eax, dword ptr [esp + 0x34]
// 008bca3e  51                   push ecx
// 008bca3f  52                   push edx
// 008bca40  50                   push eax
// 008bca41  ff1518b19800         call dword ptr [0x98b118]
// 008bca47  85c0                 test eax, eax
// 008bca49  743f                 je 0x8bca8a
// 008bca4b  8d4c2430             lea ecx, [esp + 0x30]
// 008bca4f  c644246001           mov byte ptr [esp + 0x60], 1
// 008bca54  e837eff8ff           call 0x84b990
// 008bca59  8d4c2418             lea ecx, [esp + 0x18]
// 008bca5d  c644246000           mov byte ptr [esp + 0x60], 0
// 008bca62  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bca6a  e8c127b5ff           call 0x40f230
// 008bca6f  8d4c2444             lea ecx, [esp + 0x44]
// 008bca73  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008bca7b  e8507cf3ff           call 0x7f46d0
// 008bca80  b808000000           mov eax, 8
// 008bca85  e91f010000           jmp 0x8bcba9
// 008bca8a  f6455402             test byte ptr [ebp + 0x54], 2
// 008bca8e  746e                 je 0x8bcafe
// 008bca90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bca94  53                   push ebx
// 008bca95  83c148               add ecx, 0x48
// 008bca98  51                   push ecx
// 008bca99  56                   push esi
// 008bca9a  8d54243c             lea edx, [esp + 0x3c]
// 008bca9e  52                   push edx
// 008bca9f  8bcd                 mov ecx, ebp
// 008bcaa1  e8aaf8ffff           call 0x8bc350
// 008bcaa6  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008bcaaa  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008bcaae  8b542434             mov edx, dword ptr [esp + 0x34]
// 008bcab2  50                   push eax
// 008bcab3  51                   push ecx
// 008bcab4  52                   push edx
// 008bcab5  ff1518b19800         call dword ptr [0x98b118]
// 008bcabb  85c0                 test eax, eax
// 008bcabd  743f                 je 0x8bcafe
// 008bcabf  8d4c2430             lea ecx, [esp + 0x30]
// 008bcac3  c644246001           mov byte ptr [esp + 0x60], 1
// 008bcac8  e8c3eef8ff           call 0x84b990
// 008bcacd  8d4c2418             lea ecx, [esp + 0x18]
// 008bcad1  c644246000           mov byte ptr [esp + 0x60], 0
// 008bcad6  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bcade  e84d27b5ff           call 0x40f230
// 008bcae3  8d4c2444             lea ecx, [esp + 0x44]
// 008bcae7  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008bcaef  e8dc7bf3ff           call 0x7f46d0
// 008bcaf4  b802000000           mov eax, 2
// 008bcaf9  e9ab000000           jmp 0x8bcba9
// 008bcafe  f6455410             test byte ptr [ebp + 0x54], 0x10
// 008bcb02  746e                 je 0x8bcb72
// 008bcb04  8b442414             mov eax, dword ptr [esp + 0x14]
// 008bcb08  6a01                 push 1
// 008bcb0a  05f0000000           add eax, 0xf0
// 008bcb0f  50                   push eax
// 008bcb10  57                   push edi
// 008bcb11  8d4c243c             lea ecx, [esp + 0x3c]
// 008bcb15  51                   push ecx
// 008bcb16  8bcd                 mov ecx, ebp
// 008bcb18  e833f8ffff           call 0x8bc350
// 008bcb1d  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008bcb21  8b442468             mov eax, dword ptr [esp + 0x68]
// 008bcb25  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008bcb29  52                   push edx
// 008bcb2a  50                   push eax
// 008bcb2b  51                   push ecx
// 008bcb2c  ff1518b19800         call dword ptr [0x98b118]
// 008bcb32  85c0                 test eax, eax
// 008bcb34  743c                 je 0x8bcb72
// 008bcb36  8d4c2430             lea ecx, [esp + 0x30]
// 008bcb3a  c644246001           mov byte ptr [esp + 0x60], 1
// 008bcb3f  e84ceef8ff           call 0x84b990
// 008bcb44  8d4c2418             lea ecx, [esp + 0x18]
// 008bcb48  c644246000           mov byte ptr [esp + 0x60], 0
// 008bcb4d  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bcb55  e8d626b5ff           call 0x40f230
// 008bcb5a  8d4c2444             lea ecx, [esp + 0x44]
// 008bcb5e  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008bcb66  e8657bf3ff           call 0x7f46d0
// 008bcb6b  b810000000           mov eax, 0x10
// 008bcb70  eb37                 jmp 0x8bcba9
// 008bcb72  8d4c2430             lea ecx, [esp + 0x30]
// 008bcb76  c644246001           mov byte ptr [esp + 0x60], 1
// 008bcb7b  e810eef8ff           call 0x84b990
// 008bcb80  8d4c2418             lea ecx, [esp + 0x18]
// 008bcb84  c644246000           mov byte ptr [esp + 0x60], 0
// 008bcb89  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bcb91  e89a26b5ff           call 0x40f230
// 008bcb96  8d4c2444             lea ecx, [esp + 0x44]
// 008bcb9a  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 008bcba2  e8297bf3ff           call 0x7f46d0
// 008bcba7  33c0                 xor eax, eax
// 008bcba9  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008bcbad  64890d00000000       mov dword ptr fs:[0], ecx
// 008bcbb4  59                   pop ecx
// 008bcbb5  5f                   pop edi
// 008bcbb6  5e                   pop esi
// 008bcbb7  5d                   pop ebp
// 008bcbb8  5b                   pop ebx
// 008bcbb9  83c450               add esp, 0x50
// 008bcbbc  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPDockingPaneContextStickerWnd@@QAE?AW4XTPDockingPaneStickerType@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp