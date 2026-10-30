// roc 2009-12 0088bda0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 484 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088bda0
//
// 0088bda0  6aff                 push -1
// 0088bda2  685a8c9500           push 0x958c5a
// 0088bda7  64a100000000         mov eax, dword ptr fs:[0]
// 0088bdad  50                   push eax
// 0088bdae  83ec14               sub esp, 0x14
// 0088bdb1  53                   push ebx
// 0088bdb2  55                   push ebp
// 0088bdb3  56                   push esi
// 0088bdb4  57                   push edi
// 0088bdb5  a10052b600           mov eax, dword ptr [0xb65200]
// 0088bdba  33c4                 xor eax, esp
// 0088bdbc  50                   push eax
// 0088bdbd  8d442428             lea eax, [esp + 0x28]
// 0088bdc1  64a300000000         mov dword ptr fs:[0], eax
// 0088bdc7  8bf1                 mov esi, ecx
// 0088bdc9  8d442424             lea eax, [esp + 0x24]
// 0088bdcd  33ff                 xor edi, edi
// 0088bdcf  50                   push eax
// 0088bdd0  897c241c             mov dword ptr [esp + 0x1c], edi
// 0088bdd4  e867f4ffff           call 0x88b240
// 0088bdd9  bb01000000           mov ebx, 1
// 0088bdde  8bc8                 mov ecx, eax
// 0088bde0  897c2430             mov dword ptr [esp + 0x30], edi
// 0088bde4  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088bde8  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088bdee  84c0                 test al, al
// 0088bdf0  7553                 jne 0x88be45
// 0088bdf2  8d4c2420             lea ecx, [esp + 0x20]
// 0088bdf6  51                   push ecx
// 0088bdf7  8bce                 mov ecx, esi
// 0088bdf9  e842f4ffff           call 0x88b240
// 0088bdfe  8bf8                 mov edi, eax
// 0088be00  8d54241c             lea edx, [esp + 0x1c]
// 0088be04  52                   push edx
// 0088be05  8bce                 mov ecx, esi
// 0088be07  895c2434             mov dword ptr [esp + 0x34], ebx
// 0088be0b  c744241c03000000     mov dword ptr [esp + 0x1c], 3
// 0088be13  e808f7ffff           call 0x88b520
// 0088be18  8be8                 mov ebp, eax
// 0088be1a  bb07000000           mov ebx, 7
// 0088be1f  8bcf                 mov ecx, edi
// 0088be21  c744243002000000     mov dword ptr [esp + 0x30], 2
// 0088be29  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088be2d  ff1580de9800         call dword ptr [0x98de80]
// 0088be33  50                   push eax
// 0088be34  8bcd                 mov ecx, ebp
// 0088be36  ff1584de9800         call dword ptr [0x98de84]
// 0088be3c  c644241701           mov byte ptr [esp + 0x17], 1
// 0088be41  85c0                 test eax, eax
// 0088be43  7405                 je 0x88be4a
// 0088be45  c644241700           mov byte ptr [esp + 0x17], 0
// 0088be4a  f6c304               test bl, 4
// 0088be4d  740d                 je 0x88be5c
// 0088be4f  8d4c241c             lea ecx, [esp + 0x1c]
// 0088be53  83e3fb               and ebx, 0xfffffffb
// 0088be56  ff15c0de9800         call dword ptr [0x98dec0]
// 0088be5c  f6c302               test bl, 2
// 0088be5f  740d                 je 0x88be6e
// 0088be61  8d4c2420             lea ecx, [esp + 0x20]
// 0088be65  83e3fd               and ebx, 0xfffffffd
// 0088be68  ff15c0de9800         call dword ptr [0x98dec0]
// 0088be6e  83cfff               or edi, 0xffffffff
// 0088be71  897c2430             mov dword ptr [esp + 0x30], edi
// 0088be75  f6c301               test bl, 1
// 0088be78  740d                 je 0x88be87
// 0088be7a  8d4c2424             lea ecx, [esp + 0x24]
// 0088be7e  83e3fe               and ebx, 0xfffffffe
// 0088be81  ff15c0de9800         call dword ptr [0x98dec0]
// 0088be87  807c241700           cmp byte ptr [esp + 0x17], 0
// 0088be8c  7431                 je 0x88bebf
// 0088be8e  6856fd9900           push 0x99fd56
// 0088be93  8d4c241c             lea ecx, [esp + 0x1c]
// 0088be97  ff15b8de9800         call dword ptr [0x98deb8]
// 0088be9d  8d442418             lea eax, [esp + 0x18]
// 0088bea1  50                   push eax
// 0088bea2  8bce                 mov ecx, esi
// 0088bea4  c744243403000000     mov dword ptr [esp + 0x34], 3
// 0088beac  e8cff6ffff           call 0x88b580
// 0088beb1  8d4c2418             lea ecx, [esp + 0x18]
// 0088beb5  897c2430             mov dword ptr [esp + 0x30], edi
// 0088beb9  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bebf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088bec3  51                   push ecx
// 0088bec4  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0088beca  ff155cde9800         call dword ptr [0x98de5c]
// 0088bed0  8d542420             lea edx, [esp + 0x20]
// 0088bed4  52                   push edx
// 0088bed5  8bce                 mov ecx, esi
// 0088bed7  e844f6ffff           call 0x88b520
// 0088bedc  83cb08               or ebx, 8
// 0088bedf  8bc8                 mov ecx, eax
// 0088bee1  c744243004000000     mov dword ptr [esp + 0x30], 4
// 0088bee9  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088beed  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088bef3  84c0                 test al, al
// 0088bef5  7420                 je 0x88bf17
// 0088bef7  8d442424             lea eax, [esp + 0x24]
// 0088befb  50                   push eax
// 0088befc  8bce                 mov ecx, esi
// 0088befe  e83df3ffff           call 0x88b240
// 0088bf03  8bc8                 mov ecx, eax
// 0088bf05  83cb10               or ebx, 0x10
// 0088bf08  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088bf0e  c644243801           mov byte ptr [esp + 0x38], 1
// 0088bf13  84c0                 test al, al
// 0088bf15  7405                 je 0x88bf1c
// 0088bf17  c644243800           mov byte ptr [esp + 0x38], 0
// 0088bf1c  f6c310               test bl, 0x10
// 0088bf1f  740d                 je 0x88bf2e
// 0088bf21  8d4c2424             lea ecx, [esp + 0x24]
// 0088bf25  83e3ef               and ebx, 0xffffffef
// 0088bf28  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bf2e  897c2430             mov dword ptr [esp + 0x30], edi
// 0088bf32  f6c308               test bl, 8
// 0088bf35  740a                 je 0x88bf41
// 0088bf37  8d4c2420             lea ecx, [esp + 0x20]
// 0088bf3b  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bf41  807c243800           cmp byte ptr [esp + 0x38], 0
// 0088bf46  7426                 je 0x88bf6e
// 0088bf48  8d4c2438             lea ecx, [esp + 0x38]
// 0088bf4c  51                   push ecx
// 0088bf4d  8bce                 mov ecx, esi
// 0088bf4f  e8ecf2ffff           call 0x88b240
// 0088bf54  50                   push eax
// 0088bf55  8bce                 mov ecx, esi
// 0088bf57  c744243405000000     mov dword ptr [esp + 0x34], 5
// 0088bf5f  e81cf6ffff           call 0x88b580
// 0088bf64  8d4c2438             lea ecx, [esp + 0x38]
// 0088bf68  ff15c0de9800         call dword ptr [0x98dec0]
// 0088bf6e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088bf72  64890d00000000       mov dword ptr fs:[0], ecx
// 0088bf79  59                   pop ecx
// 0088bf7a  5f                   pop edi
// 0088bf7b  5e                   pop esi
// 0088bf7c  5d                   pop ebp
// 0088bf7d  5b                   pop ebx
// 0088bf7e  83c420               add esp, 0x20
// 0088bf81  c20400               ret 4
// copied from an identical function in another client (function ?SetEditHint@CXTPControlEdit@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp