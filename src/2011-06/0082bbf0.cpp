// roc 2011-06 0082bbf0  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082bbf0
//
// 0082bbf0  83ec18               sub esp, 0x18
// 0082bbf3  53                   push ebx
// 0082bbf4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0082bbf8  817b0404010000       cmp dword ptr [ebx + 4], 0x104
// 0082bbff  56                   push esi
// 0082bc00  8bf1                 mov esi, ecx
// 0082bc02  0f8597000000         jne 0x82bc9f
// 0082bc08  b800200000           mov eax, 0x2000
// 0082bc0d  6685430e             test word ptr [ebx + 0xe], ax
// 0082bc11  0f8488000000         je 0x82bc9f
// 0082bc17  e8d4faffff           call 0x82b6f0
// 0082bc1c  83780400             cmp dword ptr [eax + 4], 0
// 0082bc20  7f7d                 jg 0x82bc9f
// 0082bc22  6a00                 push 0
// 0082bc24  8bce                 mov ecx, esi
// 0082bc26  e8c5faffff           call 0x82b6f0
// 0082bc2b  8bc8                 mov ecx, eax
// 0082bc2d  e8ce490500           call 0x880600
// 0082bc32  85c0                 test eax, eax
// 0082bc34  7569                 jne 0x82bc9f
// 0082bc36  8bce                 mov ecx, esi
// 0082bc38  e8b3faffff           call 0x82b6f0
// 0082bc3d  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0082bc43  85c0                 test eax, eax
// 0082bc45  7403                 je 0x82bc4a
// 0082bc47  8b4020               mov eax, dword ptr [eax + 0x20]
// 0082bc4a  50                   push eax
// 0082bc4b  e830480500           call 0x880480
// 0082bc50  83c404               add esp, 4
// 0082bc53  85c0                 test eax, eax
// 0082bc55  7448                 je 0x82bc9f
// 0082bc57  837b0812             cmp dword ptr [ebx + 8], 0x12
// 0082bc5b  7513                 jne 0x82bc70
// 0082bc5d  6a01                 push 1
// 0082bc5f  8bce                 mov ecx, esi
// 0082bc61  e85afaffff           call 0x82b6c0
// 0082bc66  5e                   pop esi
// 0082bc67  33c0                 xor eax, eax
// 0082bc69  5b                   pop ebx
// 0082bc6a  83c418               add esp, 0x18
// 0082bc6d  c20400               ret 4
// 0082bc70  837e2400             cmp dword ptr [esi + 0x24], 0
// 0082bc74  7412                 je 0x82bc88
// 0082bc76  6a10                 push 0x10
// 0082bc78  ff15601aa400         call dword ptr [0xa41a60]
// 0082bc7e  b900800000           mov ecx, 0x8000
// 0082bc83  6685c1               test cx, ax
// 0082bc86  7517                 jne 0x82bc9f
// 0082bc88  8b4308               mov eax, dword ptr [ebx + 8]
// 0082bc8b  85c0                 test eax, eax
// 0082bc8d  7410                 je 0x82bc9f
// 0082bc8f  50                   push eax
// 0082bc90  8bce                 mov ecx, esi
// 0082bc92  e8f9fdffff           call 0x82ba90
// 0082bc97  85c0                 test eax, eax
// 0082bc99  0f858b000000         jne 0x82bd2a
// 0082bc9f  8b4304               mov eax, dword ptr [ebx + 4]
// 0082bca2  3d05010000           cmp eax, 0x105
// 0082bca7  7407                 je 0x82bcb0
// 0082bca9  3d01010000           cmp eax, 0x101
// 0082bcae  752e                 jne 0x82bcde
// 0082bcb0  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 0082bcb7  7425                 je 0x82bcde
// 0082bcb9  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 0082bcc0  741c                 je 0x82bcde
// 0082bcc2  6a00                 push 0
// 0082bcc4  8bce                 mov ecx, esi
// 0082bcc6  e825faffff           call 0x82b6f0
// 0082bccb  8bc8                 mov ecx, eax
// 0082bccd  e82e490500           call 0x880600
// 0082bcd2  85c0                 test eax, eax
// 0082bcd4  7508                 jne 0x82bcde
// 0082bcd6  50                   push eax
// 0082bcd7  8bce                 mov ecx, esi
// 0082bcd9  e8e2f9ffff           call 0x82b6c0
// 0082bcde  8b4304               mov eax, dword ptr [ebx + 4]
// 0082bce1  83f87b               cmp eax, 0x7b
// 0082bce4  7407                 je 0x82bced
// 0082bce6  3d05010000           cmp eax, 0x105
// 0082bceb  754a                 jne 0x82bd37
// 0082bced  6a00                 push 0
// 0082bcef  8bce                 mov ecx, esi
// 0082bcf1  e8faf9ffff           call 0x82b6f0
// 0082bcf6  8bc8                 mov ecx, eax
// 0082bcf8  e803490500           call 0x880600
// 0082bcfd  85c0                 test eax, eax
// 0082bcff  7436                 je 0x82bd37
// 0082bd01  68506c8100           push 0x816c50
// 0082bd06  b92c8fd100           mov ecx, 0xd18f2c
// 0082bd0b  e8b4081a00           call 0x9cc5c4
// 0082bd10  85c0                 test eax, eax
// 0082bd12  7505                 jne 0x82bd19
// 0082bd14  e8f1e5fdff           call 0x80a30a
// 0082bd19  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0082bd1c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0082bd1f  52                   push edx
// 0082bd20  51                   push ecx
// 0082bd21  6a7b                 push 0x7b
// 0082bd23  8bc8                 mov ecx, eax
// 0082bd25  e8161d0700           call 0x89da40
// 0082bd2a  5e                   pop esi
// 0082bd2b  b801000000           mov eax, 1
// 0082bd30  5b                   pop ebx
// 0082bd31  83c418               add esp, 0x18
// 0082bd34  c20400               ret 4
// 0082bd37  817b040a020000       cmp dword ptr [ebx + 4], 0x20a
// 0082bd3e  57                   push edi
// 0082bd3f  0f85be000000         jne 0x82be03
// 0082bd45  68506c8100           push 0x816c50
// 0082bd4a  b92c8fd100           mov ecx, 0xd18f2c
// 0082bd4f  e870081a00           call 0x9cc5c4
// 0082bd54  85c0                 test eax, eax
// 0082bd56  7505                 jne 0x82bd5d
// 0082bd58  e8ade5fdff           call 0x80a30a
// 0082bd5d  83782000             cmp dword ptr [eax + 0x20], 0
// 0082bd61  7e35                 jle 0x82bd98
// 0082bd63  68506c8100           push 0x816c50
// 0082bd68  b92c8fd100           mov ecx, 0xd18f2c
// 0082bd6d  e852081a00           call 0x9cc5c4
// 0082bd72  85c0                 test eax, eax
// 0082bd74  7505                 jne 0x82bd7b
// 0082bd76  e88fe5fdff           call 0x80a30a
// 0082bd7b  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0082bd7e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0082bd81  52                   push edx
// 0082bd82  51                   push ecx
// 0082bd83  680a020000           push 0x20a
// 0082bd88  8bc8                 mov ecx, eax
// 0082bd8a  e8b11c0700           call 0x89da40
// 0082bd8f  5f                   pop edi
// 0082bd90  5e                   pop esi
// 0082bd91  5b                   pop ebx
// 0082bd92  83c418               add esp, 0x18
// 0082bd95  c20400               ret 4
// 0082bd98  8b16                 mov edx, dword ptr [esi]
// 0082bd9a  8b4258               mov eax, dword ptr [edx + 0x58]
// 0082bd9d  8bce                 mov ecx, esi
// 0082bd9f  ffd0                 call eax
// 0082bda1  8d4c240c             lea ecx, [esp + 0xc]
// 0082bda5  51                   push ecx
// 0082bda6  8bf8                 mov edi, eax
// 0082bda8  ff15c819a400         call dword ptr [0xa419c8]
// 0082bdae  85ff                 test edi, edi
// 0082bdb0  7451                 je 0x82be03
// 0082bdb2  83bff800000003       cmp dword ptr [edi + 0xf8], 3
// 0082bdb9  7548                 jne 0x82be03
// 0082bdbb  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0082bdbf  55                   push ebp
// 0082bdc0  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0082bdc4  57                   push edi
// 0082bdc5  8d4c241c             lea ecx, [esp + 0x1c]
// 0082bdc9  e8620f0300           call 0x85cd30
// 0082bdce  55                   push ebp
// 0082bdcf  53                   push ebx
// 0082bdd0  50                   push eax
// 0082bdd1  ff15101ca400         call dword ptr [0xa41c10]
// 0082bdd7  5d                   pop ebp
// 0082bdd8  85c0                 test eax, eax
// 0082bdda  7423                 je 0x82bdff
// 0082bddc  8b442428             mov eax, dword ptr [esp + 0x28]
// 0082bde0  33d2                 xor edx, edx
// 0082bde2  6639500a             cmp word ptr [eax + 0xa], dx
// 0082bde6  8bcf                 mov ecx, edi
// 0082bde8  0f9ec2               setle dl
// 0082bdeb  52                   push edx
// 0082bdec  e8dfa90700           call 0x8a67d0
// 0082bdf1  5f                   pop edi
// 0082bdf2  5e                   pop esi
// 0082bdf3  b801000000           mov eax, 1
// 0082bdf8  5b                   pop ebx
// 0082bdf9  83c418               add esp, 0x18
// 0082bdfc  c20400               ret 4
// 0082bdff  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0082be03  8b4304               mov eax, dword ptr [ebx + 4]
// 0082be06  3d00010000           cmp eax, 0x100
// 0082be0b  7228                 jb 0x82be35
// 0082be0d  3d08010000           cmp eax, 0x108
// 0082be12  7721                 ja 0x82be35
// 0082be14  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0082be1a  85c0                 test eax, eax
// 0082be1c  7403                 je 0x82be21
// 0082be1e  8b4020               mov eax, dword ptr [eax + 0x20]
// 0082be21  53                   push ebx
// 0082be22  50                   push eax
// 0082be23  8bce                 mov ecx, esi
// 0082be25  e8e671ecff           call 0x6f3010
// 0082be2a  8bc8                 mov ecx, eax
// 0082be2c  e8ff370700           call 0x89f630
// 0082be31  85c0                 test eax, eax
// 0082be33  75bc                 jne 0x82bdf1
// 0082be35  5f                   pop edi
// 0082be36  5e                   pop esi
// 0082be37  33c0                 xor eax, eax
// 0082be39  5b                   pop ebx
// 0082be3a  83c418               add esp, 0x18
// 0082be3d  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateFrameMessage@CXTPCommandBars@@QAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp