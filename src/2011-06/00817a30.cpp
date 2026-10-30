// roc 2011-06 00817a30  unit: CPatchedControlComboBox  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00817a30
//
// 00817a30  6aff                 push -1
// 00817a32  68e79ca000           push 0xa09ce7
// 00817a37  64a100000000         mov eax, dword ptr fs:[0]
// 00817a3d  50                   push eax
// 00817a3e  83ec10               sub esp, 0x10
// 00817a41  53                   push ebx
// 00817a42  55                   push ebp
// 00817a43  56                   push esi
// 00817a44  57                   push edi
// 00817a45  a12058c900           mov eax, dword ptr [0xc95820]
// 00817a4a  33c4                 xor eax, esp
// 00817a4c  50                   push eax
// 00817a4d  8d442424             lea eax, [esp + 0x24]
// 00817a51  64a300000000         mov dword ptr fs:[0], eax
// 00817a57  8bf1                 mov esi, ecx
// 00817a59  33db                 xor ebx, ebx
// 00817a5b  895c2414             mov dword ptr [esp + 0x14], ebx
// 00817a5f  837c243404           cmp dword ptr [esp + 0x34], 4
// 00817a64  7576                 jne 0x817adc
// 00817a66  8d442420             lea eax, [esp + 0x20]
// 00817a6a  50                   push eax
// 00817a6b  e8d0eaffff           call 0x816540
// 00817a70  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00817a74  bb01000000           mov ebx, 1
// 00817a79  8bc8                 mov ecx, eax
// 00817a7b  895c2414             mov dword ptr [esp + 0x14], ebx
// 00817a7f  ff15b026a400         call dword ptr [0xa426b0]
// 00817a85  84c0                 test al, al
// 00817a87  7553                 jne 0x817adc
// 00817a89  8d4c241c             lea ecx, [esp + 0x1c]
// 00817a8d  51                   push ecx
// 00817a8e  8bce                 mov ecx, esi
// 00817a90  e8abeaffff           call 0x816540
// 00817a95  8bf8                 mov edi, eax
// 00817a97  8d542418             lea edx, [esp + 0x18]
// 00817a9b  52                   push edx
// 00817a9c  8bce                 mov ecx, esi
// 00817a9e  895c2430             mov dword ptr [esp + 0x30], ebx
// 00817aa2  c744241803000000     mov dword ptr [esp + 0x18], 3
// 00817aaa  e8c1f9ffff           call 0x817470
// 00817aaf  8be8                 mov ebp, eax
// 00817ab1  bb07000000           mov ebx, 7
// 00817ab6  8bcf                 mov ecx, edi
// 00817ab8  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 00817ac0  895c2414             mov dword ptr [esp + 0x14], ebx
// 00817ac4  ff15c82da400         call dword ptr [0xa42dc8]
// 00817aca  50                   push eax
// 00817acb  8bcd                 mov ecx, ebp
// 00817acd  ff15cc2da400         call dword ptr [0xa42dcc]
// 00817ad3  c644243401           mov byte ptr [esp + 0x34], 1
// 00817ad8  85c0                 test eax, eax
// 00817ada  7405                 je 0x817ae1
// 00817adc  c644243400           mov byte ptr [esp + 0x34], 0
// 00817ae1  f6c304               test bl, 4
// 00817ae4  740d                 je 0x817af3
// 00817ae6  8d4c2418             lea ecx, [esp + 0x18]
// 00817aea  83e3fb               and ebx, 0xfffffffb
// 00817aed  ff15082ea400         call dword ptr [0xa42e08]
// 00817af3  f6c302               test bl, 2
// 00817af6  740d                 je 0x817b05
// 00817af8  8d4c241c             lea ecx, [esp + 0x1c]
// 00817afc  83e3fd               and ebx, 0xfffffffd
// 00817aff  ff15082ea400         call dword ptr [0xa42e08]
// 00817b05  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00817b0d  f6c301               test bl, 1
// 00817b10  740a                 je 0x817b1c
// 00817b12  8d4c2420             lea ecx, [esp + 0x20]
// 00817b16  ff15082ea400         call dword ptr [0xa42e08]
// 00817b1c  807c243400           cmp byte ptr [esp + 0x34], 0
// 00817b21  742d                 je 0x817b50
// 00817b23  68cabea500           push 0xa5beca
// 00817b28  8d4c2438             lea ecx, [esp + 0x38]
// 00817b2c  ff15002ea400         call dword ptr [0xa42e00]
// 00817b32  8d442434             lea eax, [esp + 0x34]
// 00817b36  50                   push eax
// 00817b37  8bce                 mov ecx, esi
// 00817b39  c744243003000000     mov dword ptr [esp + 0x30], 3
// 00817b41  e88af9ffff           call 0x8174d0
// 00817b46  8d4c2434             lea ecx, [esp + 0x34]
// 00817b4a  ff15082ea400         call dword ptr [0xa42e08]
// 00817b50  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00817b54  64890d00000000       mov dword ptr fs:[0], ecx
// 00817b5b  59                   pop ecx
// 00817b5c  5f                   pop edi
// 00817b5d  5e                   pop esi
// 00817b5e  5d                   pop ebp
// 00817b5f  5b                   pop ebx
// 00817b60  83c41c               add esp, 0x1c
// 00817b63  c20400               ret 4
// copied from an identical function in another client (function ?OnActionChanging@CXTPControlComboBox@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp