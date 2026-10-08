// roc 2007-08 004fdb50  unit: RBX::Render::AggregateChunk  size: 2161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fdb50
//
// 004fdb50  55                   push ebp
// 004fdb51  8bec                 mov ebp, esp
// 004fdb53  83e4f8               and esp, 0xfffffff8
// 004fdb56  83ec64               sub esp, 0x64
// 004fdb59  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004fdb5c  53                   push ebx
// 004fdb5d  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004fdb60  2bcb                 sub ecx, ebx
// 004fdb62  b867666666           mov eax, 0x66666667
// 004fdb67  f7e9                 imul ecx
// 004fdb69  c1fa05               sar edx, 5
// 004fdb6c  8bc2                 mov eax, edx
// 004fdb6e  c1e81f               shr eax, 0x1f
// 004fdb71  03c2                 add eax, edx
// 004fdb73  99                   cdq 
// 004fdb74  56                   push esi
// 004fdb75  8b7514               mov esi, dword ptr [ebp + 0x14]
// 004fdb78  57                   push edi
// 004fdb79  2bc2                 sub eax, edx
// 004fdb7b  d1f8                 sar eax, 1
// 004fdb7d  8d3c80               lea edi, [eax + eax*4]
// 004fdb80  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004fdb83  56                   push esi
// 004fdb84  83c0b0               add eax, -0x50
// 004fdb87  c1e704               shl edi, 4
// 004fdb8a  50                   push eax
// 004fdb8b  03fb                 add edi, ebx
// 004fdb8d  57                   push edi
// 004fdb8e  53                   push ebx
// 004fdb8f  e8fcfdffff           call 0x4fd990
// 004fdb94  83c410               add esp, 0x10
// 004fdb97  397d0c               cmp dword ptr [ebp + 0xc], edi
// 004fdb9a  8d5f50               lea ebx, [edi + 0x50]
// 004fdb9d  895c2414             mov dword ptr [esp + 0x14], ebx
// 004fdba1  732a                 jae 0x4fdbcd
// 004fdba3  8d47b0               lea eax, [edi - 0x50]
// 004fdba6  57                   push edi
// 004fdba7  50                   push eax
// 004fdba8  89442424             mov dword ptr [esp + 0x24], eax
// 004fdbac  ffd6                 call esi
// 004fdbae  83c408               add esp, 8
// 004fdbb1  84c0                 test al, al
// 004fdbb3  7518                 jne 0x4fdbcd
// 004fdbb5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004fdbb9  51                   push ecx
// 004fdbba  57                   push edi
// 004fdbbb  ffd6                 call esi
// 004fdbbd  83c408               add esp, 8
// 004fdbc0  84c0                 test al, al
// 004fdbc2  7509                 jne 0x4fdbcd
// 004fdbc4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004fdbc8  397d0c               cmp dword ptr [ebp + 0xc], edi
// 004fdbcb  72d6                 jb 0x4fdba3
// 004fdbcd  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 004fdbd0  7322                 jae 0x4fdbf4
// 004fdbd2  57                   push edi
// 004fdbd3  53                   push ebx
// 004fdbd4  ffd6                 call esi
// 004fdbd6  83c408               add esp, 8
// 004fdbd9  84c0                 test al, al
// 004fdbdb  7513                 jne 0x4fdbf0
// 004fdbdd  53                   push ebx
// 004fdbde  57                   push edi
// 004fdbdf  ffd6                 call esi
// 004fdbe1  83c408               add esp, 8
// 004fdbe4  84c0                 test al, al
// 004fdbe6  7508                 jne 0x4fdbf0
// 004fdbe8  83c350               add ebx, 0x50
// 004fdbeb  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 004fdbee  72e2                 jb 0x4fdbd2
// 004fdbf0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004fdbf4  8bc3                 mov eax, ebx
// 004fdbf6  89442410             mov dword ptr [esp + 0x10], eax
// 004fdbfa  897c2418             mov dword ptr [esp + 0x18], edi
// 004fdbfe  8bff                 mov edi, edi
// 004fdc00  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004fdc03  0f833e010000         jae 0x4fdd47
// 004fdc09  8d7018               lea esi, [eax + 0x18]
// 004fdc0c  eb06                 jmp 0x4fdc14
// 004fdc0e  8bff                 mov edi, edi
// 004fdc10  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fdc14  50                   push eax
// 004fdc15  57                   push edi
// 004fdc16  ff5514               call dword ptr [ebp + 0x14]
// 004fdc19  83c408               add esp, 8
// 004fdc1c  84c0                 test al, al
// 004fdc1e  0f8508010000         jne 0x4fdd2c
// 004fdc24  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fdc28  57                   push edi
// 004fdc29  52                   push edx
// 004fdc2a  ff5514               call dword ptr [ebp + 0x14]
// 004fdc2d  83c408               add esp, 8
// 004fdc30  84c0                 test al, al
// 004fdc32  0f850b010000         jne 0x4fdd43
// 004fdc38  8344241450           add dword ptr [esp + 0x14], 0x50
// 004fdc3d  53                   push ebx
// 004fdc3e  8d4c2424             lea ecx, [esp + 0x24]
// 004fdc42  e8296df7ff           call 0x474970
// 004fdc47  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fdc4b  d900                 fld dword ptr [eax]
// 004fdc4d  d91b                 fstp dword ptr [ebx]
// 004fdc4f  d946ec               fld dword ptr [esi - 0x14]
// 004fdc52  d95b04               fstp dword ptr [ebx + 4]
// 004fdc55  d946f0               fld dword ptr [esi - 0x10]
// 004fdc58  d95b08               fstp dword ptr [ebx + 8]
// 004fdc5b  d946f4               fld dword ptr [esi - 0xc]
// 004fdc5e  d95b0c               fstp dword ptr [ebx + 0xc]
// 004fdc61  d946f8               fld dword ptr [esi - 8]
// 004fdc64  d95b10               fstp dword ptr [ebx + 0x10]
// 004fdc67  d946fc               fld dword ptr [esi - 4]
// 004fdc6a  d95b14               fstp dword ptr [ebx + 0x14]
// 004fdc6d  d906                 fld dword ptr [esi]
// 004fdc6f  d95b18               fstp dword ptr [ebx + 0x18]
// 004fdc72  dd4608               fld qword ptr [esi + 8]
// 004fdc75  dd5b20               fstp qword ptr [ebx + 0x20]
// 004fdc78  dd4610               fld qword ptr [esi + 0x10]
// 004fdc7b  dd5b28               fstp qword ptr [ebx + 0x28]
// 004fdc7e  dd4618               fld qword ptr [esi + 0x18]
// 004fdc81  dd5b30               fstp qword ptr [ebx + 0x30]
// 004fdc84  dd4620               fld qword ptr [esi + 0x20]
// 004fdc87  dd5b38               fstp qword ptr [ebx + 0x38]
// 004fdc8a  d94628               fld dword ptr [esi + 0x28]
// 004fdc8d  d95b40               fstp dword ptr [ebx + 0x40]
// 004fdc90  d9462c               fld dword ptr [esi + 0x2c]
// 004fdc93  d95b44               fstp dword ptr [ebx + 0x44]
// 004fdc96  d94630               fld dword ptr [esi + 0x30]
// 004fdc99  d95b48               fstp dword ptr [ebx + 0x48]
// 004fdc9c  0fb64e34             movzx ecx, byte ptr [esi + 0x34]
// 004fdca0  d9442420             fld dword ptr [esp + 0x20]
// 004fdca4  884b4c               mov byte ptr [ebx + 0x4c], cl
// 004fdca7  0fb65635             movzx edx, byte ptr [esi + 0x35]
// 004fdcab  88534d               mov byte ptr [ebx + 0x4d], dl
// 004fdcae  0fb64e36             movzx ecx, byte ptr [esi + 0x36]
// 004fdcb2  884b4e               mov byte ptr [ebx + 0x4e], cl
// 004fdcb5  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004fdcba  d918                 fstp dword ptr [eax]
// 004fdcbc  d9442424             fld dword ptr [esp + 0x24]
// 004fdcc0  d95eec               fstp dword ptr [esi - 0x14]
// 004fdcc3  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004fdcc8  d9442428             fld dword ptr [esp + 0x28]
// 004fdccc  d95ef0               fstp dword ptr [esi - 0x10]
// 004fdccf  d944242c             fld dword ptr [esp + 0x2c]
// 004fdcd3  8a44246d             mov al, byte ptr [esp + 0x6d]
// 004fdcd7  d95ef4               fstp dword ptr [esi - 0xc]
// 004fdcda  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004fdcde  d9442430             fld dword ptr [esp + 0x30]
// 004fdce2  d95ef8               fstp dword ptr [esi - 8]
// 004fdce5  d9442434             fld dword ptr [esp + 0x34]
// 004fdce9  d95efc               fstp dword ptr [esi - 4]
// 004fdcec  d9442438             fld dword ptr [esp + 0x38]
// 004fdcf0  d91e                 fstp dword ptr [esi]
// 004fdcf2  dd442440             fld qword ptr [esp + 0x40]
// 004fdcf6  dd5e08               fstp qword ptr [esi + 8]
// 004fdcf9  dd442448             fld qword ptr [esp + 0x48]
// 004fdcfd  dd5e10               fstp qword ptr [esi + 0x10]
// 004fdd00  dd442450             fld qword ptr [esp + 0x50]
// 004fdd04  dd5e18               fstp qword ptr [esi + 0x18]
// 004fdd07  dd442458             fld qword ptr [esp + 0x58]
// 004fdd0b  dd5e20               fstp qword ptr [esi + 0x20]
// 004fdd0e  d9442460             fld dword ptr [esp + 0x60]
// 004fdd12  d95e28               fstp dword ptr [esi + 0x28]
// 004fdd15  d9442464             fld dword ptr [esp + 0x64]
// 004fdd19  d95e2c               fstp dword ptr [esi + 0x2c]
// 004fdd1c  d9442468             fld dword ptr [esp + 0x68]
// 004fdd20  d95e30               fstp dword ptr [esi + 0x30]
// 004fdd23  885634               mov byte ptr [esi + 0x34], dl
// 004fdd26  884635               mov byte ptr [esi + 0x35], al
// 004fdd29  884e36               mov byte ptr [esi + 0x36], cl
// 004fdd2c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fdd30  83c050               add eax, 0x50
// 004fdd33  83c650               add esi, 0x50
// 004fdd36  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004fdd39  89442410             mov dword ptr [esp + 0x10], eax
// 004fdd3d  0f82cdfeffff         jb 0x4fdc10
// 004fdd43  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fdd47  8b742418             mov esi, dword ptr [esp + 0x18]
// 004fdd4b  39750c               cmp dword ptr [ebp + 0xc], esi
// 004fdd4e  0f8341010000         jae 0x4fde95
// 004fdd54  8d5718               lea edx, [edi + 0x18]
// 004fdd57  8954241c             mov dword ptr [esp + 0x1c], edx
// 004fdd5b  83c6c8               add esi, -0x38
// 004fdd5e  8bff                 mov edi, edi
// 004fdd60  8d46e8               lea eax, [esi - 0x18]
// 004fdd63  57                   push edi
// 004fdd64  50                   push eax
// 004fdd65  ff5514               call dword ptr [ebp + 0x14]
// 004fdd68  83c408               add esp, 8
// 004fdd6b  84c0                 test al, al
// 004fdd6d  0f8507010000         jne 0x4fde7a
// 004fdd73  8d46e8               lea eax, [esi - 0x18]
// 004fdd76  50                   push eax
// 004fdd77  57                   push edi
// 004fdd78  ff5514               call dword ptr [ebp + 0x14]
// 004fdd7b  83c408               add esp, 8
// 004fdd7e  84c0                 test al, al
// 004fdd80  0f850b010000         jne 0x4fde91
// 004fdd86  836c241c50           sub dword ptr [esp + 0x1c], 0x50
// 004fdd8b  83ef50               sub edi, 0x50
// 004fdd8e  57                   push edi
// 004fdd8f  8d4c2424             lea ecx, [esp + 0x24]
// 004fdd93  e8d86bf7ff           call 0x474970
// 004fdd98  d946e8               fld dword ptr [esi - 0x18]
// 004fdd9b  d91f                 fstp dword ptr [edi]
// 004fdd9d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fdda1  d946ec               fld dword ptr [esi - 0x14]
// 004fdda4  d958ec               fstp dword ptr [eax - 0x14]
// 004fdda7  d946f0               fld dword ptr [esi - 0x10]
// 004fddaa  d958f0               fstp dword ptr [eax - 0x10]
// 004fddad  d946f4               fld dword ptr [esi - 0xc]
// 004fddb0  d958f4               fstp dword ptr [eax - 0xc]
// 004fddb3  d946f8               fld dword ptr [esi - 8]
// 004fddb6  d958f8               fstp dword ptr [eax - 8]
// 004fddb9  d946fc               fld dword ptr [esi - 4]
// 004fddbc  d958fc               fstp dword ptr [eax - 4]
// 004fddbf  d906                 fld dword ptr [esi]
// 004fddc1  d918                 fstp dword ptr [eax]
// 004fddc3  dd4608               fld qword ptr [esi + 8]
// 004fddc6  dd5808               fstp qword ptr [eax + 8]
// 004fddc9  dd4610               fld qword ptr [esi + 0x10]
// 004fddcc  dd5810               fstp qword ptr [eax + 0x10]
// 004fddcf  dd4618               fld qword ptr [esi + 0x18]
// 004fddd2  dd5818               fstp qword ptr [eax + 0x18]
// 004fddd5  dd4620               fld qword ptr [esi + 0x20]
// 004fddd8  dd5820               fstp qword ptr [eax + 0x20]
// 004fdddb  d94628               fld dword ptr [esi + 0x28]
// 004fddde  d95828               fstp dword ptr [eax + 0x28]
// 004fdde1  d9462c               fld dword ptr [esi + 0x2c]
// 004fdde4  d9582c               fstp dword ptr [eax + 0x2c]
// 004fdde7  d94630               fld dword ptr [esi + 0x30]
// 004fddea  d95830               fstp dword ptr [eax + 0x30]
// 004fdded  0fb64e34             movzx ecx, byte ptr [esi + 0x34]
// 004fddf1  d9442420             fld dword ptr [esp + 0x20]
// 004fddf5  884834               mov byte ptr [eax + 0x34], cl
// 004fddf8  0fb65635             movzx edx, byte ptr [esi + 0x35]
// 004fddfc  885035               mov byte ptr [eax + 0x35], dl
// 004fddff  0fb64e36             movzx ecx, byte ptr [esi + 0x36]
// 004fde03  884836               mov byte ptr [eax + 0x36], cl
// 004fde06  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004fde0b  d95ee8               fstp dword ptr [esi - 0x18]
// 004fde0e  d9442424             fld dword ptr [esp + 0x24]
// 004fde12  d95eec               fstp dword ptr [esi - 0x14]
// 004fde15  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004fde1a  d9442428             fld dword ptr [esp + 0x28]
// 004fde1e  d95ef0               fstp dword ptr [esi - 0x10]
// 004fde21  d944242c             fld dword ptr [esp + 0x2c]
// 004fde25  8a44246d             mov al, byte ptr [esp + 0x6d]
// 004fde29  d95ef4               fstp dword ptr [esi - 0xc]
// 004fde2c  d9442430             fld dword ptr [esp + 0x30]
// 004fde30  d95ef8               fstp dword ptr [esi - 8]
// 004fde33  d9442434             fld dword ptr [esp + 0x34]
// 004fde37  d95efc               fstp dword ptr [esi - 4]
// 004fde3a  d9442438             fld dword ptr [esp + 0x38]
// 004fde3e  d91e                 fstp dword ptr [esi]
// 004fde40  dd442440             fld qword ptr [esp + 0x40]
// 004fde44  dd5e08               fstp qword ptr [esi + 8]
// 004fde47  dd442448             fld qword ptr [esp + 0x48]
// 004fde4b  dd5e10               fstp qword ptr [esi + 0x10]
// 004fde4e  dd442450             fld qword ptr [esp + 0x50]
// 004fde52  dd5e18               fstp qword ptr [esi + 0x18]
// 004fde55  dd442458             fld qword ptr [esp + 0x58]
// 004fde59  dd5e20               fstp qword ptr [esi + 0x20]
// 004fde5c  d9442460             fld dword ptr [esp + 0x60]
// 004fde60  d95e28               fstp dword ptr [esi + 0x28]
// 004fde63  d9442464             fld dword ptr [esp + 0x64]
// 004fde67  d95e2c               fstp dword ptr [esi + 0x2c]
// 004fde6a  d9442468             fld dword ptr [esp + 0x68]
// 004fde6e  d95e30               fstp dword ptr [esi + 0x30]
// 004fde71  885634               mov byte ptr [esi + 0x34], dl
// 004fde74  884635               mov byte ptr [esi + 0x35], al
// 004fde77  884e36               mov byte ptr [esi + 0x36], cl
// 004fde7a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fde7e  83e850               sub eax, 0x50
// 004fde81  83ee50               sub esi, 0x50
// 004fde84  39450c               cmp dword ptr [ebp + 0xc], eax
// 004fde87  89442418             mov dword ptr [esp + 0x18], eax
// 004fde8b  0f82cffeffff         jb 0x4fdd60
// 004fde91  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fde95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fde99  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 004fde9c  0f850e020000         jne 0x4fe0b0
// 004fdea2  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004fdea5  0f8407050000         je 0x4fe3b2
// 004fdeab  3bd8                 cmp ebx, eax
// 004fdead  0f84ee000000         je 0x4fdfa1
// 004fdeb3  57                   push edi
// 004fdeb4  8d4c2424             lea ecx, [esp + 0x24]
// 004fdeb8  e8b36af7ff           call 0x474970
// 004fdebd  d903                 fld dword ptr [ebx]
// 004fdebf  d91f                 fstp dword ptr [edi]
// 004fdec1  d94304               fld dword ptr [ebx + 4]
// 004fdec4  d95f04               fstp dword ptr [edi + 4]
// 004fdec7  d94308               fld dword ptr [ebx + 8]
// 004fdeca  d95f08               fstp dword ptr [edi + 8]
// 004fdecd  d9430c               fld dword ptr [ebx + 0xc]
// 004fded0  d95f0c               fstp dword ptr [edi + 0xc]
// 004fded3  d94310               fld dword ptr [ebx + 0x10]
// 004fded6  d95f10               fstp dword ptr [edi + 0x10]
// 004fded9  d94314               fld dword ptr [ebx + 0x14]
// 004fdedc  d95f14               fstp dword ptr [edi + 0x14]
// 004fdedf  d94318               fld dword ptr [ebx + 0x18]
// 004fdee2  d95f18               fstp dword ptr [edi + 0x18]
// 004fdee5  dd4320               fld qword ptr [ebx + 0x20]
// 004fdee8  dd5f20               fstp qword ptr [edi + 0x20]
// 004fdeeb  dd4328               fld qword ptr [ebx + 0x28]
// 004fdeee  dd5f28               fstp qword ptr [edi + 0x28]
// 004fdef1  dd4330               fld qword ptr [ebx + 0x30]
// 004fdef4  dd5f30               fstp qword ptr [edi + 0x30]
// 004fdef7  dd4338               fld qword ptr [ebx + 0x38]
// 004fdefa  dd5f38               fstp qword ptr [edi + 0x38]
// 004fdefd  d94340               fld dword ptr [ebx + 0x40]
// 004fdf00  d95f40               fstp dword ptr [edi + 0x40]
// 004fdf03  d94344               fld dword ptr [ebx + 0x44]
// 004fdf06  d95f44               fstp dword ptr [edi + 0x44]
// 004fdf09  d94348               fld dword ptr [ebx + 0x48]
// 004fdf0c  d95f48               fstp dword ptr [edi + 0x48]
// 004fdf0f  0fb6534c             movzx edx, byte ptr [ebx + 0x4c]
// 004fdf13  d9442420             fld dword ptr [esp + 0x20]
// 004fdf17  88574c               mov byte ptr [edi + 0x4c], dl
// 004fdf1a  0fb6434d             movzx eax, byte ptr [ebx + 0x4d]
// 004fdf1e  88474d               mov byte ptr [edi + 0x4d], al
// 004fdf21  0fb64b4e             movzx ecx, byte ptr [ebx + 0x4e]
// 004fdf25  884f4e               mov byte ptr [edi + 0x4e], cl
// 004fdf28  0fb644246d           movzx eax, byte ptr [esp + 0x6d]
// 004fdf2d  d91b                 fstp dword ptr [ebx]
// 004fdf2f  d9442424             fld dword ptr [esp + 0x24]
// 004fdf33  d95b04               fstp dword ptr [ebx + 4]
// 004fdf36  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004fdf3b  d9442428             fld dword ptr [esp + 0x28]
// 004fdf3f  d95b08               fstp dword ptr [ebx + 8]
// 004fdf42  d944242c             fld dword ptr [esp + 0x2c]
// 004fdf46  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004fdf4b  d95b0c               fstp dword ptr [ebx + 0xc]
// 004fdf4e  d9442430             fld dword ptr [esp + 0x30]
// 004fdf52  d95b10               fstp dword ptr [ebx + 0x10]
// 004fdf55  d9442434             fld dword ptr [esp + 0x34]
// 004fdf59  d95b14               fstp dword ptr [ebx + 0x14]
// 004fdf5c  d9442438             fld dword ptr [esp + 0x38]
// 004fdf60  d95b18               fstp dword ptr [ebx + 0x18]
// 004fdf63  dd442440             fld qword ptr [esp + 0x40]
// 004fdf67  dd5b20               fstp qword ptr [ebx + 0x20]
// 004fdf6a  dd442448             fld qword ptr [esp + 0x48]
// 004fdf6e  dd5b28               fstp qword ptr [ebx + 0x28]
// 004fdf71  dd442450             fld qword ptr [esp + 0x50]
// 004fdf75  dd5b30               fstp qword ptr [ebx + 0x30]
// 004fdf78  dd442458             fld qword ptr [esp + 0x58]
// 004fdf7c  dd5b38               fstp qword ptr [ebx + 0x38]
// 004fdf7f  d9442460             fld dword ptr [esp + 0x60]
// 004fdf83  d95b40               fstp dword ptr [ebx + 0x40]
// 004fdf86  d9442464             fld dword ptr [esp + 0x64]
// 004fdf8a  d95b44               fstp dword ptr [ebx + 0x44]
// 004fdf8d  d9442468             fld dword ptr [esp + 0x68]
// 004fdf91  d95b48               fstp dword ptr [ebx + 0x48]
// 004fdf94  88434d               mov byte ptr [ebx + 0x4d], al
// 004fdf97  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fdf9b  88534c               mov byte ptr [ebx + 0x4c], dl
// 004fdf9e  884b4e               mov byte ptr [ebx + 0x4e], cl
// 004fdfa1  8bcf                 mov ecx, edi
// 004fdfa3  8bf0                 mov esi, eax
// 004fdfa5  83c350               add ebx, 0x50
// 004fdfa8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004fdfac  83c050               add eax, 0x50
// 004fdfaf  51                   push ecx
// 004fdfb0  8d4c2424             lea ecx, [esp + 0x24]
// 004fdfb4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004fdfb8  83c750               add edi, 0x50
// 004fdfbb  89442414             mov dword ptr [esp + 0x14], eax
// 004fdfbf  e8ac69f7ff           call 0x474970
// 004fdfc4  d906                 fld dword ptr [esi]
// 004fdfc6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fdfca  d918                 fstp dword ptr [eax]
// 004fdfcc  d94604               fld dword ptr [esi + 4]
// 004fdfcf  d95804               fstp dword ptr [eax + 4]
// 004fdfd2  d94608               fld dword ptr [esi + 8]
// 004fdfd5  d95808               fstp dword ptr [eax + 8]
// 004fdfd8  d9460c               fld dword ptr [esi + 0xc]
// 004fdfdb  d9580c               fstp dword ptr [eax + 0xc]
// 004fdfde  d94610               fld dword ptr [esi + 0x10]
// 004fdfe1  d95810               fstp dword ptr [eax + 0x10]
// 004fdfe4  d94614               fld dword ptr [esi + 0x14]
// 004fdfe7  d95814               fstp dword ptr [eax + 0x14]
// 004fdfea  d94618               fld dword ptr [esi + 0x18]
// 004fdfed  d95818               fstp dword ptr [eax + 0x18]
// 004fdff0  dd4620               fld qword ptr [esi + 0x20]
// 004fdff3  dd5820               fstp qword ptr [eax + 0x20]
// 004fdff6  dd4628               fld qword ptr [esi + 0x28]
// 004fdff9  dd5828               fstp qword ptr [eax + 0x28]
// 004fdffc  dd4630               fld qword ptr [esi + 0x30]
// 004fdfff  dd5830               fstp qword ptr [eax + 0x30]
// 004fe002  dd4638               fld qword ptr [esi + 0x38]
// 004fe005  dd5838               fstp qword ptr [eax + 0x38]
// 004fe008  d94640               fld dword ptr [esi + 0x40]
// 004fe00b  d95840               fstp dword ptr [eax + 0x40]
// 004fe00e  d94644               fld dword ptr [esi + 0x44]
// 004fe011  d95844               fstp dword ptr [eax + 0x44]
// 004fe014  d94648               fld dword ptr [esi + 0x48]
// 004fe017  d95848               fstp dword ptr [eax + 0x48]
// 004fe01a  0fb6564c             movzx edx, byte ptr [esi + 0x4c]
// 004fe01e  d9442420             fld dword ptr [esp + 0x20]
// 004fe022  88504c               mov byte ptr [eax + 0x4c], dl
// 004fe025  0fb64e4d             movzx ecx, byte ptr [esi + 0x4d]
// 004fe029  88484d               mov byte ptr [eax + 0x4d], cl
// 004fe02c  0fb6564e             movzx edx, byte ptr [esi + 0x4e]
// 004fe030  88504e               mov byte ptr [eax + 0x4e], dl
// 004fe033  8a44246c             mov al, byte ptr [esp + 0x6c]
// 004fe037  d91e                 fstp dword ptr [esi]
// 004fe039  0fb64c246d           movzx ecx, byte ptr [esp + 0x6d]
// 004fe03e  d9442424             fld dword ptr [esp + 0x24]
// 004fe042  d95e04               fstp dword ptr [esi + 4]
// 004fe045  d9442428             fld dword ptr [esp + 0x28]
// 004fe049  0fb654246e           movzx edx, byte ptr [esp + 0x6e]
// 004fe04e  d95e08               fstp dword ptr [esi + 8]
// 004fe051  d944242c             fld dword ptr [esp + 0x2c]
// 004fe055  d95e0c               fstp dword ptr [esi + 0xc]
// 004fe058  d9442430             fld dword ptr [esp + 0x30]
// 004fe05c  d95e10               fstp dword ptr [esi + 0x10]
// 004fe05f  d9442434             fld dword ptr [esp + 0x34]
// 004fe063  d95e14               fstp dword ptr [esi + 0x14]
// 004fe066  d9442438             fld dword ptr [esp + 0x38]
// 004fe06a  d95e18               fstp dword ptr [esi + 0x18]
// 004fe06d  dd442440             fld qword ptr [esp + 0x40]
// 004fe071  dd5e20               fstp qword ptr [esi + 0x20]
// 004fe074  dd442448             fld qword ptr [esp + 0x48]
// 004fe078  dd5e28               fstp qword ptr [esi + 0x28]
// 004fe07b  dd442450             fld qword ptr [esp + 0x50]
// 004fe07f  dd5e30               fstp qword ptr [esi + 0x30]
// 004fe082  dd442458             fld qword ptr [esp + 0x58]
// 004fe086  dd5e38               fstp qword ptr [esi + 0x38]
// 004fe089  d9442460             fld dword ptr [esp + 0x60]
// 004fe08d  d95e40               fstp dword ptr [esi + 0x40]
// 004fe090  d9442464             fld dword ptr [esp + 0x64]
// 004fe094  d95e44               fstp dword ptr [esi + 0x44]
// 004fe097  d9442468             fld dword ptr [esp + 0x68]
// 004fe09b  d95e48               fstp dword ptr [esi + 0x48]
// 004fe09e  88464c               mov byte ptr [esi + 0x4c], al
// 004fe0a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fe0a5  884e4d               mov byte ptr [esi + 0x4d], cl
// 004fe0a8  88564e               mov byte ptr [esi + 0x4e], dl
// 004fe0ab  e950fbffff           jmp 0x4fdc00
// 004fe0b0  83e950               sub ecx, 0x50
// 004fe0b3  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004fe0b6  894c2418             mov dword ptr [esp + 0x18], ecx
// 004fe0ba  0f85f2010000         jne 0x4fe2b2
// 004fe0c0  83ef50               sub edi, 0x50
// 004fe0c3  3bcf                 cmp ecx, edi
// 004fe0c5  0f84ed000000         je 0x4fe1b8
// 004fe0cb  51                   push ecx
// 004fe0cc  8d4c2424             lea ecx, [esp + 0x24]
// 004fe0d0  e89b68f7ff           call 0x474970
// 004fe0d5  d907                 fld dword ptr [edi]
// 004fe0d7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fe0db  d918                 fstp dword ptr [eax]
// 004fe0dd  d94704               fld dword ptr [edi + 4]
// 004fe0e0  d95804               fstp dword ptr [eax + 4]
// 004fe0e3  d94708               fld dword ptr [edi + 8]
// 004fe0e6  d95808               fstp dword ptr [eax + 8]
// 004fe0e9  d9470c               fld dword ptr [edi + 0xc]
// 004fe0ec  d9580c               fstp dword ptr [eax + 0xc]
// 004fe0ef  d94710               fld dword ptr [edi + 0x10]
// 004fe0f2  d95810               fstp dword ptr [eax + 0x10]
// 004fe0f5  d94714               fld dword ptr [edi + 0x14]
// 004fe0f8  d95814               fstp dword ptr [eax + 0x14]
// 004fe0fb  d94718               fld dword ptr [edi + 0x18]
// 004fe0fe  d95818               fstp dword ptr [eax + 0x18]
// 004fe101  dd4720               fld qword ptr [edi + 0x20]
// 004fe104  dd5820               fstp qword ptr [eax + 0x20]
// 004fe107  dd4728               fld qword ptr [edi + 0x28]
// 004fe10a  dd5828               fstp qword ptr [eax + 0x28]
// 004fe10d  dd4730               fld qword ptr [edi + 0x30]
// 004fe110  dd5830               fstp qword ptr [eax + 0x30]
// 004fe113  dd4738               fld qword ptr [edi + 0x38]
// 004fe116  dd5838               fstp qword ptr [eax + 0x38]
// 004fe119  d94740               fld dword ptr [edi + 0x40]
// 004fe11c  d95840               fstp dword ptr [eax + 0x40]
// 004fe11f  d94744               fld dword ptr [edi + 0x44]
// 004fe122  d95844               fstp dword ptr [eax + 0x44]
// 004fe125  d94748               fld dword ptr [edi + 0x48]
// 004fe128  d95848               fstp dword ptr [eax + 0x48]
// 004fe12b  0fb64f4c             movzx ecx, byte ptr [edi + 0x4c]
// 004fe12f  d9442420             fld dword ptr [esp + 0x20]
// 004fe133  88484c               mov byte ptr [eax + 0x4c], cl
// 004fe136  0fb6574d             movzx edx, byte ptr [edi + 0x4d]
// 004fe13a  88504d               mov byte ptr [eax + 0x4d], dl
// 004fe13d  0fb64f4e             movzx ecx, byte ptr [edi + 0x4e]
// 004fe141  88484e               mov byte ptr [eax + 0x4e], cl
// 004fe144  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004fe149  d91f                 fstp dword ptr [edi]
// 004fe14b  d9442424             fld dword ptr [esp + 0x24]
// 004fe14f  d95f04               fstp dword ptr [edi + 4]
// 004fe152  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004fe157  d9442428             fld dword ptr [esp + 0x28]
// 004fe15b  d95f08               fstp dword ptr [edi + 8]
// 004fe15e  d944242c             fld dword ptr [esp + 0x2c]
// 004fe162  8a44246d             mov al, byte ptr [esp + 0x6d]
// 004fe166  d95f0c               fstp dword ptr [edi + 0xc]
// 004fe169  d9442430             fld dword ptr [esp + 0x30]
// 004fe16d  d95f10               fstp dword ptr [edi + 0x10]
// 004fe170  d9442434             fld dword ptr [esp + 0x34]
// 004fe174  d95f14               fstp dword ptr [edi + 0x14]
// 004fe177  d9442438             fld dword ptr [esp + 0x38]
// 004fe17b  d95f18               fstp dword ptr [edi + 0x18]
// 004fe17e  dd442440             fld qword ptr [esp + 0x40]
// 004fe182  dd5f20               fstp qword ptr [edi + 0x20]
// 004fe185  dd442448             fld qword ptr [esp + 0x48]
// 004fe189  dd5f28               fstp qword ptr [edi + 0x28]
// 004fe18c  dd442450             fld qword ptr [esp + 0x50]
// 004fe190  dd5f30               fstp qword ptr [edi + 0x30]
// 004fe193  dd442458             fld qword ptr [esp + 0x58]
// 004fe197  dd5f38               fstp qword ptr [edi + 0x38]
// 004fe19a  d9442460             fld dword ptr [esp + 0x60]
// 004fe19e  d95f40               fstp dword ptr [edi + 0x40]
// 004fe1a1  d9442464             fld dword ptr [esp + 0x64]
// 004fe1a5  d95f44               fstp dword ptr [edi + 0x44]
// 004fe1a8  d9442468             fld dword ptr [esp + 0x68]
// 004fe1ac  d95f48               fstp dword ptr [edi + 0x48]
// 004fe1af  88574c               mov byte ptr [edi + 0x4c], dl
// 004fe1b2  88474d               mov byte ptr [edi + 0x4d], al
// 004fe1b5  884f4e               mov byte ptr [edi + 0x4e], cl
// 004fe1b8  83eb50               sub ebx, 0x50
// 004fe1bb  57                   push edi
// 004fe1bc  8d4c2424             lea ecx, [esp + 0x24]
// 004fe1c0  895c2418             mov dword ptr [esp + 0x18], ebx
// 004fe1c4  e8a767f7ff           call 0x474970
// 004fe1c9  d903                 fld dword ptr [ebx]
// 004fe1cb  d91f                 fstp dword ptr [edi]
// 004fe1cd  d94304               fld dword ptr [ebx + 4]
// 004fe1d0  d95f04               fstp dword ptr [edi + 4]
// 004fe1d3  d94308               fld dword ptr [ebx + 8]
// 004fe1d6  d95f08               fstp dword ptr [edi + 8]
// 004fe1d9  d9430c               fld dword ptr [ebx + 0xc]
// 004fe1dc  d95f0c               fstp dword ptr [edi + 0xc]
// 004fe1df  d94310               fld dword ptr [ebx + 0x10]
// 004fe1e2  d95f10               fstp dword ptr [edi + 0x10]
// 004fe1e5  d94314               fld dword ptr [ebx + 0x14]
// 004fe1e8  d95f14               fstp dword ptr [edi + 0x14]
// 004fe1eb  d94318               fld dword ptr [ebx + 0x18]
// 004fe1ee  d95f18               fstp dword ptr [edi + 0x18]
// 004fe1f1  dd4320               fld qword ptr [ebx + 0x20]
// 004fe1f4  dd5f20               fstp qword ptr [edi + 0x20]
// 004fe1f7  dd4328               fld qword ptr [ebx + 0x28]
// 004fe1fa  dd5f28               fstp qword ptr [edi + 0x28]
// 004fe1fd  dd4330               fld qword ptr [ebx + 0x30]
// 004fe200  dd5f30               fstp qword ptr [edi + 0x30]
// 004fe203  dd4338               fld qword ptr [ebx + 0x38]
// 004fe206  dd5f38               fstp qword ptr [edi + 0x38]
// 004fe209  d94340               fld dword ptr [ebx + 0x40]
// 004fe20c  d95f40               fstp dword ptr [edi + 0x40]
// 004fe20f  d94344               fld dword ptr [ebx + 0x44]
// 004fe212  d95f44               fstp dword ptr [edi + 0x44]
// 004fe215  d94348               fld dword ptr [ebx + 0x48]
// 004fe218  d95f48               fstp dword ptr [edi + 0x48]
// 004fe21b  0fb6534c             movzx edx, byte ptr [ebx + 0x4c]
// 004fe21f  d9442420             fld dword ptr [esp + 0x20]
// 004fe223  88574c               mov byte ptr [edi + 0x4c], dl
// 004fe226  0fb6434d             movzx eax, byte ptr [ebx + 0x4d]
// 004fe22a  88474d               mov byte ptr [edi + 0x4d], al
// 004fe22d  0fb64b4e             movzx ecx, byte ptr [ebx + 0x4e]
// 004fe231  884f4e               mov byte ptr [edi + 0x4e], cl
// 004fe234  0fb644246d           movzx eax, byte ptr [esp + 0x6d]
// 004fe239  d91b                 fstp dword ptr [ebx]
// 004fe23b  d9442424             fld dword ptr [esp + 0x24]
// 004fe23f  d95b04               fstp dword ptr [ebx + 4]
// 004fe242  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004fe247  d9442428             fld dword ptr [esp + 0x28]
// 004fe24b  d95b08               fstp dword ptr [ebx + 8]
// 004fe24e  d944242c             fld dword ptr [esp + 0x2c]
// 004fe252  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004fe257  d95b0c               fstp dword ptr [ebx + 0xc]
// 004fe25a  d9442430             fld dword ptr [esp + 0x30]
// 004fe25e  d95b10               fstp dword ptr [ebx + 0x10]
// 004fe261  d9442434             fld dword ptr [esp + 0x34]
// 004fe265  d95b14               fstp dword ptr [ebx + 0x14]
// 004fe268  d9442438             fld dword ptr [esp + 0x38]
// 004fe26c  d95b18               fstp dword ptr [ebx + 0x18]
// 004fe26f  dd442440             fld qword ptr [esp + 0x40]
// 004fe273  dd5b20               fstp qword ptr [ebx + 0x20]
// 004fe276  dd442448             fld qword ptr [esp + 0x48]
// 004fe27a  dd5b28               fstp qword ptr [ebx + 0x28]
// 004fe27d  dd442450             fld qword ptr [esp + 0x50]
// 004fe281  dd5b30               fstp qword ptr [ebx + 0x30]
// 004fe284  dd442458             fld qword ptr [esp + 0x58]
// 004fe288  dd5b38               fstp qword ptr [ebx + 0x38]
// 004fe28b  d9442460             fld dword ptr [esp + 0x60]
// 004fe28f  d95b40               fstp dword ptr [ebx + 0x40]
// 004fe292  d9442464             fld dword ptr [esp + 0x64]
// 004fe296  d95b44               fstp dword ptr [ebx + 0x44]
// 004fe299  d9442468             fld dword ptr [esp + 0x68]
// 004fe29d  d95b48               fstp dword ptr [ebx + 0x48]
// 004fe2a0  88434d               mov byte ptr [ebx + 0x4d], al
// 004fe2a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fe2a7  88534c               mov byte ptr [ebx + 0x4c], dl
// 004fe2aa  884b4e               mov byte ptr [ebx + 0x4e], cl
// 004fe2ad  e94ef9ffff           jmp 0x4fdc00
// 004fe2b2  50                   push eax
// 004fe2b3  8d4c2424             lea ecx, [esp + 0x24]
// 004fe2b7  e8b466f7ff           call 0x474970
// 004fe2bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fe2c0  d900                 fld dword ptr [eax]
// 004fe2c2  8b742410             mov esi, dword ptr [esp + 0x10]
// 004fe2c6  d91e                 fstp dword ptr [esi]
// 004fe2c8  83c650               add esi, 0x50
// 004fe2cb  d94004               fld dword ptr [eax + 4]
// 004fe2ce  89742410             mov dword ptr [esp + 0x10], esi
// 004fe2d2  d95eb4               fstp dword ptr [esi - 0x4c]
// 004fe2d5  d94008               fld dword ptr [eax + 8]
// 004fe2d8  d95eb8               fstp dword ptr [esi - 0x48]
// 004fe2db  d9400c               fld dword ptr [eax + 0xc]
// 004fe2de  d95ebc               fstp dword ptr [esi - 0x44]
// 004fe2e1  d94010               fld dword ptr [eax + 0x10]
// 004fe2e4  d95ec0               fstp dword ptr [esi - 0x40]
// 004fe2e7  d94014               fld dword ptr [eax + 0x14]
// 004fe2ea  d95ec4               fstp dword ptr [esi - 0x3c]
// 004fe2ed  d94018               fld dword ptr [eax + 0x18]
// 004fe2f0  d95ec8               fstp dword ptr [esi - 0x38]
// 004fe2f3  dd4020               fld qword ptr [eax + 0x20]
// 004fe2f6  dd5ed0               fstp qword ptr [esi - 0x30]
// 004fe2f9  dd4028               fld qword ptr [eax + 0x28]
// 004fe2fc  dd5ed8               fstp qword ptr [esi - 0x28]
// 004fe2ff  dd4030               fld qword ptr [eax + 0x30]
// 004fe302  dd5ee0               fstp qword ptr [esi - 0x20]
// 004fe305  dd4038               fld qword ptr [eax + 0x38]
// 004fe308  dd5ee8               fstp qword ptr [esi - 0x18]
// 004fe30b  d94040               fld dword ptr [eax + 0x40]
// 004fe30e  d95ef0               fstp dword ptr [esi - 0x10]
// 004fe311  d94044               fld dword ptr [eax + 0x44]
// 004fe314  d95ef4               fstp dword ptr [esi - 0xc]
// 004fe317  d94048               fld dword ptr [eax + 0x48]
// 004fe31a  d95ef8               fstp dword ptr [esi - 8]
// 004fe31d  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 004fe321  d9442420             fld dword ptr [esp + 0x20]
// 004fe325  8856fc               mov byte ptr [esi - 4], dl
// 004fe328  0fb6484d             movzx ecx, byte ptr [eax + 0x4d]
// 004fe32c  884efd               mov byte ptr [esi - 3], cl
// 004fe32f  0fb6504e             movzx edx, byte ptr [eax + 0x4e]
// 004fe333  8856fe               mov byte ptr [esi - 2], dl
// 004fe336  0fb64c246c           movzx ecx, byte ptr [esp + 0x6c]
// 004fe33b  d918                 fstp dword ptr [eax]
// 004fe33d  d9442424             fld dword ptr [esp + 0x24]
// 004fe341  d95804               fstp dword ptr [eax + 4]
// 004fe344  0fb654246d           movzx edx, byte ptr [esp + 0x6d]
// 004fe349  d9442428             fld dword ptr [esp + 0x28]
// 004fe34d  d95808               fstp dword ptr [eax + 8]
// 004fe350  d944242c             fld dword ptr [esp + 0x2c]
// 004fe354  d9580c               fstp dword ptr [eax + 0xc]
// 004fe357  d9442430             fld dword ptr [esp + 0x30]
// 004fe35b  d95810               fstp dword ptr [eax + 0x10]
// 004fe35e  d9442434             fld dword ptr [esp + 0x34]
// 004fe362  d95814               fstp dword ptr [eax + 0x14]
// 004fe365  d9442438             fld dword ptr [esp + 0x38]
// 004fe369  d95818               fstp dword ptr [eax + 0x18]
// 004fe36c  dd442440             fld qword ptr [esp + 0x40]
// 004fe370  dd5820               fstp qword ptr [eax + 0x20]
// 004fe373  dd442448             fld qword ptr [esp + 0x48]
// 004fe377  dd5828               fstp qword ptr [eax + 0x28]
// 004fe37a  dd442450             fld qword ptr [esp + 0x50]
// 004fe37e  dd5830               fstp qword ptr [eax + 0x30]
// 004fe381  dd442458             fld qword ptr [esp + 0x58]
// 004fe385  dd5838               fstp qword ptr [eax + 0x38]
// 004fe388  d9442460             fld dword ptr [esp + 0x60]
// 004fe38c  d95840               fstp dword ptr [eax + 0x40]
// 004fe38f  d9442464             fld dword ptr [esp + 0x64]
// 004fe393  d95844               fstp dword ptr [eax + 0x44]
// 004fe396  d9442468             fld dword ptr [esp + 0x68]
// 004fe39a  d95848               fstp dword ptr [eax + 0x48]
// 004fe39d  88484c               mov byte ptr [eax + 0x4c], cl
// 004fe3a0  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004fe3a5  88504d               mov byte ptr [eax + 0x4d], dl
// 004fe3a8  88484e               mov byte ptr [eax + 0x4e], cl
// 004fe3ab  8bc6                 mov eax, esi
// 004fe3ad  e94ef8ffff           jmp 0x4fdc00
// 004fe3b2  8b4508               mov eax, dword ptr [ebp + 8]
// 004fe3b5  8938                 mov dword ptr [eax], edi
// 004fe3b7  5f                   pop edi
// 004fe3b8  5e                   pop esi
// 004fe3b9  895804               mov dword ptr [eax + 4], ebx
// 004fe3bc  5b                   pop ebx
// 004fe3bd  8be5                 mov esp, ebp
// 004fe3bf  5d                   pop ebp
// 004fe3c0  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Unguarded_partition@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YA?AU?$pair@PAVGLight@G3D@@PAV12@@0@PAVGLight@G3D@@0P6A_NABV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
