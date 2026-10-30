// roc 2009-12 0081aa80  unit: CInstanceRecord::CNameItem  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081aa80
//
// 0081aa80  6aff                 push -1
// 0081aa82  686baa9500           push 0x95aa6b
// 0081aa87  64a100000000         mov eax, dword ptr fs:[0]
// 0081aa8d  50                   push eax
// 0081aa8e  83ec34               sub esp, 0x34
// 0081aa91  53                   push ebx
// 0081aa92  55                   push ebp
// 0081aa93  56                   push esi
// 0081aa94  57                   push edi
// 0081aa95  a10052b600           mov eax, dword ptr [0xb65200]
// 0081aa9a  33c4                 xor eax, esp
// 0081aa9c  50                   push eax
// 0081aa9d  8d442448             lea eax, [esp + 0x48]
// 0081aaa1  64a300000000         mov dword ptr fs:[0], eax
// 0081aaa7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081aaab  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0081aaaf  8b4704               mov eax, dword ptr [edi + 4]
// 0081aab2  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0081aab8  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 0081aabb  33c0                 xor eax, eax
// 0081aabd  8d7714               lea esi, [edi + 0x14]
// 0081aac0  894c2458             mov dword ptr [esp + 0x58], ecx
// 0081aac4  89442434             mov dword ptr [esp + 0x34], eax
// 0081aac8  c7442430f82a9f00     mov dword ptr [esp + 0x30], 0x9f2af8
// 0081aad0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081aad3  8b5608               mov edx, dword ptr [esi + 8]
// 0081aad6  8b1e                 mov ebx, dword ptr [esi]
// 0081aad8  89442450             mov dword ptr [esp + 0x50], eax
// 0081aadc  8b4604               mov eax, dword ptr [esi + 4]
// 0081aadf  51                   push ecx
// 0081aae0  52                   push edx
// 0081aae1  48                   dec eax
// 0081aae2  50                   push eax
// 0081aae3  53                   push ebx
// 0081aae4  ff150cb19800         call dword ptr [0x98b10c]
// 0081aaea  50                   push eax
// 0081aaeb  8d4c2434             lea ecx, [esp + 0x34]
// 0081aaef  e83693fdff           call 0x7f3e2a
// 0081aaf4  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0081aaf8  750c                 jne 0x81ab06
// 0081aafa  8d542430             lea edx, [esp + 0x30]
// 0081aafe  52                   push edx
// 0081aaff  8bcd                 mov ecx, ebp
// 0081ab01  e85ebb1000           call 0x926664
// 0081ab06  6a40                 push 0x40
// 0081ab08  e8538dfdff           call 0x7f3860
// 0081ab0d  8bd8                 mov ebx, eax
// 0081ab0f  83c404               add esp, 4
// 0081ab12  895c2424             mov dword ptr [esp + 0x24], ebx
// 0081ab16  c644245001           mov byte ptr [esp + 0x50], 1
// 0081ab1b  85db                 test ebx, ebx
// 0081ab1d  7436                 je 0x81ab55
// 0081ab1f  8bcb                 mov ecx, ebx
// 0081ab21  e81cb91000           call 0x926442
// 0081ab26  8d4b2c               lea ecx, [ebx + 0x2c]
// 0081ab29  c70344499f00         mov dword ptr [ebx], 0x9f4944
// 0081ab2f  ff1574de9800         call dword ptr [0x98de74]
// 0081ab35  33c9                 xor ecx, ecx
// 0081ab37  83c8ff               or eax, 0xffffffff
// 0081ab3a  894b20               mov dword ptr [ebx + 0x20], ecx
// 0081ab3d  894324               mov dword ptr [ebx + 0x24], eax
// 0081ab40  894328               mov dword ptr [ebx + 0x28], eax
// 0081ab43  894330               mov dword ptr [ebx + 0x30], eax
// 0081ab46  c7433408020000       mov dword ptr [ebx + 0x34], 0x208
// 0081ab4d  894b38               mov dword ptr [ebx + 0x38], ecx
// 0081ab50  89433c               mov dword ptr [ebx + 0x3c], eax
// 0081ab53  eb02                 jmp 0x81ab57
// 0081ab55  33db                 xor ebx, ebx
// 0081ab57  8b570c               mov edx, dword ptr [edi + 0xc]
// 0081ab5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081ab5e  8b01                 mov eax, dword ptr [ecx]
// 0081ab60  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0081ab63  52                   push edx
// 0081ab64  8d54241c             lea edx, [esp + 0x1c]
// 0081ab68  52                   push edx
// 0081ab69  c644245800           mov byte ptr [esp + 0x58], 0
// 0081ab6e  ffd0                 call eax
// 0081ab70  8d4b2c               lea ecx, [ebx + 0x2c]
// 0081ab73  50                   push eax
// 0081ab74  c644245402           mov byte ptr [esp + 0x54], 2
// 0081ab79  ff1538d59800         call dword ptr [0x98d538]
// 0081ab7f  8d4c2418             lea ecx, [esp + 0x18]
// 0081ab83  c644245000           mov byte ptr [esp + 0x50], 0
// 0081ab88  ff15c0de9800         call dword ptr [0x98dec0]
// 0081ab8e  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081ab91  8b11                 mov edx, dword ptr [ecx]
// 0081ab93  8b82d8000000         mov eax, dword ptr [edx + 0xd8]
// 0081ab99  53                   push ebx
// 0081ab9a  57                   push edi
// 0081ab9b  ffd0                 call eax
// 0081ab9d  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0081aba0  83f8ff               cmp eax, -1
// 0081aba3  7409                 je 0x81abae
// 0081aba5  50                   push eax
// 0081aba6  56                   push esi
// 0081aba7  8bcd                 mov ecx, ebp
// 0081aba9  e8509afdff           call 0x7f45fe
// 0081abae  8b0e                 mov ecx, dword ptr [esi]
// 0081abb0  894c2424             mov dword ptr [esp + 0x24], ecx
// 0081abb4  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0081abb7  85c9                 test ecx, ecx
// 0081abb9  0f84a3010000         je 0x81ad62
// 0081abbf  e85ccf0000           call 0x827b20
// 0081abc4  85c0                 test eax, eax
// 0081abc6  0f8496010000         je 0x81ad62
// 0081abcc  8b5708               mov edx, dword ptr [edi + 8]
// 0081abcf  8bca                 mov ecx, edx
// 0081abd1  8b01                 mov eax, dword ptr [ecx]
// 0081abd3  89542418             mov dword ptr [esp + 0x18], edx
// 0081abd7  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0081abdd  ffd2                 call edx
// 0081abdf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081abe3  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081abe7  8b01                 mov eax, dword ptr [ecx]
// 0081abe9  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 0081abef  ffd2                 call edx
// 0081abf1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081abf5  2bc8                 sub ecx, eax
// 0081abf7  85c9                 test ecx, ecx
// 0081abf9  7e01                 jle 0x81abfc
// 0081abfb  41                   inc ecx
// 0081abfc  51                   push ecx
// 0081abfd  8b4f04               mov ecx, dword ptr [edi + 4]
// 0081ac00  e8cb180000           call 0x81c4d0
// 0081ac05  0106                 add dword ptr [esi], eax
// 0081ac07  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081ac0a  8b01                 mov eax, dword ptr [ecx]
// 0081ac0c  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0081ac12  ffd2                 call edx
// 0081ac14  8b4e04               mov ecx, dword ptr [esi + 4]
// 0081ac17  8b5608               mov edx, dword ptr [esi + 8]
// 0081ac1a  89442418             mov dword ptr [esp + 0x18], eax
// 0081ac1e  8b06                 mov eax, dword ptr [esi]
// 0081ac20  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081ac24  8d4c2438             lea ecx, [esp + 0x38]
// 0081ac28  51                   push ecx
// 0081ac29  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0081ac2d  8944243c             mov dword ptr [esp + 0x3c], eax
// 0081ac31  8b460c               mov eax, dword ptr [esi + 0xc]
// 0081ac34  89542444             mov dword ptr [esp + 0x44], edx
// 0081ac38  8b5708               mov edx, dword ptr [edi + 8]
// 0081ac3b  52                   push edx
// 0081ac3c  8944244c             mov dword ptr [esp + 0x4c], eax
// 0081ac40  6a00                 push 0
// 0081ac42  8d442434             lea eax, [esp + 0x34]
// 0081ac46  50                   push eax
// 0081ac47  e894070800           call 0x89b3e0
// 0081ac4c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0081ac50  8b11                 mov edx, dword ptr [ecx]
// 0081ac52  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081ac56  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081ac5a  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 0081ac60  50                   push eax
// 0081ac61  51                   push ecx
// 0081ac62  8b0e                 mov ecx, dword ptr [esi]
// 0081ac64  83ec10               sub esp, 0x10
// 0081ac67  8bc4                 mov eax, esp
// 0081ac69  8908                 mov dword ptr [eax], ecx
// 0081ac6b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0081ac6e  894804               mov dword ptr [eax + 4], ecx
// 0081ac71  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081ac74  894808               mov dword ptr [eax + 8], ecx
// 0081ac77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0081ac7a  53                   push ebx
// 0081ac7b  89480c               mov dword ptr [eax + 0xc], ecx
// 0081ac7e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0081ac82  57                   push edi
// 0081ac83  ffd2                 call edx
// 0081ac85  8b4728               mov eax, dword ptr [edi + 0x28]
// 0081ac88  250000f00f           and eax, 0xff00000
// 0081ac8d  3d00001000           cmp eax, 0x100000
// 0081ac92  7418                 je 0x81acac
// 0081ac94  3d00004000           cmp eax, 0x400000
// 0081ac99  7523                 jne 0x81acbe
// 0081ac9b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0081ac9f  2b442428             sub eax, dword ptr [esp + 0x28]
// 0081aca3  83e802               sub eax, 2
// 0081aca6  89442438             mov dword ptr [esp + 0x38], eax
// 0081acaa  eb41                 jmp 0x81aced
// 0081acac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081acb0  8b542438             mov edx, dword ptr [esp + 0x38]
// 0081acb4  8d440a02             lea eax, [edx + ecx + 2]
// 0081acb8  89442440             mov dword ptr [esp + 0x40], eax
// 0081acbc  eb2f                 jmp 0x81aced
// 0081acbe  3d00000001           cmp eax, 0x1000000
// 0081acc3  7418                 je 0x81acdd
// 0081acc5  3d00000004           cmp eax, 0x4000000
// 0081acca  7521                 jne 0x81aced
// 0081accc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0081acd0  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0081acd4  83e902               sub ecx, 2
// 0081acd7  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081acdb  eb10                 jmp 0x81aced
// 0081acdd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0081ace1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081ace5  8d4c1002             lea ecx, [eax + edx + 2]
// 0081ace9  894c2444             mov dword ptr [esp + 0x44], ecx
// 0081aced  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081acf1  8b4708               mov eax, dword ptr [edi + 8]
// 0081acf4  f7d9                 neg ecx
// 0081acf6  8d542438             lea edx, [esp + 0x38]
// 0081acfa  52                   push edx
// 0081acfb  1bc9                 sbb ecx, ecx
// 0081acfd  50                   push eax
// 0081acfe  23cd                 and ecx, ebp
// 0081ad00  51                   push ecx
// 0081ad01  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0081ad05  8d542428             lea edx, [esp + 0x28]
// 0081ad09  52                   push edx
// 0081ad0a  e8d1060800           call 0x89b3e0
// 0081ad0f  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0081ad13  8b08                 mov ecx, dword ptr [eax]
// 0081ad15  894c2428             mov dword ptr [esp + 0x28], ecx
// 0081ad19  8b5004               mov edx, dword ptr [eax + 4]
// 0081ad1c  8954242c             mov dword ptr [esp + 0x2c], edx
// 0081ad20  7537                 jne 0x81ad59
// 0081ad22  837c241800           cmp dword ptr [esp + 0x18], 0
// 0081ad27  7430                 je 0x81ad59
// 0081ad29  8b4708               mov eax, dword ptr [edi + 8]
// 0081ad2c  8b10                 mov edx, dword ptr [eax]
// 0081ad2e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0081ad32  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 0081ad38  83ec10               sub esp, 0x10
// 0081ad3b  8bc4                 mov eax, esp
// 0081ad3d  8908                 mov dword ptr [eax], ecx
// 0081ad3f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0081ad43  894804               mov dword ptr [eax + 4], ecx
// 0081ad46  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0081ad4a  894808               mov dword ptr [eax + 8], ecx
// 0081ad4d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0081ad51  89480c               mov dword ptr [eax + 0xc], ecx
// 0081ad54  8b4f08               mov ecx, dword ptr [edi + 8]
// 0081ad57  ffd2                 call edx
// 0081ad59  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081ad5d  83c002               add eax, 2
// 0081ad60  0106                 add dword ptr [esi], eax
// 0081ad62  8b5500               mov edx, dword ptr [ebp]
// 0081ad65  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0081ad68  8b5238               mov edx, dword ptr [edx + 0x38]
// 0081ad6b  50                   push eax
// 0081ad6c  8bcd                 mov ecx, ebp
// 0081ad6e  ffd2                 call edx
// 0081ad70  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0081ad73  8b4500               mov eax, dword ptr [ebp]
// 0081ad76  8b5030               mov edx, dword ptr [eax + 0x30]
// 0081ad79  51                   push ecx
// 0081ad7a  8bcd                 mov ecx, ebp
// 0081ad7c  ffd2                 call edx
// 0081ad7e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081ad82  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0081ad85  83f8ff               cmp eax, -1
// 0081ad88  7515                 jne 0x81ad9f
// 0081ad8a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0081ad8e  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0081ad94  83f8ff               cmp eax, -1
// 0081ad97  7506                 jne 0x81ad9f
// 0081ad99  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 0081ad9f  8b5500               mov edx, dword ptr [ebp]
// 0081ada2  50                   push eax
// 0081ada3  8b4234               mov eax, dword ptr [edx + 0x34]
// 0081ada6  8bcd                 mov ecx, ebp
// 0081ada8  ffd0                 call eax
// 0081adaa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081adae  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0081adb2  7410                 je 0x81adc4
// 0081adb4  8b11                 mov edx, dword ptr [ecx]
// 0081adb6  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 0081adbc  56                   push esi
// 0081adbd  57                   push edi
// 0081adbe  ffd0                 call eax
// 0081adc0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081adc4  837b3cff             cmp dword ptr [ebx + 0x3c], -1
// 0081adc8  7513                 jne 0x81addd
// 0081adca  8b11                 mov edx, dword ptr [ecx]
// 0081adcc  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0081add2  ffd0                 call eax
// 0081add4  83f8ff               cmp eax, -1
// 0081add7  7427                 je 0x81ae00
// 0081add9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081addd  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0081ade0  83f8ff               cmp eax, -1
// 0081ade3  750a                 jne 0x81adef
// 0081ade5  8b11                 mov edx, dword ptr [ecx]
// 0081ade7  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0081aded  ffd0                 call eax
// 0081adef  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0081adf3  8b11                 mov edx, dword ptr [ecx]
// 0081adf5  50                   push eax
// 0081adf6  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 0081adfc  56                   push esi
// 0081adfd  57                   push edi
// 0081adfe  ffd0                 call eax
// 0081ae00  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081ae04  8b11                 mov edx, dword ptr [ecx]
// 0081ae06  8b36                 mov esi, dword ptr [esi]
// 0081ae08  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081ae0b  2b742424             sub esi, dword ptr [esp + 0x24]
// 0081ae0f  53                   push ebx
// 0081ae10  57                   push edi
// 0081ae11  ffd0                 call eax
// 0081ae13  8d4c2428             lea ecx, [esp + 0x28]
// 0081ae17  51                   push ecx
// 0081ae18  8d7b2c               lea edi, [ebx + 0x2c]
// 0081ae1b  8bcf                 mov ecx, edi
// 0081ae1d  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0081ae23  50                   push eax
// 0081ae24  8bcf                 mov ecx, edi
// 0081ae26  ff1580de9800         call dword ptr [0x98de80]
// 0081ae2c  8b5508               mov edx, dword ptr [ebp + 8]
// 0081ae2f  50                   push eax
// 0081ae30  52                   push edx
// 0081ae31  ff156cb19800         call dword ptr [0x98b16c]
// 0081ae37  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081ae3b  8b5500               mov edx, dword ptr [ebp]
// 0081ae3e  8b5230               mov edx, dword ptr [edx + 0x30]
// 0081ae41  8d743004             lea esi, [eax + esi + 4]
// 0081ae45  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081ae49  50                   push eax
// 0081ae4a  8bcd                 mov ecx, ebp
// 0081ae4c  ffd2                 call edx
// 0081ae4e  8bcb                 mov ecx, ebx
// 0081ae50  e8878ffdff           call 0x7f3ddc
// 0081ae55  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0081ae59  7509                 jne 0x81ae64
// 0081ae5b  6a00                 push 0
// 0081ae5d  8bcd                 mov ecx, ebp
// 0081ae5f  e800b81000           call 0x926664
// 0081ae64  8d4c2430             lea ecx, [esp + 0x30]
// 0081ae68  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0081ae70  c7442430f82a9f00     mov dword ptr [esp + 0x30], 0x9f2af8
// 0081ae78  e8b343bfff           call 0x40f230
// 0081ae7d  8bc6                 mov eax, esi
// 0081ae7f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0081ae83  64890d00000000       mov dword ptr fs:[0], ecx
// 0081ae8a  59                   pop ecx
// 0081ae8b  5f                   pop edi
// 0081ae8c  5e                   pop esi
// 0081ae8d  5d                   pop ebp
// 0081ae8e  5b                   pop ebx
// 0081ae8f  83c440               add esp, 0x40
// 0081ae92  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPReportRecordItem@@UAEHPAUXTP_REPORTRECORDITEM_DRAWARGS@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportRecordItem.cpp