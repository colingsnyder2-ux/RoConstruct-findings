// roc 2011-06 00849a50  unit: CRobloxTreeCtrl  size: 1544 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849a50
//
// 00849a50  6aff                 push -1
// 00849a52  689255a000           push 0xa05592
// 00849a57  64a100000000         mov eax, dword ptr fs:[0]
// 00849a5d  50                   push eax
// 00849a5e  81ec78010000         sub esp, 0x178
// 00849a64  a12058c900           mov eax, dword ptr [0xc95820]
// 00849a69  33c4                 xor eax, esp
// 00849a6b  89842474010000       mov dword ptr [esp + 0x174], eax
// 00849a72  53                   push ebx
// 00849a73  55                   push ebp
// 00849a74  56                   push esi
// 00849a75  57                   push edi
// 00849a76  a12058c900           mov eax, dword ptr [0xc95820]
// 00849a7b  33c4                 xor eax, esp
// 00849a7d  50                   push eax
// 00849a7e  8d84248c010000       lea eax, [esp + 0x18c]
// 00849a85  64a300000000         mov dword ptr fs:[0], eax
// 00849a8b  8bb4249c010000       mov esi, dword ptr [esp + 0x19c]
// 00849a92  8be9                 mov ebp, ecx
// 00849a94  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849a97  8b5020               mov edx, dword ptr [eax + 0x20]
// 00849a9a  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00849aa1  51                   push ecx
// 00849aa2  52                   push edx
// 00849aa3  ff157c1ca400         call dword ptr [0xa41c7c]
// 00849aa9  8b4500               mov eax, dword ptr [ebp]
// 00849aac  8b5070               mov edx, dword ptr [eax + 0x70]
// 00849aaf  8bcd                 mov ecx, ebp
// 00849ab1  ffd2                 call edx
// 00849ab3  8bd8                 mov ebx, eax
// 00849ab5  8b4500               mov eax, dword ptr [ebp]
// 00849ab8  8b5074               mov edx, dword ptr [eax + 0x74]
// 00849abb  8bcd                 mov ecx, ebp
// 00849abd  895c2444             mov dword ptr [esp + 0x44], ebx
// 00849ac1  ffd2                 call edx
// 00849ac3  33ff                 xor edi, edi
// 00849ac5  89442448             mov dword ptr [esp + 0x48], eax
// 00849ac9  3bf7                 cmp esi, edi
// 00849acb  7504                 jne 0x849ad1
// 00849acd  33f6                 xor esi, esi
// 00849acf  eb03                 jmp 0x849ad4
// 00849ad1  8b7604               mov esi, dword ptr [esi + 4]
// 00849ad4  8d8424bc000000       lea eax, [esp + 0xbc]
// 00849adb  50                   push eax
// 00849adc  56                   push esi
// 00849add  8d4c247c             lea ecx, [esp + 0x7c]
// 00849ae1  e80a330100           call 0x85cdf0
// 00849ae6  53                   push ebx
// 00849ae7  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 00849aee  51                   push ecx
// 00849aef  8d4c247c             lea ecx, [esp + 0x7c]
// 00849af3  89bc249c010000       mov dword ptr [esp + 0x19c], edi
// 00849afa  e82113fcff           call 0x80ae20
// 00849aff  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00849b02  8b442478             mov eax, dword ptr [esp + 0x78]
// 00849b06  8b11                 mov edx, dword ptr [ecx]
// 00849b08  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 00849b0e  57                   push edi
// 00849b0f  50                   push eax
// 00849b10  6a0f                 push 0xf
// 00849b12  ffd2                 call edx
// 00849b14  8d4c2474             lea ecx, [esp + 0x74]
// 00849b18  39bc24a0010000       cmp dword ptr [esp + 0x1a0], edi
// 00849b1f  0f84f9040000         je 0x84a01e
// 00849b25  e84e2b1800           call 0x9cc678
// 00849b2a  8bcd                 mov ecx, ebp
// 00849b2c  89442460             mov dword ptr [esp + 0x60], eax
// 00849b30  e8fbd6ffff           call 0x847230
// 00849b35  8b35c019a400         mov esi, dword ptr [0xa419c0]
// 00849b3b  84c0                 test al, al
// 00849b3d  7424                 je 0x849b63
// 00849b3f  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849b42  8b4020               mov eax, dword ptr [eax + 0x20]
// 00849b45  57                   push edi
// 00849b46  57                   push edi
// 00849b47  680f110000           push 0x110f
// 00849b4c  50                   push eax
// 00849b4d  ffd6                 call esi
// 00849b4f  50                   push eax
// 00849b50  e8d307fcff           call 0x80a328
// 00849b55  85c0                 test eax, eax
// 00849b57  740a                 je 0x849b63
// 00849b59  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00849b61  eb07                 jmp 0x849b6a
// 00849b63  897c2454             mov dword ptr [esp + 0x54], edi
// 00849b67  897d10               mov dword ptr [ebp + 0x10], edi
// 00849b6a  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00849b6d  e8802c1800           call 0x9cc7f2
// 00849b72  89442450             mov dword ptr [esp + 0x50], eax
// 00849b76  ff15f819a400         call dword ptr [0xa419f8]
// 00849b7c  50                   push eax
// 00849b7d  e8a607fcff           call 0x80a328
// 00849b82  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00849b85  3bc1                 cmp eax, ecx
// 00849b87  0f94c2               sete dl
// 00849b8a  8854245c             mov byte ptr [esp + 0x5c], dl
// 00849b8e  e8852a1800           call 0x9cc618
// 00849b93  57                   push edi
// 00849b94  89442450             mov dword ptr [esp + 0x50], eax
// 00849b98  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849b9b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00849b9e  6a05                 push 5
// 00849ba0  680a110000           push 0x110a
// 00849ba5  50                   push eax
// 00849ba6  ffd6                 call esi
// 00849ba8  57                   push edi
// 00849ba9  8bd8                 mov ebx, eax
// 00849bab  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849bae  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00849bb1  57                   push edi
// 00849bb2  6810110000           push 0x1110
// 00849bb7  51                   push ecx
// 00849bb8  ffd6                 call esi
// 00849bba  6a00                 push 0
// 00849bbc  8bf8                 mov edi, eax
// 00849bbe  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849bc1  8b5020               mov edx, dword ptr [eax + 0x20]
// 00849bc4  6a00                 push 0
// 00849bc6  6a31                 push 0x31
// 00849bc8  52                   push edx
// 00849bc9  47                   inc edi
// 00849bca  ffd6                 call esi
// 00849bcc  50                   push eax
// 00849bcd  e8960ffcff           call 0x80ab68
// 00849bd2  8b5004               mov edx, dword ptr [eax + 4]
// 00849bd5  8d8c244c010000       lea ecx, [esp + 0x14c]
// 00849bdc  51                   push ecx
// 00849bdd  6a3c                 push 0x3c
// 00849bdf  52                   push edx
// 00849be0  ff157c01a400         call dword ptr [0xa4017c]
// 00849be6  85c0                 test eax, eax
// 00849be8  7519                 jne 0x849c03
// 00849bea  8d84244c010000       lea eax, [esp + 0x14c]
// 00849bf1  50                   push eax
// 00849bf2  6a3c                 push 0x3c
// 00849bf4  6a11                 push 0x11
// 00849bf6  ff153001a400         call dword ptr [0xa40130]
// 00849bfc  50                   push eax
// 00849bfd  ff157c01a400         call dword ptr [0xa4017c]
// 00849c03  85db                 test ebx, ebx
// 00849c05  0f8401040000         je 0x84a00c
// 00849c0b  eb0d                 jmp 0x849c1a
// 00849c0d  8d4900               lea ecx, [ecx]
// 00849c10  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 00849c14  8b35c019a400         mov esi, dword ptr [0xa419c0]
// 00849c1a  8bcf                 mov ecx, edi
// 00849c1c  4f                   dec edi
// 00849c1d  897c2458             mov dword ptr [esp + 0x58], edi
// 00849c21  85c9                 test ecx, ecx
// 00849c23  0f84e3030000         je 0x84a00c
// 00849c29  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00849c2c  6a01                 push 1
// 00849c2e  8d542430             lea edx, [esp + 0x30]
// 00849c32  52                   push edx
// 00849c33  53                   push ebx
// 00849c34  e8bb0dfcff           call 0x80a9f4
// 00849c39  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00849c3d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00849c41  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00849c45  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00849c49  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 00849c50  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 00849c57  899424ac000000       mov dword ptr [esp + 0xac], edx
// 00849c5e  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 00849c65  8b442438             mov eax, dword ptr [esp + 0x38]
// 00849c69  57                   push edi
// 00849c6a  8d9424a8000000       lea edx, [esp + 0xa8]
// 00849c71  898c24b0000000       mov dword ptr [esp + 0xb0], ecx
// 00849c78  52                   push edx
// 00849c79  8d4c247c             lea ecx, [esp + 0x7c]
// 00849c7d  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00849c84  e89711fcff           call 0x80ae20
// 00849c89  6a0b                 push 0xb
// 00849c8b  53                   push ebx
// 00849c8c  8bcd                 mov ecx, ebp
// 00849c8e  e8fde1ffff           call 0x847e90
// 00849c93  6a00                 push 0
// 00849c95  8944241c             mov dword ptr [esp + 0x1c], eax
// 00849c99  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849c9c  8b4020               mov eax, dword ptr [eax + 0x20]
// 00849c9f  6a08                 push 8
// 00849ca1  680a110000           push 0x110a
// 00849ca6  50                   push eax
// 00849ca7  ffd6                 call esi
// 00849ca9  85c0                 test eax, eax
// 00849cab  7422                 je 0x849ccf
// 00849cad  f644241802           test byte ptr [esp + 0x18], 2
// 00849cb2  741b                 je 0x849ccf
// 00849cb4  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849cb7  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00849cba  6a00                 push 0
// 00849cbc  6a08                 push 8
// 00849cbe  680a110000           push 0x110a
// 00849cc3  51                   push ecx
// 00849cc4  ffd6                 call esi
// 00849cc6  3bd8                 cmp ebx, eax
// 00849cc8  7405                 je 0x849ccf
// 00849cca  8374241802           xor dword ptr [esp + 0x18], 2
// 00849ccf  8b442418             mov eax, dword ptr [esp + 0x18]
// 00849cd3  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00849cd7  a80a                 test al, 0xa
// 00849cd9  ba00000000           mov edx, 0
// 00849cde  0f95c2               setne dl
// 00849ce1  395d14               cmp dword ptr [ebp + 0x14], ebx
// 00849ce4  57                   push edi
// 00849ce5  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00849ce9  57                   push edi
// 00849cea  56                   push esi
// 00849ceb  50                   push eax
// 00849cec  89542434             mov dword ptr [esp + 0x34], edx
// 00849cf0  8b5500               mov edx, dword ptr [ebp]
// 00849cf3  8b4238               mov eax, dword ptr [edx + 0x38]
// 00849cf6  8bcd                 mov ecx, ebp
// 00849cf8  0f94442427           sete byte ptr [esp + 0x27]
// 00849cfd  ffd0                 call eax
// 00849cff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00849d03  8b5500               mov edx, dword ptr [ebp]
// 00849d06  8b5278               mov edx, dword ptr [edx + 0x78]
// 00849d09  89442428             mov dword ptr [esp + 0x28], eax
// 00849d0d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00849d11  50                   push eax
// 00849d12  57                   push edi
// 00849d13  56                   push esi
// 00849d14  51                   push ecx
// 00849d15  8bcd                 mov ecx, ebp
// 00849d17  ffd2                 call edx
// 00849d19  89442420             mov dword ptr [esp + 0x20], eax
// 00849d1d  395d10               cmp dword ptr [ebp + 0x10], ebx
// 00849d20  750c                 jne 0x849d2e
// 00849d22  8b442444             mov eax, dword ptr [esp + 0x44]
// 00849d26  89442428             mov dword ptr [esp + 0x28], eax
// 00849d2a  89442420             mov dword ptr [esp + 0x20], eax
// 00849d2e  6a3c                 push 0x3c
// 00849d30  b90f000000           mov ecx, 0xf
// 00849d35  8db42450010000       lea esi, [esp + 0x150]
// 00849d3c  8dbc2414010000       lea edi, [esp + 0x114]
// 00849d43  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00849d45  8d8424d0000000       lea eax, [esp + 0xd0]
// 00849d4c  83ceff               or esi, 0xffffffff
// 00849d4f  6a00                 push 0
// 00849d51  50                   push eax
// 00849d52  89b42414010000       mov dword ptr [esp + 0x114], esi
// 00849d59  89b42418010000       mov dword ptr [esp + 0x118], esi
// 00849d60  e87f15fcff           call 0x80b2e4
// 00849d65  83c40c               add esp, 0xc
// 00849d68  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00849d6f  51                   push ecx
// 00849d70  53                   push ebx
// 00849d71  8d4d18               lea ecx, [ebp + 0x18]
// 00849d74  e8f7f8ffff           call 0x849670
// 00849d79  85c0                 test eax, eax
// 00849d7b  744b                 je 0x849dc8
// 00849d7d  837c242400           cmp dword ptr [esp + 0x24], 0
// 00849d82  7525                 jne 0x849da9
// 00849d84  837c245000           cmp dword ptr [esp + 0x50], 0
// 00849d89  741e                 je 0x849da9
// 00849d8b  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 00849d92  3bc6                 cmp eax, esi
// 00849d94  7404                 je 0x849d9a
// 00849d96  89442420             mov dword ptr [esp + 0x20], eax
// 00849d9a  8b84240c010000       mov eax, dword ptr [esp + 0x10c]
// 00849da1  3bc6                 cmp eax, esi
// 00849da3  7404                 je 0x849da9
// 00849da5  89442428             mov dword ptr [esp + 0x28], eax
// 00849da9  80bc24e800000000     cmp byte ptr [esp + 0xe8], 0
// 00849db1  7415                 je 0x849dc8
// 00849db3  b90f000000           mov ecx, 0xf
// 00849db8  8db424cc000000       lea esi, [esp + 0xcc]
// 00849dbf  8dbc2410010000       lea edi, [esp + 0x110]
// 00849dc6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00849dc8  8b5500               mov edx, dword ptr [ebp]
// 00849dcb  8b4228               mov eax, dword ptr [edx + 0x28]
// 00849dce  53                   push ebx
// 00849dcf  8bcd                 mov ecx, ebp
// 00849dd1  ffd0                 call eax
// 00849dd3  85c0                 test eax, eax
// 00849dd5  740b                 je 0x849de2
// 00849dd7  c7842420010000bc020000 mov dword ptr [esp + 0x120], 0x2bc
// 00849de2  f744244c00020000     test dword ptr [esp + 0x4c], 0x200
// 00849dea  7455                 je 0x849e41
// 00849dec  807c241700           cmp byte ptr [esp + 0x17], 0
// 00849df1  0f95c0               setne al
// 00849df4  88842425010000       mov byte ptr [esp + 0x125], al
// 00849dfb  84c0                 test al, al
// 00849dfd  7442                 je 0x849e41
// 00849dff  837c242400           cmp dword ptr [esp + 0x24], 0
// 00849e04  753b                 jne 0x849e41
// 00849e06  e8b5720000           call 0x8510c0
// 00849e0b  8bc8                 mov ecx, eax
// 00849e0d  e8de720000           call 0x8510f0
// 00849e12  84c0                 test al, al
// 00849e14  7519                 jne 0x849e2f
// 00849e16  e8a5720000           call 0x8510c0
// 00849e1b  8bc8                 mov ecx, eax
// 00849e1d  e83e7b0000           call 0x851960
// 00849e22  84c0                 test al, al
// 00849e24  7509                 jne 0x849e2f
// 00849e26  e8b5b5ffff           call 0x8453e0
// 00849e2b  6a1a                 push 0x1a
// 00849e2d  eb07                 jmp 0x849e36
// 00849e2f  e8acb5ffff           call 0x8453e0
// 00849e34  6a0d                 push 0xd
// 00849e36  8bc8                 mov ecx, eax
// 00849e38  e873adffff           call 0x844bb0
// 00849e3d  89442420             mov dword ptr [esp + 0x20], eax
// 00849e41  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00849e49  c744243c9041a700     mov dword ptr [esp + 0x3c], 0xa74190
// 00849e51  8d8c2410010000       lea ecx, [esp + 0x110]
// 00849e58  51                   push ecx
// 00849e59  c684249801000001     mov byte ptr [esp + 0x198], 1
// 00849e61  ff152001a400         call dword ptr [0xa40120]
// 00849e67  50                   push eax
// 00849e68  8d4c2440             lea ecx, [esp + 0x40]
// 00849e6c  e8b707fcff           call 0x80a628
// 00849e71  8d54243c             lea edx, [esp + 0x3c]
// 00849e75  52                   push edx
// 00849e76  8d4c2478             lea ecx, [esp + 0x78]
// 00849e7a  e80b281800           call 0x9cc68a
// 00849e7f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00849e82  8bf8                 mov edi, eax
// 00849e84  53                   push ebx
// 00849e85  8d442420             lea eax, [esp + 0x20]
// 00849e89  50                   push eax
// 00849e8a  e8ed291800           call 0x9cc87c
// 00849e8f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00849e96  51                   push ecx
// 00849e97  8d4c2420             lea ecx, [esp + 0x20]
// 00849e9b  c684249801000002     mov byte ptr [esp + 0x198], 2
// 00849ea3  ff15a826a400         call dword ptr [0xa426a8]
// 00849ea9  50                   push eax
// 00849eaa  8d4c2424             lea ecx, [esp + 0x24]
// 00849eae  ff15c82da400         call dword ptr [0xa42dc8]
// 00849eb4  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00849ebb  50                   push eax
// 00849ebc  52                   push edx
// 00849ebd  ff153801a400         call dword ptr [0xa40138]
// 00849ec3  8b542434             mov edx, dword ptr [esp + 0x34]
// 00849ec7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00849ecb  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00849ed2  2bd0                 sub edx, eax
// 00849ed4  3bd1                 cmp edx, ecx
// 00849ed6  7d08                 jge 0x849ee0
// 00849ed8  8d440102             lea eax, [ecx + eax + 2]
// 00849edc  89442434             mov dword ptr [esp + 0x34], eax
// 00849ee0  8b742428             mov esi, dword ptr [esp + 0x28]
// 00849ee4  56                   push esi
// 00849ee5  8d4c2478             lea ecx, [esp + 0x78]
// 00849ee9  e8a2271800           call 0x9cc690
// 00849eee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00849ef2  51                   push ecx
// 00849ef3  8d4c2478             lea ecx, [esp + 0x78]
// 00849ef7  e89a271800           call 0x9cc696
// 00849efc  837c242400           cmp dword ptr [esp + 0x24], 0
// 00849f01  740f                 je 0x849f12
// 00849f03  56                   push esi
// 00849f04  8d542430             lea edx, [esp + 0x30]
// 00849f08  52                   push edx
// 00849f09  8d4c247c             lea ecx, [esp + 0x7c]
// 00849f0d  e80e0ffcff           call 0x80ae20
// 00849f12  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00849f16  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00849f1a  8b542434             mov edx, dword ptr [esp + 0x34]
// 00849f1e  6a00                 push 0
// 00849f20  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00849f24  89442468             mov dword ptr [esp + 0x68], eax
// 00849f28  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00849f2c  6a03                 push 3
// 00849f2e  8d4c246c             lea ecx, [esp + 0x6c]
// 00849f32  51                   push ecx
// 00849f33  89542478             mov dword ptr [esp + 0x78], edx
// 00849f37  8944247c             mov dword ptr [esp + 0x7c], eax
// 00849f3b  ff15601ca400         call dword ptr [0xa41c60]
// 00849f41  8b742474             mov esi, dword ptr [esp + 0x74]
// 00849f45  6824080000           push 0x824
// 00849f4a  8d542468             lea edx, [esp + 0x68]
// 00849f4e  52                   push edx
// 00849f4f  8d4c2424             lea ecx, [esp + 0x24]
// 00849f53  83c670               add esi, 0x70
// 00849f56  ff15a826a400         call dword ptr [0xa426a8]
// 00849f5c  50                   push eax
// 00849f5d  8d4c2428             lea ecx, [esp + 0x28]
// 00849f61  ff15c82da400         call dword ptr [0xa42dc8]
// 00849f67  50                   push eax
// 00849f68  8b06                 mov eax, dword ptr [esi]
// 00849f6a  8d8c2484000000       lea ecx, [esp + 0x84]
// 00849f71  ffd0                 call eax
// 00849f73  f644241801           test byte ptr [esp + 0x18], 1
// 00849f78  743d                 je 0x849fb7
// 00849f7a  837c245400           cmp dword ptr [esp + 0x54], 0
// 00849f7f  7536                 jne 0x849fb7
// 00849f81  837c245000           cmp dword ptr [esp + 0x50], 0
// 00849f86  742f                 je 0x849fb7
// 00849f88  ff15f819a400         call dword ptr [0xa419f8]
// 00849f8e  50                   push eax
// 00849f8f  e89403fcff           call 0x80a328
// 00849f94  3b4534               cmp eax, dword ptr [ebp + 0x34]
// 00849f97  751e                 jne 0x849fb7
// 00849f99  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00849f9d  51                   push ecx
// 00849f9e  8d4c2478             lea ecx, [esp + 0x78]
// 00849fa2  e8ef261800           call 0x9cc696
// 00849fa7  8b442478             mov eax, dword ptr [esp + 0x78]
// 00849fab  8d54242c             lea edx, [esp + 0x2c]
// 00849faf  52                   push edx
// 00849fb0  50                   push eax
// 00849fb1  ff151c1ba400         call dword ptr [0xa41b1c]
// 00849fb7  57                   push edi
// 00849fb8  8d4c2478             lea ecx, [esp + 0x78]
// 00849fbc  e8c9261800           call 0x9cc68a
// 00849fc1  8d4c243c             lea ecx, [esp + 0x3c]
// 00849fc5  e85206fcff           call 0x80a61c
// 00849fca  8b4534               mov eax, dword ptr [ebp + 0x34]
// 00849fcd  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00849fd0  53                   push ebx
// 00849fd1  6a06                 push 6
// 00849fd3  680a110000           push 0x110a
// 00849fd8  51                   push ecx
// 00849fd9  ff15c019a400         call dword ptr [0xa419c0]
// 00849fdf  8d4c241c             lea ecx, [esp + 0x1c]
// 00849fe3  8bd8                 mov ebx, eax
// 00849fe5  ff15082ea400         call dword ptr [0xa42e08]
// 00849feb  8d4c243c             lea ecx, [esp + 0x3c]
// 00849fef  c684249401000000     mov byte ptr [esp + 0x194], 0
// 00849ff7  c744243c9041a700     mov dword ptr [esp + 0x3c], 0xa74190
// 00849fff  e82c99bcff           call 0x413930
// 0084a004  85db                 test ebx, ebx
// 0084a006  0f8504fcffff         jne 0x849c10
// 0084a00c  8b542460             mov edx, dword ptr [esp + 0x60]
// 0084a010  52                   push edx
// 0084a011  8d4c2478             lea ecx, [esp + 0x78]
// 0084a015  e864261800           call 0x9cc67e
// 0084a01a  8d4c2474             lea ecx, [esp + 0x74]
// 0084a01e  c7842494010000ffffffff mov dword ptr [esp + 0x194], 0xffffffff
// 0084a029  e8d22f0100           call 0x85d000
// 0084a02e  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 0084a035  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a03c  59                   pop ecx
// 0084a03d  5f                   pop edi
// 0084a03e  5e                   pop esi
// 0084a03f  5d                   pop ebp
// 0084a040  5b                   pop ebx
// 0084a041  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 0084a048  33cc                 xor ecx, esp
// 0084a04a  e8a818fcff           call 0x80b8f7
// 0084a04f  81c484010000         add esp, 0x184
// 0084a055  c20800               ret 8
// copied from an identical function in another client (function ?DoPaint@CXTTreeBase@@MAEXAAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp