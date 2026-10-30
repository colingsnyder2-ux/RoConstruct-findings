// roc 2009-12 007faba0  unit: CPatchedControlComboBox  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007faba0
//
// 007faba0  6aff                 push -1
// 007faba2  684e8d9500           push 0x958d4e
// 007faba7  64a100000000         mov eax, dword ptr fs:[0]
// 007fabad  50                   push eax
// 007fabae  83ec18               sub esp, 0x18
// 007fabb1  53                   push ebx
// 007fabb2  55                   push ebp
// 007fabb3  56                   push esi
// 007fabb4  57                   push edi
// 007fabb5  a10052b600           mov eax, dword ptr [0xb65200]
// 007fabba  33c4                 xor eax, esp
// 007fabbc  50                   push eax
// 007fabbd  8d44242c             lea eax, [esp + 0x2c]
// 007fabc1  64a300000000         mov dword ptr fs:[0], eax
// 007fabc7  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007fabcb  33db                 xor ebx, ebx
// 007fabcd  6a54                 push 0x54
// 007fabcf  53                   push ebx
// 007fabd0  57                   push edi
// 007fabd1  8bf1                 mov esi, ecx
// 007fabd3  895c2424             mov dword ptr [esp + 0x24], ebx
// 007fabd7  e8c89effff           call 0x7f4aa4
// 007fabdc  c7470400000044       mov dword ptr [edi + 4], 0x44000000
// 007fabe3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007fabe9  83c40c               add esp, 0xc
// 007fabec  83f8ff               cmp eax, -1
// 007fabef  750f                 jne 0x7fac00
// 007fabf1  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007fabf7  3bcb                 cmp ecx, ebx
// 007fabf9  7405                 je 0x7fac00
// 007fabfb  e8b0b9ffff           call 0x7f65b0
// 007fac00  3bc3                 cmp eax, ebx
// 007fac02  0f84d4000000         je 0x7facdc
// 007fac08  e8c34d0300           call 0x82f9d0
// 007fac0d  6a08                 push 8
// 007fac0f  8bc8                 mov ecx, eax
// 007fac11  e8ea440300           call 0x82f100
// 007fac16  894714               mov dword ptr [edi + 0x14], eax
// 007fac19  8d442428             lea eax, [esp + 0x28]
// 007fac1d  50                   push eax
// 007fac1e  8bce                 mov ecx, esi
// 007fac20  e86be7ffff           call 0x7f9390
// 007fac25  895c2434             mov dword ptr [esp + 0x34], ebx
// 007fac29  bb01000000           mov ebx, 1
// 007fac2e  8bc8                 mov ecx, eax
// 007fac30  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fac34  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007fac3a  84c0                 test al, al
// 007fac3c  7557                 jne 0x7fac95
// 007fac3e  8d4c2420             lea ecx, [esp + 0x20]
// 007fac42  51                   push ecx
// 007fac43  8bce                 mov ecx, esi
// 007fac45  e8b6f6ffff           call 0x7fa300
// 007fac4a  8be8                 mov ebp, eax
// 007fac4c  8d542424             lea edx, [esp + 0x24]
// 007fac50  52                   push edx
// 007fac51  8bce                 mov ecx, esi
// 007fac53  895c2438             mov dword ptr [esp + 0x38], ebx
// 007fac57  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 007fac5f  e82ce7ffff           call 0x7f9390
// 007fac64  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fac68  bb07000000           mov ebx, 7
// 007fac6d  8bcd                 mov ecx, ebp
// 007fac6f  c744243402000000     mov dword ptr [esp + 0x34], 2
// 007fac77  895c2418             mov dword ptr [esp + 0x18], ebx
// 007fac7b  ff1580de9800         call dword ptr [0x98de80]
// 007fac81  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fac85  50                   push eax
// 007fac86  ff1584de9800         call dword ptr [0x98de84]
// 007fac8c  c644241701           mov byte ptr [esp + 0x17], 1
// 007fac91  85c0                 test eax, eax
// 007fac93  7405                 je 0x7fac9a
// 007fac95  c644241700           mov byte ptr [esp + 0x17], 0
// 007fac9a  f6c304               test bl, 4
// 007fac9d  740d                 je 0x7facac
// 007fac9f  8d4c2424             lea ecx, [esp + 0x24]
// 007faca3  83e3fb               and ebx, 0xfffffffb
// 007faca6  ff15c0de9800         call dword ptr [0x98dec0]
// 007facac  f6c302               test bl, 2
// 007facaf  740d                 je 0x7facbe
// 007facb1  8d4c2420             lea ecx, [esp + 0x20]
// 007facb5  83e3fd               and ebx, 0xfffffffd
// 007facb8  ff15c0de9800         call dword ptr [0x98dec0]
// 007facbe  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 007facc6  f6c301               test bl, 1
// 007facc9  740a                 je 0x7facd5
// 007faccb  8d4c2428             lea ecx, [esp + 0x28]
// 007faccf  ff15c0de9800         call dword ptr [0x98dec0]
// 007facd5  807c241700           cmp byte ptr [esp + 0x17], 0
// 007facda  7411                 je 0x7faced
// 007facdc  e8ef4c0300           call 0x82f9d0
// 007face1  6a11                 push 0x11
// 007face3  8bc8                 mov ecx, eax
// 007face5  e816440300           call 0x82f100
// 007facea  894714               mov dword ptr [edi + 0x14], eax
// 007faced  8bce                 mov ecx, esi
// 007facef  e84cb2ffff           call 0x7f5f40
// 007facf4  8b10                 mov edx, dword ptr [eax]
// 007facf6  8bc8                 mov ecx, eax
// 007facf8  8b4268               mov eax, dword ptr [edx + 0x68]
// 007facfb  56                   push esi
// 007facfc  ffd0                 call eax
// 007facfe  894740               mov dword ptr [edi + 0x40], eax
// 007fad01  8bc7                 mov eax, edi
// 007fad03  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fad07  64890d00000000       mov dword ptr fs:[0], ecx
// 007fad0e  59                   pop ecx
// 007fad0f  5f                   pop edi
// 007fad10  5e                   pop esi
// 007fad11  5d                   pop ebp
// 007fad12  5b                   pop ebx
// 007fad13  83c424               add esp, 0x24
// 007fad16  c20400               ret 4
// copied from an identical function in another client (function ?GetDefaultCharFormat@CXTPControlComboBox@@UAE?AUCHARFORMAT2A@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp