// roc 2009-12 0088d000  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d000
//
// 0088d000  6aff                 push -1
// 0088d002  68d08f9500           push 0x958fd0
// 0088d007  64a100000000         mov eax, dword ptr fs:[0]
// 0088d00d  50                   push eax
// 0088d00e  83ec18               sub esp, 0x18
// 0088d011  53                   push ebx
// 0088d012  55                   push ebp
// 0088d013  56                   push esi
// 0088d014  57                   push edi
// 0088d015  a10052b600           mov eax, dword ptr [0xb65200]
// 0088d01a  33c4                 xor eax, esp
// 0088d01c  50                   push eax
// 0088d01d  8d44242c             lea eax, [esp + 0x2c]
// 0088d021  64a300000000         mov dword ptr fs:[0], eax
// 0088d027  8bf1                 mov esi, ecx
// 0088d029  8d442424             lea eax, [esp + 0x24]
// 0088d02d  33ff                 xor edi, edi
// 0088d02f  50                   push eax
// 0088d030  897c241c             mov dword ptr [esp + 0x1c], edi
// 0088d034  e807e2ffff           call 0x88b240
// 0088d039  bb01000000           mov ebx, 1
// 0088d03e  8bc8                 mov ecx, eax
// 0088d040  897c2434             mov dword ptr [esp + 0x34], edi
// 0088d044  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088d048  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088d04e  84c0                 test al, al
// 0088d050  7562                 jne 0x88d0b4
// 0088d052  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088d058  3bc7                 cmp eax, edi
// 0088d05a  7458                 je 0x88d0b4
// 0088d05c  397820               cmp dword ptr [eax + 0x20], edi
// 0088d05f  7453                 je 0x88d0b4
// 0088d061  8d4c2420             lea ecx, [esp + 0x20]
// 0088d065  51                   push ecx
// 0088d066  8bce                 mov ecx, esi
// 0088d068  e8b3e4ffff           call 0x88b520
// 0088d06d  8bf8                 mov edi, eax
// 0088d06f  8d54241c             lea edx, [esp + 0x1c]
// 0088d073  52                   push edx
// 0088d074  8bce                 mov ecx, esi
// 0088d076  895c2438             mov dword ptr [esp + 0x38], ebx
// 0088d07a  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 0088d082  e8b9e1ffff           call 0x88b240
// 0088d087  8be8                 mov ebp, eax
// 0088d089  bb07000000           mov ebx, 7
// 0088d08e  8bcf                 mov ecx, edi
// 0088d090  c744243402000000     mov dword ptr [esp + 0x34], 2
// 0088d098  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088d09c  ff1580de9800         call dword ptr [0x98de80]
// 0088d0a2  50                   push eax
// 0088d0a3  8bcd                 mov ecx, ebp
// 0088d0a5  ff1584de9800         call dword ptr [0x98de84]
// 0088d0ab  c644241701           mov byte ptr [esp + 0x17], 1
// 0088d0b0  85c0                 test eax, eax
// 0088d0b2  7405                 je 0x88d0b9
// 0088d0b4  c644241700           mov byte ptr [esp + 0x17], 0
// 0088d0b9  f6c304               test bl, 4
// 0088d0bc  740d                 je 0x88d0cb
// 0088d0be  8d4c241c             lea ecx, [esp + 0x1c]
// 0088d0c2  83e3fb               and ebx, 0xfffffffb
// 0088d0c5  ff15c0de9800         call dword ptr [0x98dec0]
// 0088d0cb  f6c302               test bl, 2
// 0088d0ce  740d                 je 0x88d0dd
// 0088d0d0  8d4c2420             lea ecx, [esp + 0x20]
// 0088d0d4  83e3fd               and ebx, 0xfffffffd
// 0088d0d7  ff15c0de9800         call dword ptr [0x98dec0]
// 0088d0dd  83cfff               or edi, 0xffffffff
// 0088d0e0  897c2434             mov dword ptr [esp + 0x34], edi
// 0088d0e4  f6c301               test bl, 1
// 0088d0e7  740a                 je 0x88d0f3
// 0088d0e9  8d4c2424             lea ecx, [esp + 0x24]
// 0088d0ed  ff15c0de9800         call dword ptr [0x98dec0]
// 0088d0f3  807c241700           cmp byte ptr [esp + 0x17], 0
// 0088d0f8  7431                 je 0x88d12b
// 0088d0fa  6856fd9900           push 0x99fd56
// 0088d0ff  8d4c241c             lea ecx, [esp + 0x1c]
// 0088d103  ff15b8de9800         call dword ptr [0x98deb8]
// 0088d109  8d442418             lea eax, [esp + 0x18]
// 0088d10d  50                   push eax
// 0088d10e  8bce                 mov ecx, esi
// 0088d110  c744243803000000     mov dword ptr [esp + 0x38], 3
// 0088d118  e863e4ffff           call 0x88b580
// 0088d11d  8d4c2418             lea ecx, [esp + 0x18]
// 0088d121  897c2434             mov dword ptr [esp + 0x34], edi
// 0088d125  ff15c0de9800         call dword ptr [0x98dec0]
// 0088d12b  8d4c2428             lea ecx, [esp + 0x28]
// 0088d12f  51                   push ecx
// 0088d130  8bce                 mov ecx, esi
// 0088d132  e8b9f2ffff           call 0x88c3f0
// 0088d137  50                   push eax
// 0088d138  8d8e94010000         lea ecx, [esi + 0x194]
// 0088d13e  c744243804000000     mov dword ptr [esp + 0x38], 4
// 0088d146  ff1538d59800         call dword ptr [0x98d538]
// 0088d14c  8d4c2428             lea ecx, [esp + 0x28]
// 0088d150  897c2434             mov dword ptr [esp + 0x34], edi
// 0088d154  ff15c0de9800         call dword ptr [0x98dec0]
// 0088d15a  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088d160  83b9d400000000       cmp dword ptr [ecx + 0xd4], 0
// 0088d167  7520                 jne 0x88d189
// 0088d169  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088d16d  85c0                 test eax, eax
// 0088d16f  7509                 jne 0x88d17a
// 0088d171  e81a9ff7ff           call 0x807090
// 0088d176  85c0                 test eax, eax
// 0088d178  7403                 je 0x88d17d
// 0088d17a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0088d17d  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0088d183  8982d4000000         mov dword ptr [edx + 0xd4], eax
// 0088d189  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088d18f  6a00                 push 0
// 0088d191  57                   push edi
// 0088d192  e80994f7ff           call 0x8065a0
// 0088d197  8b06                 mov eax, dword ptr [esi]
// 0088d199  8b5070               mov edx, dword ptr [eax + 0x70]
// 0088d19c  6a01                 push 1
// 0088d19e  8bce                 mov ecx, esi
// 0088d1a0  ffd2                 call edx
// 0088d1a2  8bb6a0010000         mov esi, dword ptr [esi + 0x1a0]
// 0088d1a8  85f6                 test esi, esi
// 0088d1aa  7409                 je 0x88d1b5
// 0088d1ac  6a01                 push 1
// 0088d1ae  8bce                 mov ecx, esi
// 0088d1b0  e8cbfcf6ff           call 0x7fce80
// 0088d1b5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088d1b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0088d1c0  59                   pop ecx
// 0088d1c1  5f                   pop edi
// 0088d1c2  5e                   pop esi
// 0088d1c3  5d                   pop ebp
// 0088d1c4  5b                   pop ebx
// 0088d1c5  83c424               add esp, 0x24
// 0088d1c8  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPControlEdit@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp