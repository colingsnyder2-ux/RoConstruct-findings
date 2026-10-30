// roc 2009-12 007fd190  unit: CPatchedControlComboBox  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd190
//
// 007fd190  6aff                 push -1
// 007fd192  68d08f9500           push 0x958fd0
// 007fd197  64a100000000         mov eax, dword ptr fs:[0]
// 007fd19d  50                   push eax
// 007fd19e  83ec18               sub esp, 0x18
// 007fd1a1  53                   push ebx
// 007fd1a2  55                   push ebp
// 007fd1a3  56                   push esi
// 007fd1a4  57                   push edi
// 007fd1a5  a10052b600           mov eax, dword ptr [0xb65200]
// 007fd1aa  33c4                 xor eax, esp
// 007fd1ac  50                   push eax
// 007fd1ad  8d44242c             lea eax, [esp + 0x2c]
// 007fd1b1  64a300000000         mov dword ptr fs:[0], eax
// 007fd1b7  8bf1                 mov esi, ecx
// 007fd1b9  8d442424             lea eax, [esp + 0x24]
// 007fd1bd  33ff                 xor edi, edi
// 007fd1bf  50                   push eax
// 007fd1c0  897c241c             mov dword ptr [esp + 0x1c], edi
// 007fd1c4  e8c7c1ffff           call 0x7f9390
// 007fd1c9  bb01000000           mov ebx, 1
// 007fd1ce  8bc8                 mov ecx, eax
// 007fd1d0  897c2434             mov dword ptr [esp + 0x34], edi
// 007fd1d4  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fd1d8  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fd1de  84c0                 test al, al
// 007fd1e0  7562                 jne 0x7fd244
// 007fd1e2  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fd1e8  3bc7                 cmp eax, edi
// 007fd1ea  7458                 je 0x7fd244
// 007fd1ec  397820               cmp dword ptr [eax + 0x20], edi
// 007fd1ef  7453                 je 0x7fd244
// 007fd1f1  8d4c2420             lea ecx, [esp + 0x20]
// 007fd1f5  51                   push ecx
// 007fd1f6  8bce                 mov ecx, esi
// 007fd1f8  e803d1ffff           call 0x7fa300
// 007fd1fd  8bf8                 mov edi, eax
// 007fd1ff  8d54241c             lea edx, [esp + 0x1c]
// 007fd203  52                   push edx
// 007fd204  8bce                 mov ecx, esi
// 007fd206  895c2438             mov dword ptr [esp + 0x38], ebx
// 007fd20a  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 007fd212  e879c1ffff           call 0x7f9390
// 007fd217  8be8                 mov ebp, eax
// 007fd219  bb07000000           mov ebx, 7
// 007fd21e  8bcf                 mov ecx, edi
// 007fd220  c744243402000000     mov dword ptr [esp + 0x34], 2
// 007fd228  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fd22c  ff1580de9800         call dword ptr [0x98de80]
// 007fd232  50                   push eax
// 007fd233  8bcd                 mov ecx, ebp
// 007fd235  ff1584de9800         call dword ptr [0x98de84]
// 007fd23b  c644241701           mov byte ptr [esp + 0x17], 1
// 007fd240  85c0                 test eax, eax
// 007fd242  7405                 je 0x7fd249
// 007fd244  c644241700           mov byte ptr [esp + 0x17], 0
// 007fd249  f6c304               test bl, 4
// 007fd24c  740d                 je 0x7fd25b
// 007fd24e  8d4c241c             lea ecx, [esp + 0x1c]
// 007fd252  83e3fb               and ebx, 0xfffffffb
// 007fd255  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd25b  f6c302               test bl, 2
// 007fd25e  740d                 je 0x7fd26d
// 007fd260  8d4c2420             lea ecx, [esp + 0x20]
// 007fd264  83e3fd               and ebx, 0xfffffffd
// 007fd267  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd26d  83cfff               or edi, 0xffffffff
// 007fd270  897c2434             mov dword ptr [esp + 0x34], edi
// 007fd274  f6c301               test bl, 1
// 007fd277  740a                 je 0x7fd283
// 007fd279  8d4c2424             lea ecx, [esp + 0x24]
// 007fd27d  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd283  807c241700           cmp byte ptr [esp + 0x17], 0
// 007fd288  7431                 je 0x7fd2bb
// 007fd28a  6856fd9900           push 0x99fd56
// 007fd28f  8d4c241c             lea ecx, [esp + 0x1c]
// 007fd293  ff15b8de9800         call dword ptr [0x98deb8]
// 007fd299  8d442418             lea eax, [esp + 0x18]
// 007fd29d  50                   push eax
// 007fd29e  8bce                 mov ecx, esi
// 007fd2a0  c744243803000000     mov dword ptr [esp + 0x38], 3
// 007fd2a8  e8b3d0ffff           call 0x7fa360
// 007fd2ad  8d4c2418             lea ecx, [esp + 0x18]
// 007fd2b1  897c2434             mov dword ptr [esp + 0x34], edi
// 007fd2b5  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd2bb  8d4c2428             lea ecx, [esp + 0x28]
// 007fd2bf  51                   push ecx
// 007fd2c0  8bce                 mov ecx, esi
// 007fd2c2  e899ebffff           call 0x7fbe60
// 007fd2c7  50                   push eax
// 007fd2c8  8d8e94010000         lea ecx, [esi + 0x194]
// 007fd2ce  c744243804000000     mov dword ptr [esp + 0x38], 4
// 007fd2d6  ff1538d59800         call dword ptr [0x98d538]
// 007fd2dc  8d4c2428             lea ecx, [esp + 0x28]
// 007fd2e0  897c2434             mov dword ptr [esp + 0x34], edi
// 007fd2e4  ff15c0de9800         call dword ptr [0x98dec0]
// 007fd2ea  8bce                 mov ecx, esi
// 007fd2ec  c786b001000001000000 mov dword ptr [esi + 0x1b0], 1
// 007fd2f6  e8a5ecffff           call 0x7fbfa0
// 007fd2fb  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fd301  83b9d400000000       cmp dword ptr [ecx + 0xd4], 0
// 007fd308  7520                 jne 0x7fd32a
// 007fd30a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007fd30e  85c0                 test eax, eax
// 007fd310  7509                 jne 0x7fd31b
// 007fd312  e8799d0000           call 0x807090
// 007fd317  85c0                 test eax, eax
// 007fd319  7403                 je 0x7fd31e
// 007fd31b  8b4020               mov eax, dword ptr [eax + 0x20]
// 007fd31e  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 007fd324  8982d4000000         mov dword ptr [edx + 0xd4], eax
// 007fd32a  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 007fd331  750e                 jne 0x7fd341
// 007fd333  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fd339  6a00                 push 0
// 007fd33b  57                   push edi
// 007fd33c  e85f920000           call 0x8065a0
// 007fd341  8b06                 mov eax, dword ptr [esi]
// 007fd343  8b5070               mov edx, dword ptr [eax + 0x70]
// 007fd346  6a01                 push 1
// 007fd348  8bce                 mov ecx, esi
// 007fd34a  ffd2                 call edx
// 007fd34c  8bb6d0010000         mov esi, dword ptr [esi + 0x1d0]
// 007fd352  85f6                 test esi, esi
// 007fd354  7409                 je 0x7fd35f
// 007fd356  6a01                 push 1
// 007fd358  8bce                 mov ecx, esi
// 007fd35a  e821fbffff           call 0x7fce80
// 007fd35f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fd363  64890d00000000       mov dword ptr fs:[0], ecx
// 007fd36a  59                   pop ecx
// 007fd36b  5f                   pop edi
// 007fd36c  5e                   pop esi
// 007fd36d  5d                   pop ebp
// 007fd36e  5b                   pop ebx
// 007fd36f  83c424               add esp, 0x24
// 007fd372  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPControlComboBox@@MAEXPAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp