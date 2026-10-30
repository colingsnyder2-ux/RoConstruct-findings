// roc 2009-12 0088bc60  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088bc60
//
// 0088bc60  6aff                 push -1
// 0088bc62  68d78c9500           push 0x958cd7
// 0088bc67  64a100000000         mov eax, dword ptr fs:[0]
// 0088bc6d  50                   push eax
// 0088bc6e  83ec10               sub esp, 0x10
// 0088bc71  53                   push ebx
// 0088bc72  55                   push ebp
// 0088bc73  56                   push esi
// 0088bc74  57                   push edi
// 0088bc75  a10052b600           mov eax, dword ptr [0xb65200]
// 0088bc7a  33c4                 xor eax, esp
// 0088bc7c  50                   push eax
// 0088bc7d  8d442424             lea eax, [esp + 0x24]
// 0088bc81  64a300000000         mov dword ptr fs:[0], eax
// 0088bc87  8bf1                 mov esi, ecx
// 0088bc89  33db                 xor ebx, ebx
// 0088bc8b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088bc8f  837c243404           cmp dword ptr [esp + 0x34], 4
// 0088bc94  7576                 jne 0x88bd0c
// 0088bc96  8d442420             lea eax, [esp + 0x20]
// 0088bc9a  50                   push eax
// 0088bc9b  e8a0f5ffff           call 0x88b240
// 0088bca0  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0088bca4  bb01000000           mov ebx, 1
// 0088bca9  8bc8                 mov ecx, eax
// 0088bcab  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088bcaf  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088bcb5  84c0                 test al, al
// 0088bcb7  7553                 jne 0x88bd0c
// 0088bcb9  8d4c241c             lea ecx, [esp + 0x1c]
// 0088bcbd  51                   push ecx
// 0088bcbe  8bce                 mov ecx, esi
// 0088bcc0  e87bf5ffff           call 0x88b240
// 0088bcc5  8bf8                 mov edi, eax
// 0088bcc7  8d542418             lea edx, [esp + 0x18]
// 0088bccb  52                   push edx
// 0088bccc  8bce                 mov ecx, esi
// 0088bcce  895c2430             mov dword ptr [esp + 0x30], ebx
// 0088bcd2  c744241803000000     mov dword ptr [esp + 0x18], 3
// 0088bcda  e841f8ffff           call 0x88b520
// 0088bcdf  8be8                 mov ebp, eax
// 0088bce1  bb07000000           mov ebx, 7
// 0088bce6  8bcf                 mov ecx, edi
// 0088bce8  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 0088bcf0  895c2414             mov dword ptr [esp + 0x14], ebx
// 0088bcf4  ff1580de9800         call dword ptr [0x98de80]
// 0088bcfa  50                   push eax
// 0088bcfb  8bcd                 mov ecx, ebp
// 0088bcfd  ff1584de9800         call dword ptr [0x98de84]
// 0088bd03  c644243401           mov byte ptr [esp + 0x34], 1
// 0088bd08  85c0                 test eax, eax
// 0088bd0a  7405                 je 0x88bd11
// 0088bd0c  c644243400           mov byte ptr [esp + 0x34], 0
// 0088bd11  f6c304               test bl, 4
// 0088bd14  740d                 je 0x88bd23
// 0088bd16  8d4c2418             lea ecx, [esp + 0x18]
// 0088bd1a  83e3fb               and ebx, 0xfffffffb
// 0088bd1d  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bd23  f6c302               test bl, 2
// 0088bd26  740d                 je 0x88bd35
// 0088bd28  8d4c241c             lea ecx, [esp + 0x1c]
// 0088bd2c  83e3fd               and ebx, 0xfffffffd
// 0088bd2f  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bd35  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0088bd3d  f6c301               test bl, 1
// 0088bd40  740a                 je 0x88bd4c
// 0088bd42  8d4c2420             lea ecx, [esp + 0x20]
// 0088bd46  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bd4c  807c243400           cmp byte ptr [esp + 0x34], 0
// 0088bd51  742d                 je 0x88bd80
// 0088bd53  6856fd9900           push 0x99fd56
// 0088bd58  8d4c2438             lea ecx, [esp + 0x38]
// 0088bd5c  ff15b8de9800         call dword ptr [0x98deb8]
// 0088bd62  8d442434             lea eax, [esp + 0x34]
// 0088bd66  50                   push eax
// 0088bd67  8bce                 mov ecx, esi
// 0088bd69  c744243003000000     mov dword ptr [esp + 0x30], 3
// 0088bd71  e80af8ffff           call 0x88b580
// 0088bd76  8d4c2434             lea ecx, [esp + 0x34]
// 0088bd7a  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bd80  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088bd84  64890d00000000       mov dword ptr fs:[0], ecx
// 0088bd8b  59                   pop ecx
// 0088bd8c  5f                   pop edi
// 0088bd8d  5e                   pop esi
// 0088bd8e  5d                   pop ebp
// 0088bd8f  5b                   pop ebx
// 0088bd90  83c41c               add esp, 0x1c
// 0088bd93  c20400               ret 4
// copied from an identical function in another client (function ?OnActionChanging@CXTPControlComboBox@@UAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp