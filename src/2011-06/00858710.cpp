// roc 2011-06 00858710  unit: CXTPControls  size: 1504 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00858710
//
// 00858710  6aff                 push -1
// 00858712  682261a000           push 0xa06122
// 00858717  64a100000000         mov eax, dword ptr fs:[0]
// 0085871d  50                   push eax
// 0085871e  83ec60               sub esp, 0x60
// 00858721  53                   push ebx
// 00858722  55                   push ebp
// 00858723  56                   push esi
// 00858724  57                   push edi
// 00858725  a12058c900           mov eax, dword ptr [0xc95820]
// 0085872a  33c4                 xor eax, esp
// 0085872c  50                   push eax
// 0085872d  8d442474             lea eax, [esp + 0x74]
// 00858731  64a300000000         mov dword ptr fs:[0], eax
// 00858737  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0085873b  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 00858742  8bac2488000000       mov ebp, dword ptr [esp + 0x88]
// 00858749  8b4604               mov eax, dword ptr [esi + 4]
// 0085874c  55                   push ebp
// 0085874d  50                   push eax
// 0085874e  ff15841ca400         call dword ptr [0xa41c84]
// 00858754  50                   push eax
// 00858755  e88e1ffbff           call 0x80a6e8
// 0085875a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085875d  55                   push ebp
// 0085875e  51                   push ecx
// 0085875f  8bd8                 mov ebx, eax
// 00858761  ff15881ca400         call dword ptr [0xa41c88]
// 00858767  8b5604               mov edx, dword ptr [esi + 4]
// 0085876a  6a01                 push 1
// 0085876c  6a01                 push 1
// 0085876e  52                   push edx
// 0085876f  8bf8                 mov edi, eax
// 00858771  ff158c1aa400         call dword ptr [0xa41a8c]
// 00858777  33c9                 xor ecx, ecx
// 00858779  3bc5                 cmp eax, ebp
// 0085877b  0f94c1               sete cl
// 0085877e  894c2428             mov dword ptr [esp + 0x28], ecx
// 00858782  81ff00ff0000         cmp edi, 0xff00
// 00858788  0f8403040000         je 0x858b91
// 0085878e  8d8c2484000000       lea ecx, [esp + 0x84]
// 00858795  ff15b42da400         call dword ptr [0xa42db4]
// 0085879b  6800040000           push 0x400
// 008587a0  8d942488000000       lea edx, [esp + 0x88]
// 008587a7  52                   push edx
// 008587a8  55                   push ebp
// 008587a9  56                   push esi
// 008587aa  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 008587b5  e886770200           call 0x87ff40
// 008587ba  8bc8                 mov ecx, eax
// 008587bc  e8bf720200           call 0x87fa80
// 008587c1  85db                 test ebx, ebx
// 008587c3  7467                 je 0x85882c
// 008587c5  6a00                 push 0
// 008587c7  6a09                 push 9
// 008587c9  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008587d0  ff154c27a400         call dword ptr [0xa4274c]
// 008587d6  89442424             mov dword ptr [esp + 0x24], eax
// 008587da  85c0                 test eax, eax
// 008587dc  7e4e                 jle 0x85882c
// 008587de  40                   inc eax
// 008587df  50                   push eax
// 008587e0  8d84248c000000       lea eax, [esp + 0x8c]
// 008587e7  50                   push eax
// 008587e8  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008587ef  ff154827a400         call dword ptr [0xa42748]
// 008587f5  8bc8                 mov ecx, eax
// 008587f7  ff15c82da400         call dword ptr [0xa42dc8]
// 008587fd  50                   push eax
// 008587fe  ff15200aa400         call dword ptr [0xa40a20]
// 00858804  83c404               add esp, 4
// 00858807  8d8c2488000000       lea ecx, [esp + 0x88]
// 0085880e  8bf8                 mov edi, eax
// 00858810  ff15082ea400         call dword ptr [0xa42e08]
// 00858816  85ff                 test edi, edi
// 00858818  7612                 jbe 0x85882c
// 0085881a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085881e  51                   push ecx
// 0085881f  8d8c2488000000       lea ecx, [esp + 0x88]
// 00858826  ff15e423a400         call dword ptr [0xa423e4]
// 0085882c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00858830  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00858833  85c9                 test ecx, ecx
// 00858835  740f                 je 0x858846
// 00858837  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 0085883d  89942488000000       mov dword ptr [esp + 0x88], edx
// 00858844  eb24                 jmp 0x85886a
// 00858846  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00858849  85c9                 test ecx, ecx
// 0085884b  7412                 je 0x85885f
// 0085884d  e87e4efcff           call 0x81d6d0
// 00858852  89842488000000       mov dword ptr [esp + 0x88], eax
// 00858859  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085885d  eb0b                 jmp 0x85886a
// 0085885f  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0085886a  8bc8                 mov ecx, eax
// 0085886c  e85fe2ffff           call 0x856ad0
// 00858871  89442424             mov dword ptr [esp + 0x24], eax
// 00858875  33c0                 xor eax, eax
// 00858877  85db                 test ebx, ebx
// 00858879  0f95c0               setne al
// 0085887c  8d4c2468             lea ecx, [esp + 0x68]
// 00858880  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00858888  40                   inc eax
// 00858889  89442418             mov dword ptr [esp + 0x18], eax
// 0085888d  ff15b42da400         call dword ptr [0xa42db4]
// 00858893  33c0                 xor eax, eax
// 00858895  c644247c01           mov byte ptr [esp + 0x7c], 1
// 0085889a  39842488000000       cmp dword ptr [esp + 0x88], eax
// 008588a1  0f8494000000         je 0x85893b
// 008588a7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008588ab  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008588ae  89442454             mov dword ptr [esp + 0x54], eax
// 008588b2  89442458             mov dword ptr [esp + 0x58], eax
// 008588b6  8d842484000000       lea eax, [esp + 0x84]
// 008588bd  50                   push eax
// 008588be  8d4c246c             lea ecx, [esp + 0x6c]
// 008588c2  897c2454             mov dword ptr [esp + 0x54], edi
// 008588c6  89542468             mov dword ptr [esp + 0x68], edx
// 008588ca  89742464             mov dword ptr [esp + 0x64], esi
// 008588ce  896c2460             mov dword ptr [esp + 0x60], ebp
// 008588d2  ff156425a400         call dword ptr [0xa42564]
// 008588d8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008588dc  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008588e3  8d542450             lea edx, [esp + 0x50]
// 008588e7  52                   push edx
// 008588e8  6a00                 push 0
// 008588ea  894c2474             mov dword ptr [esp + 0x74], ecx
// 008588ee  c744247800000000     mov dword ptr [esp + 0x78], 0
// 008588f6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008588f9  685e280000           push 0x285e
// 008588fe  51                   push ecx
// 008588ff  ff15c019a400         call dword ptr [0xa419c0]
// 00858905  85c0                 test eax, eax
// 00858907  7432                 je 0x85893b
// 00858909  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0085890d  8b742454             mov esi, dword ptr [esp + 0x54]
// 00858911  8d442468             lea eax, [esp + 0x68]
// 00858915  50                   push eax
// 00858916  8d8c2488000000       lea ecx, [esp + 0x88]
// 0085891d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00858921  ff156425a400         call dword ptr [0xa42564]
// 00858927  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0085892b  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0085892f  894c2420             mov dword ptr [esp + 0x20], ecx
// 00858933  85f6                 test esi, esi
// 00858935  0f8580020000         jne 0x858bbb
// 0085893b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085893f  8d41ff               lea eax, [ecx - 1]
// 00858942  83f80a               cmp eax, 0xa
// 00858945  0f872f020000         ja 0x858b7a
// 0085894b  ff2485c48c8500       jmp dword ptr [eax*4 + 0x858cc4]
// 00858952  81ffb8880000         cmp edi, 0x88b8
// 00858958  750c                 jne 0x858966
// 0085895a  e8911a0000           call 0x85a3f0
// 0085895f  8bf0                 mov esi, eax
// 00858961  e910020000           jmp 0x858b76
// 00858966  81ffba880000         cmp edi, 0x88ba
// 0085896c  750c                 jne 0x85897a
// 0085896e  e83d2c0000           call 0x85b5b0
// 00858973  8bf0                 mov esi, eax
// 00858975  e9fc010000           jmp 0x858b76
// 0085897a  81ff00e80000         cmp edi, 0xe800
// 00858980  750c                 jne 0x85898e
// 00858982  e8391e0000           call 0x85a7c0
// 00858987  8bf0                 mov esi, eax
// 00858989  e9e8010000           jmp 0x858b76
// 0085898e  81ff10e20000         cmp edi, 0xe210
// 00858994  7522                 jne 0x8589b8
// 00858996  68a492ac00           push 0xac92a4
// 0085899b  8d8c2488000000       lea ecx, [esp + 0x88]
// 008589a2  ff15cc2da400         call dword ptr [0xa42dcc]
// 008589a8  85c0                 test eax, eax
// 008589aa  7520                 jne 0x8589cc
// 008589ac  e8af210000           call 0x85ab60
// 008589b1  8bf0                 mov esi, eax
// 008589b3  e9be010000           jmp 0x858b76
// 008589b8  81ff10e10000         cmp edi, 0xe110
// 008589be  750c                 jne 0x8589cc
// 008589c0  e8ab240000           call 0x85ae70
// 008589c5  8bf0                 mov esi, eax
// 008589c7  e9aa010000           jmp 0x858b76
// 008589cc  e84f8c0400           call 0x8a1620
// 008589d1  8bf0                 mov esi, eax
// 008589d3  e99e010000           jmp 0x858b76
// 008589d8  e85305fcff           call 0x818f30
// 008589dd  8bf0                 mov esi, eax
// 008589df  e992010000           jmp 0x858b76
// 008589e4  e8b7300400           call 0x89baa0
// 008589e9  8bf0                 mov esi, eax
// 008589eb  e986010000           jmp 0x858b76
// 008589f0  e8cb2d0000           call 0x85b7c0
// 008589f5  8bf0                 mov esi, eax
// 008589f7  e97a010000           jmp 0x858b76
// 008589fc  e86f2e0000           call 0x85b870
// 00858a01  8bf0                 mov esi, eax
// 00858a03  e96e010000           jmp 0x858b76
// 00858a08  e8032f0000           call 0x85b910
// 00858a0d  8bf0                 mov esi, eax
// 00858a0f  e962010000           jmp 0x858b76
// 00858a14  e807bc0200           call 0x884620
// 00858a19  8bf0                 mov esi, eax
// 00858a1b  e956010000           jmp 0x858b76
// 00858a20  51                   push ecx
// 00858a21  e8aa81ffff           call 0x850bd0
// 00858a26  83c404               add esp, 4
// 00858a29  8d942484000000       lea edx, [esp + 0x84]
// 00858a30  52                   push edx
// 00858a31  8d4c2418             lea ecx, [esp + 0x18]
// 00858a35  8bf0                 mov esi, eax
// 00858a37  ff15e42da400         call dword ptr [0xa42de4]
// 00858a3d  8d442414             lea eax, [esp + 0x14]
// 00858a41  50                   push eax
// 00858a42  c684248000000002     mov byte ptr [esp + 0x80], 2
// 00858a4a  e8f16dfbff           call 0x80f840
// 00858a4f  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00858a56  83c404               add esp, 4
// 00858a59  85ed                 test ebp, ebp
// 00858a5b  747a                 je 0x858ad7
// 00858a5d  33c0                 xor eax, eax
// 00858a5f  89442438             mov dword ptr [esp + 0x38], eax
// 00858a63  8d4c2414             lea ecx, [esp + 0x14]
// 00858a67  89442434             mov dword ptr [esp + 0x34], eax
// 00858a6b  8944243c             mov dword ptr [esp + 0x3c], eax
// 00858a6f  89442440             mov dword ptr [esp + 0x40], eax
// 00858a73  89442444             mov dword ptr [esp + 0x44], eax
// 00858a77  89442448             mov dword ptr [esp + 0x48], eax
// 00858a7b  8944244c             mov dword ptr [esp + 0x4c], eax
// 00858a7f  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00858a87  ff15c82da400         call dword ptr [0xa42dc8]
// 00858a8d  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00858a90  8d4c2434             lea ecx, [esp + 0x34]
// 00858a94  51                   push ecx
// 00858a95  6a00                 push 0
// 00858a97  6861280000           push 0x2861
// 00858a9c  52                   push edx
// 00858a9d  89442458             mov dword ptr [esp + 0x58], eax
// 00858aa1  897c245c             mov dword ptr [esp + 0x5c], edi
// 00858aa5  ff15c019a400         call dword ptr [0xa419c0]
// 00858aab  85c0                 test eax, eax
// 00858aad  7428                 je 0x858ad7
// 00858aaf  8b442434             mov eax, dword ptr [esp + 0x34]
// 00858ab3  50                   push eax
// 00858ab4  e817a8ffff           call 0x8532d0
// 00858ab9  50                   push eax
// 00858aba  e87d19fbff           call 0x80a43c
// 00858abf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00858ac3  83c408               add esp, 8
// 00858ac6  51                   push ecx
// 00858ac7  8d4c2418             lea ecx, [esp + 0x18]
// 00858acb  8be8                 mov ebp, eax
// 00858acd  ff15a42da400         call dword ptr [0xa42da4]
// 00858ad3  85ed                 test ebp, ebp
// 00858ad5  750f                 jne 0x858ae6
// 00858ad7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00858adb  52                   push edx
// 00858adc  e8ffa7ffff           call 0x8532e0
// 00858ae1  83c404               add esp, 4
// 00858ae4  8be8                 mov ebp, eax
// 00858ae6  8d4c2414             lea ecx, [esp + 0x14]
// 00858aea  ff15c82da400         call dword ptr [0xa42dc8]
// 00858af0  50                   push eax
// 00858af1  8bcd                 mov ecx, ebp
// 00858af3  e8d80efdff           call 0x8299d0
// 00858af8  c744242cb04da600     mov dword ptr [esp + 0x2c], 0xa64db0
// 00858b00  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00858b08  c644247c03           mov byte ptr [esp + 0x7c], 3
// 00858b0d  85db                 test ebx, ebx
// 00858b0f  752a                 jne 0x858b3b
// 00858b11  85ff                 test edi, edi
// 00858b13  7636                 jbe 0x858b4b
// 00858b15  57                   push edi
// 00858b16  8d4c2430             lea ecx, [esp + 0x30]
// 00858b1a  e861dcbcff           call 0x426780
// 00858b1f  85c0                 test eax, eax
// 00858b21  7428                 je 0x858b4b
// 00858b23  8b442430             mov eax, dword ptr [esp + 0x30]
// 00858b27  53                   push ebx
// 00858b28  50                   push eax
// 00858b29  ff15841ca400         call dword ptr [0xa41c84]
// 00858b2f  50                   push eax
// 00858b30  e8b31bfbff           call 0x80a6e8
// 00858b35  8bd8                 mov ebx, eax
// 00858b37  85db                 test ebx, ebx
// 00858b39  7410                 je 0x858b4b
// 00858b3b  8b5500               mov edx, dword ptr [ebp]
// 00858b3e  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00858b44  6a00                 push 0
// 00858b46  53                   push ebx
// 00858b47  8bcd                 mov ecx, ebp
// 00858b49  ffd0                 call eax
// 00858b4b  89ae78010000         mov dword ptr [esi + 0x178], ebp
// 00858b51  8d4c242c             lea ecx, [esp + 0x2c]
// 00858b55  c644247c02           mov byte ptr [esp + 0x7c], 2
// 00858b5a  c744242cb04da600     mov dword ptr [esp + 0x2c], 0xa64db0
// 00858b62  e8691efbff           call 0x80a9d0
// 00858b67  8d4c2414             lea ecx, [esp + 0x14]
// 00858b6b  c644247c01           mov byte ptr [esp + 0x7c], 1
// 00858b70  ff15082ea400         call dword ptr [0xa42e08]
// 00858b76  85f6                 test esi, esi
// 00858b78  751e                 jne 0x858b98
// 00858b7a  8d4c2468             lea ecx, [esp + 0x68]
// 00858b7e  ff15082ea400         call dword ptr [0xa42e08]
// 00858b84  8d8c2484000000       lea ecx, [esp + 0x84]
// 00858b8b  ff15082ea400         call dword ptr [0xa42e08]
// 00858b91  33c0                 xor eax, eax
// 00858b93  e916010000           jmp 0x858cae
// 00858b98  8b442420             mov eax, dword ptr [esp + 0x20]
// 00858b9c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00858ba0  898efc000000         mov dword ptr [esi + 0xfc], ecx
// 00858ba6  398648010000         cmp dword ptr [esi + 0x148], eax
// 00858bac  740d                 je 0x858bbb
// 00858bae  8bce                 mov ecx, esi
// 00858bb0  898648010000         mov dword ptr [esi + 0x148], eax
// 00858bb6  e83539fbff           call 0x80c4f0
// 00858bbb  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00858bbf  57                   push edi
// 00858bc0  8bcb                 mov ecx, ebx
// 00858bc2  e80910fdff           call 0x829bd0
// 00858bc7  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 00858bce  8be8                 mov ebp, eax
// 00858bd0  7571                 jne 0x858c43
// 00858bd2  85ed                 test ebp, ebp
// 00858bd4  753e                 jne 0x858c14
// 00858bd6  85db                 test ebx, ebx
// 00858bd8  7411                 je 0x858beb
// 00858bda  394368               cmp dword ptr [ebx + 0x68], eax
// 00858bdd  740c                 je 0x858beb
// 00858bdf  85ff                 test edi, edi
// 00858be1  7608                 jbe 0x858beb
// 00858be3  81ffffffff0f         cmp edi, 0xfffffff
// 00858be9  721f                 jb 0x858c0a
// 00858beb  57                   push edi
// 00858bec  8bce                 mov ecx, esi
// 00858bee  e82d3afbff           call 0x80c620
// 00858bf3  8d8c2484000000       lea ecx, [esp + 0x84]
// 00858bfa  ff15c82da400         call dword ptr [0xa42dc8]
// 00858c00  50                   push eax
// 00858c01  8bce                 mov ecx, esi
// 00858c03  e8f841fbff           call 0x80ce00
// 00858c08  eb39                 jmp 0x858c43
// 00858c0a  57                   push edi
// 00858c0b  8bcb                 mov ecx, ebx
// 00858c0d  e8ae0ffdff           call 0x829bc0
// 00858c12  8be8                 mov ebp, eax
// 00858c14  8b16                 mov edx, dword ptr [esi]
// 00858c16  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00858c1c  55                   push ebp
// 00858c1d  8bce                 mov ecx, esi
// 00858c1f  ffd0                 call eax
// 00858c21  8d4d40               lea ecx, [ebp + 0x40]
// 00858c24  ff15b026a400         call dword ptr [0xa426b0]
// 00858c2a  84c0                 test al, al
// 00858c2c  7415                 je 0x858c43
// 00858c2e  8d8c2484000000       lea ecx, [esp + 0x84]
// 00858c35  ff15c82da400         call dword ptr [0xa42dc8]
// 00858c3b  50                   push eax
// 00858c3c  8bcd                 mov ecx, ebp
// 00858c3e  e87d57fbff           call 0x80e3c0
// 00858c43  8b442428             mov eax, dword ptr [esp + 0x28]
// 00858c47  85c0                 test eax, eax
// 00858c49  7408                 je 0x858c53
// 00858c4b  50                   push eax
// 00858c4c  8bce                 mov ecx, esi
// 00858c4e  e80d3cfbff           call 0x80c860
// 00858c53  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00858c57  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00858c5a  6a01                 push 1
// 00858c5c  56                   push esi
// 00858c5d  51                   push ecx
// 00858c5e  8d4f24               lea ecx, [edi + 0x24]
// 00858c61  e8eaf8ffff           call 0x858550
// 00858c66  8b17                 mov edx, dword ptr [edi]
// 00858c68  8b4268               mov eax, dword ptr [edx + 0x68]
// 00858c6b  56                   push esi
// 00858c6c  8bcf                 mov ecx, edi
// 00858c6e  ffd0                 call eax
// 00858c70  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00858c77  85c0                 test eax, eax
// 00858c79  741a                 je 0x858c95
// 00858c7b  8d4c2450             lea ecx, [esp + 0x50]
// 00858c7f  51                   push ecx
// 00858c80  6a00                 push 0
// 00858c82  8974245c             mov dword ptr [esp + 0x5c], esi
// 00858c86  8b5020               mov edx, dword ptr [eax + 0x20]
// 00858c89  685f280000           push 0x285f
// 00858c8e  52                   push edx
// 00858c8f  ff15c019a400         call dword ptr [0xa419c0]
// 00858c95  8d4c2468             lea ecx, [esp + 0x68]
// 00858c99  ff15082ea400         call dword ptr [0xa42e08]
// 00858c9f  8d8c2484000000       lea ecx, [esp + 0x84]
// 00858ca6  ff15082ea400         call dword ptr [0xa42e08]
// 00858cac  8bc6                 mov eax, esi
// 00858cae  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00858cb2  64890d00000000       mov dword ptr fs:[0], ecx
// 00858cb9  59                   pop ecx
// 00858cba  5f                   pop edi
// 00858cbb  5e                   pop esi
// 00858cbc  5d                   pop ebp
// 00858cbd  5b                   pop ebx
// 00858cbe  83c46c               add esp, 0x6c
// 00858cc1  c20800               ret 8
// 00858cc4  52                   push edx
// 00858cc5  898500208a85         mov dword ptr [ebp - 0x7a75e000], eax
// 00858ccb  0020                 add byte ptr [eax], ah
// 00858ccd  8a8500208a85         mov al, byte ptr [ebp - 0x7a75e000]
// 00858cd3  00d8                 add al, bl
// 00858cd5  898500e48985         mov dword ptr [ebp - 0x7a761c00], eax
// 00858cdb  007a8b               add byte ptr [edx - 0x75], bh
// 00858cde  8500                 test dword ptr [eax], eax
// copied from an identical function in another client (function ?AddMenuItem@CXTPControls@@QAEPAVCXTPControl@@PAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp