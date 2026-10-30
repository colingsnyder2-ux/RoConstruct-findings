// roc 2010-06 00832570  unit: CXTPOffice2007Theme  size: 4998 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00832570
//
// 00832570  6aff                 push -1
// 00832572  6834659b00           push 0x9b6534
// 00832577  64a100000000         mov eax, dword ptr fs:[0]
// 0083257d  50                   push eax
// 0083257e  81ec64010000         sub esp, 0x164
// 00832584  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00832589  33c4                 xor eax, esp
// 0083258b  89842460010000       mov dword ptr [esp + 0x160], eax
// 00832592  53                   push ebx
// 00832593  55                   push ebp
// 00832594  56                   push esi
// 00832595  57                   push edi
// 00832596  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0083259b  33c4                 xor eax, esp
// 0083259d  50                   push eax
// 0083259e  8d842478010000       lea eax, [esp + 0x178]
// 008325a5  64a300000000         mov dword ptr fs:[0], eax
// 008325ab  8bf1                 mov esi, ecx
// 008325ad  e87e6e0000           call 0x839430
// 008325b2  8d4c2420             lea ecx, [esp + 0x20]
// 008325b6  e83551feff           call 0x8176f0
// 008325bb  33ed                 xor ebp, ebp
// 008325bd  bf90010000           mov edi, 0x190
// 008325c2  89bc248c000000       mov dword ptr [esp + 0x8c], edi
// 008325c9  396e70               cmp dword ptr [esi + 0x70], ebp
// 008325cc  7415                 je 0x8325e3
// 008325ce  e89dd2fbff           call 0x7ef870
// 008325d3  8bc8                 mov ecx, eax
// 008325d5  e8e6dbfbff           call 0x7f01c0
// 008325da  85c0                 test eax, eax
// 008325dc  7405                 je 0x8325e3
// 008325de  c644245205           mov byte ptr [esp + 0x52], 5
// 008325e3  897c2448             mov dword ptr [esp + 0x48], edi
// 008325e7  39ae18010000         cmp dword ptr [esi + 0x118], ebp
// 008325ed  7434                 je 0x832623
// 008325ef  8dbe1c010000         lea edi, [esi + 0x11c]
// 008325f5  8bcf                 mov ecx, edi
// 008325f7  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008325fd  50                   push eax
// 008325fe  e82daff7ff           call 0x7ad530
// 00832603  83c404               add esp, 4
// 00832606  85c0                 test eax, eax
// 00832608  7419                 je 0x832623
// 0083260a  8bcf                 mov ecx, edi
// 0083260c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00832612  50                   push eax
// 00832613  8d442458             lea eax, [esp + 0x58]
// 00832617  6a20                 push 0x20
// 00832619  50                   push eax
// 0083261a  ff1578a89e00         call dword ptr [0x9ea878]
// 00832620  83c40c               add esp, 0xc
// 00832623  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00832627  83c10a               add ecx, 0xa
// 0083262a  83f909               cmp ecx, 9
// 0083262d  7708                 ja 0x832637
// 0083262f  c7442438f5ffffff     mov dword ptr [esp + 0x38], 0xfffffff5
// 00832637  39aebc050000         cmp dword ptr [esi + 0x5bc], ebp
// 0083263d  8dbeb4050000         lea edi, [esi + 0x5b4]
// 00832643  7505                 jne 0x83264a
// 00832645  396f04               cmp dword ptr [edi + 4], ebp
// 00832648  751a                 jne 0x832664
// 0083264a  8bcf                 mov ecx, edi
// 0083264c  e80d59f7ff           call 0x7a7f5e
// 00832651  8d542438             lea edx, [esp + 0x38]
// 00832655  52                   push edx
// 00832656  ff1570a19e00         call dword ptr [0x9ea170]
// 0083265c  50                   push eax
// 0083265d  8bcf                 mov ecx, edi
// 0083265f  e80659f7ff           call 0x7a7f6a
// 00832664  55                   push ebp
// 00832665  8d442420             lea eax, [esp + 0x20]
// 00832669  50                   push eax
// 0083266a  55                   push ebp
// 0083266b  bb01000000           mov ebx, 1
// 00832670  6a05                 push 5
// 00832672  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00832676  ff1594ba9e00         call dword ptr [0x9eba94]
// 0083267c  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 00832682  6a04                 push 4
// 00832684  ffd7                 call edi
// 00832686  83f811               cmp eax, 0x11
// 00832689  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 0083268f  7f05                 jg 0x832696
// 00832691  b811000000           mov eax, 0x11
// 00832696  6a04                 push 4
// 00832698  8986c4050000         mov dword ptr [esi + 0x5c4], eax
// 0083269e  ffd7                 call edi
// 008326a0  40                   inc eax
// 008326a1  83f812               cmp eax, 0x12
// 008326a4  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 008326aa  7f05                 jg 0x8326b1
// 008326ac  b812000000           mov eax, 0x12
// 008326b1  51                   push ecx
// 008326b2  8bcc                 mov ecx, esp
// 008326b4  89642418             mov dword ptr [esp + 0x18], esp
// 008326b8  68f067a600           push 0xa667f0
// 008326bd  8986c0050000         mov dword ptr [esi + 0x5c0], eax
// 008326c3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008326c9  51                   push ecx
// 008326ca  8bcc                 mov ecx, esp
// 008326cc  89642420             mov dword ptr [esp + 0x20], esp
// 008326d0  6884c0a500           push 0xa5c084
// 008326d5  89ac248c010000       mov dword ptr [esp + 0x18c], ebp
// 008326dc  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008326e2  8bce                 mov ecx, esi
// 008326e4  e807fbffff           call 0x8321f0
// 008326e9  83cfff               or edi, 0xffffffff
// 008326ec  8bc8                 mov ecx, eax
// 008326ee  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008326f5  e8762c0600           call 0x895370
// 008326fa  51                   push ecx
// 008326fb  8bcc                 mov ecx, esp
// 008326fd  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832701  68e067a600           push 0xa667e0
// 00832706  894624               mov dword ptr [esi + 0x24], eax
// 00832709  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083270f  51                   push ecx
// 00832710  8bcc                 mov ecx, esp
// 00832712  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832716  6884c0a500           push 0xa5c084
// 0083271b  899c248c010000       mov dword ptr [esp + 0x18c], ebx
// 00832722  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832728  8bce                 mov ecx, esi
// 0083272a  e8c1faffff           call 0x8321f0
// 0083272f  8bc8                 mov ecx, eax
// 00832731  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832738  e8332c0600           call 0x895370
// 0083273d  d905e026a100         fld dword ptr [0xa126e0]
// 00832743  83ec08               sub esp, 8
// 00832746  d95c2404             fstp dword ptr [esp + 4]
// 0083274a  8bcc                 mov ecx, esp
// 0083274c  89642420             mov dword ptr [esp + 0x20], esp
// 00832750  68c867a600           push 0xa667c8
// 00832755  8986fc050000         mov dword ptr [esi + 0x5fc], eax
// 0083275b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832761  51                   push ecx
// 00832762  8bcc                 mov ecx, esp
// 00832764  89642420             mov dword ptr [esp + 0x20], esp
// 00832768  6884c0a500           push 0xa5c084
// 0083276d  c784249001000002000000 mov dword ptr [esp + 0x190], 2
// 00832778  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083277e  8bce                 mov ecx, esi
// 00832780  e86bfaffff           call 0x8321f0
// 00832785  8bc8                 mov ecx, eax
// 00832787  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0083278e  e8dd2b0600           call 0x895370
// 00832793  50                   push eax
// 00832794  51                   push ecx
// 00832795  8bcc                 mov ecx, esp
// 00832797  89642424             mov dword ptr [esp + 0x24], esp
// 0083279b  68b067a600           push 0xa667b0
// 008327a0  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008327a6  51                   push ecx
// 008327a7  8bcc                 mov ecx, esp
// 008327a9  89642424             mov dword ptr [esp + 0x24], esp
// 008327ad  6884c0a500           push 0xa5c084
// 008327b2  c784249401000003000000 mov dword ptr [esp + 0x194], 3
// 008327bd  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008327c3  8bce                 mov ecx, esi
// 008327c5  e826faffff           call 0x8321f0
// 008327ca  8bc8                 mov ecx, eax
// 008327cc  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 008327d3  e8982b0600           call 0x895370
// 008327d8  50                   push eax
// 008327d9  8d8e00060000         lea ecx, [esi + 0x600]
// 008327df  e82c08fbff           call 0x7e3010
// 008327e4  d905e026a100         fld dword ptr [0xa126e0]
// 008327ea  83ec08               sub esp, 8
// 008327ed  d95c2404             fstp dword ptr [esp + 4]
// 008327f1  8bcc                 mov ecx, esp
// 008327f3  89642420             mov dword ptr [esp + 0x20], esp
// 008327f7  689867a600           push 0xa66798
// 008327fc  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832802  51                   push ecx
// 00832803  8bcc                 mov ecx, esp
// 00832805  89642420             mov dword ptr [esp + 0x20], esp
// 00832809  6884c0a500           push 0xa5c084
// 0083280e  c784249001000004000000 mov dword ptr [esp + 0x190], 4
// 00832819  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083281f  8bce                 mov ecx, esi
// 00832821  e8caf9ffff           call 0x8321f0
// 00832826  8bc8                 mov ecx, eax
// 00832828  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 0083282f  e83c2b0600           call 0x895370
// 00832834  50                   push eax
// 00832835  51                   push ecx
// 00832836  8bcc                 mov ecx, esp
// 00832838  89642424             mov dword ptr [esp + 0x24], esp
// 0083283c  687c67a600           push 0xa6677c
// 00832841  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832847  51                   push ecx
// 00832848  8bcc                 mov ecx, esp
// 0083284a  89642424             mov dword ptr [esp + 0x24], esp
// 0083284e  6884c0a500           push 0xa5c084
// 00832853  c784249401000005000000 mov dword ptr [esp + 0x194], 5
// 0083285e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832864  8bce                 mov ecx, esi
// 00832866  e885f9ffff           call 0x8321f0
// 0083286b  8bc8                 mov ecx, eax
// 0083286d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00832874  e8f72a0600           call 0x895370
// 00832879  50                   push eax
// 0083287a  8d8e20060000         lea ecx, [esi + 0x620]
// 00832880  e88b07fbff           call 0x7e3010
// 00832885  51                   push ecx
// 00832886  8bcc                 mov ecx, esp
// 00832888  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083288c  687067a600           push 0xa66770
// 00832891  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832897  51                   push ecx
// 00832898  8bcc                 mov ecx, esp
// 0083289a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083289e  680062a600           push 0xa66200
// 008328a3  c784248c01000006000000 mov dword ptr [esp + 0x18c], 6
// 008328ae  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008328b4  8bce                 mov ecx, esi
// 008328b6  e835f9ffff           call 0x8321f0
// 008328bb  8bc8                 mov ecx, eax
// 008328bd  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008328c4  e8a72a0600           call 0x895370
// 008328c9  50                   push eax
// 008328ca  8d8e5c040000         lea ecx, [esi + 0x45c]
// 008328d0  e89b11fbff           call 0x7e3a70
// 008328d5  d90558daa200         fld dword ptr [0xa2da58]
// 008328db  83ec08               sub esp, 8
// 008328de  d95c2404             fstp dword ptr [esp + 4]
// 008328e2  8bcc                 mov ecx, esp
// 008328e4  89642420             mov dword ptr [esp + 0x20], esp
// 008328e8  686067a600           push 0xa66760
// 008328ed  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008328f3  51                   push ecx
// 008328f4  8bcc                 mov ecx, esp
// 008328f6  89642420             mov dword ptr [esp + 0x20], esp
// 008328fa  680062a600           push 0xa66200
// 008328ff  c784249001000007000000 mov dword ptr [esp + 0x190], 7
// 0083290a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832910  8bce                 mov ecx, esi
// 00832912  e8d9f8ffff           call 0x8321f0
// 00832917  8bc8                 mov ecx, eax
// 00832919  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00832920  e84b2a0600           call 0x895370
// 00832925  50                   push eax
// 00832926  51                   push ecx
// 00832927  8bcc                 mov ecx, esp
// 00832929  89642424             mov dword ptr [esp + 0x24], esp
// 0083292d  684c67a600           push 0xa6674c
// 00832932  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832938  51                   push ecx
// 00832939  8bcc                 mov ecx, esp
// 0083293b  89642424             mov dword ptr [esp + 0x24], esp
// 0083293f  680062a600           push 0xa66200
// 00832944  c784249401000008000000 mov dword ptr [esp + 0x194], 8
// 0083294f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832955  8bce                 mov ecx, esi
// 00832957  e894f8ffff           call 0x8321f0
// 0083295c  8bc8                 mov ecx, eax
// 0083295e  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00832965  e8062a0600           call 0x895370
// 0083296a  50                   push eax
// 0083296b  8d8e7c040000         lea ecx, [esi + 0x47c]
// 00832971  e89a06fbff           call 0x7e3010
// 00832976  51                   push ecx
// 00832977  8bcc                 mov ecx, esp
// 00832979  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083297d  683867a600           push 0xa66738
// 00832982  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832988  51                   push ecx
// 00832989  8bcc                 mov ecx, esp
// 0083298b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083298f  680062a600           push 0xa66200
// 00832994  c784248c01000009000000 mov dword ptr [esp + 0x18c], 9
// 0083299f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008329a5  8bce                 mov ecx, esi
// 008329a7  e844f8ffff           call 0x8321f0
// 008329ac  8bc8                 mov ecx, eax
// 008329ae  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008329b5  e8b6290600           call 0x895370
// 008329ba  d90558daa200         fld dword ptr [0xa2da58]
// 008329c0  83ec08               sub esp, 8
// 008329c3  d95c2404             fstp dword ptr [esp + 4]
// 008329c7  8bcc                 mov ecx, esp
// 008329c9  89642420             mov dword ptr [esp + 0x20], esp
// 008329cd  681c67a600           push 0xa6671c
// 008329d2  898620050000         mov dword ptr [esi + 0x520], eax
// 008329d8  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008329de  51                   push ecx
// 008329df  8bcc                 mov ecx, esp
// 008329e1  89642420             mov dword ptr [esp + 0x20], esp
// 008329e5  680062a600           push 0xa66200
// 008329ea  c78424900100000a000000 mov dword ptr [esp + 0x190], 0xa
// 008329f5  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008329fb  8bce                 mov ecx, esi
// 008329fd  e8eef7ffff           call 0x8321f0
// 00832a02  8bc8                 mov ecx, eax
// 00832a04  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00832a0b  e860290600           call 0x895370
// 00832a10  50                   push eax
// 00832a11  51                   push ecx
// 00832a12  8bcc                 mov ecx, esp
// 00832a14  89642424             mov dword ptr [esp + 0x24], esp
// 00832a18  680067a600           push 0xa66700
// 00832a1d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832a23  51                   push ecx
// 00832a24  8bcc                 mov ecx, esp
// 00832a26  89642424             mov dword ptr [esp + 0x24], esp
// 00832a2a  680062a600           push 0xa66200
// 00832a2f  c78424940100000b000000 mov dword ptr [esp + 0x194], 0xb
// 00832a3a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832a40  8bce                 mov ecx, esi
// 00832a42  e8a9f7ffff           call 0x8321f0
// 00832a47  8bc8                 mov ecx, eax
// 00832a49  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00832a50  e81b290600           call 0x895370
// 00832a55  50                   push eax
// 00832a56  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00832a5c  e8af05fbff           call 0x7e3010
// 00832a61  d905e026a100         fld dword ptr [0xa126e0]
// 00832a67  83ec08               sub esp, 8
// 00832a6a  d95c2404             fstp dword ptr [esp + 4]
// 00832a6e  8bcc                 mov ecx, esp
// 00832a70  89642420             mov dword ptr [esp + 0x20], esp
// 00832a74  68e466a600           push 0xa666e4
// 00832a79  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832a7f  51                   push ecx
// 00832a80  8bcc                 mov ecx, esp
// 00832a82  89642420             mov dword ptr [esp + 0x20], esp
// 00832a86  680062a600           push 0xa66200
// 00832a8b  c78424900100000c000000 mov dword ptr [esp + 0x190], 0xc
// 00832a96  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832a9c  8bce                 mov ecx, esi
// 00832a9e  e84df7ffff           call 0x8321f0
// 00832aa3  8bc8                 mov ecx, eax
// 00832aa5  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00832aac  e8bf280600           call 0x895370
// 00832ab1  50                   push eax
// 00832ab2  51                   push ecx
// 00832ab3  8bcc                 mov ecx, esp
// 00832ab5  89642424             mov dword ptr [esp + 0x24], esp
// 00832ab9  68c466a600           push 0xa666c4
// 00832abe  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832ac4  51                   push ecx
// 00832ac5  8bcc                 mov ecx, esp
// 00832ac7  89642424             mov dword ptr [esp + 0x24], esp
// 00832acb  680062a600           push 0xa66200
// 00832ad0  c78424940100000d000000 mov dword ptr [esp + 0x194], 0xd
// 00832adb  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832ae1  8bce                 mov ecx, esi
// 00832ae3  e808f7ffff           call 0x8321f0
// 00832ae8  8bc8                 mov ecx, eax
// 00832aea  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00832af1  e87a280600           call 0x895370
// 00832af6  8d9efc040000         lea ebx, [esi + 0x4fc]
// 00832afc  50                   push eax
// 00832afd  8bcb                 mov ecx, ebx
// 00832aff  e80c05fbff           call 0x7e3010
// 00832b04  d905e026a100         fld dword ptr [0xa126e0]
// 00832b0a  83ec08               sub esp, 8
// 00832b0d  d95c2404             fstp dword ptr [esp + 4]
// 00832b11  8bcc                 mov ecx, esp
// 00832b13  89642420             mov dword ptr [esp + 0x20], esp
// 00832b17  686457a600           push 0xa65764
// 00832b1c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832b22  51                   push ecx
// 00832b23  8bcc                 mov ecx, esp
// 00832b25  89642420             mov dword ptr [esp + 0x20], esp
// 00832b29  680062a600           push 0xa66200
// 00832b2e  c78424900100000e000000 mov dword ptr [esp + 0x190], 0xe
// 00832b39  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832b3f  8bce                 mov ecx, esi
// 00832b41  e8aaf6ffff           call 0x8321f0
// 00832b46  8bc8                 mov ecx, eax
// 00832b48  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00832b4f  e81c280600           call 0x895370
// 00832b54  50                   push eax
// 00832b55  51                   push ecx
// 00832b56  8bcc                 mov ecx, esp
// 00832b58  89642424             mov dword ptr [esp + 0x24], esp
// 00832b5c  684457a600           push 0xa65744
// 00832b61  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832b67  51                   push ecx
// 00832b68  8bcc                 mov ecx, esp
// 00832b6a  89642424             mov dword ptr [esp + 0x24], esp
// 00832b6e  680062a600           push 0xa66200
// 00832b73  c78424940100000f000000 mov dword ptr [esp + 0x194], 0xf
// 00832b7e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832b84  8bce                 mov ecx, esi
// 00832b86  e865f6ffff           call 0x8321f0
// 00832b8b  8bc8                 mov ecx, eax
// 00832b8d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00832b94  e8d7270600           call 0x895370
// 00832b99  50                   push eax
// 00832b9a  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00832ba0  e86b04fbff           call 0x7e3010
// 00832ba5  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00832ba8  898ec8040000         mov dword ptr [esi + 0x4c8], ecx
// 00832bae  8b5308               mov edx, dword ptr [ebx + 8]
// 00832bb1  8996c4040000         mov dword ptr [esi + 0x4c4], edx
// 00832bb7  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00832bba  8986d4040000         mov dword ptr [esi + 0x4d4], eax
// 00832bc0  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00832bc3  898ed0040000         mov dword ptr [esi + 0x4d0], ecx
// 00832bc9  d9431c               fld dword ptr [ebx + 0x1c]
// 00832bcc  51                   push ecx
// 00832bcd  d99ed8040000         fstp dword ptr [esi + 0x4d8]
// 00832bd3  8bcc                 mov ecx, esp
// 00832bd5  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832bd9  68ac66a600           push 0xa666ac
// 00832bde  896e20               mov dword ptr [esi + 0x20], ebp
// 00832be1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832be7  51                   push ecx
// 00832be8  8bcc                 mov ecx, esp
// 00832bea  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832bee  680062a600           push 0xa66200
// 00832bf3  c784248c01000010000000 mov dword ptr [esp + 0x18c], 0x10
// 00832bfe  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832c04  8bce                 mov ecx, esi
// 00832c06  e8e5f5ffff           call 0x8321f0
// 00832c0b  8bc8                 mov ecx, eax
// 00832c0d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832c14  e857270600           call 0x895370
// 00832c19  51                   push ecx
// 00832c1a  8bcc                 mov ecx, esp
// 00832c1c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832c20  68a066a600           push 0xa666a0
// 00832c25  898638050000         mov dword ptr [esi + 0x538], eax
// 00832c2b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832c31  51                   push ecx
// 00832c32  8bcc                 mov ecx, esp
// 00832c34  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832c38  680062a600           push 0xa66200
// 00832c3d  c784248c01000011000000 mov dword ptr [esp + 0x18c], 0x11
// 00832c48  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832c4e  8bce                 mov ecx, esi
// 00832c50  e89bf5ffff           call 0x8321f0
// 00832c55  8bc8                 mov ecx, eax
// 00832c57  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832c5e  e80d270600           call 0x895370
// 00832c63  51                   push ecx
// 00832c64  8bcc                 mov ecx, esp
// 00832c66  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832c6a  689066a600           push 0xa66690
// 00832c6f  8986f8050000         mov dword ptr [esi + 0x5f8], eax
// 00832c75  c78654030000f6f6f600 mov dword ptr [esi + 0x354], 0xf6f6f6
// 00832c7f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832c85  51                   push ecx
// 00832c86  8bcc                 mov ecx, esp
// 00832c88  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832c8c  680062a600           push 0xa66200
// 00832c91  c784248c01000012000000 mov dword ptr [esp + 0x18c], 0x12
// 00832c9c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832ca2  8bce                 mov ecx, esi
// 00832ca4  e847f5ffff           call 0x8321f0
// 00832ca9  8bc8                 mov ecx, eax
// 00832cab  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832cb2  e8b9260600           call 0x895370
// 00832cb7  51                   push ecx
// 00832cb8  8bcc                 mov ecx, esp
// 00832cba  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832cbe  688066a600           push 0xa66680
// 00832cc3  89866c030000         mov dword ptr [esi + 0x36c], eax
// 00832cc9  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832ccf  51                   push ecx
// 00832cd0  8bcc                 mov ecx, esp
// 00832cd2  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832cd6  680062a600           push 0xa66200
// 00832cdb  c784248c01000013000000 mov dword ptr [esp + 0x18c], 0x13
// 00832ce6  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832cec  8bce                 mov ecx, esi
// 00832cee  e8fdf4ffff           call 0x8321f0
// 00832cf3  8bc8                 mov ecx, eax
// 00832cf5  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832cfc  e86f260600           call 0x895370
// 00832d01  898630030000         mov dword ptr [esi + 0x330], eax
// 00832d07  89ae78030000         mov dword ptr [esi + 0x378], ebp
// 00832d0d  89ae84030000         mov dword ptr [esi + 0x384], ebp
// 00832d13  89ae90030000         mov dword ptr [esi + 0x390], ebp
// 00832d19  b88d8d8d00           mov eax, 0x8d8d8d
// 00832d1e  51                   push ecx
// 00832d1f  8bcc                 mov ecx, esp
// 00832d21  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832d25  687466a600           push 0xa66674
// 00832d2a  898638040000         mov dword ptr [esi + 0x438], eax
// 00832d30  898620040000         mov dword ptr [esi + 0x420], eax
// 00832d36  89860c030000         mov dword ptr [esi + 0x30c], eax
// 00832d3c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832d42  51                   push ecx
// 00832d43  8bcc                 mov ecx, esp
// 00832d45  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832d49  688868a100           push 0xa16888
// 00832d4e  c784248c01000014000000 mov dword ptr [esp + 0x18c], 0x14
// 00832d59  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832d5f  8bce                 mov ecx, esi
// 00832d61  e88af4ffff           call 0x8321f0
// 00832d66  8bc8                 mov ecx, eax
// 00832d68  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832d6f  e8fc250600           call 0x895370
// 00832d74  51                   push ecx
// 00832d75  8bcc                 mov ecx, esp
// 00832d77  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832d7b  686066a600           push 0xa66660
// 00832d80  8986f0030000         mov dword ptr [esi + 0x3f0], eax
// 00832d86  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832d8c  51                   push ecx
// 00832d8d  8bcc                 mov ecx, esp
// 00832d8f  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832d93  680062a600           push 0xa66200
// 00832d98  c784248c01000015000000 mov dword ptr [esp + 0x18c], 0x15
// 00832da3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832da9  8bce                 mov ecx, esi
// 00832dab  e840f4ffff           call 0x8321f0
// 00832db0  8bc8                 mov ecx, eax
// 00832db2  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832db9  e8b2250600           call 0x895370
// 00832dbe  51                   push ecx
// 00832dbf  8bcc                 mov ecx, esp
// 00832dc1  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832dc5  684866a600           push 0xa66648
// 00832dca  89464c               mov dword ptr [esi + 0x4c], eax
// 00832dcd  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832dd3  51                   push ecx
// 00832dd4  8bcc                 mov ecx, esp
// 00832dd6  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832dda  680062a600           push 0xa66200
// 00832ddf  c784248c01000016000000 mov dword ptr [esp + 0x18c], 0x16
// 00832dea  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832df0  8bce                 mov ecx, esi
// 00832df2  e8f9f3ffff           call 0x8321f0
// 00832df7  8bc8                 mov ecx, eax
// 00832df9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832e00  e86b250600           call 0x895370
// 00832e05  51                   push ecx
// 00832e06  8bcc                 mov ecx, esp
// 00832e08  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832e0c  683466a600           push 0xa66634
// 00832e11  894658               mov dword ptr [esi + 0x58], eax
// 00832e14  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832e1a  51                   push ecx
// 00832e1b  8bcc                 mov ecx, esp
// 00832e1d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832e21  680062a600           push 0xa66200
// 00832e26  c784248c01000017000000 mov dword ptr [esp + 0x18c], 0x17
// 00832e31  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832e37  8bce                 mov ecx, esi
// 00832e39  e8b2f3ffff           call 0x8321f0
// 00832e3e  8bc8                 mov ecx, eax
// 00832e40  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832e47  e824250600           call 0x895370
// 00832e4c  51                   push ecx
// 00832e4d  8bcc                 mov ecx, esp
// 00832e4f  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832e53  682466a600           push 0xa66624
// 00832e58  898644040000         mov dword ptr [esi + 0x444], eax
// 00832e5e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832e64  51                   push ecx
// 00832e65  8bcc                 mov ecx, esp
// 00832e67  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832e6b  68ec0ea300           push 0xa30eec
// 00832e70  c784248c01000018000000 mov dword ptr [esp + 0x18c], 0x18
// 00832e7b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832e81  8bce                 mov ecx, esi
// 00832e83  e868f3ffff           call 0x8321f0
// 00832e88  8bc8                 mov ecx, eax
// 00832e8a  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832e91  e8da240600           call 0x895370
// 00832e96  51                   push ecx
// 00832e97  8bcc                 mov ecx, esp
// 00832e99  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832e9d  681866a600           push 0xa66618
// 00832ea2  8986f8010000         mov dword ptr [esi + 0x1f8], eax
// 00832ea8  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832eae  51                   push ecx
// 00832eaf  8bcc                 mov ecx, esp
// 00832eb1  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832eb5  688868a100           push 0xa16888
// 00832eba  c784248c01000019000000 mov dword ptr [esp + 0x18c], 0x19
// 00832ec5  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832ecb  8bce                 mov ecx, esi
// 00832ecd  e81ef3ffff           call 0x8321f0
// 00832ed2  8bc8                 mov ecx, eax
// 00832ed4  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832edb  e890240600           call 0x895370
// 00832ee0  8986cc030000         mov dword ptr [esi + 0x3cc], eax
// 00832ee6  8b8624050000         mov eax, dword ptr [esi + 0x524]
// 00832eec  3bc7                 cmp eax, edi
// 00832eee  7506                 jne 0x832ef6
// 00832ef0  8b8620050000         mov eax, dword ptr [esi + 0x520]
// 00832ef6  51                   push ecx
// 00832ef7  8bcc                 mov ecx, esp
// 00832ef9  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832efd  680c66a600           push 0xa6660c
// 00832f02  8986d8030000         mov dword ptr [esi + 0x3d8], eax
// 00832f08  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832f0e  51                   push ecx
// 00832f0f  8bcc                 mov ecx, esp
// 00832f11  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832f15  680062a600           push 0xa66200
// 00832f1a  c784248c0100001a000000 mov dword ptr [esp + 0x18c], 0x1a
// 00832f25  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832f2b  8bce                 mov ecx, esi
// 00832f2d  e8bef2ffff           call 0x8321f0
// 00832f32  8bc8                 mov ecx, eax
// 00832f34  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832f3b  e830240600           call 0x895370
// 00832f40  51                   push ecx
// 00832f41  8bcc                 mov ecx, esp
// 00832f43  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832f47  68f865a600           push 0xa665f8
// 00832f4c  8986d0020000         mov dword ptr [esi + 0x2d0], eax
// 00832f52  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832f58  51                   push ecx
// 00832f59  8bcc                 mov ecx, esp
// 00832f5b  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832f5f  680062a600           push 0xa66200
// 00832f64  c784248c0100001b000000 mov dword ptr [esp + 0x18c], 0x1b
// 00832f6f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832f75  8bce                 mov ecx, esi
// 00832f77  e874f2ffff           call 0x8321f0
// 00832f7c  8bc8                 mov ecx, eax
// 00832f7e  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832f85  e8e6230600           call 0x895370
// 00832f8a  51                   push ecx
// 00832f8b  8bcc                 mov ecx, esp
// 00832f8d  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832f91  68e465a600           push 0xa665e4
// 00832f96  89863c030000         mov dword ptr [esi + 0x33c], eax
// 00832f9c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832fa2  51                   push ecx
// 00832fa3  8bcc                 mov ecx, esp
// 00832fa5  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832fa9  680062a600           push 0xa66200
// 00832fae  c784248c0100001c000000 mov dword ptr [esp + 0x18c], 0x1c
// 00832fb9  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832fbf  8bce                 mov ecx, esi
// 00832fc1  e82af2ffff           call 0x8321f0
// 00832fc6  8bc8                 mov ecx, eax
// 00832fc8  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00832fcf  e89c230600           call 0x895370
// 00832fd4  51                   push ecx
// 00832fd5  8bcc                 mov ecx, esp
// 00832fd7  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832fdb  68d065a600           push 0xa665d0
// 00832fe0  898648030000         mov dword ptr [esi + 0x348], eax
// 00832fe6  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00832fec  51                   push ecx
// 00832fed  8bcc                 mov ecx, esp
// 00832fef  8964241c             mov dword ptr [esp + 0x1c], esp
// 00832ff3  68ec0ea300           push 0xa30eec
// 00832ff8  c784248c0100001d000000 mov dword ptr [esp + 0x18c], 0x1d
// 00833003  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833009  8bce                 mov ecx, esi
// 0083300b  e8e0f1ffff           call 0x8321f0
// 00833010  8bc8                 mov ecx, eax
// 00833012  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833019  e852230600           call 0x895370
// 0083301e  51                   push ecx
// 0083301f  8bcc                 mov ecx, esp
// 00833021  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833025  68b865a600           push 0xa665b8
// 0083302a  898640060000         mov dword ptr [esi + 0x640], eax
// 00833030  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833036  c78424840100001e000000 mov dword ptr [esp + 0x184], 0x1e
// 00833041  51                   push ecx
// 00833042  8bcc                 mov ecx, esp
// 00833044  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833048  68ec0ea300           push 0xa30eec
// 0083304d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833053  8bce                 mov ecx, esi
// 00833055  e896f1ffff           call 0x8321f0
// 0083305a  8bc8                 mov ecx, eax
// 0083305c  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833063  e808230600           call 0x895370
// 00833068  51                   push ecx
// 00833069  8bcc                 mov ecx, esp
// 0083306b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083306f  68a065a600           push 0xa665a0
// 00833074  898644060000         mov dword ptr [esi + 0x644], eax
// 0083307a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833080  51                   push ecx
// 00833081  8bcc                 mov ecx, esp
// 00833083  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833087  68ec0ea300           push 0xa30eec
// 0083308c  c784248c0100001f000000 mov dword ptr [esp + 0x18c], 0x1f
// 00833097  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083309d  8bce                 mov ecx, esi
// 0083309f  e84cf1ffff           call 0x8321f0
// 008330a4  8bc8                 mov ecx, eax
// 008330a6  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008330ad  e8be220600           call 0x895370
// 008330b2  51                   push ecx
// 008330b3  8bcc                 mov ecx, esp
// 008330b5  8964241c             mov dword ptr [esp + 0x1c], esp
// 008330b9  688c65a600           push 0xa6658c
// 008330be  898648060000         mov dword ptr [esi + 0x648], eax
// 008330c4  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008330ca  51                   push ecx
// 008330cb  8bcc                 mov ecx, esp
// 008330cd  8964241c             mov dword ptr [esp + 0x1c], esp
// 008330d1  688868a100           push 0xa16888
// 008330d6  c784248c01000020000000 mov dword ptr [esp + 0x18c], 0x20
// 008330e1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008330e7  8bce                 mov ecx, esi
// 008330e9  e802f1ffff           call 0x8321f0
// 008330ee  8bc8                 mov ecx, eax
// 008330f0  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008330f7  e874220600           call 0x895370
// 008330fc  51                   push ecx
// 008330fd  8bcc                 mov ecx, esp
// 008330ff  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833103  687465a600           push 0xa66574
// 00833108  8986dc020000         mov dword ptr [esi + 0x2dc], eax
// 0083310e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833114  51                   push ecx
// 00833115  8bcc                 mov ecx, esp
// 00833117  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083311b  688868a100           push 0xa16888
// 00833120  c784248c01000021000000 mov dword ptr [esp + 0x18c], 0x21
// 0083312b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833131  8bce                 mov ecx, esi
// 00833133  e8b8f0ffff           call 0x8321f0
// 00833138  8bc8                 mov ecx, eax
// 0083313a  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833141  e82a220600           call 0x895370
// 00833146  51                   push ecx
// 00833147  8bcc                 mov ecx, esp
// 00833149  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083314d  686065a600           push 0xa66560
// 00833152  8986e8020000         mov dword ptr [esi + 0x2e8], eax
// 00833158  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083315e  51                   push ecx
// 0083315f  8bcc                 mov ecx, esp
// 00833161  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833165  688868a100           push 0xa16888
// 0083316a  c784248c01000022000000 mov dword ptr [esp + 0x18c], 0x22
// 00833175  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083317b  8bce                 mov ecx, esi
// 0083317d  e86ef0ffff           call 0x8321f0
// 00833182  8bc8                 mov ecx, eax
// 00833184  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0083318b  e8e0210600           call 0x895370
// 00833190  51                   push ecx
// 00833191  8bcc                 mov ecx, esp
// 00833193  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833197  684865a600           push 0xa66548
// 0083319c  8986f4020000         mov dword ptr [esi + 0x2f4], eax
// 008331a2  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008331a8  51                   push ecx
// 008331a9  8bcc                 mov ecx, esp
// 008331ab  8964241c             mov dword ptr [esp + 0x1c], esp
// 008331af  688868a100           push 0xa16888
// 008331b4  c784248c01000023000000 mov dword ptr [esp + 0x18c], 0x23
// 008331bf  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008331c5  8bce                 mov ecx, esi
// 008331c7  e824f0ffff           call 0x8321f0
// 008331cc  8bc8                 mov ecx, eax
// 008331ce  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008331d5  e896210600           call 0x895370
// 008331da  51                   push ecx
// 008331db  8bcc                 mov ecx, esp
// 008331dd  8964241c             mov dword ptr [esp + 0x1c], esp
// 008331e1  683465a600           push 0xa66534
// 008331e6  8986c0030000         mov dword ptr [esi + 0x3c0], eax
// 008331ec  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008331f2  51                   push ecx
// 008331f3  8bcc                 mov ecx, esp
// 008331f5  8964241c             mov dword ptr [esp + 0x1c], esp
// 008331f9  688868a100           push 0xa16888
// 008331fe  c784248c01000024000000 mov dword ptr [esp + 0x18c], 0x24
// 00833209  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083320f  8bce                 mov ecx, esi
// 00833211  e8daefffff           call 0x8321f0
// 00833216  8bc8                 mov ecx, eax
// 00833218  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0083321f  e84c210600           call 0x895370
// 00833224  51                   push ecx
// 00833225  8bcc                 mov ecx, esp
// 00833227  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083322b  681c65a600           push 0xa6651c
// 00833230  898618030000         mov dword ptr [esi + 0x318], eax
// 00833236  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083323c  51                   push ecx
// 0083323d  8bcc                 mov ecx, esp
// 0083323f  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833243  688868a100           push 0xa16888
// 00833248  c784248c01000025000000 mov dword ptr [esp + 0x18c], 0x25
// 00833253  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833259  8bce                 mov ecx, esi
// 0083325b  e890efffff           call 0x8321f0
// 00833260  8bc8                 mov ecx, eax
// 00833262  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833269  e802210600           call 0x895370
// 0083326e  d905e026a100         fld dword ptr [0xa126e0]
// 00833274  83ec08               sub esp, 8
// 00833277  d95c2404             fstp dword ptr [esp + 4]
// 0083327b  8bcc                 mov ecx, esp
// 0083327d  89642420             mov dword ptr [esp + 0x20], esp
// 00833281  680465a600           push 0xa66504
// 00833286  898624030000         mov dword ptr [esi + 0x324], eax
// 0083328c  89ae9c030000         mov dword ptr [esi + 0x39c], ebp
// 00833292  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 0083329c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008332a2  51                   push ecx
// 008332a3  8bcc                 mov ecx, esp
// 008332a5  89642420             mov dword ptr [esp + 0x20], esp
// 008332a9  688868a100           push 0xa16888
// 008332ae  c784249001000026000000 mov dword ptr [esp + 0x190], 0x26
// 008332b9  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008332bf  8bce                 mov ecx, esi
// 008332c1  e82aefffff           call 0x8321f0
// 008332c6  8bc8                 mov ecx, eax
// 008332c8  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 008332cf  e89c200600           call 0x895370
// 008332d4  50                   push eax
// 008332d5  51                   push ecx
// 008332d6  8bcc                 mov ecx, esp
// 008332d8  89642424             mov dword ptr [esp + 0x24], esp
// 008332dc  68ec64a600           push 0xa664ec
// 008332e1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008332e7  51                   push ecx
// 008332e8  8bcc                 mov ecx, esp
// 008332ea  89642424             mov dword ptr [esp + 0x24], esp
// 008332ee  688868a100           push 0xa16888
// 008332f3  c784249401000027000000 mov dword ptr [esp + 0x194], 0x27
// 008332fe  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833304  8bce                 mov ecx, esi
// 00833306  e8e5eeffff           call 0x8321f0
// 0083330b  8bc8                 mov ecx, eax
// 0083330d  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00833314  e857200600           call 0x895370
// 00833319  50                   push eax
// 0083331a  8d8e90050000         lea ecx, [esi + 0x590]
// 00833320  e8ebfcfaff           call 0x7e3010
// 00833325  d905e026a100         fld dword ptr [0xa126e0]
// 0083332b  83ec08               sub esp, 8
// 0083332e  d95c2404             fstp dword ptr [esp + 4]
// 00833332  8bcc                 mov ecx, esp
// 00833334  89642420             mov dword ptr [esp + 0x20], esp
// 00833338  68d464a600           push 0xa664d4
// 0083333d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833343  51                   push ecx
// 00833344  8bcc                 mov ecx, esp
// 00833346  89642420             mov dword ptr [esp + 0x20], esp
// 0083334a  688868a100           push 0xa16888
// 0083334f  c784249001000028000000 mov dword ptr [esp + 0x190], 0x28
// 0083335a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833360  8bce                 mov ecx, esi
// 00833362  e889eeffff           call 0x8321f0
// 00833367  8bc8                 mov ecx, eax
// 00833369  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00833370  e8fb1f0600           call 0x895370
// 00833375  50                   push eax
// 00833376  51                   push ecx
// 00833377  8bcc                 mov ecx, esp
// 00833379  89642424             mov dword ptr [esp + 0x24], esp
// 0083337d  68bc64a600           push 0xa664bc
// 00833382  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833388  51                   push ecx
// 00833389  8bcc                 mov ecx, esp
// 0083338b  89642424             mov dword ptr [esp + 0x24], esp
// 0083338f  688868a100           push 0xa16888
// 00833394  c784249401000029000000 mov dword ptr [esp + 0x194], 0x29
// 0083339f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008333a5  8bce                 mov ecx, esi
// 008333a7  e844eeffff           call 0x8321f0
// 008333ac  8bc8                 mov ecx, eax
// 008333ae  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 008333b5  e8b61f0600           call 0x895370
// 008333ba  50                   push eax
// 008333bb  8d8e50050000         lea ecx, [esi + 0x550]
// 008333c1  e84afcfaff           call 0x7e3010
// 008333c6  d905e026a100         fld dword ptr [0xa126e0]
// 008333cc  83ec08               sub esp, 8
// 008333cf  d95c2404             fstp dword ptr [esp + 4]
// 008333d3  8bcc                 mov ecx, esp
// 008333d5  89642420             mov dword ptr [esp + 0x20], esp
// 008333d9  68a464a600           push 0xa664a4
// 008333de  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008333e4  51                   push ecx
// 008333e5  8bcc                 mov ecx, esp
// 008333e7  89642420             mov dword ptr [esp + 0x20], esp
// 008333eb  688868a100           push 0xa16888
// 008333f0  c78424900100002a000000 mov dword ptr [esp + 0x190], 0x2a
// 008333fb  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833401  8bce                 mov ecx, esi
// 00833403  e8e8edffff           call 0x8321f0
// 00833408  8bc8                 mov ecx, eax
// 0083340a  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00833411  e85a1f0600           call 0x895370
// 00833416  50                   push eax
// 00833417  51                   push ecx
// 00833418  8bcc                 mov ecx, esp
// 0083341a  89642424             mov dword ptr [esp + 0x24], esp
// 0083341e  688c64a600           push 0xa6648c
// 00833423  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833429  51                   push ecx
// 0083342a  8bcc                 mov ecx, esp
// 0083342c  89642424             mov dword ptr [esp + 0x24], esp
// 00833430  688868a100           push 0xa16888
// 00833435  c78424940100002b000000 mov dword ptr [esp + 0x194], 0x2b
// 00833440  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833446  8bce                 mov ecx, esi
// 00833448  e8a3edffff           call 0x8321f0
// 0083344d  8bc8                 mov ecx, eax
// 0083344f  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 00833456  e8151f0600           call 0x895370
// 0083345b  50                   push eax
// 0083345c  8d8e70050000         lea ecx, [esi + 0x570]
// 00833462  e8a9fbfaff           call 0x7e3010
// 00833467  51                   push ecx
// 00833468  8bcc                 mov ecx, esp
// 0083346a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083346e  687c64a600           push 0xa6647c
// 00833473  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833479  51                   push ecx
// 0083347a  8bcc                 mov ecx, esp
// 0083347c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833480  688868a100           push 0xa16888
// 00833485  c784248c0100002c000000 mov dword ptr [esp + 0x18c], 0x2c
// 00833490  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833496  8bce                 mov ecx, esi
// 00833498  e853edffff           call 0x8321f0
// 0083349d  8bc8                 mov ecx, eax
// 0083349f  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008334a6  e8c51e0600           call 0x895370
// 008334ab  51                   push ecx
// 008334ac  8bcc                 mov ecx, esp
// 008334ae  8964241c             mov dword ptr [esp + 0x1c], esp
// 008334b2  686c64a600           push 0xa6646c
// 008334b7  8986cc050000         mov dword ptr [esi + 0x5cc], eax
// 008334bd  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008334c3  51                   push ecx
// 008334c4  8bcc                 mov ecx, esp
// 008334c6  8964241c             mov dword ptr [esp + 0x1c], esp
// 008334ca  688868a100           push 0xa16888
// 008334cf  c784248c0100002d000000 mov dword ptr [esp + 0x18c], 0x2d
// 008334da  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008334e0  8bce                 mov ecx, esi
// 008334e2  e809edffff           call 0x8321f0
// 008334e7  8bc8                 mov ecx, eax
// 008334e9  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008334f0  e87b1e0600           call 0x895370
// 008334f5  51                   push ecx
// 008334f6  8bcc                 mov ecx, esp
// 008334f8  8964241c             mov dword ptr [esp + 0x1c], esp
// 008334fc  685c64a600           push 0xa6645c
// 00833501  8986d0050000         mov dword ptr [esi + 0x5d0], eax
// 00833507  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083350d  51                   push ecx
// 0083350e  8bcc                 mov ecx, esp
// 00833510  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833514  688868a100           push 0xa16888
// 00833519  c784248c0100002e000000 mov dword ptr [esp + 0x18c], 0x2e
// 00833524  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083352a  8bce                 mov ecx, esi
// 0083352c  e8bfecffff           call 0x8321f0
// 00833531  8bc8                 mov ecx, eax
// 00833533  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0083353a  e8311e0600           call 0x895370
// 0083353f  51                   push ecx
// 00833540  8bcc                 mov ecx, esp
// 00833542  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833546  684c64a600           push 0xa6644c
// 0083354b  8986d4050000         mov dword ptr [esi + 0x5d4], eax
// 00833551  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833557  51                   push ecx
// 00833558  8bcc                 mov ecx, esp
// 0083355a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083355e  688868a100           push 0xa16888
// 00833563  c784248c0100002f000000 mov dword ptr [esp + 0x18c], 0x2f
// 0083356e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833574  8bce                 mov ecx, esi
// 00833576  e875ecffff           call 0x8321f0
// 0083357b  8bc8                 mov ecx, eax
// 0083357d  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833584  e8e71d0600           call 0x895370
// 00833589  51                   push ecx
// 0083358a  8bcc                 mov ecx, esp
// 0083358c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833590  683c64a600           push 0xa6643c
// 00833595  8986d8050000         mov dword ptr [esi + 0x5d8], eax
// 0083359b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008335a1  51                   push ecx
// 008335a2  8bcc                 mov ecx, esp
// 008335a4  8964241c             mov dword ptr [esp + 0x1c], esp
// 008335a8  688868a100           push 0xa16888
// 008335ad  c784248c01000030000000 mov dword ptr [esp + 0x18c], 0x30
// 008335b8  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008335be  8bce                 mov ecx, esi
// 008335c0  e82becffff           call 0x8321f0
// 008335c5  8bc8                 mov ecx, eax
// 008335c7  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008335ce  e89d1d0600           call 0x895370
// 008335d3  51                   push ecx
// 008335d4  8bcc                 mov ecx, esp
// 008335d6  8964241c             mov dword ptr [esp + 0x1c], esp
// 008335da  682c64a600           push 0xa6642c
// 008335df  8986dc050000         mov dword ptr [esi + 0x5dc], eax
// 008335e5  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008335eb  51                   push ecx
// 008335ec  8bcc                 mov ecx, esp
// 008335ee  8964241c             mov dword ptr [esp + 0x1c], esp
// 008335f2  688868a100           push 0xa16888
// 008335f7  c784248c01000031000000 mov dword ptr [esp + 0x18c], 0x31
// 00833602  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833608  8bce                 mov ecx, esi
// 0083360a  e8e1ebffff           call 0x8321f0
// 0083360f  8bc8                 mov ecx, eax
// 00833611  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833618  e8531d0600           call 0x895370
// 0083361d  51                   push ecx
// 0083361e  8bcc                 mov ecx, esp
// 00833620  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833624  681c64a600           push 0xa6641c
// 00833629  8986e0050000         mov dword ptr [esi + 0x5e0], eax
// 0083362f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833635  51                   push ecx
// 00833636  8bcc                 mov ecx, esp
// 00833638  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083363c  688868a100           push 0xa16888
// 00833641  c784248c01000032000000 mov dword ptr [esp + 0x18c], 0x32
// 0083364c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833652  8bce                 mov ecx, esi
// 00833654  e897ebffff           call 0x8321f0
// 00833659  8bc8                 mov ecx, eax
// 0083365b  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833662  e8091d0600           call 0x895370
// 00833667  51                   push ecx
// 00833668  8bcc                 mov ecx, esp
// 0083366a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083366e  680c64a600           push 0xa6640c
// 00833673  8986e4050000         mov dword ptr [esi + 0x5e4], eax
// 00833679  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083367f  51                   push ecx
// 00833680  8bcc                 mov ecx, esp
// 00833682  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833686  688868a100           push 0xa16888
// 0083368b  c784248c01000033000000 mov dword ptr [esp + 0x18c], 0x33
// 00833696  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083369c  8bce                 mov ecx, esi
// 0083369e  e84debffff           call 0x8321f0
// 008336a3  8bc8                 mov ecx, eax
// 008336a5  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008336ac  e8bf1c0600           call 0x895370
// 008336b1  51                   push ecx
// 008336b2  8986e8050000         mov dword ptr [esi + 0x5e8], eax
// 008336b8  8bcc                 mov ecx, esp
// 008336ba  8964241c             mov dword ptr [esp + 0x1c], esp
// 008336be  68f463a600           push 0xa663f4
// 008336c3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008336c9  51                   push ecx
// 008336ca  8bcc                 mov ecx, esp
// 008336cc  8964241c             mov dword ptr [esp + 0x1c], esp
// 008336d0  688868a100           push 0xa16888
// 008336d5  c784248c01000034000000 mov dword ptr [esp + 0x18c], 0x34
// 008336e0  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008336e6  8bce                 mov ecx, esi
// 008336e8  e803ebffff           call 0x8321f0
// 008336ed  8bc8                 mov ecx, eax
// 008336ef  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008336f6  e8751c0600           call 0x895370
// 008336fb  51                   push ecx
// 008336fc  8bcc                 mov ecx, esp
// 008336fe  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833702  68e063a600           push 0xa663e0
// 00833707  8986f4050000         mov dword ptr [esi + 0x5f4], eax
// 0083370d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833713  51                   push ecx
// 00833714  8bcc                 mov ecx, esp
// 00833716  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083371a  688868a100           push 0xa16888
// 0083371f  c784248c01000035000000 mov dword ptr [esp + 0x18c], 0x35
// 0083372a  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833730  8bce                 mov ecx, esi
// 00833732  e8b9eaffff           call 0x8321f0
// 00833737  8bc8                 mov ecx, eax
// 00833739  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 00833740  e82b1c0600           call 0x895370
// 00833745  51                   push ecx
// 00833746  8bcc                 mov ecx, esp
// 00833748  8964241c             mov dword ptr [esp + 0x1c], esp
// 0083374c  68cc63a600           push 0xa663cc
// 00833751  8986f0050000         mov dword ptr [esi + 0x5f0], eax
// 00833757  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083375d  51                   push ecx
// 0083375e  8bcc                 mov ecx, esp
// 00833760  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833764  688868a100           push 0xa16888
// 00833769  c784248c01000036000000 mov dword ptr [esp + 0x18c], 0x36
// 00833774  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083377a  8bce                 mov ecx, esi
// 0083377c  e86feaffff           call 0x8321f0
// 00833781  8bc8                 mov ecx, eax
// 00833783  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0083378a  e8e11b0600           call 0x895370
// 0083378f  51                   push ecx
// 00833790  8bcc                 mov ecx, esp
// 00833792  8964241c             mov dword ptr [esp + 0x1c], esp
// 00833796  68bc63a600           push 0xa663bc
// 0083379b  8986ec050000         mov dword ptr [esi + 0x5ec], eax
// 008337a1  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008337a7  51                   push ecx
// 008337a8  8bcc                 mov ecx, esp
// 008337aa  8964241c             mov dword ptr [esp + 0x1c], esp
// 008337ae  680062a600           push 0xa66200
// 008337b3  c784248c01000037000000 mov dword ptr [esp + 0x18c], 0x37
// 008337be  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008337c4  8bce                 mov ecx, esi
// 008337c6  e825eaffff           call 0x8321f0
// 008337cb  8bc8                 mov ecx, eax
// 008337cd  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 008337d4  e8971b0600           call 0x895370
// 008337d9  51                   push ecx
// 008337da  8bcc                 mov ecx, esp
// 008337dc  8964241c             mov dword ptr [esp + 0x1c], esp
// 008337e0  68a863a600           push 0xa663a8
// 008337e5  898608040000         mov dword ptr [esi + 0x408], eax
// 008337eb  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008337f1  51                   push ecx
// 008337f2  8bcc                 mov ecx, esp
// 008337f4  8964241c             mov dword ptr [esp + 0x1c], esp
// 008337f8  680062a600           push 0xa66200
// 008337fd  c784248c01000038000000 mov dword ptr [esp + 0x18c], 0x38
// 00833808  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083380e  8bce                 mov ecx, esi
// 00833810  e8dbe9ffff           call 0x8321f0
// 00833815  8bc8                 mov ecx, eax
// 00833817  89bc2488010000       mov dword ptr [esp + 0x188], edi
// 0083381e  e84d1b0600           call 0x895370
// 00833823  d905e026a100         fld dword ptr [0xa126e0]
// 00833829  83ec08               sub esp, 8
// 0083382c  d95c2404             fstp dword ptr [esp + 4]
// 00833830  8bcc                 mov ecx, esp
// 00833832  89642420             mov dword ptr [esp + 0x20], esp
// 00833836  689063a600           push 0xa66390
// 0083383b  8986e4030000         mov dword ptr [esi + 0x3e4], eax
// 00833841  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833847  51                   push ecx
// 00833848  8bcc                 mov ecx, esp
// 0083384a  89642420             mov dword ptr [esp + 0x20], esp
// 0083384e  680062a600           push 0xa66200
// 00833853  c784249001000039000000 mov dword ptr [esp + 0x190], 0x39
// 0083385e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00833864  8bce                 mov ecx, esi
// 00833866  e885e9ffff           call 0x8321f0
// 0083386b  8bc8                 mov ecx, eax
// 0083386d  89bc248c010000       mov dword ptr [esp + 0x18c], edi
// 00833874  e8f71a0600           call 0x895370
// 00833879  50                   push eax
// 0083387a  51                   push ecx
// 0083387b  8bcc                 mov ecx, esp
// 0083387d  89642424             mov dword ptr [esp + 0x24], esp
// 00833881  687463a600           push 0xa66374
// 00833886  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0083388c  51                   push ecx
// 0083388d  8bcc                 mov ecx, esp
// 0083388f  89642424             mov dword ptr [esp + 0x24], esp
// 00833893  680062a600           push 0xa66200
// 00833898  c78424940100003a000000 mov dword ptr [esp + 0x194], 0x3a
// 008338a3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008338a9  8bce                 mov ecx, esi
// 008338ab  e840e9ffff           call 0x8321f0
// 008338b0  8bc8                 mov ecx, eax
// 008338b2  89bc2490010000       mov dword ptr [esp + 0x190], edi
// 008338b9  e8b21a0600           call 0x895370
// 008338be  50                   push eax
// 008338bf  8d4e28               lea ecx, [esi + 0x28]
// 008338c2  e849f7faff           call 0x7e3010
// 008338c7  8bce                 mov ecx, esi
// 008338c9  e8724c0000           call 0x838540
// 008338ce  8b8c2478010000       mov ecx, dword ptr [esp + 0x178]
// 008338d5  64890d00000000       mov dword ptr fs:[0], ecx
// 008338dc  59                   pop ecx
// 008338dd  5f                   pop edi
// 008338de  5e                   pop esi
// 008338df  5d                   pop ebp
// 008338e0  5b                   pop ebx
// 008338e1  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008338e8  33cc                 xor ecx, esp
// 008338ea  e8e55bf7ff           call 0x7a94d4
// 008338ef  81c470010000         add esp, 0x170
// 008338f5  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2007Theme@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp