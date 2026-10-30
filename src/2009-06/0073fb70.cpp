// roc 2009-06 0073fb70  unit: CInstanceRecord::CNameItem  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073fb70
//
// 0073fb70  6aff                 push -1
// 0073fb72  68db678700           push 0x8767db
// 0073fb77  64a100000000         mov eax, dword ptr fs:[0]
// 0073fb7d  50                   push eax
// 0073fb7e  83ec34               sub esp, 0x34
// 0073fb81  53                   push ebx
// 0073fb82  55                   push ebp
// 0073fb83  56                   push esi
// 0073fb84  57                   push edi
// 0073fb85  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0073fb8a  33c4                 xor eax, esp
// 0073fb8c  50                   push eax
// 0073fb8d  8d442448             lea eax, [esp + 0x48]
// 0073fb91  64a300000000         mov dword ptr fs:[0], eax
// 0073fb97  894c2414             mov dword ptr [esp + 0x14], ecx
// 0073fb9b  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0073fb9f  8b4704               mov eax, dword ptr [edi + 4]
// 0073fba2  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0073fba8  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 0073fbab  33c0                 xor eax, eax
// 0073fbad  8d7714               lea esi, [edi + 0x14]
// 0073fbb0  894c2458             mov dword ptr [esp + 0x58], ecx
// 0073fbb4  89442434             mov dword ptr [esp + 0x34], eax
// 0073fbb8  c74424308c2b8f00     mov dword ptr [esp + 0x30], 0x8f2b8c
// 0073fbc0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0073fbc3  8b5608               mov edx, dword ptr [esi + 8]
// 0073fbc6  8b1e                 mov ebx, dword ptr [esi]
// 0073fbc8  89442450             mov dword ptr [esp + 0x50], eax
// 0073fbcc  8b4604               mov eax, dword ptr [esi + 4]
// 0073fbcf  51                   push ecx
// 0073fbd0  52                   push edx
// 0073fbd1  48                   dec eax
// 0073fbd2  50                   push eax
// 0073fbd3  53                   push ebx
// 0073fbd4  ff15cce08900         call dword ptr [0x89e0cc]
// 0073fbda  50                   push eax
// 0073fbdb  8d4c2434             lea ecx, [esp + 0x34]
// 0073fbdf  e81e94fdff           call 0x719002
// 0073fbe4  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0073fbe8  750c                 jne 0x73fbf6
// 0073fbea  8d542430             lea edx, [esp + 0x30]
// 0073fbee  52                   push edx
// 0073fbef  8bcd                 mov ecx, ebp
// 0073fbf1  e802c51000           call 0x84c0f8
// 0073fbf6  6a40                 push 0x40
// 0073fbf8  e83b8efdff           call 0x718a38
// 0073fbfd  8bd8                 mov ebx, eax
// 0073fbff  83c404               add esp, 4
// 0073fc02  895c2424             mov dword ptr [esp + 0x24], ebx
// 0073fc06  c644245001           mov byte ptr [esp + 0x50], 1
// 0073fc0b  85db                 test ebx, ebx
// 0073fc0d  7436                 je 0x73fc45
// 0073fc0f  8bcb                 mov ecx, ebx
// 0073fc11  e814c31000           call 0x84bf2a
// 0073fc16  8d4b2c               lea ecx, [ebx + 0x2c]
// 0073fc19  c70384448f00         mov dword ptr [ebx], 0x8f4484
// 0073fc1f  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0073fc25  33c9                 xor ecx, ecx
// 0073fc27  83c8ff               or eax, 0xffffffff
// 0073fc2a  894b20               mov dword ptr [ebx + 0x20], ecx
// 0073fc2d  894324               mov dword ptr [ebx + 0x24], eax
// 0073fc30  894328               mov dword ptr [ebx + 0x28], eax
// 0073fc33  894330               mov dword ptr [ebx + 0x30], eax
// 0073fc36  c7433408020000       mov dword ptr [ebx + 0x34], 0x208
// 0073fc3d  894b38               mov dword ptr [ebx + 0x38], ecx
// 0073fc40  89433c               mov dword ptr [ebx + 0x3c], eax
// 0073fc43  eb02                 jmp 0x73fc47
// 0073fc45  33db                 xor ebx, ebx
// 0073fc47  8b570c               mov edx, dword ptr [edi + 0xc]
// 0073fc4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073fc4e  8b01                 mov eax, dword ptr [ecx]
// 0073fc50  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0073fc53  52                   push edx
// 0073fc54  8d54241c             lea edx, [esp + 0x1c]
// 0073fc58  52                   push edx
// 0073fc59  c644245800           mov byte ptr [esp + 0x58], 0
// 0073fc5e  ffd0                 call eax
// 0073fc60  8d4b2c               lea ecx, [ebx + 0x2c]
// 0073fc63  50                   push eax
// 0073fc64  c644245402           mov byte ptr [esp + 0x54], 2
// 0073fc69  ff1508fa8900         call dword ptr [0x89fa08]
// 0073fc6f  8d4c2418             lea ecx, [esp + 0x18]
// 0073fc73  c644245000           mov byte ptr [esp + 0x50], 0
// 0073fc78  ff1510fd8900         call dword ptr [0x89fd10]
// 0073fc7e  8b4f08               mov ecx, dword ptr [edi + 8]
// 0073fc81  8b11                 mov edx, dword ptr [ecx]
// 0073fc83  8b82d8000000         mov eax, dword ptr [edx + 0xd8]
// 0073fc89  53                   push ebx
// 0073fc8a  57                   push edi
// 0073fc8b  ffd0                 call eax
// 0073fc8d  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0073fc90  83f8ff               cmp eax, -1
// 0073fc93  7409                 je 0x73fc9e
// 0073fc95  50                   push eax
// 0073fc96  56                   push esi
// 0073fc97  8bcd                 mov ecx, ebp
// 0073fc99  e8329bfdff           call 0x7197d0
// 0073fc9e  8b0e                 mov ecx, dword ptr [esi]
// 0073fca0  894c2424             mov dword ptr [esp + 0x24], ecx
// 0073fca4  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0073fca7  85c9                 test ecx, ecx
// 0073fca9  0f84a3010000         je 0x73fe52
// 0073fcaf  e88cd00000           call 0x74cd40
// 0073fcb4  85c0                 test eax, eax
// 0073fcb6  0f8496010000         je 0x73fe52
// 0073fcbc  8b5708               mov edx, dword ptr [edi + 8]
// 0073fcbf  8bca                 mov ecx, edx
// 0073fcc1  8b01                 mov eax, dword ptr [ecx]
// 0073fcc3  89542418             mov dword ptr [esp + 0x18], edx
// 0073fcc7  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0073fccd  ffd2                 call edx
// 0073fccf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073fcd3  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073fcd7  8b01                 mov eax, dword ptr [ecx]
// 0073fcd9  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 0073fcdf  ffd2                 call edx
// 0073fce1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073fce5  2bc8                 sub ecx, eax
// 0073fce7  85c9                 test ecx, ecx
// 0073fce9  7e01                 jle 0x73fcec
// 0073fceb  41                   inc ecx
// 0073fcec  51                   push ecx
// 0073fced  8b4f04               mov ecx, dword ptr [edi + 4]
// 0073fcf0  e82b190000           call 0x741620
// 0073fcf5  0106                 add dword ptr [esi], eax
// 0073fcf7  8b4f08               mov ecx, dword ptr [edi + 8]
// 0073fcfa  8b01                 mov eax, dword ptr [ecx]
// 0073fcfc  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0073fd02  ffd2                 call edx
// 0073fd04  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073fd07  8b5608               mov edx, dword ptr [esi + 8]
// 0073fd0a  89442418             mov dword ptr [esp + 0x18], eax
// 0073fd0e  8b06                 mov eax, dword ptr [esi]
// 0073fd10  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0073fd14  8d4c2438             lea ecx, [esp + 0x38]
// 0073fd18  51                   push ecx
// 0073fd19  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0073fd1d  8944243c             mov dword ptr [esp + 0x3c], eax
// 0073fd21  8b460c               mov eax, dword ptr [esi + 0xc]
// 0073fd24  89542444             mov dword ptr [esp + 0x44], edx
// 0073fd28  8b5708               mov edx, dword ptr [edi + 8]
// 0073fd2b  52                   push edx
// 0073fd2c  8944244c             mov dword ptr [esp + 0x4c], eax
// 0073fd30  6a00                 push 0
// 0073fd32  8d442434             lea eax, [esp + 0x34]
// 0073fd36  50                   push eax
// 0073fd37  e8a4080800           call 0x7c05e0
// 0073fd3c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0073fd40  8b11                 mov edx, dword ptr [ecx]
// 0073fd42  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0073fd46  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073fd4a  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 0073fd50  50                   push eax
// 0073fd51  51                   push ecx
// 0073fd52  8b0e                 mov ecx, dword ptr [esi]
// 0073fd54  83ec10               sub esp, 0x10
// 0073fd57  8bc4                 mov eax, esp
// 0073fd59  8908                 mov dword ptr [eax], ecx
// 0073fd5b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073fd5e  894804               mov dword ptr [eax + 4], ecx
// 0073fd61  8b4e08               mov ecx, dword ptr [esi + 8]
// 0073fd64  894808               mov dword ptr [eax + 8], ecx
// 0073fd67  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0073fd6a  53                   push ebx
// 0073fd6b  89480c               mov dword ptr [eax + 0xc], ecx
// 0073fd6e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0073fd72  57                   push edi
// 0073fd73  ffd2                 call edx
// 0073fd75  8b4728               mov eax, dword ptr [edi + 0x28]
// 0073fd78  250000f00f           and eax, 0xff00000
// 0073fd7d  3d00001000           cmp eax, 0x100000
// 0073fd82  7418                 je 0x73fd9c
// 0073fd84  3d00004000           cmp eax, 0x400000
// 0073fd89  7523                 jne 0x73fdae
// 0073fd8b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0073fd8f  2b442428             sub eax, dword ptr [esp + 0x28]
// 0073fd93  83e802               sub eax, 2
// 0073fd96  89442438             mov dword ptr [esp + 0x38], eax
// 0073fd9a  eb41                 jmp 0x73fddd
// 0073fd9c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073fda0  8b542438             mov edx, dword ptr [esp + 0x38]
// 0073fda4  8d440a02             lea eax, [edx + ecx + 2]
// 0073fda8  89442440             mov dword ptr [esp + 0x40], eax
// 0073fdac  eb2f                 jmp 0x73fddd
// 0073fdae  3d00000001           cmp eax, 0x1000000
// 0073fdb3  7418                 je 0x73fdcd
// 0073fdb5  3d00000004           cmp eax, 0x4000000
// 0073fdba  7521                 jne 0x73fddd
// 0073fdbc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0073fdc0  2b4c242c             sub ecx, dword ptr [esp + 0x2c]
// 0073fdc4  83e902               sub ecx, 2
// 0073fdc7  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0073fdcb  eb10                 jmp 0x73fddd
// 0073fdcd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0073fdd1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0073fdd5  8d4c1002             lea ecx, [eax + edx + 2]
// 0073fdd9  894c2444             mov dword ptr [esp + 0x44], ecx
// 0073fddd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073fde1  8b4708               mov eax, dword ptr [edi + 8]
// 0073fde4  f7d9                 neg ecx
// 0073fde6  8d542438             lea edx, [esp + 0x38]
// 0073fdea  52                   push edx
// 0073fdeb  1bc9                 sbb ecx, ecx
// 0073fded  50                   push eax
// 0073fdee  23cd                 and ecx, ebp
// 0073fdf0  51                   push ecx
// 0073fdf1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0073fdf5  8d542428             lea edx, [esp + 0x28]
// 0073fdf9  52                   push edx
// 0073fdfa  e8e1070800           call 0x7c05e0
// 0073fdff  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0073fe03  8b08                 mov ecx, dword ptr [eax]
// 0073fe05  894c2428             mov dword ptr [esp + 0x28], ecx
// 0073fe09  8b5004               mov edx, dword ptr [eax + 4]
// 0073fe0c  8954242c             mov dword ptr [esp + 0x2c], edx
// 0073fe10  7537                 jne 0x73fe49
// 0073fe12  837c241800           cmp dword ptr [esp + 0x18], 0
// 0073fe17  7430                 je 0x73fe49
// 0073fe19  8b4708               mov eax, dword ptr [edi + 8]
// 0073fe1c  8b10                 mov edx, dword ptr [eax]
// 0073fe1e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073fe22  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 0073fe28  83ec10               sub esp, 0x10
// 0073fe2b  8bc4                 mov eax, esp
// 0073fe2d  8908                 mov dword ptr [eax], ecx
// 0073fe2f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0073fe33  894804               mov dword ptr [eax + 4], ecx
// 0073fe36  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0073fe3a  894808               mov dword ptr [eax + 8], ecx
// 0073fe3d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0073fe41  89480c               mov dword ptr [eax + 0xc], ecx
// 0073fe44  8b4f08               mov ecx, dword ptr [edi + 8]
// 0073fe47  ffd2                 call edx
// 0073fe49  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073fe4d  83c002               add eax, 2
// 0073fe50  0106                 add dword ptr [esi], eax
// 0073fe52  8b5500               mov edx, dword ptr [ebp]
// 0073fe55  8b4324               mov eax, dword ptr [ebx + 0x24]
// 0073fe58  8b5238               mov edx, dword ptr [edx + 0x38]
// 0073fe5b  50                   push eax
// 0073fe5c  8bcd                 mov ecx, ebp
// 0073fe5e  ffd2                 call edx
// 0073fe60  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0073fe63  8b4500               mov eax, dword ptr [ebp]
// 0073fe66  8b5030               mov edx, dword ptr [eax + 0x30]
// 0073fe69  51                   push ecx
// 0073fe6a  8bcd                 mov ecx, ebp
// 0073fe6c  ffd2                 call edx
// 0073fe6e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073fe72  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0073fe75  83f8ff               cmp eax, -1
// 0073fe78  7515                 jne 0x73fe8f
// 0073fe7a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0073fe7e  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0073fe84  83f8ff               cmp eax, -1
// 0073fe87  7506                 jne 0x73fe8f
// 0073fe89  8b818c000000         mov eax, dword ptr [ecx + 0x8c]
// 0073fe8f  8b5500               mov edx, dword ptr [ebp]
// 0073fe92  50                   push eax
// 0073fe93  8b4234               mov eax, dword ptr [edx + 0x34]
// 0073fe96  8bcd                 mov ecx, ebp
// 0073fe98  ffd0                 call eax
// 0073fe9a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073fe9e  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0073fea2  7410                 je 0x73feb4
// 0073fea4  8b11                 mov edx, dword ptr [ecx]
// 0073fea6  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 0073feac  56                   push esi
// 0073fead  57                   push edi
// 0073feae  ffd0                 call eax
// 0073feb0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073feb4  837b3cff             cmp dword ptr [ebx + 0x3c], -1
// 0073feb8  7513                 jne 0x73fecd
// 0073feba  8b11                 mov edx, dword ptr [ecx]
// 0073febc  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0073fec2  ffd0                 call eax
// 0073fec4  83f8ff               cmp eax, -1
// 0073fec7  7427                 je 0x73fef0
// 0073fec9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073fecd  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0073fed0  83f8ff               cmp eax, -1
// 0073fed3  750a                 jne 0x73fedf
// 0073fed5  8b11                 mov edx, dword ptr [ecx]
// 0073fed7  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0073fedd  ffd0                 call eax
// 0073fedf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0073fee3  8b11                 mov edx, dword ptr [ecx]
// 0073fee5  50                   push eax
// 0073fee6  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 0073feec  56                   push esi
// 0073feed  57                   push edi
// 0073feee  ffd0                 call eax
// 0073fef0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073fef4  8b11                 mov edx, dword ptr [ecx]
// 0073fef6  8b36                 mov esi, dword ptr [esi]
// 0073fef8  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0073fefb  2b742424             sub esi, dword ptr [esp + 0x24]
// 0073feff  53                   push ebx
// 0073ff00  57                   push edi
// 0073ff01  ffd0                 call eax
// 0073ff03  8d4c2428             lea ecx, [esp + 0x28]
// 0073ff07  51                   push ecx
// 0073ff08  8d7b2c               lea edi, [ebx + 0x2c]
// 0073ff0b  8bcf                 mov ecx, edi
// 0073ff0d  ff1554fb8900         call dword ptr [0x89fb54]
// 0073ff13  50                   push eax
// 0073ff14  8bcf                 mov ecx, edi
// 0073ff16  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073ff1c  8b5508               mov edx, dword ptr [ebp + 8]
// 0073ff1f  50                   push eax
// 0073ff20  52                   push edx
// 0073ff21  ff1550e18900         call dword ptr [0x89e150]
// 0073ff27  8b442428             mov eax, dword ptr [esp + 0x28]
// 0073ff2b  8b5500               mov edx, dword ptr [ebp]
// 0073ff2e  8b5230               mov edx, dword ptr [edx + 0x30]
// 0073ff31  8d743004             lea esi, [eax + esi + 4]
// 0073ff35  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073ff39  50                   push eax
// 0073ff3a  8bcd                 mov ecx, ebp
// 0073ff3c  ffd2                 call edx
// 0073ff3e  8bcb                 mov ecx, ebx
// 0073ff40  e86390fdff           call 0x718fa8
// 0073ff45  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 0073ff49  7509                 jne 0x73ff54
// 0073ff4b  6a00                 push 0
// 0073ff4d  8bcd                 mov ecx, ebp
// 0073ff4f  e8a4c11000           call 0x84c0f8
// 0073ff54  8d4c2430             lea ecx, [esp + 0x30]
// 0073ff58  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0073ff60  c74424308c2b8f00     mov dword ptr [esp + 0x30], 0x8f2b8c
// 0073ff68  e863f5ccff           call 0x40f4d0
// 0073ff6d  8bc6                 mov eax, esi
// 0073ff6f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0073ff73  64890d00000000       mov dword ptr fs:[0], ecx
// 0073ff7a  59                   pop ecx
// 0073ff7b  5f                   pop edi
// 0073ff7c  5e                   pop esi
// 0073ff7d  5d                   pop ebp
// 0073ff7e  5b                   pop ebx
// 0073ff7f  83c440               add esp, 0x40
// 0073ff82  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPReportRecordItem@@UAEHPAUXTP_REPORTRECORDITEM_DRAWARGS@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportRecordItem.cpp