// roc 2010-06 007e8200  unit: CRobloxTreeCtrl  size: 1544 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8200
//
// 007e8200  6aff                 push -1
// 007e8202  68d21c9b00           push 0x9b1cd2
// 007e8207  64a100000000         mov eax, dword ptr fs:[0]
// 007e820d  50                   push eax
// 007e820e  81ec78010000         sub esp, 0x178
// 007e8214  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e8219  33c4                 xor eax, esp
// 007e821b  89842474010000       mov dword ptr [esp + 0x174], eax
// 007e8222  53                   push ebx
// 007e8223  55                   push ebp
// 007e8224  56                   push esi
// 007e8225  57                   push edi
// 007e8226  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e822b  33c4                 xor eax, esp
// 007e822d  50                   push eax
// 007e822e  8d84248c010000       lea eax, [esp + 0x18c]
// 007e8235  64a300000000         mov dword ptr fs:[0], eax
// 007e823b  8bb4249c010000       mov esi, dword ptr [esp + 0x19c]
// 007e8242  8be9                 mov ebp, ecx
// 007e8244  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e8247  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e824a  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 007e8251  51                   push ecx
// 007e8252  52                   push edx
// 007e8253  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 007e8259  8b4500               mov eax, dword ptr [ebp]
// 007e825c  8b5070               mov edx, dword ptr [eax + 0x70]
// 007e825f  8bcd                 mov ecx, ebp
// 007e8261  ffd2                 call edx
// 007e8263  8bd8                 mov ebx, eax
// 007e8265  8b4500               mov eax, dword ptr [ebp]
// 007e8268  8b5074               mov edx, dword ptr [eax + 0x74]
// 007e826b  8bcd                 mov ecx, ebp
// 007e826d  895c2444             mov dword ptr [esp + 0x44], ebx
// 007e8271  ffd2                 call edx
// 007e8273  33ff                 xor edi, edi
// 007e8275  89442448             mov dword ptr [esp + 0x48], eax
// 007e8279  3bf7                 cmp esi, edi
// 007e827b  7504                 jne 0x7e8281
// 007e827d  33f6                 xor esi, esi
// 007e827f  eb03                 jmp 0x7e8284
// 007e8281  8b7604               mov esi, dword ptr [esi + 4]
// 007e8284  8d8424bc000000       lea eax, [esp + 0xbc]
// 007e828b  50                   push eax
// 007e828c  56                   push esi
// 007e828d  8d4c247c             lea ecx, [esp + 0x7c]
// 007e8291  e8da700100           call 0x7ff370
// 007e8296  53                   push ebx
// 007e8297  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 007e829e  51                   push ecx
// 007e829f  8d4c247c             lea ecx, [esp + 0x7c]
// 007e82a3  89bc249c010000       mov dword ptr [esp + 0x19c], edi
// 007e82aa  e88f04fcff           call 0x7a873e
// 007e82af  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007e82b2  8b442478             mov eax, dword ptr [esp + 0x78]
// 007e82b6  8b11                 mov edx, dword ptr [ecx]
// 007e82b8  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 007e82be  57                   push edi
// 007e82bf  50                   push eax
// 007e82c0  6a0f                 push 0xf
// 007e82c2  ffd2                 call edx
// 007e82c4  8d4c2474             lea ecx, [esp + 0x74]
// 007e82c8  39bc24a0010000       cmp dword ptr [esp + 0x1a0], edi
// 007e82cf  0f84f9040000         je 0x7e87ce
// 007e82d5  e8644b1900           call 0x97ce3e
// 007e82da  8bcd                 mov ecx, ebp
// 007e82dc  89442460             mov dword ptr [esp + 0x60], eax
// 007e82e0  e88bd6ffff           call 0x7e5970
// 007e82e5  8b3554ba9e00         mov esi, dword ptr [0x9eba54]
// 007e82eb  84c0                 test al, al
// 007e82ed  7424                 je 0x7e8313
// 007e82ef  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e82f2  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e82f5  57                   push edi
// 007e82f6  57                   push edi
// 007e82f7  680f110000           push 0x110f
// 007e82fc  50                   push eax
// 007e82fd  ffd6                 call esi
// 007e82ff  50                   push eax
// 007e8300  e865f9fbff           call 0x7a7c6a
// 007e8305  85c0                 test eax, eax
// 007e8307  740a                 je 0x7e8313
// 007e8309  c744245401000000     mov dword ptr [esp + 0x54], 1
// 007e8311  eb07                 jmp 0x7e831a
// 007e8313  897c2454             mov dword ptr [esp + 0x54], edi
// 007e8317  897d10               mov dword ptr [ebp + 0x10], edi
// 007e831a  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007e831d  e8c04c1900           call 0x97cfe2
// 007e8322  89442450             mov dword ptr [esp + 0x50], eax
// 007e8326  ff1580ba9e00         call dword ptr [0x9eba80]
// 007e832c  50                   push eax
// 007e832d  e838f9fbff           call 0x7a7c6a
// 007e8332  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007e8335  3bc1                 cmp eax, ecx
// 007e8337  0f94c2               sete dl
// 007e833a  8854245c             mov byte ptr [esp + 0x5c], dl
// 007e833e  e89b4a1900           call 0x97cdde
// 007e8343  57                   push edi
// 007e8344  89442450             mov dword ptr [esp + 0x50], eax
// 007e8348  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e834b  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e834e  6a05                 push 5
// 007e8350  680a110000           push 0x110a
// 007e8355  50                   push eax
// 007e8356  ffd6                 call esi
// 007e8358  57                   push edi
// 007e8359  8bd8                 mov ebx, eax
// 007e835b  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e835e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e8361  57                   push edi
// 007e8362  6810110000           push 0x1110
// 007e8367  51                   push ecx
// 007e8368  ffd6                 call esi
// 007e836a  6a00                 push 0
// 007e836c  8bf8                 mov edi, eax
// 007e836e  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e8371  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e8374  6a00                 push 0
// 007e8376  6a31                 push 0x31
// 007e8378  52                   push edx
// 007e8379  47                   inc edi
// 007e837a  ffd6                 call esi
// 007e837c  50                   push eax
// 007e837d  e82201fcff           call 0x7a84a4
// 007e8382  8b5004               mov edx, dword ptr [eax + 4]
// 007e8385  8d8c244c010000       lea ecx, [esp + 0x14c]
// 007e838c  51                   push ecx
// 007e838d  6a3c                 push 0x3c
// 007e838f  52                   push edx
// 007e8390  ff15bca09e00         call dword ptr [0x9ea0bc]
// 007e8396  85c0                 test eax, eax
// 007e8398  7519                 jne 0x7e83b3
// 007e839a  8d84244c010000       lea eax, [esp + 0x14c]
// 007e83a1  50                   push eax
// 007e83a2  6a3c                 push 0x3c
// 007e83a4  6a11                 push 0x11
// 007e83a6  ff1578a19e00         call dword ptr [0x9ea178]
// 007e83ac  50                   push eax
// 007e83ad  ff15bca09e00         call dword ptr [0x9ea0bc]
// 007e83b3  85db                 test ebx, ebx
// 007e83b5  0f8401040000         je 0x7e87bc
// 007e83bb  eb0d                 jmp 0x7e83ca
// 007e83bd  8d4900               lea ecx, [ecx]
// 007e83c0  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 007e83c4  8b3554ba9e00         mov esi, dword ptr [0x9eba54]
// 007e83ca  8bcf                 mov ecx, edi
// 007e83cc  4f                   dec edi
// 007e83cd  897c2458             mov dword ptr [esp + 0x58], edi
// 007e83d1  85c9                 test ecx, ecx
// 007e83d3  0f84e3030000         je 0x7e87bc
// 007e83d9  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007e83dc  6a01                 push 1
// 007e83de  8d542430             lea edx, [esp + 0x30]
// 007e83e2  52                   push edx
// 007e83e3  53                   push ebx
// 007e83e4  e84dfffbff           call 0x7a8336
// 007e83e9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007e83ed  8b542434             mov edx, dword ptr [esp + 0x34]
// 007e83f1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007e83f5  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007e83f9  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 007e8400  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 007e8407  899424ac000000       mov dword ptr [esp + 0xac], edx
// 007e840e  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 007e8415  8b442438             mov eax, dword ptr [esp + 0x38]
// 007e8419  57                   push edi
// 007e841a  8d9424a8000000       lea edx, [esp + 0xa8]
// 007e8421  898c24b0000000       mov dword ptr [esp + 0xb0], ecx
// 007e8428  52                   push edx
// 007e8429  8d4c247c             lea ecx, [esp + 0x7c]
// 007e842d  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 007e8434  e80503fcff           call 0x7a873e
// 007e8439  6a0b                 push 0xb
// 007e843b  53                   push ebx
// 007e843c  8bcd                 mov ecx, ebp
// 007e843e  e8fde1ffff           call 0x7e6640
// 007e8443  6a00                 push 0
// 007e8445  8944241c             mov dword ptr [esp + 0x1c], eax
// 007e8449  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e844c  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e844f  6a08                 push 8
// 007e8451  680a110000           push 0x110a
// 007e8456  50                   push eax
// 007e8457  ffd6                 call esi
// 007e8459  85c0                 test eax, eax
// 007e845b  7422                 je 0x7e847f
// 007e845d  f644241802           test byte ptr [esp + 0x18], 2
// 007e8462  741b                 je 0x7e847f
// 007e8464  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e8467  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e846a  6a00                 push 0
// 007e846c  6a08                 push 8
// 007e846e  680a110000           push 0x110a
// 007e8473  51                   push ecx
// 007e8474  ffd6                 call esi
// 007e8476  3bd8                 cmp ebx, eax
// 007e8478  7405                 je 0x7e847f
// 007e847a  8374241802           xor dword ptr [esp + 0x18], 2
// 007e847f  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e8483  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007e8487  a80a                 test al, 0xa
// 007e8489  ba00000000           mov edx, 0
// 007e848e  0f95c2               setne dl
// 007e8491  395d14               cmp dword ptr [ebp + 0x14], ebx
// 007e8494  57                   push edi
// 007e8495  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 007e8499  57                   push edi
// 007e849a  56                   push esi
// 007e849b  50                   push eax
// 007e849c  89542434             mov dword ptr [esp + 0x34], edx
// 007e84a0  8b5500               mov edx, dword ptr [ebp]
// 007e84a3  8b4238               mov eax, dword ptr [edx + 0x38]
// 007e84a6  8bcd                 mov ecx, ebp
// 007e84a8  0f94442427           sete byte ptr [esp + 0x27]
// 007e84ad  ffd0                 call eax
// 007e84af  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e84b3  8b5500               mov edx, dword ptr [ebp]
// 007e84b6  8b5278               mov edx, dword ptr [edx + 0x78]
// 007e84b9  89442428             mov dword ptr [esp + 0x28], eax
// 007e84bd  8b442448             mov eax, dword ptr [esp + 0x48]
// 007e84c1  50                   push eax
// 007e84c2  57                   push edi
// 007e84c3  56                   push esi
// 007e84c4  51                   push ecx
// 007e84c5  8bcd                 mov ecx, ebp
// 007e84c7  ffd2                 call edx
// 007e84c9  89442420             mov dword ptr [esp + 0x20], eax
// 007e84cd  395d10               cmp dword ptr [ebp + 0x10], ebx
// 007e84d0  750c                 jne 0x7e84de
// 007e84d2  8b442444             mov eax, dword ptr [esp + 0x44]
// 007e84d6  89442428             mov dword ptr [esp + 0x28], eax
// 007e84da  89442420             mov dword ptr [esp + 0x20], eax
// 007e84de  6a3c                 push 0x3c
// 007e84e0  b90f000000           mov ecx, 0xf
// 007e84e5  8db42450010000       lea esi, [esp + 0x150]
// 007e84ec  8dbc2414010000       lea edi, [esp + 0x114]
// 007e84f3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e84f5  8d8424d0000000       lea eax, [esp + 0xd0]
// 007e84fc  83ceff               or esi, 0xffffffff
// 007e84ff  6a00                 push 0
// 007e8501  50                   push eax
// 007e8502  89b42414010000       mov dword ptr [esp + 0x114], esi
// 007e8509  89b42418010000       mov dword ptr [esp + 0x118], esi
// 007e8510  e8cf06fcff           call 0x7a8be4
// 007e8515  83c40c               add esp, 0xc
// 007e8518  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 007e851f  51                   push ecx
// 007e8520  53                   push ebx
// 007e8521  8d4d18               lea ecx, [ebp + 0x18]
// 007e8524  e8f7f8ffff           call 0x7e7e20
// 007e8529  85c0                 test eax, eax
// 007e852b  744b                 je 0x7e8578
// 007e852d  837c242400           cmp dword ptr [esp + 0x24], 0
// 007e8532  7525                 jne 0x7e8559
// 007e8534  837c245000           cmp dword ptr [esp + 0x50], 0
// 007e8539  741e                 je 0x7e8559
// 007e853b  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 007e8542  3bc6                 cmp eax, esi
// 007e8544  7404                 je 0x7e854a
// 007e8546  89442420             mov dword ptr [esp + 0x20], eax
// 007e854a  8b84240c010000       mov eax, dword ptr [esp + 0x10c]
// 007e8551  3bc6                 cmp eax, esi
// 007e8553  7404                 je 0x7e8559
// 007e8555  89442428             mov dword ptr [esp + 0x28], eax
// 007e8559  80bc24e800000000     cmp byte ptr [esp + 0xe8], 0
// 007e8561  7415                 je 0x7e8578
// 007e8563  b90f000000           mov ecx, 0xf
// 007e8568  8db424cc000000       lea esi, [esp + 0xcc]
// 007e856f  8dbc2410010000       lea edi, [esp + 0x110]
// 007e8576  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e8578  8b5500               mov edx, dword ptr [ebp]
// 007e857b  8b4228               mov eax, dword ptr [edx + 0x28]
// 007e857e  53                   push ebx
// 007e857f  8bcd                 mov ecx, ebp
// 007e8581  ffd0                 call eax
// 007e8583  85c0                 test eax, eax
// 007e8585  740b                 je 0x7e8592
// 007e8587  c7842420010000bc020000 mov dword ptr [esp + 0x120], 0x2bc
// 007e8592  f744244c00020000     test dword ptr [esp + 0x4c], 0x200
// 007e859a  7455                 je 0x7e85f1
// 007e859c  807c241700           cmp byte ptr [esp + 0x17], 0
// 007e85a1  0f95c0               setne al
// 007e85a4  88842425010000       mov byte ptr [esp + 0x125], al
// 007e85ab  84c0                 test al, al
// 007e85ad  7442                 je 0x7e85f1
// 007e85af  837c242400           cmp dword ptr [esp + 0x24], 0
// 007e85b4  753b                 jne 0x7e85f1
// 007e85b6  e8b5720000           call 0x7ef870
// 007e85bb  8bc8                 mov ecx, eax
// 007e85bd  e8de720000           call 0x7ef8a0
// 007e85c2  84c0                 test al, al
// 007e85c4  7519                 jne 0x7e85df
// 007e85c6  e8a5720000           call 0x7ef870
// 007e85cb  8bc8                 mov ecx, eax
// 007e85cd  e84e7b0000           call 0x7f0120
// 007e85d2  84c0                 test al, al
// 007e85d4  7509                 jne 0x7e85df
// 007e85d6  e845b5ffff           call 0x7e3b20
// 007e85db  6a1a                 push 0x1a
// 007e85dd  eb07                 jmp 0x7e85e6
// 007e85df  e83cb5ffff           call 0x7e3b20
// 007e85e4  6a0d                 push 0xd
// 007e85e6  8bc8                 mov ecx, eax
// 007e85e8  e8c3acffff           call 0x7e32b0
// 007e85ed  89442420             mov dword ptr [esp + 0x20], eax
// 007e85f1  c744244000000000     mov dword ptr [esp + 0x40], 0
// 007e85f9  c744243c080ea100     mov dword ptr [esp + 0x3c], 0xa10e08
// 007e8601  8d8c2410010000       lea ecx, [esp + 0x110]
// 007e8608  51                   push ecx
// 007e8609  c684249801000001     mov byte ptr [esp + 0x198], 1
// 007e8611  ff1570a19e00         call dword ptr [0x9ea170]
// 007e8617  50                   push eax
// 007e8618  8d4c2440             lea ecx, [esp + 0x40]
// 007e861c  e849f9fbff           call 0x7a7f6a
// 007e8621  8d54243c             lea edx, [esp + 0x3c]
// 007e8625  52                   push edx
// 007e8626  8d4c2478             lea ecx, [esp + 0x78]
// 007e862a  e821481900           call 0x97ce50
// 007e862f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 007e8632  8bf8                 mov edi, eax
// 007e8634  53                   push ebx
// 007e8635  8d442420             lea eax, [esp + 0x20]
// 007e8639  50                   push eax
// 007e863a  e8274a1900           call 0x97d066
// 007e863f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 007e8646  51                   push ecx
// 007e8647  8d4c2420             lea ecx, [esp + 0x20]
// 007e864b  c684249801000002     mov byte ptr [esp + 0x198], 2
// 007e8653  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e8659  50                   push eax
// 007e865a  8d4c2424             lea ecx, [esp + 0x24]
// 007e865e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e8664  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007e866b  50                   push eax
// 007e866c  52                   push edx
// 007e866d  ff1594a19e00         call dword ptr [0x9ea194]
// 007e8673  8b542434             mov edx, dword ptr [esp + 0x34]
// 007e8677  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007e867b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007e8682  2bd0                 sub edx, eax
// 007e8684  3bd1                 cmp edx, ecx
// 007e8686  7d08                 jge 0x7e8690
// 007e8688  8d440102             lea eax, [ecx + eax + 2]
// 007e868c  89442434             mov dword ptr [esp + 0x34], eax
// 007e8690  8b742428             mov esi, dword ptr [esp + 0x28]
// 007e8694  56                   push esi
// 007e8695  8d4c2478             lea ecx, [esp + 0x78]
// 007e8699  e8b8471900           call 0x97ce56
// 007e869e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007e86a2  51                   push ecx
// 007e86a3  8d4c2478             lea ecx, [esp + 0x78]
// 007e86a7  e8b0471900           call 0x97ce5c
// 007e86ac  837c242400           cmp dword ptr [esp + 0x24], 0
// 007e86b1  740f                 je 0x7e86c2
// 007e86b3  56                   push esi
// 007e86b4  8d542430             lea edx, [esp + 0x30]
// 007e86b8  52                   push edx
// 007e86b9  8d4c247c             lea ecx, [esp + 0x7c]
// 007e86bd  e87c00fcff           call 0x7a873e
// 007e86c2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007e86c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007e86ca  8b542434             mov edx, dword ptr [esp + 0x34]
// 007e86ce  6a00                 push 0
// 007e86d0  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007e86d4  89442468             mov dword ptr [esp + 0x68], eax
// 007e86d8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007e86dc  6a03                 push 3
// 007e86de  8d4c246c             lea ecx, [esp + 0x6c]
// 007e86e2  51                   push ecx
// 007e86e3  89542478             mov dword ptr [esp + 0x78], edx
// 007e86e7  8944247c             mov dword ptr [esp + 0x7c], eax
// 007e86eb  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007e86f1  8b742474             mov esi, dword ptr [esp + 0x74]
// 007e86f5  6824080000           push 0x824
// 007e86fa  8d542468             lea edx, [esp + 0x68]
// 007e86fe  52                   push edx
// 007e86ff  8d4c2424             lea ecx, [esp + 0x24]
// 007e8703  83c670               add esi, 0x70
// 007e8706  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007e870c  50                   push eax
// 007e870d  8d4c2428             lea ecx, [esp + 0x28]
// 007e8711  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007e8717  50                   push eax
// 007e8718  8b06                 mov eax, dword ptr [esi]
// 007e871a  8d8c2484000000       lea ecx, [esp + 0x84]
// 007e8721  ffd0                 call eax
// 007e8723  f644241801           test byte ptr [esp + 0x18], 1
// 007e8728  743d                 je 0x7e8767
// 007e872a  837c245400           cmp dword ptr [esp + 0x54], 0
// 007e872f  7536                 jne 0x7e8767
// 007e8731  837c245000           cmp dword ptr [esp + 0x50], 0
// 007e8736  742f                 je 0x7e8767
// 007e8738  ff1580ba9e00         call dword ptr [0x9eba80]
// 007e873e  50                   push eax
// 007e873f  e826f5fbff           call 0x7a7c6a
// 007e8744  3b4534               cmp eax, dword ptr [ebp + 0x34]
// 007e8747  751e                 jne 0x7e8767
// 007e8749  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007e874d  51                   push ecx
// 007e874e  8d4c2478             lea ecx, [esp + 0x78]
// 007e8752  e805471900           call 0x97ce5c
// 007e8757  8b442478             mov eax, dword ptr [esp + 0x78]
// 007e875b  8d54242c             lea edx, [esp + 0x2c]
// 007e875f  52                   push edx
// 007e8760  50                   push eax
// 007e8761  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 007e8767  57                   push edi
// 007e8768  8d4c2478             lea ecx, [esp + 0x78]
// 007e876c  e8df461900           call 0x97ce50
// 007e8771  8d4c243c             lea ecx, [esp + 0x3c]
// 007e8775  e8e4f7fbff           call 0x7a7f5e
// 007e877a  8b4534               mov eax, dword ptr [ebp + 0x34]
// 007e877d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e8780  53                   push ebx
// 007e8781  6a06                 push 6
// 007e8783  680a110000           push 0x110a
// 007e8788  51                   push ecx
// 007e8789  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e878f  8d4c241c             lea ecx, [esp + 0x1c]
// 007e8793  8bd8                 mov ebx, eax
// 007e8795  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007e879b  8d4c243c             lea ecx, [esp + 0x3c]
// 007e879f  c684249401000000     mov byte ptr [esp + 0x194], 0
// 007e87a7  c744243c080ea100     mov dword ptr [esp + 0x3c], 0xa10e08
// 007e87af  e8ac6ec2ff           call 0x40f660
// 007e87b4  85db                 test ebx, ebx
// 007e87b6  0f8504fcffff         jne 0x7e83c0
// 007e87bc  8b542460             mov edx, dword ptr [esp + 0x60]
// 007e87c0  52                   push edx
// 007e87c1  8d4c2478             lea ecx, [esp + 0x78]
// 007e87c5  e87a461900           call 0x97ce44
// 007e87ca  8d4c2474             lea ecx, [esp + 0x74]
// 007e87ce  c7842494010000ffffffff mov dword ptr [esp + 0x194], 0xffffffff
// 007e87d9  e8a26d0100           call 0x7ff580
// 007e87de  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 007e87e5  64890d00000000       mov dword ptr fs:[0], ecx
// 007e87ec  59                   pop ecx
// 007e87ed  5f                   pop edi
// 007e87ee  5e                   pop esi
// 007e87ef  5d                   pop ebp
// 007e87f0  5b                   pop ebx
// 007e87f1  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 007e87f8  33cc                 xor ecx, esp
// 007e87fa  e8d50cfcff           call 0x7a94d4
// 007e87ff  81c484010000         add esp, 0x184
// 007e8805  c20800               ret 8
// copied from an identical function in another client (function ?DoPaint@CXTTreeBase@@MAEXAAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp