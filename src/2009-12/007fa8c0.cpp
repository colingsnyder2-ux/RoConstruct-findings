// roc 2009-12 007fa8c0  unit: CPatchedControlComboBox  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa8c0
//
// 007fa8c0  6aff                 push -1
// 007fa8c2  68d78c9500           push 0x958cd7
// 007fa8c7  64a100000000         mov eax, dword ptr fs:[0]
// 007fa8cd  50                   push eax
// 007fa8ce  83ec10               sub esp, 0x10
// 007fa8d1  53                   push ebx
// 007fa8d2  55                   push ebp
// 007fa8d3  56                   push esi
// 007fa8d4  57                   push edi
// 007fa8d5  a10052b600           mov eax, dword ptr [0xb65200]
// 007fa8da  33c4                 xor eax, esp
// 007fa8dc  50                   push eax
// 007fa8dd  8d442424             lea eax, [esp + 0x24]
// 007fa8e1  64a300000000         mov dword ptr fs:[0], eax
// 007fa8e7  8bf1                 mov esi, ecx
// 007fa8e9  33db                 xor ebx, ebx
// 007fa8eb  895c2414             mov dword ptr [esp + 0x14], ebx
// 007fa8ef  837c243404           cmp dword ptr [esp + 0x34], 4
// 007fa8f4  7576                 jne 0x7fa96c
// 007fa8f6  8d442420             lea eax, [esp + 0x20]
// 007fa8fa  50                   push eax
// 007fa8fb  e890eaffff           call 0x7f9390
// 007fa900  895c242c             mov dword ptr [esp + 0x2c], ebx
// 007fa904  bb01000000           mov ebx, 1
// 007fa909  8bc8                 mov ecx, eax
// 007fa90b  895c2414             mov dword ptr [esp + 0x14], ebx
// 007fa90f  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fa915  84c0                 test al, al
// 007fa917  7553                 jne 0x7fa96c
// 007fa919  8d4c241c             lea ecx, [esp + 0x1c]
// 007fa91d  51                   push ecx
// 007fa91e  8bce                 mov ecx, esi
// 007fa920  e86beaffff           call 0x7f9390
// 007fa925  8bf8                 mov edi, eax
// 007fa927  8d542418             lea edx, [esp + 0x18]
// 007fa92b  52                   push edx
// 007fa92c  8bce                 mov ecx, esi
// 007fa92e  895c2430             mov dword ptr [esp + 0x30], ebx
// 007fa932  c744241803000000     mov dword ptr [esp + 0x18], 3
// 007fa93a  e8c1f9ffff           call 0x7fa300
// 007fa93f  8be8                 mov ebp, eax
// 007fa941  bb07000000           mov ebx, 7
// 007fa946  8bcf                 mov ecx, edi
// 007fa948  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 007fa950  895c2414             mov dword ptr [esp + 0x14], ebx
// 007fa954  ff1580de9800         call dword ptr [0x98de80]
// 007fa95a  50                   push eax
// 007fa95b  8bcd                 mov ecx, ebp
// 007fa95d  ff1584de9800         call dword ptr [0x98de84]
// 007fa963  c644243401           mov byte ptr [esp + 0x34], 1
// 007fa968  85c0                 test eax, eax
// 007fa96a  7405                 je 0x7fa971
// 007fa96c  c644243400           mov byte ptr [esp + 0x34], 0
// 007fa971  f6c304               test bl, 4
// 007fa974  740d                 je 0x7fa983
// 007fa976  8d4c2418             lea ecx, [esp + 0x18]
// 007fa97a  83e3fb               and ebx, 0xfffffffb
// 007fa97d  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa983  f6c302               test bl, 2
// 007fa986  740d                 je 0x7fa995
// 007fa988  8d4c241c             lea ecx, [esp + 0x1c]
// 007fa98c  83e3fd               and ebx, 0xfffffffd
// 007fa98f  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa995  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 007fa99d  f6c301               test bl, 1
// 007fa9a0  740a                 je 0x7fa9ac
// 007fa9a2  8d4c2420             lea ecx, [esp + 0x20]
// 007fa9a6  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa9ac  807c243400           cmp byte ptr [esp + 0x34], 0
// 007fa9b1  742d                 je 0x7fa9e0
// 007fa9b3  6856fd9900           push 0x99fd56
// 007fa9b8  8d4c2438             lea ecx, [esp + 0x38]
// 007fa9bc  ff15b8de9800         call dword ptr [0x98deb8]
// 007fa9c2  8d442434             lea eax, [esp + 0x34]
// 007fa9c6  50                   push eax
// 007fa9c7  8bce                 mov ecx, esi
// 007fa9c9  c744243003000000     mov dword ptr [esp + 0x30], 3
// 007fa9d1  e88af9ffff           call 0x7fa360
// 007fa9d6  8d4c2434             lea ecx, [esp + 0x34]
// 007fa9da  ff15c0de9800         call dword ptr [0x98dec0]
// 007fa9e0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fa9e4  64890d00000000       mov dword ptr fs:[0], ecx
// 007fa9eb  59                   pop ecx
// 007fa9ec  5f                   pop edi
// 007fa9ed  5e                   pop esi
// 007fa9ee  5d                   pop ebp
// 007fa9ef  5b                   pop ebx
// 007fa9f0  83c41c               add esp, 0x1c
// 007fa9f3  c20400               ret 4
// copied from an identical function in another client (function ?OnActionChanging@CXTPControlComboBox@@UAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp