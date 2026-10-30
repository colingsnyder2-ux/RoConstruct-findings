// roc 2011-06 0088f600  unit: CXTPOffice2007Theme  size: 4998 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088f600
//
// 0088f600  6aff                 push -1
// 0088f602  680496a000           push 0xa09604
// 0088f607  64a100000000         mov eax, dword ptr fs:[0]
// 0088f60d  50                   push eax
// 0088f60e  81ec64010000         sub esp, 0x164
// 0088f614  a12058c900           mov eax, dword ptr [0xc95820]
// 0088f619  33c4                 xor eax, esp
// 0088f61b  89842460010000       mov dword ptr [esp + 0x160], eax
// 0088f622  53                   push ebx
// 0088f623  55                   push ebp
// 0088f624  56                   push esi
// 0088f625  57                   push edi
// 0088f626  a12058c900           mov eax, dword ptr [0xc95820]
// 0088f62b  33c4                 xor eax, esp
// 0088f62d  50                   push eax
// 0088f62e  8d842478010000       lea eax, [esp + 0x178]
// 0088f635  64a300000000         mov dword ptr fs:[0], eax
// 0088f63b  8bf1                 mov esi, ecx
// 0088f63d  e81e6e0000           call 0x896460
// 0088f642  8d4c2420             lea ecx, [esp + 0x20]
// 0088f646  e8f5fef7ff           call 0x80f540
// 0088f64b  33ed                 xor ebp, ebp
// 0088f64d  bf90010000           mov edi, 0x190
// 0088f652  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 0088f659  396e70               cmp dword ptr [esi + 0x70], ebp
// 0088f65c  7415                 je 0x88f673
// 0088f65e  e85d1afcff           call 0x8510c0
// 0088f663  8bc8                 mov ecx, eax
// 0088f665  e89623fcff           call 0x851a00
// 0088f66a  85c0                 test eax, eax
// 0088f66c  7405                 je 0x88f673
// 0088f66e  c644245205           mov byte ptr [esp + 0x52], 5
// 0088f673  897c2448             mov dword ptr [esp + 0x48], edi
// 0088f677  39ae18010000         cmp dword ptr [esi + 0x118], ebp
// 0088f67d  7434                 je 0x88f6b3
// 0088f67f  8dbe1c010000         lea edi, [esi + 0x11c]
// 0088f685  8bcf                 mov ecx, edi
// 0088f687  ff15c82da400         call dword ptr [0xa42dc8]
// 0088f68d  50                   push eax
// 0088f68e  e83d03f8ff           call 0x80f9d0
// 0088f693  83c404               add esp, 4
// 0088f696  85c0                 test eax, eax
// 0088f698  7419                 je 0x88f6b3
// 0088f69a  8bcf                 mov ecx, edi
// 0088f69c  ff15c82da400         call dword ptr [0xa42dc8]
// 0088f6a2  50                   push eax
// 0088f6a3  8d442458             lea eax, [esp + 0x58]
// 0088f6a7  6a20                 push 0x20
// 0088f6a9  50                   push eax
// 0088f6aa  ff15dc09a400         call dword ptr [0xa409dc]
// 0088f6b0  83c40c               add esp, 0xc
// 0088f6b3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088f6b7  83c10a               add ecx, 0xa
// 0088f6ba  83f909               cmp ecx, 9
// 0088f6bd  7708                 ja 0x88f6c7
// 0088f6bf  c7442438f5ffffff     mov dword ptr [esp + 0x38], 0xfffffff5
// 0088f6c7  39aebc050000         cmp dword ptr [esi + 0x5bc], ebp
// 0088f6cd  8dbeb4050000         lea edi, [esi + 0x5b4]
// 0088f6d3  7505                 jne 0x88f6da
// 0088f6d5  396f04               cmp dword ptr [edi + 4], ebp
// 0088f6d8  751a                 jne 0x88f6f4
// 0088f6da  8bcf                 mov ecx, edi
// 0088f6dc  e83baff7ff           call 0x80a61c
// 0088f6e1  8d542438             lea edx, [esp + 0x38]
// 0088f6e5  52                   push edx
// 0088f6e6  ff152001a400         call dword ptr [0xa40120]
// 0088f6ec  50                   push eax
// 0088f6ed  8bcf                 mov ecx, edi
// 0088f6ef  e834aff7ff           call 0x80a628
// 0088f6f4  55                   push ebp
// 0088f6f5  8d442420             lea eax, [esp + 0x20]
// 0088f6f9  50                   push eax
// 0088f6fa  55                   push ebp
// 0088f6fb  bb01000000           mov ebx, 1
// 0088f700  6a05                 push 5
// 0088f702  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0088f706  ff155c1ba400         call dword ptr [0xa41b5c]
// 0088f70c  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 0088f712  6a04                 push 4
// 0088f714  ffd7                 call edi
// 0088f716  83f811               cmp eax, 0x11
// 0088f719  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 0088f71f  7f05                 jg 0x88f726
// 0088f721  b811000000           mov eax, 0x11
// 0088f726  6a04                 push 4
// 0088f728  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 0088f72e  ffd7                 call edi
// 0088f730  40                   inc eax
// 0088f731  83f812               cmp eax, 0x12
// 0088f734  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 0088f73a  7f05                 jg 0x88f741
// 0088f73c  b812000000           mov eax, 0x12
// 0088f741  51                   push ecx
// 0088f742  8bcc                 mov ecx, esp
// 0088f744  89642418             mov dword ptr [esp + 0x18], esp
// 0088f748  681012ad00           push 0xad1210
// 0088f74d  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 0088f753  ff15002ea400         call dword ptr [0xa42e00]
// 0088f759  51                   push ecx
// 0088f75a  8bcc                 mov ecx, esp
// 0088f75c  89642420             mov dword ptr [esp + 0x20], esp
// 0088f760  68cc7cac00           push 0xac7ccc
// 0088f765  89ac248c010000       mov dword ptr [esp + 0x18c], ebp
// 0088f76c  ff15002ea400         call dword ptr [0xa42e00]
// 0088f772  8bce                 mov ecx, esi
// 0088f774  e807fbffff           call 0x88f280
// 0088f779  83cfff               or edi, 0xffffffff
// 0088f77c  8bc8                 mov ecx, eax
// 0088f77e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088f785  e8c6e70500           call 0x8edf50
// 0088f78a  51                   push ecx
// 0088f78b  8bcc                 mov ecx, esp
// 0088f78d  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088f791  680012ad00           push 0xad1200
// 0088f796  894624               mov dword ptr [esi + 0x24], eax
// 0088f799  ff15002ea400         call dword ptr [0xa42e00]
// 0088f79f  51                   push ecx
// 0088f7a0  8bcc                 mov ecx, esp
// 0088f7a2  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088f7a6  68cc7cac00           push 0xac7ccc
// 0088f7ab  899c248c010000       mov dword ptr [esp + 0x18c], ebx
// 0088f7b2  ff15002ea400         call dword ptr [0xa42e00]
// 0088f7b8  8bce                 mov ecx, esi
// 0088f7ba  e8c1faffff           call 0x88f280
// 0088f7bf  8bc8                 mov ecx, eax
// 0088f7c1  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088f7c8  e883e70500           call 0x8edf50
// 0088f7cd  d905685ba700         fld dword ptr [0xa75b68]
// 0088f7d3  83ec08               sub esp, 8
// 0088f7d6  d95c2404             fstp dword ptr [esp + 4]
// 0088f7da  8bcc                 mov ecx, esp
// 0088f7dc  89642420             mov dword ptr [esp + 0x20], esp
// 0088f7e0  68e811ad00           push 0xad11e8
// 0088f7e5  8986fc050000         mov dword ptr [esi + 0x5fc], eax
// 0088f7eb  ff15002ea400         call dword ptr [0xa42e00]
// 0088f7f1  51                   push ecx
// 0088f7f2  8bcc                 mov ecx, esp
// 0088f7f4  89642420             mov dword ptr [esp + 0x20], esp
// 0088f7f8  68cc7cac00           push 0xac7ccc
// 0088f7fd  c784249001000002000000 mov dword ptr [esp + 0x190], 2
// 0088f808  ff15002ea400         call dword ptr [0xa42e00]
// 0088f80e  8bce                 mov ecx, esi
// 0088f810  e86bfaffff           call 0x88f280
// 0088f815  8bc8                 mov ecx, eax
// 0088f817  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0088f81e  e82de70500           call 0x8edf50
// 0088f823  50                   push eax
// 0088f824  51                   push ecx
// 0088f825  8bcc                 mov ecx, esp
// 0088f827  89642424             mov dword ptr [esp + 0x24], esp
// 0088f82b  68d011ad00           push 0xad11d0
// 0088f830  ff15002ea400         call dword ptr [0xa42e00]
// 0088f836  51                   push ecx
// 0088f837  8bcc                 mov ecx, esp
// 0088f839  89642424             mov dword ptr [esp + 0x24], esp
// 0088f83d  68cc7cac00           push 0xac7ccc
// 0088f842  c784249401000003000000 mov dword ptr [esp + 0x194], 3
// 0088f84d  ff15002ea400         call dword ptr [0xa42e00]
// 0088f853  8bce                 mov ecx, esi
// 0088f855  e826faffff           call 0x88f280
// 0088f85a  8bc8                 mov ecx, eax
// 0088f85c  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0088f863  e8e8e60500           call 0x8edf50
// 0088f868  50                   push eax
// 0088f869  8d8e00060000         lea ecx, [esi + 0x600]
// 0088f86f  e89c50fbff           call 0x844910
// 0088f874  d905685ba700         fld dword ptr [0xa75b68]
// 0088f87a  83ec08               sub esp, 8
// 0088f87d  d95c2404             fstp dword ptr [esp + 4]
// 0088f881  8bcc                 mov ecx, esp
// 0088f883  89642420             mov dword ptr [esp + 0x20], esp
// 0088f887  68b811ad00           push 0xad11b8
// 0088f88c  ff15002ea400         call dword ptr [0xa42e00]
// 0088f892  51                   push ecx
// 0088f893  8bcc                 mov ecx, esp
// 0088f895  89642420             mov dword ptr [esp + 0x20], esp
// 0088f899  68cc7cac00           push 0xac7ccc
// 0088f89e  c784249001000004000000 mov dword ptr [esp + 0x190], 4
// 0088f8a9  ff15002ea400         call dword ptr [0xa42e00]
// 0088f8af  8bce                 mov ecx, esi
// 0088f8b1  e8caf9ffff           call 0x88f280
// 0088f8b6  8bc8                 mov ecx, eax
// 0088f8b8  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0088f8bf  e88ce60500           call 0x8edf50
// 0088f8c4  50                   push eax
// 0088f8c5  51                   push ecx
// 0088f8c6  8bcc                 mov ecx, esp
// 0088f8c8  89642424             mov dword ptr [esp + 0x24], esp
// 0088f8cc  689c11ad00           push 0xad119c
// 0088f8d1  ff15002ea400         call dword ptr [0xa42e00]
// 0088f8d7  51                   push ecx
// 0088f8d8  8bcc                 mov ecx, esp
// 0088f8da  89642424             mov dword ptr [esp + 0x24], esp
// 0088f8de  68cc7cac00           push 0xac7ccc
// 0088f8e3  c784249401000005000000 mov dword ptr [esp + 0x194], 5
// 0088f8ee  ff15002ea400         call dword ptr [0xa42e00]
// 0088f8f4  8bce                 mov ecx, esi
// 0088f8f6  e885f9ffff           call 0x88f280
// 0088f8fb  8bc8                 mov ecx, eax
// 0088f8fd  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0088f904  e847e60500           call 0x8edf50
// 0088f909  50                   push eax
// 0088f90a  8d8e20060000         lea ecx, [esi + 0x620]
// 0088f910  e8fb4ffbff           call 0x844910
// 0088f915  51                   push ecx
// 0088f916  8bcc                 mov ecx, esp
// 0088f918  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088f91c  689011ad00           push 0xad1190
// 0088f921  ff15002ea400         call dword ptr [0xa42e00]
// 0088f927  51                   push ecx
// 0088f928  8bcc                 mov ecx, esp
// 0088f92a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088f92e  68200cad00           push 0xad0c20
// 0088f933  c784248c01000006000000 mov dword ptr [esp + 0x18c], 6
// 0088f93e  ff15002ea400         call dword ptr [0xa42e00]
// 0088f944  8bce                 mov ecx, esi
// 0088f946  e835f9ffff           call 0x88f280
// 0088f94b  8bc8                 mov ecx, eax
// 0088f94d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088f954  e8f7e50500           call 0x8edf50
// 0088f959  50                   push eax
// 0088f95a  8d8e5c040000         lea ecx, [esi + 0x45c]
// 0088f960  e8cb59fbff           call 0x845330
// 0088f965  d90548fba700         fld dword ptr [0xa7fb48]
// 0088f96b  83ec08               sub esp, 8
// 0088f96e  d95c2404             fstp dword ptr [esp + 4]
// 0088f972  8bcc                 mov ecx, esp
// 0088f974  89642420             mov dword ptr [esp + 0x20], esp
// 0088f978  688011ad00           push 0xad1180
// 0088f97d  ff15002ea400         call dword ptr [0xa42e00]
// 0088f983  51                   push ecx
// 0088f984  8bcc                 mov ecx, esp
// 0088f986  89642420             mov dword ptr [esp + 0x20], esp
// 0088f98a  68200cad00           push 0xad0c20
// 0088f98f  c784249001000007000000 mov dword ptr [esp + 0x190], 7
// 0088f99a  ff15002ea400         call dword ptr [0xa42e00]
// 0088f9a0  8bce                 mov ecx, esi
// 0088f9a2  e8d9f8ffff           call 0x88f280
// 0088f9a7  8bc8                 mov ecx, eax
// 0088f9a9  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0088f9b0  e89be50500           call 0x8edf50
// 0088f9b5  50                   push eax
// 0088f9b6  51                   push ecx
// 0088f9b7  8bcc                 mov ecx, esp
// 0088f9b9  89642424             mov dword ptr [esp + 0x24], esp
// 0088f9bd  686c11ad00           push 0xad116c
// 0088f9c2  ff15002ea400         call dword ptr [0xa42e00]
// 0088f9c8  51                   push ecx
// 0088f9c9  8bcc                 mov ecx, esp
// 0088f9cb  89642424             mov dword ptr [esp + 0x24], esp
// 0088f9cf  68200cad00           push 0xad0c20
// 0088f9d4  c784249401000008000000 mov dword ptr [esp + 0x194], 8
// 0088f9df  ff15002ea400         call dword ptr [0xa42e00]
// 0088f9e5  8bce                 mov ecx, esi
// 0088f9e7  e894f8ffff           call 0x88f280
// 0088f9ec  8bc8                 mov ecx, eax
// 0088f9ee  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0088f9f5  e856e50500           call 0x8edf50
// 0088f9fa  50                   push eax
// 0088f9fb  8d8e7c040000         lea ecx, [esi + 0x47c]
// 0088fa01  e80a4ffbff           call 0x844910
// 0088fa06  51                   push ecx
// 0088fa07  8bcc                 mov ecx, esp
// 0088fa09  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fa0d  685811ad00           push 0xad1158
// 0088fa12  ff15002ea400         call dword ptr [0xa42e00]
// 0088fa18  51                   push ecx
// 0088fa19  8bcc                 mov ecx, esp
// 0088fa1b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fa1f  68200cad00           push 0xad0c20
// 0088fa24  c784248c01000009000000 mov dword ptr [esp + 0x18c], 9
// 0088fa2f  ff15002ea400         call dword ptr [0xa42e00]
// 0088fa35  8bce                 mov ecx, esi
// 0088fa37  e844f8ffff           call 0x88f280
// 0088fa3c  8bc8                 mov ecx, eax
// 0088fa3e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fa45  e806e50500           call 0x8edf50
// 0088fa4a  d90548fba700         fld dword ptr [0xa7fb48]
// 0088fa50  83ec08               sub esp, 8
// 0088fa53  d95c2404             fstp dword ptr [esp + 4]
// 0088fa57  8bcc                 mov ecx, esp
// 0088fa59  89642420             mov dword ptr [esp + 0x20], esp
// 0088fa5d  683c11ad00           push 0xad113c
// 0088fa62  898620050000         mov dword ptr [esi + 0x520], eax
// 0088fa68  ff15002ea400         call dword ptr [0xa42e00]
// 0088fa6e  51                   push ecx
// 0088fa6f  8bcc                 mov ecx, esp
// 0088fa71  89642420             mov dword ptr [esp + 0x20], esp
// 0088fa75  68200cad00           push 0xad0c20
// 0088fa7a  c78424900100000a000000 mov dword ptr [esp + 0x190], 0xa
// 0088fa85  ff15002ea400         call dword ptr [0xa42e00]
// 0088fa8b  8bce                 mov ecx, esi
// 0088fa8d  e8eef7ffff           call 0x88f280
// 0088fa92  8bc8                 mov ecx, eax
// 0088fa94  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0088fa9b  e8b0e40500           call 0x8edf50
// 0088faa0  50                   push eax
// 0088faa1  51                   push ecx
// 0088faa2  8bcc                 mov ecx, esp
// 0088faa4  89642424             mov dword ptr [esp + 0x24], esp
// 0088faa8  682011ad00           push 0xad1120
// 0088faad  ff15002ea400         call dword ptr [0xa42e00]
// 0088fab3  51                   push ecx
// 0088fab4  8bcc                 mov ecx, esp
// 0088fab6  89642424             mov dword ptr [esp + 0x24], esp
// 0088faba  68200cad00           push 0xad0c20
// 0088fabf  c78424940100000b000000 mov dword ptr [esp + 0x194], 0xb
// 0088faca  ff15002ea400         call dword ptr [0xa42e00]
// 0088fad0  8bce                 mov ecx, esi
// 0088fad2  e8a9f7ffff           call 0x88f280
// 0088fad7  8bc8                 mov ecx, eax
// 0088fad9  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0088fae0  e86be40500           call 0x8edf50
// 0088fae5  50                   push eax
// 0088fae6  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0088faec  e81f4efbff           call 0x844910
// 0088faf1  d905685ba700         fld dword ptr [0xa75b68]
// 0088faf7  83ec08               sub esp, 8
// 0088fafa  d95c2404             fstp dword ptr [esp + 4]
// 0088fafe  8bcc                 mov ecx, esp
// 0088fb00  89642420             mov dword ptr [esp + 0x20], esp
// 0088fb04  680411ad00           push 0xad1104
// 0088fb09  ff15002ea400         call dword ptr [0xa42e00]
// 0088fb0f  51                   push ecx
// 0088fb10  8bcc                 mov ecx, esp
// 0088fb12  89642420             mov dword ptr [esp + 0x20], esp
// 0088fb16  68200cad00           push 0xad0c20
// 0088fb1b  c78424900100000c000000 mov dword ptr [esp + 0x190], 0xc
// 0088fb26  ff15002ea400         call dword ptr [0xa42e00]
// 0088fb2c  8bce                 mov ecx, esi
// 0088fb2e  e84df7ffff           call 0x88f280
// 0088fb33  8bc8                 mov ecx, eax
// 0088fb35  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0088fb3c  e80fe40500           call 0x8edf50
// 0088fb41  50                   push eax
// 0088fb42  51                   push ecx
// 0088fb43  8bcc                 mov ecx, esp
// 0088fb45  89642424             mov dword ptr [esp + 0x24], esp
// 0088fb49  68e410ad00           push 0xad10e4
// 0088fb4e  ff15002ea400         call dword ptr [0xa42e00]
// 0088fb54  51                   push ecx
// 0088fb55  8bcc                 mov ecx, esp
// 0088fb57  89642424             mov dword ptr [esp + 0x24], esp
// 0088fb5b  68200cad00           push 0xad0c20
// 0088fb60  c78424940100000d000000 mov dword ptr [esp + 0x194], 0xd
// 0088fb6b  ff15002ea400         call dword ptr [0xa42e00]
// 0088fb71  8bce                 mov ecx, esi
// 0088fb73  e808f7ffff           call 0x88f280
// 0088fb78  8bc8                 mov ecx, eax
// 0088fb7a  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0088fb81  e8cae30500           call 0x8edf50
// 0088fb86  8d9efc040000         lea ebx, [esi + 0x4fc]
// 0088fb8c  50                   push eax
// 0088fb8d  8bcb                 mov ecx, ebx
// 0088fb8f  e87c4dfbff           call 0x844910
// 0088fb94  d905685ba700         fld dword ptr [0xa75b68]
// 0088fb9a  83ec08               sub esp, 8
// 0088fb9d  d95c2404             fstp dword ptr [esp + 4]
// 0088fba1  8bcc                 mov ecx, esp
// 0088fba3  89642420             mov dword ptr [esp + 0x20], esp
// 0088fba7  688401ad00           push 0xad0184
// 0088fbac  ff15002ea400         call dword ptr [0xa42e00]
// 0088fbb2  51                   push ecx
// 0088fbb3  8bcc                 mov ecx, esp
// 0088fbb5  89642420             mov dword ptr [esp + 0x20], esp
// 0088fbb9  68200cad00           push 0xad0c20
// 0088fbbe  c78424900100000e000000 mov dword ptr [esp + 0x190], 0xe
// 0088fbc9  ff15002ea400         call dword ptr [0xa42e00]
// 0088fbcf  8bce                 mov ecx, esi
// 0088fbd1  e8aaf6ffff           call 0x88f280
// 0088fbd6  8bc8                 mov ecx, eax
// 0088fbd8  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0088fbdf  e86ce30500           call 0x8edf50
// 0088fbe4  50                   push eax
// 0088fbe5  51                   push ecx
// 0088fbe6  8bcc                 mov ecx, esp
// 0088fbe8  89642424             mov dword ptr [esp + 0x24], esp
// 0088fbec  686401ad00           push 0xad0164
// 0088fbf1  ff15002ea400         call dword ptr [0xa42e00]
// 0088fbf7  51                   push ecx
// 0088fbf8  8bcc                 mov ecx, esp
// 0088fbfa  89642424             mov dword ptr [esp + 0x24], esp
// 0088fbfe  68200cad00           push 0xad0c20
// 0088fc03  c78424940100000f000000 mov dword ptr [esp + 0x194], 0xf
// 0088fc0e  ff15002ea400         call dword ptr [0xa42e00]
// 0088fc14  8bce                 mov ecx, esi
// 0088fc16  e865f6ffff           call 0x88f280
// 0088fc1b  8bc8                 mov ecx, eax
// 0088fc1d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 0088fc24  e827e30500           call 0x8edf50
// 0088fc29  50                   push eax
// 0088fc2a  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0088fc30  e8db4cfbff           call 0x844910
// 0088fc35  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0088fc38  898ec8040000         mov dword ptr [esi + 0x4c8], ecx
// 0088fc3e  8b5308               mov edx, dword ptr [ebx + 8]
// 0088fc41  8996c4040000         mov dword ptr [esi + 0x4c4], edx
// 0088fc47  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0088fc4a  8986d4040000         mov dword ptr [esi + 0x4d4], eax
// 0088fc50  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 0088fc53  898ed0040000         mov dword ptr [esi + 0x4d0], ecx
// 0088fc59  d9431c               fld dword ptr [ebx + 0x1c]
// 0088fc5c  51                   push ecx
// 0088fc5d  d99ed8040000         fstp dword ptr [esi + 0x4d8]
// 0088fc63  8bcc                 mov ecx, esp
// 0088fc65  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fc69  68cc10ad00           push 0xad10cc
// 0088fc6e  896e20               mov dword ptr [esi + 0x20], ebp
// 0088fc71  ff15002ea400         call dword ptr [0xa42e00]
// 0088fc77  51                   push ecx
// 0088fc78  8bcc                 mov ecx, esp
// 0088fc7a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fc7e  68200cad00           push 0xad0c20
// 0088fc83  c784248c01000010000000 mov dword ptr [esp + 0x18c], 0x10
// 0088fc8e  ff15002ea400         call dword ptr [0xa42e00]
// 0088fc94  8bce                 mov ecx, esi
// 0088fc96  e8e5f5ffff           call 0x88f280
// 0088fc9b  8bc8                 mov ecx, eax
// 0088fc9d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fca4  e8a7e20500           call 0x8edf50
// 0088fca9  51                   push ecx
// 0088fcaa  8bcc                 mov ecx, esp
// 0088fcac  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fcb0  68c010ad00           push 0xad10c0
// 0088fcb5  898638050000         mov dword ptr [esi + 0x538], eax
// 0088fcbb  ff15002ea400         call dword ptr [0xa42e00]
// 0088fcc1  51                   push ecx
// 0088fcc2  8bcc                 mov ecx, esp
// 0088fcc4  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fcc8  68200cad00           push 0xad0c20
// 0088fccd  c784248c01000011000000 mov dword ptr [esp + 0x18c], 0x11
// 0088fcd8  ff15002ea400         call dword ptr [0xa42e00]
// 0088fcde  8bce                 mov ecx, esi
// 0088fce0  e89bf5ffff           call 0x88f280
// 0088fce5  8bc8                 mov ecx, eax
// 0088fce7  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fcee  e85de20500           call 0x8edf50
// 0088fcf3  51                   push ecx
// 0088fcf4  8bcc                 mov ecx, esp
// 0088fcf6  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fcfa  68b010ad00           push 0xad10b0
// 0088fcff  8986f8050000         mov dword ptr [esi + 0x5f8], eax
// 0088fd05  c78654030000f6f6f600 mov dword ptr [esi + 0x354], 0xf6f6f6
// 0088fd0f  ff15002ea400         call dword ptr [0xa42e00]
// 0088fd15  51                   push ecx
// 0088fd16  8bcc                 mov ecx, esp
// 0088fd18  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fd1c  68200cad00           push 0xad0c20
// 0088fd21  c784248c01000012000000 mov dword ptr [esp + 0x18c], 0x12
// 0088fd2c  ff15002ea400         call dword ptr [0xa42e00]
// 0088fd32  8bce                 mov ecx, esi
// 0088fd34  e847f5ffff           call 0x88f280
// 0088fd39  8bc8                 mov ecx, eax
// 0088fd3b  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fd42  e809e20500           call 0x8edf50
// 0088fd47  51                   push ecx
// 0088fd48  8bcc                 mov ecx, esp
// 0088fd4a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fd4e  68a010ad00           push 0xad10a0
// 0088fd53  89866c030000         mov dword ptr [esi + 0x36c], eax
// 0088fd59  ff15002ea400         call dword ptr [0xa42e00]
// 0088fd5f  51                   push ecx
// 0088fd60  8bcc                 mov ecx, esp
// 0088fd62  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fd66  68200cad00           push 0xad0c20
// 0088fd6b  c784248c01000013000000 mov dword ptr [esp + 0x18c], 0x13
// 0088fd76  ff15002ea400         call dword ptr [0xa42e00]
// 0088fd7c  8bce                 mov ecx, esi
// 0088fd7e  e8fdf4ffff           call 0x88f280
// 0088fd83  8bc8                 mov ecx, eax
// 0088fd85  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fd8c  e8bfe10500           call 0x8edf50
// 0088fd91  898630030000         mov dword ptr [esi + 0x330], eax
// 0088fd97  89ae78030000         mov dword ptr [esi + 0x378], ebp
// 0088fd9d  89ae84030000         mov dword ptr [esi + 0x384], ebp
// 0088fda3  89ae90030000         mov dword ptr [esi + 0x390], ebp
// 0088fda9  b88d8d8d00           mov eax, 0x8d8d8d
// 0088fdae  51                   push ecx
// 0088fdaf  8bcc                 mov ecx, esp
// 0088fdb1  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fdb5  689410ad00           push 0xad1094
// 0088fdba  898638040000         mov dword ptr [esi + 0x438], eax
// 0088fdc0  898620040000         mov dword ptr [esi + 0x420], eax
// 0088fdc6  89860c030000         mov dword ptr [esi + 0x30c], eax
// 0088fdcc  ff15002ea400         call dword ptr [0xa42e00]
// 0088fdd2  51                   push ecx
// 0088fdd3  8bcc                 mov ecx, esp
// 0088fdd5  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fdd9  685cd0ac00           push 0xacd05c
// 0088fdde  c784248c01000014000000 mov dword ptr [esp + 0x18c], 0x14
// 0088fde9  ff15002ea400         call dword ptr [0xa42e00]
// 0088fdef  8bce                 mov ecx, esi
// 0088fdf1  e88af4ffff           call 0x88f280
// 0088fdf6  8bc8                 mov ecx, eax
// 0088fdf8  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fdff  e84ce10500           call 0x8edf50
// 0088fe04  51                   push ecx
// 0088fe05  8bcc                 mov ecx, esp
// 0088fe07  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fe0b  688010ad00           push 0xad1080
// 0088fe10  8986f0030000         mov dword ptr [esi + 0x3f0], eax
// 0088fe16  ff15002ea400         call dword ptr [0xa42e00]
// 0088fe1c  51                   push ecx
// 0088fe1d  8bcc                 mov ecx, esp
// 0088fe1f  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fe23  68200cad00           push 0xad0c20
// 0088fe28  c784248c01000015000000 mov dword ptr [esp + 0x18c], 0x15
// 0088fe33  ff15002ea400         call dword ptr [0xa42e00]
// 0088fe39  8bce                 mov ecx, esi
// 0088fe3b  e840f4ffff           call 0x88f280
// 0088fe40  8bc8                 mov ecx, eax
// 0088fe42  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fe49  e802e10500           call 0x8edf50
// 0088fe4e  51                   push ecx
// 0088fe4f  8bcc                 mov ecx, esp
// 0088fe51  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fe55  686810ad00           push 0xad1068
// 0088fe5a  89464c               mov dword ptr [esi + 0x4c], eax
// 0088fe5d  ff15002ea400         call dword ptr [0xa42e00]
// 0088fe63  51                   push ecx
// 0088fe64  8bcc                 mov ecx, esp
// 0088fe66  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fe6a  68200cad00           push 0xad0c20
// 0088fe6f  c784248c01000016000000 mov dword ptr [esp + 0x18c], 0x16
// 0088fe7a  ff15002ea400         call dword ptr [0xa42e00]
// 0088fe80  8bce                 mov ecx, esi
// 0088fe82  e8f9f3ffff           call 0x88f280
// 0088fe87  8bc8                 mov ecx, eax
// 0088fe89  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fe90  e8bbe00500           call 0x8edf50
// 0088fe95  51                   push ecx
// 0088fe96  8bcc                 mov ecx, esp
// 0088fe98  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fe9c  685410ad00           push 0xad1054
// 0088fea1  894658               mov dword ptr [esi + 0x58], eax
// 0088fea4  ff15002ea400         call dword ptr [0xa42e00]
// 0088feaa  51                   push ecx
// 0088feab  8bcc                 mov ecx, esp
// 0088fead  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088feb1  68200cad00           push 0xad0c20
// 0088feb6  c784248c01000017000000 mov dword ptr [esp + 0x18c], 0x17
// 0088fec1  ff15002ea400         call dword ptr [0xa42e00]
// 0088fec7  8bce                 mov ecx, esi
// 0088fec9  e8b2f3ffff           call 0x88f280
// 0088fece  8bc8                 mov ecx, eax
// 0088fed0  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088fed7  e874e00500           call 0x8edf50
// 0088fedc  51                   push ecx
// 0088fedd  8bcc                 mov ecx, esp
// 0088fedf  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fee3  684410ad00           push 0xad1044
// 0088fee8  898644040000         mov dword ptr [esi + 0x444], eax
// 0088feee  ff15002ea400         call dword ptr [0xa42e00]
// 0088fef4  51                   push ecx
// 0088fef5  8bcc                 mov ecx, esp
// 0088fef7  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088fefb  686450a900           push 0xa95064
// 0088ff00  c784248c01000018000000 mov dword ptr [esp + 0x18c], 0x18
// 0088ff0b  ff15002ea400         call dword ptr [0xa42e00]
// 0088ff11  8bce                 mov ecx, esi
// 0088ff13  e868f3ffff           call 0x88f280
// 0088ff18  8bc8                 mov ecx, eax
// 0088ff1a  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088ff21  e82ae00500           call 0x8edf50
// 0088ff26  51                   push ecx
// 0088ff27  8bcc                 mov ecx, esp
// 0088ff29  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088ff2d  683810ad00           push 0xad1038
// 0088ff32  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 0088ff38  ff15002ea400         call dword ptr [0xa42e00]
// 0088ff3e  51                   push ecx
// 0088ff3f  8bcc                 mov ecx, esp
// 0088ff41  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088ff45  685cd0ac00           push 0xacd05c
// 0088ff4a  c784248c01000019000000 mov dword ptr [esp + 0x18c], 0x19
// 0088ff55  ff15002ea400         call dword ptr [0xa42e00]
// 0088ff5b  8bce                 mov ecx, esi
// 0088ff5d  e81ef3ffff           call 0x88f280
// 0088ff62  8bc8                 mov ecx, eax
// 0088ff64  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088ff6b  e8e0df0500           call 0x8edf50
// 0088ff70  8986cc030000         mov dword ptr [esi + 0x3cc], eax
// 0088ff76  8b8624050000         mov eax, dword ptr [esi + 0x524]
// 0088ff7c  3bc7                 cmp eax, edi
// 0088ff7e  7506                 jne 0x88ff86
// 0088ff80  8b8620050000         mov eax, dword ptr [esi + 0x520]
// 0088ff86  51                   push ecx
// 0088ff87  8bcc                 mov ecx, esp
// 0088ff89  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088ff8d  682c10ad00           push 0xad102c
// 0088ff92  8986d8030000         mov dword ptr [esi + 0x3d8], eax
// 0088ff98  ff15002ea400         call dword ptr [0xa42e00]
// 0088ff9e  51                   push ecx
// 0088ff9f  8bcc                 mov ecx, esp
// 0088ffa1  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088ffa5  68200cad00           push 0xad0c20
// 0088ffaa  c784248c0100001a000000 mov dword ptr [esp + 0x18c], 0x1a
// 0088ffb5  ff15002ea400         call dword ptr [0xa42e00]
// 0088ffbb  8bce                 mov ecx, esi
// 0088ffbd  e8bef2ffff           call 0x88f280
// 0088ffc2  8bc8                 mov ecx, eax
// 0088ffc4  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0088ffcb  e880df0500           call 0x8edf50
// 0088ffd0  51                   push ecx
// 0088ffd1  8bcc                 mov ecx, esp
// 0088ffd3  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088ffd7  681810ad00           push 0xad1018
// 0088ffdc  8986d0020000         mov dword ptr [esi + 0x2d0], eax
// 0088ffe2  ff15002ea400         call dword ptr [0xa42e00]
// 0088ffe8  51                   push ecx
// 0088ffe9  8bcc                 mov ecx, esp
// 0088ffeb  8964241c             mov dword ptr [esp + 0x1c], esp
// 0088ffef  68200cad00           push 0xad0c20
// 0088fff4  c784248c0100001b000000 mov dword ptr [esp + 0x18c], 0x1b
// 0088ffff  ff15002ea400         call dword ptr [0xa42e00]
// 00890005  8bce                 mov ecx, esi
// 00890007  e874f2ffff           call 0x88f280
// 0089000c  8bc8                 mov ecx, eax
// 0089000e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890015  e836df0500           call 0x8edf50
// 0089001a  51                   push ecx
// 0089001b  8bcc                 mov ecx, esp
// 0089001d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890021  680410ad00           push 0xad1004
// 00890026  89863c030000         mov dword ptr [esi + 0x33c], eax
// 0089002c  ff15002ea400         call dword ptr [0xa42e00]
// 00890032  51                   push ecx
// 00890033  8bcc                 mov ecx, esp
// 00890035  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890039  68200cad00           push 0xad0c20
// 0089003e  c784248c0100001c000000 mov dword ptr [esp + 0x18c], 0x1c
// 00890049  ff15002ea400         call dword ptr [0xa42e00]
// 0089004f  8bce                 mov ecx, esi
// 00890051  e82af2ffff           call 0x88f280
// 00890056  8bc8                 mov ecx, eax
// 00890058  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0089005f  e8ecde0500           call 0x8edf50
// 00890064  51                   push ecx
// 00890065  8bcc                 mov ecx, esp
// 00890067  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089006b  68f00fad00           push 0xad0ff0
// 00890070  898648030000         mov dword ptr [esi + 0x348], eax
// 00890076  ff15002ea400         call dword ptr [0xa42e00]
// 0089007c  51                   push ecx
// 0089007d  8bcc                 mov ecx, esp
// 0089007f  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890083  686450a900           push 0xa95064
// 00890088  c784248c0100001d000000 mov dword ptr [esp + 0x18c], 0x1d
// 00890093  ff15002ea400         call dword ptr [0xa42e00]
// 00890099  8bce                 mov ecx, esi
// 0089009b  e8e0f1ffff           call 0x88f280
// 008900a0  8bc8                 mov ecx, eax
// 008900a2  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008900a9  e8a2de0500           call 0x8edf50
// 008900ae  51                   push ecx
// 008900af  8bcc                 mov ecx, esp
// 008900b1  8964241c             mov dword ptr [esp + 0x1c], esp
// 008900b5  68d80fad00           push 0xad0fd8
// 008900ba  898640060000         mov dword ptr [esi + 0x640], eax
// 008900c0  ff15002ea400         call dword ptr [0xa42e00]
// 008900c6  c78424840100001e000000 mov dword ptr [esp + 0x184], 0x1e
// 008900d1  51                   push ecx
// 008900d2  8bcc                 mov ecx, esp
// 008900d4  8964241c             mov dword ptr [esp + 0x1c], esp
// 008900d8  686450a900           push 0xa95064
// 008900dd  ff15002ea400         call dword ptr [0xa42e00]
// 008900e3  8bce                 mov ecx, esi
// 008900e5  e896f1ffff           call 0x88f280
// 008900ea  8bc8                 mov ecx, eax
// 008900ec  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008900f3  e858de0500           call 0x8edf50
// 008900f8  51                   push ecx
// 008900f9  8bcc                 mov ecx, esp
// 008900fb  8964241c             mov dword ptr [esp + 0x1c], esp
// 008900ff  68c00fad00           push 0xad0fc0
// 00890104  898644060000         mov dword ptr [esi + 0x644], eax
// 0089010a  ff15002ea400         call dword ptr [0xa42e00]
// 00890110  51                   push ecx
// 00890111  8bcc                 mov ecx, esp
// 00890113  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890117  686450a900           push 0xa95064
// 0089011c  c784248c0100001f000000 mov dword ptr [esp + 0x18c], 0x1f
// 00890127  ff15002ea400         call dword ptr [0xa42e00]
// 0089012d  8bce                 mov ecx, esi
// 0089012f  e84cf1ffff           call 0x88f280
// 00890134  8bc8                 mov ecx, eax
// 00890136  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0089013d  e80ede0500           call 0x8edf50
// 00890142  51                   push ecx
// 00890143  8bcc                 mov ecx, esp
// 00890145  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890149  68ac0fad00           push 0xad0fac
// 0089014e  898648060000         mov dword ptr [esi + 0x648], eax
// 00890154  ff15002ea400         call dword ptr [0xa42e00]
// 0089015a  51                   push ecx
// 0089015b  8bcc                 mov ecx, esp
// 0089015d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890161  685cd0ac00           push 0xacd05c
// 00890166  c784248c01000020000000 mov dword ptr [esp + 0x18c], 0x20
// 00890171  ff15002ea400         call dword ptr [0xa42e00]
// 00890177  8bce                 mov ecx, esi
// 00890179  e802f1ffff           call 0x88f280
// 0089017e  8bc8                 mov ecx, eax
// 00890180  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890187  e8c4dd0500           call 0x8edf50
// 0089018c  51                   push ecx
// 0089018d  8bcc                 mov ecx, esp
// 0089018f  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890193  68940fad00           push 0xad0f94
// 00890198  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 0089019e  ff15002ea400         call dword ptr [0xa42e00]
// 008901a4  51                   push ecx
// 008901a5  8bcc                 mov ecx, esp
// 008901a7  8964241c             mov dword ptr [esp + 0x1c], esp
// 008901ab  685cd0ac00           push 0xacd05c
// 008901b0  c784248c01000021000000 mov dword ptr [esp + 0x18c], 0x21
// 008901bb  ff15002ea400         call dword ptr [0xa42e00]
// 008901c1  8bce                 mov ecx, esi
// 008901c3  e8b8f0ffff           call 0x88f280
// 008901c8  8bc8                 mov ecx, eax
// 008901ca  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008901d1  e87add0500           call 0x8edf50
// 008901d6  51                   push ecx
// 008901d7  8bcc                 mov ecx, esp
// 008901d9  8964241c             mov dword ptr [esp + 0x1c], esp
// 008901dd  68800fad00           push 0xad0f80
// 008901e2  8986e8020000         mov dword ptr [esi + 0x2e8], eax
// 008901e8  ff15002ea400         call dword ptr [0xa42e00]
// 008901ee  51                   push ecx
// 008901ef  8bcc                 mov ecx, esp
// 008901f1  8964241c             mov dword ptr [esp + 0x1c], esp
// 008901f5  685cd0ac00           push 0xacd05c
// 008901fa  c784248c01000022000000 mov dword ptr [esp + 0x18c], 0x22
// 00890205  ff15002ea400         call dword ptr [0xa42e00]
// 0089020b  8bce                 mov ecx, esi
// 0089020d  e86ef0ffff           call 0x88f280
// 00890212  8bc8                 mov ecx, eax
// 00890214  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0089021b  e830dd0500           call 0x8edf50
// 00890220  51                   push ecx
// 00890221  8bcc                 mov ecx, esp
// 00890223  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890227  68680fad00           push 0xad0f68
// 0089022c  8986f4020000         mov dword ptr [esi + 0x2f4], eax
// 00890232  ff15002ea400         call dword ptr [0xa42e00]
// 00890238  51                   push ecx
// 00890239  8bcc                 mov ecx, esp
// 0089023b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089023f  685cd0ac00           push 0xacd05c
// 00890244  c784248c01000023000000 mov dword ptr [esp + 0x18c], 0x23
// 0089024f  ff15002ea400         call dword ptr [0xa42e00]
// 00890255  8bce                 mov ecx, esi
// 00890257  e824f0ffff           call 0x88f280
// 0089025c  8bc8                 mov ecx, eax
// 0089025e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890265  e8e6dc0500           call 0x8edf50
// 0089026a  51                   push ecx
// 0089026b  8bcc                 mov ecx, esp
// 0089026d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890271  68540fad00           push 0xad0f54
// 00890276  8986c0030000         mov dword ptr [esi + 0x3c0], eax
// 0089027c  ff15002ea400         call dword ptr [0xa42e00]
// 00890282  51                   push ecx
// 00890283  8bcc                 mov ecx, esp
// 00890285  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890289  685cd0ac00           push 0xacd05c
// 0089028e  c784248c01000024000000 mov dword ptr [esp + 0x18c], 0x24
// 00890299  ff15002ea400         call dword ptr [0xa42e00]
// 0089029f  8bce                 mov ecx, esi
// 008902a1  e8daefffff           call 0x88f280
// 008902a6  8bc8                 mov ecx, eax
// 008902a8  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008902af  e89cdc0500           call 0x8edf50
// 008902b4  51                   push ecx
// 008902b5  8bcc                 mov ecx, esp
// 008902b7  8964241c             mov dword ptr [esp + 0x1c], esp
// 008902bb  683c0fad00           push 0xad0f3c
// 008902c0  898618030000         mov dword ptr [esi + 0x318], eax
// 008902c6  ff15002ea400         call dword ptr [0xa42e00]
// 008902cc  51                   push ecx
// 008902cd  8bcc                 mov ecx, esp
// 008902cf  8964241c             mov dword ptr [esp + 0x1c], esp
// 008902d3  685cd0ac00           push 0xacd05c
// 008902d8  c784248c01000025000000 mov dword ptr [esp + 0x18c], 0x25
// 008902e3  ff15002ea400         call dword ptr [0xa42e00]
// 008902e9  8bce                 mov ecx, esi
// 008902eb  e890efffff           call 0x88f280
// 008902f0  8bc8                 mov ecx, eax
// 008902f2  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008902f9  e852dc0500           call 0x8edf50
// 008902fe  d905685ba700         fld dword ptr [0xa75b68]
// 00890304  83ec08               sub esp, 8
// 00890307  d95c2404             fstp dword ptr [esp + 4]
// 0089030b  8bcc                 mov ecx, esp
// 0089030d  89642420             mov dword ptr [esp + 0x20], esp
// 00890311  68240fad00           push 0xad0f24
// 00890316  898624030000         mov dword ptr [esi + 0x324], eax
// 0089031c  89ae9c030000         mov dword ptr [esi + 0x39c], ebp
// 00890322  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 0089032c  ff15002ea400         call dword ptr [0xa42e00]
// 00890332  51                   push ecx
// 00890333  8bcc                 mov ecx, esp
// 00890335  89642420             mov dword ptr [esp + 0x20], esp
// 00890339  685cd0ac00           push 0xacd05c
// 0089033e  c784249001000026000000 mov dword ptr [esp + 0x190], 0x26
// 00890349  ff15002ea400         call dword ptr [0xa42e00]
// 0089034f  8bce                 mov ecx, esi
// 00890351  e82aefffff           call 0x88f280
// 00890356  8bc8                 mov ecx, eax
// 00890358  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0089035f  e8ecdb0500           call 0x8edf50
// 00890364  50                   push eax
// 00890365  51                   push ecx
// 00890366  8bcc                 mov ecx, esp
// 00890368  89642424             mov dword ptr [esp + 0x24], esp
// 0089036c  680c0fad00           push 0xad0f0c
// 00890371  ff15002ea400         call dword ptr [0xa42e00]
// 00890377  51                   push ecx
// 00890378  8bcc                 mov ecx, esp
// 0089037a  89642424             mov dword ptr [esp + 0x24], esp
// 0089037e  685cd0ac00           push 0xacd05c
// 00890383  c784249401000027000000 mov dword ptr [esp + 0x194], 0x27
// 0089038e  ff15002ea400         call dword ptr [0xa42e00]
// 00890394  8bce                 mov ecx, esi
// 00890396  e8e5eeffff           call 0x88f280
// 0089039b  8bc8                 mov ecx, eax
// 0089039d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 008903a4  e8a7db0500           call 0x8edf50
// 008903a9  50                   push eax
// 008903aa  8d8e90050000         lea ecx, [esi + 0x590]
// 008903b0  e85b45fbff           call 0x844910
// 008903b5  d905685ba700         fld dword ptr [0xa75b68]
// 008903bb  83ec08               sub esp, 8
// 008903be  d95c2404             fstp dword ptr [esp + 4]
// 008903c2  8bcc                 mov ecx, esp
// 008903c4  89642420             mov dword ptr [esp + 0x20], esp
// 008903c8  68f40ead00           push 0xad0ef4
// 008903cd  ff15002ea400         call dword ptr [0xa42e00]
// 008903d3  51                   push ecx
// 008903d4  8bcc                 mov ecx, esp
// 008903d6  89642420             mov dword ptr [esp + 0x20], esp
// 008903da  685cd0ac00           push 0xacd05c
// 008903df  c784249001000028000000 mov dword ptr [esp + 0x190], 0x28
// 008903ea  ff15002ea400         call dword ptr [0xa42e00]
// 008903f0  8bce                 mov ecx, esi
// 008903f2  e889eeffff           call 0x88f280
// 008903f7  8bc8                 mov ecx, eax
// 008903f9  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00890400  e84bdb0500           call 0x8edf50
// 00890405  50                   push eax
// 00890406  51                   push ecx
// 00890407  8bcc                 mov ecx, esp
// 00890409  89642424             mov dword ptr [esp + 0x24], esp
// 0089040d  68dc0ead00           push 0xad0edc
// 00890412  ff15002ea400         call dword ptr [0xa42e00]
// 00890418  51                   push ecx
// 00890419  8bcc                 mov ecx, esp
// 0089041b  89642424             mov dword ptr [esp + 0x24], esp
// 0089041f  685cd0ac00           push 0xacd05c
// 00890424  c784249401000029000000 mov dword ptr [esp + 0x194], 0x29
// 0089042f  ff15002ea400         call dword ptr [0xa42e00]
// 00890435  8bce                 mov ecx, esi
// 00890437  e844eeffff           call 0x88f280
// 0089043c  8bc8                 mov ecx, eax
// 0089043e  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00890445  e806db0500           call 0x8edf50
// 0089044a  50                   push eax
// 0089044b  8d8e50050000         lea ecx, [esi + 0x550]
// 00890451  e8ba44fbff           call 0x844910
// 00890456  d905685ba700         fld dword ptr [0xa75b68]
// 0089045c  83ec08               sub esp, 8
// 0089045f  d95c2404             fstp dword ptr [esp + 4]
// 00890463  8bcc                 mov ecx, esp
// 00890465  89642420             mov dword ptr [esp + 0x20], esp
// 00890469  68c40ead00           push 0xad0ec4
// 0089046e  ff15002ea400         call dword ptr [0xa42e00]
// 00890474  51                   push ecx
// 00890475  8bcc                 mov ecx, esp
// 00890477  89642420             mov dword ptr [esp + 0x20], esp
// 0089047b  685cd0ac00           push 0xacd05c
// 00890480  c78424900100002a000000 mov dword ptr [esp + 0x190], 0x2a
// 0089048b  ff15002ea400         call dword ptr [0xa42e00]
// 00890491  8bce                 mov ecx, esi
// 00890493  e8e8edffff           call 0x88f280
// 00890498  8bc8                 mov ecx, eax
// 0089049a  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 008904a1  e8aada0500           call 0x8edf50
// 008904a6  50                   push eax
// 008904a7  51                   push ecx
// 008904a8  8bcc                 mov ecx, esp
// 008904aa  89642424             mov dword ptr [esp + 0x24], esp
// 008904ae  68ac0ead00           push 0xad0eac
// 008904b3  ff15002ea400         call dword ptr [0xa42e00]
// 008904b9  51                   push ecx
// 008904ba  8bcc                 mov ecx, esp
// 008904bc  89642424             mov dword ptr [esp + 0x24], esp
// 008904c0  685cd0ac00           push 0xacd05c
// 008904c5  c78424940100002b000000 mov dword ptr [esp + 0x194], 0x2b
// 008904d0  ff15002ea400         call dword ptr [0xa42e00]
// 008904d6  8bce                 mov ecx, esi
// 008904d8  e8a3edffff           call 0x88f280
// 008904dd  8bc8                 mov ecx, eax
// 008904df  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 008904e6  e865da0500           call 0x8edf50
// 008904eb  50                   push eax
// 008904ec  8d8e70050000         lea ecx, [esi + 0x570]
// 008904f2  e81944fbff           call 0x844910
// 008904f7  51                   push ecx
// 008904f8  8bcc                 mov ecx, esp
// 008904fa  8964241c             mov dword ptr [esp + 0x1c], esp
// 008904fe  689c0ead00           push 0xad0e9c
// 00890503  ff15002ea400         call dword ptr [0xa42e00]
// 00890509  51                   push ecx
// 0089050a  8bcc                 mov ecx, esp
// 0089050c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890510  685cd0ac00           push 0xacd05c
// 00890515  c784248c0100002c000000 mov dword ptr [esp + 0x18c], 0x2c
// 00890520  ff15002ea400         call dword ptr [0xa42e00]
// 00890526  8bce                 mov ecx, esi
// 00890528  e853edffff           call 0x88f280
// 0089052d  8bc8                 mov ecx, eax
// 0089052f  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890536  e815da0500           call 0x8edf50
// 0089053b  51                   push ecx
// 0089053c  8bcc                 mov ecx, esp
// 0089053e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890542  688c0ead00           push 0xad0e8c
// 00890547  8986cc050000         mov dword ptr [esi + 0x5cc], eax
// 0089054d  ff15002ea400         call dword ptr [0xa42e00]
// 00890553  51                   push ecx
// 00890554  8bcc                 mov ecx, esp
// 00890556  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089055a  685cd0ac00           push 0xacd05c
// 0089055f  c784248c0100002d000000 mov dword ptr [esp + 0x18c], 0x2d
// 0089056a  ff15002ea400         call dword ptr [0xa42e00]
// 00890570  8bce                 mov ecx, esi
// 00890572  e809edffff           call 0x88f280
// 00890577  8bc8                 mov ecx, eax
// 00890579  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890580  e8cbd90500           call 0x8edf50
// 00890585  51                   push ecx
// 00890586  8bcc                 mov ecx, esp
// 00890588  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089058c  687c0ead00           push 0xad0e7c
// 00890591  8986d0050000         mov dword ptr [esi + 0x5d0], eax
// 00890597  ff15002ea400         call dword ptr [0xa42e00]
// 0089059d  51                   push ecx
// 0089059e  8bcc                 mov ecx, esp
// 008905a0  8964241c             mov dword ptr [esp + 0x1c], esp
// 008905a4  685cd0ac00           push 0xacd05c
// 008905a9  c784248c0100002e000000 mov dword ptr [esp + 0x18c], 0x2e
// 008905b4  ff15002ea400         call dword ptr [0xa42e00]
// 008905ba  8bce                 mov ecx, esi
// 008905bc  e8bfecffff           call 0x88f280
// 008905c1  8bc8                 mov ecx, eax
// 008905c3  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008905ca  e881d90500           call 0x8edf50
// 008905cf  51                   push ecx
// 008905d0  8bcc                 mov ecx, esp
// 008905d2  8964241c             mov dword ptr [esp + 0x1c], esp
// 008905d6  686c0ead00           push 0xad0e6c
// 008905db  8986d4050000         mov dword ptr [esi + 0x5d4], eax
// 008905e1  ff15002ea400         call dword ptr [0xa42e00]
// 008905e7  51                   push ecx
// 008905e8  8bcc                 mov ecx, esp
// 008905ea  8964241c             mov dword ptr [esp + 0x1c], esp
// 008905ee  685cd0ac00           push 0xacd05c
// 008905f3  c784248c0100002f000000 mov dword ptr [esp + 0x18c], 0x2f
// 008905fe  ff15002ea400         call dword ptr [0xa42e00]
// 00890604  8bce                 mov ecx, esi
// 00890606  e875ecffff           call 0x88f280
// 0089060b  8bc8                 mov ecx, eax
// 0089060d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890614  e837d90500           call 0x8edf50
// 00890619  51                   push ecx
// 0089061a  8bcc                 mov ecx, esp
// 0089061c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890620  685c0ead00           push 0xad0e5c
// 00890625  8986d8050000         mov dword ptr [esi + 0x5d8], eax
// 0089062b  ff15002ea400         call dword ptr [0xa42e00]
// 00890631  51                   push ecx
// 00890632  8bcc                 mov ecx, esp
// 00890634  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890638  685cd0ac00           push 0xacd05c
// 0089063d  c784248c01000030000000 mov dword ptr [esp + 0x18c], 0x30
// 00890648  ff15002ea400         call dword ptr [0xa42e00]
// 0089064e  8bce                 mov ecx, esi
// 00890650  e82becffff           call 0x88f280
// 00890655  8bc8                 mov ecx, eax
// 00890657  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0089065e  e8edd80500           call 0x8edf50
// 00890663  51                   push ecx
// 00890664  8bcc                 mov ecx, esp
// 00890666  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089066a  684c0ead00           push 0xad0e4c
// 0089066f  8986dc050000         mov dword ptr [esi + 0x5dc], eax
// 00890675  ff15002ea400         call dword ptr [0xa42e00]
// 0089067b  51                   push ecx
// 0089067c  8bcc                 mov ecx, esp
// 0089067e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890682  685cd0ac00           push 0xacd05c
// 00890687  c784248c01000031000000 mov dword ptr [esp + 0x18c], 0x31
// 00890692  ff15002ea400         call dword ptr [0xa42e00]
// 00890698  8bce                 mov ecx, esi
// 0089069a  e8e1ebffff           call 0x88f280
// 0089069f  8bc8                 mov ecx, eax
// 008906a1  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008906a8  e8a3d80500           call 0x8edf50
// 008906ad  51                   push ecx
// 008906ae  8bcc                 mov ecx, esp
// 008906b0  8964241c             mov dword ptr [esp + 0x1c], esp
// 008906b4  683c0ead00           push 0xad0e3c
// 008906b9  8986e0050000         mov dword ptr [esi + 0x5e0], eax
// 008906bf  ff15002ea400         call dword ptr [0xa42e00]
// 008906c5  51                   push ecx
// 008906c6  8bcc                 mov ecx, esp
// 008906c8  8964241c             mov dword ptr [esp + 0x1c], esp
// 008906cc  685cd0ac00           push 0xacd05c
// 008906d1  c784248c01000032000000 mov dword ptr [esp + 0x18c], 0x32
// 008906dc  ff15002ea400         call dword ptr [0xa42e00]
// 008906e2  8bce                 mov ecx, esi
// 008906e4  e897ebffff           call 0x88f280
// 008906e9  8bc8                 mov ecx, eax
// 008906eb  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008906f2  e859d80500           call 0x8edf50
// 008906f7  51                   push ecx
// 008906f8  8bcc                 mov ecx, esp
// 008906fa  8964241c             mov dword ptr [esp + 0x1c], esp
// 008906fe  682c0ead00           push 0xad0e2c
// 00890703  8986e4050000         mov dword ptr [esi + 0x5e4], eax
// 00890709  ff15002ea400         call dword ptr [0xa42e00]
// 0089070f  51                   push ecx
// 00890710  8bcc                 mov ecx, esp
// 00890712  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890716  685cd0ac00           push 0xacd05c
// 0089071b  c784248c01000033000000 mov dword ptr [esp + 0x18c], 0x33
// 00890726  ff15002ea400         call dword ptr [0xa42e00]
// 0089072c  8bce                 mov ecx, esi
// 0089072e  e84debffff           call 0x88f280
// 00890733  8bc8                 mov ecx, eax
// 00890735  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0089073c  e80fd80500           call 0x8edf50
// 00890741  51                   push ecx
// 00890742  8986e8050000         mov dword ptr [esi + 0x5e8], eax
// 00890748  8bcc                 mov ecx, esp
// 0089074a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089074e  68140ead00           push 0xad0e14
// 00890753  ff15002ea400         call dword ptr [0xa42e00]
// 00890759  51                   push ecx
// 0089075a  8bcc                 mov ecx, esp
// 0089075c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890760  685cd0ac00           push 0xacd05c
// 00890765  c784248c01000034000000 mov dword ptr [esp + 0x18c], 0x34
// 00890770  ff15002ea400         call dword ptr [0xa42e00]
// 00890776  8bce                 mov ecx, esi
// 00890778  e803ebffff           call 0x88f280
// 0089077d  8bc8                 mov ecx, eax
// 0089077f  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890786  e8c5d70500           call 0x8edf50
// 0089078b  51                   push ecx
// 0089078c  8bcc                 mov ecx, esp
// 0089078e  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890792  68000ead00           push 0xad0e00
// 00890797  8986f4050000         mov dword ptr [esi + 0x5f4], eax
// 0089079d  ff15002ea400         call dword ptr [0xa42e00]
// 008907a3  51                   push ecx
// 008907a4  8bcc                 mov ecx, esp
// 008907a6  8964241c             mov dword ptr [esp + 0x1c], esp
// 008907aa  685cd0ac00           push 0xacd05c
// 008907af  c784248c01000035000000 mov dword ptr [esp + 0x18c], 0x35
// 008907ba  ff15002ea400         call dword ptr [0xa42e00]
// 008907c0  8bce                 mov ecx, esi
// 008907c2  e8b9eaffff           call 0x88f280
// 008907c7  8bc8                 mov ecx, eax
// 008907c9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008907d0  e87bd70500           call 0x8edf50
// 008907d5  51                   push ecx
// 008907d6  8bcc                 mov ecx, esp
// 008907d8  8964241c             mov dword ptr [esp + 0x1c], esp
// 008907dc  68ec0dad00           push 0xad0dec
// 008907e1  8986f0050000         mov dword ptr [esi + 0x5f0], eax
// 008907e7  ff15002ea400         call dword ptr [0xa42e00]
// 008907ed  51                   push ecx
// 008907ee  8bcc                 mov ecx, esp
// 008907f0  8964241c             mov dword ptr [esp + 0x1c], esp
// 008907f4  685cd0ac00           push 0xacd05c
// 008907f9  c784248c01000036000000 mov dword ptr [esp + 0x18c], 0x36
// 00890804  ff15002ea400         call dword ptr [0xa42e00]
// 0089080a  8bce                 mov ecx, esi
// 0089080c  e86feaffff           call 0x88f280
// 00890811  8bc8                 mov ecx, eax
// 00890813  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0089081a  e831d70500           call 0x8edf50
// 0089081f  51                   push ecx
// 00890820  8bcc                 mov ecx, esp
// 00890822  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890826  68dc0dad00           push 0xad0ddc
// 0089082b  8986ec050000         mov dword ptr [esi + 0x5ec], eax
// 00890831  ff15002ea400         call dword ptr [0xa42e00]
// 00890837  51                   push ecx
// 00890838  8bcc                 mov ecx, esp
// 0089083a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0089083e  68200cad00           push 0xad0c20
// 00890843  c784248c01000037000000 mov dword ptr [esp + 0x18c], 0x37
// 0089084e  ff15002ea400         call dword ptr [0xa42e00]
// 00890854  8bce                 mov ecx, esi
// 00890856  e825eaffff           call 0x88f280
// 0089085b  8bc8                 mov ecx, eax
// 0089085d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00890864  e8e7d60500           call 0x8edf50
// 00890869  51                   push ecx
// 0089086a  8bcc                 mov ecx, esp
// 0089086c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890870  68c80dad00           push 0xad0dc8
// 00890875  898608040000         mov dword ptr [esi + 0x408], eax
// 0089087b  ff15002ea400         call dword ptr [0xa42e00]
// 00890881  51                   push ecx
// 00890882  8bcc                 mov ecx, esp
// 00890884  8964241c             mov dword ptr [esp + 0x1c], esp
// 00890888  68200cad00           push 0xad0c20
// 0089088d  c784248c01000038000000 mov dword ptr [esp + 0x18c], 0x38
// 00890898  ff15002ea400         call dword ptr [0xa42e00]
// 0089089e  8bce                 mov ecx, esi
// 008908a0  e8dbe9ffff           call 0x88f280
// 008908a5  8bc8                 mov ecx, eax
// 008908a7  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008908ae  e89dd60500           call 0x8edf50
// 008908b3  d905685ba700         fld dword ptr [0xa75b68]
// 008908b9  83ec08               sub esp, 8
// 008908bc  d95c2404             fstp dword ptr [esp + 4]
// 008908c0  8bcc                 mov ecx, esp
// 008908c2  89642420             mov dword ptr [esp + 0x20], esp
// 008908c6  68b00dad00           push 0xad0db0
// 008908cb  8986e4030000         mov dword ptr [esi + 0x3e4], eax
// 008908d1  ff15002ea400         call dword ptr [0xa42e00]
// 008908d7  51                   push ecx
// 008908d8  8bcc                 mov ecx, esp
// 008908da  89642420             mov dword ptr [esp + 0x20], esp
// 008908de  68200cad00           push 0xad0c20
// 008908e3  c784249001000039000000 mov dword ptr [esp + 0x190], 0x39
// 008908ee  ff15002ea400         call dword ptr [0xa42e00]
// 008908f4  8bce                 mov ecx, esi
// 008908f6  e885e9ffff           call 0x88f280
// 008908fb  8bc8                 mov ecx, eax
// 008908fd  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00890904  e847d60500           call 0x8edf50
// 00890909  50                   push eax
// 0089090a  51                   push ecx
// 0089090b  8bcc                 mov ecx, esp
// 0089090d  89642424             mov dword ptr [esp + 0x24], esp
// 00890911  68940dad00           push 0xad0d94
// 00890916  ff15002ea400         call dword ptr [0xa42e00]
// 0089091c  51                   push ecx
// 0089091d  8bcc                 mov ecx, esp
// 0089091f  89642424             mov dword ptr [esp + 0x24], esp
// 00890923  68200cad00           push 0xad0c20
// 00890928  c78424940100003a000000 mov dword ptr [esp + 0x194], 0x3a
// 00890933  ff15002ea400         call dword ptr [0xa42e00]
// 00890939  8bce                 mov ecx, esi
// 0089093b  e840e9ffff           call 0x88f280
// 00890940  8bc8                 mov ecx, eax
// 00890942  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00890949  e802d60500           call 0x8edf50
// 0089094e  50                   push eax
// 0089094f  8d4e28               lea ecx, [esi + 0x28]
// 00890952  e8b93ffbff           call 0x844910
// 00890957  8bce                 mov ecx, esi
// 00890959  e8124c0000           call 0x895570
// 0089095e  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 00890965  64890d00000000       mov dword ptr fs:[0], ecx
// 0089096c  59                   pop ecx
// 0089096d  5f                   pop edi
// 0089096e  5e                   pop esi
// 0089096f  5d                   pop ebp
// 00890970  5b                   pop ebx
// 00890971  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00890978  33cc                 xor ecx, esp
// 0089097a  e878aff7ff           call 0x80b8f7
// 0089097f  81c470010000         add esp, 0x170
// 00890985  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2007Theme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp