// roc 2009-12 0088aca0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088aca0
//
// 0088aca0  83ec1c               sub esp, 0x1c
// 0088aca3  53                   push ebx
// 0088aca4  55                   push ebp
// 0088aca5  56                   push esi
// 0088aca6  57                   push edi
// 0088aca7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0088acab  8b07                 mov eax, dword ptr [edi]
// 0088acad  8b5078               mov edx, dword ptr [eax + 0x78]
// 0088acb0  8bf1                 mov esi, ecx
// 0088acb2  8bcf                 mov ecx, edi
// 0088acb4  ffd2                 call edx
// 0088acb6  89442410             mov dword ptr [esp + 0x10], eax
// 0088acba  8b07                 mov eax, dword ptr [edi]
// 0088acbc  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0088acbf  8bcf                 mov ecx, edi
// 0088acc1  ffd2                 call edx
// 0088acc3  8bd8                 mov ebx, eax
// 0088acc5  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0088accb  83f8ff               cmp eax, -1
// 0088acce  750f                 jne 0x88acdf
// 0088acd0  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0088acd6  85c9                 test ecx, ecx
// 0088acd8  7405                 je 0x88acdf
// 0088acda  e8d1b8f6ff           call 0x7f65b0
// 0088acdf  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 0088ace5  89442434             mov dword ptr [esp + 0x34], eax
// 0088ace9  83f9ff               cmp ecx, -1
// 0088acec  7513                 jne 0x88ad01
// 0088acee  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0088acf4  85c0                 test eax, eax
// 0088acf6  7409                 je 0x88ad01
// 0088acf8  8b4038               mov eax, dword ptr [eax + 0x38]
// 0088acfb  89442418             mov dword ptr [esp + 0x18], eax
// 0088acff  eb04                 jmp 0x88ad05
// 0088ad01  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088ad05  8b17                 mov edx, dword ptr [edi]
// 0088ad07  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0088ad0d  8bcf                 mov ecx, edi
// 0088ad0f  ffd0                 call eax
// 0088ad11  8be8                 mov ebp, eax
// 0088ad13  8bcf                 mov ecx, edi
// 0088ad15  896c2414             mov dword ptr [esp + 0x14], ebp
// 0088ad19  e872aff6ff           call 0x7f5c90
// 0088ad1e  83f804               cmp eax, 4
// 0088ad21  0f85d2010000         jne 0x88aef9
// 0088ad27  8bce                 mov ecx, esi
// 0088ad29  e81232f7ff           call 0x7fdf40
// 0088ad2e  33c9                 xor ecx, ecx
// 0088ad30  8944241c             mov dword ptr [esp + 0x1c], eax
// 0088ad34  3bd9                 cmp ebx, ecx
// 0088ad36  741b                 je 0x88ad53
// 0088ad38  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0088ad3c  7415                 je 0x88ad53
// 0088ad3e  3be9                 cmp ebp, ecx
// 0088ad40  7511                 jne 0x88ad53
// 0088ad42  394c2434             cmp dword ptr [esp + 0x34], ecx
// 0088ad46  740b                 je 0x88ad53
// 0088ad48  ba01000000           mov edx, 1
// 0088ad4d  89542420             mov dword ptr [esp + 0x20], edx
// 0088ad51  eb09                 jmp 0x88ad5c
// 0088ad53  894c2420             mov dword ptr [esp + 0x20], ecx
// 0088ad57  ba01000000           mov edx, 1
// 0088ad5c  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0088ad62  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0088ad68  83f802               cmp eax, 2
// 0088ad6b  7409                 je 0x88ad76
// 0088ad6d  894c2424             mov dword ptr [esp + 0x24], ecx
// 0088ad71  83f803               cmp eax, 3
// 0088ad74  7504                 jne 0x88ad7a
// 0088ad76  89542424             mov dword ptr [esp + 0x24], edx
// 0088ad7a  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0088ad7e  740a                 je 0x88ad8a
// 0088ad80  89542428             mov dword ptr [esp + 0x28], edx
// 0088ad84  394c2420             cmp dword ptr [esp + 0x20], ecx
// 0088ad88  7404                 je 0x88ad8e
// 0088ad8a  894c2428             mov dword ptr [esp + 0x28], ecx
// 0088ad8e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088ad92  50                   push eax
// 0088ad93  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088ad97  8b542440             mov edx, dword ptr [esp + 0x40]
// 0088ad9b  6a01                 push 1
// 0088ad9d  50                   push eax
// 0088ad9e  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088ada2  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0088ada6  50                   push eax
// 0088ada7  8b442444             mov eax, dword ptr [esp + 0x44]
// 0088adab  50                   push eax
// 0088adac  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088adb0  50                   push eax
// 0088adb1  53                   push ebx
// 0088adb2  83ec10               sub esp, 0x10
// 0088adb5  8bc4                 mov eax, esp
// 0088adb7  8908                 mov dword ptr [eax], ecx
// 0088adb9  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0088adbd  895004               mov dword ptr [eax + 4], edx
// 0088adc0  894808               mov dword ptr [eax + 8], ecx
// 0088adc3  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0088adc7  89480c               mov dword ptr [eax + 0xc], ecx
// 0088adca  8b06                 mov eax, dword ptr [esi]
// 0088adcc  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0088add2  55                   push ebp
// 0088add3  8bce                 mov ecx, esi
// 0088add5  ffd2                 call edx
// 0088add7  85db                 test ebx, ebx
// 0088add9  7506                 jne 0x88ade1
// 0088addb  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0088addf  7473                 je 0x88ae54
// 0088ade1  837c241400           cmp dword ptr [esp + 0x14], 0
// 0088ade6  756c                 jne 0x88ae54
// 0088ade8  837c243400           cmp dword ptr [esp + 0x34], 0
// 0088aded  7465                 je 0x88ae54
// 0088adef  837c242400           cmp dword ptr [esp + 0x24], 0
// 0088adf4  6a20                 push 0x20
// 0088adf6  8bce                 mov ecx, esi
// 0088adf8  742b                 je 0x88ae25
// 0088adfa  8b442448             mov eax, dword ptr [esp + 0x48]
// 0088adfe  2b442440             sub eax, dword ptr [esp + 0x40]
// 0088ae02  89442434             mov dword ptr [esp + 0x34], eax
// 0088ae06  e83528f7ff           call 0x7fd640
// 0088ae0b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088ae0f  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088ae13  50                   push eax
// 0088ae14  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088ae18  50                   push eax
// 0088ae19  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088ae1d  6a01                 push 1
// 0088ae1f  51                   push ecx
// 0088ae20  03d0                 add edx, eax
// 0088ae22  52                   push edx
// 0088ae23  eb28                 jmp 0x88ae4d
// 0088ae25  8b442444             mov eax, dword ptr [esp + 0x44]
// 0088ae29  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 0088ae2d  89442434             mov dword ptr [esp + 0x34], eax
// 0088ae31  e80a28f7ff           call 0x7fd640
// 0088ae36  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088ae3a  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 0088ae3e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088ae42  50                   push eax
// 0088ae43  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088ae47  6a01                 push 1
// 0088ae49  51                   push ecx
// 0088ae4a  4a                   dec edx
// 0088ae4b  52                   push edx
// 0088ae4c  50                   push eax
// 0088ae4d  8bcd                 mov ecx, ebp
// 0088ae4f  e842b60900           call 0x926496
// 0088ae54  837c242000           cmp dword ptr [esp + 0x20], 0
// 0088ae59  0f84a4010000         je 0x88b003
// 0088ae5f  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 0088ae65  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 0088ae6b  57                   push edi
// 0088ae6c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088ae70  6a01                 push 1
// 0088ae72  ff74241c             push dword ptr [esp + 0x1c]
// 0088ae76  57                   push edi
// 0088ae77  ff742444             push dword ptr [esp + 0x44]
// 0088ae7b  ff742424             push dword ptr [esp + 0x24]
// 0088ae7f  53                   push ebx
// 0088ae80  83ec10               sub esp, 0x10
// 0088ae83  837c245000           cmp dword ptr [esp + 0x50], 0
// 0088ae88  8bc4                 mov eax, esp
// 0088ae8a  55                   push ebp
// 0088ae8b  7437                 je 0x88aec4
// 0088ae8d  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0088ae91  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0088ae95  03ca                 add ecx, edx
// 0088ae97  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0088ae9b  8908                 mov dword ptr [eax], ecx
// 0088ae9d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0088aea1  895004               mov dword ptr [eax + 4], edx
// 0088aea4  894808               mov dword ptr [eax + 8], ecx
// 0088aea7  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0088aeab  89480c               mov dword ptr [eax + 0xc], ecx
// 0088aeae  8b06                 mov eax, dword ptr [esi]
// 0088aeb0  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0088aeb6  8bce                 mov ecx, esi
// 0088aeb8  ffd0                 call eax
// 0088aeba  5f                   pop edi
// 0088aebb  5e                   pop esi
// 0088aebc  5d                   pop ebp
// 0088aebd  5b                   pop ebx
// 0088aebe  83c41c               add esp, 0x1c
// 0088aec1  c21800               ret 0x18
// 0088aec4  8b542468             mov edx, dword ptr [esp + 0x68]
// 0088aec8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0088aecc  2b4c244c             sub ecx, dword ptr [esp + 0x4c]
// 0088aed0  8910                 mov dword ptr [eax], edx
// 0088aed2  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0088aed6  895004               mov dword ptr [eax + 4], edx
// 0088aed9  8b542470             mov edx, dword ptr [esp + 0x70]
// 0088aedd  895008               mov dword ptr [eax + 8], edx
// 0088aee0  89480c               mov dword ptr [eax + 0xc], ecx
// 0088aee3  8b06                 mov eax, dword ptr [esi]
// 0088aee5  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0088aeeb  8bce                 mov ecx, esi
// 0088aeed  ffd2                 call edx
// 0088aeef  5f                   pop edi
// 0088aef0  5e                   pop esi
// 0088aef1  5d                   pop ebp
// 0088aef2  5b                   pop ebx
// 0088aef3  83c41c               add esp, 0x1c
// 0088aef6  c21800               ret 0x18
// 0088aef9  85ed                 test ebp, ebp
// 0088aefb  7404                 je 0x88af01
// 0088aefd  33c0                 xor eax, eax
// 0088aeff  eb06                 jmp 0x88af07
// 0088af01  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0088af07  8baf00010000         mov ebp, dword ptr [edi + 0x100]
// 0088af0d  8bad00010000         mov ebp, dword ptr [ebp + 0x100]
// 0088af13  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088af17  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088af1b  55                   push ebp
// 0088af1c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0088af20  6a01                 push 1
// 0088af22  55                   push ebp
// 0088af23  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0088af27  55                   push ebp
// 0088af28  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0088af2c  55                   push ebp
// 0088af2d  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0088af31  55                   push ebp
// 0088af32  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0088af36  2bc8                 sub ecx, eax
// 0088af38  53                   push ebx
// 0088af39  83ec10               sub esp, 0x10
// 0088af3c  8bc4                 mov eax, esp
// 0088af3e  8910                 mov dword ptr [eax], edx
// 0088af40  8b542468             mov edx, dword ptr [esp + 0x68]
// 0088af44  895004               mov dword ptr [eax + 4], edx
// 0088af47  894808               mov dword ptr [eax + 8], ecx
// 0088af4a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0088af4e  89480c               mov dword ptr [eax + 0xc], ecx
// 0088af51  8b06                 mov eax, dword ptr [esi]
// 0088af53  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0088af59  55                   push ebp
// 0088af5a  8bce                 mov ecx, esi
// 0088af5c  ffd0                 call eax
// 0088af5e  85db                 test ebx, ebx
// 0088af60  7506                 jne 0x88af68
// 0088af62  395c2410             cmp dword ptr [esp + 0x10], ebx
// 0088af66  745b                 je 0x88afc3
// 0088af68  837c241400           cmp dword ptr [esp + 0x14], 0
// 0088af6d  7554                 jne 0x88afc3
// 0088af6f  837c243400           cmp dword ptr [esp + 0x34], 0
// 0088af74  744d                 je 0x88afc3
// 0088af76  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0088af7c  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0088af82  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088af86  2b86c8000000         sub eax, dword ptr [esi + 0xc8]
// 0088af8c  51                   push ecx
// 0088af8d  8b16                 mov edx, dword ptr [esi]
// 0088af8f  6a01                 push 1
// 0088af91  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0088af97  6a00                 push 0
// 0088af99  6a00                 push 0
// 0088af9b  6a01                 push 1
// 0088af9d  6a00                 push 0
// 0088af9f  6a01                 push 1
// 0088afa1  48                   dec eax
// 0088afa2  83ec10               sub esp, 0x10
// 0088afa5  8bcc                 mov ecx, esp
// 0088afa7  8901                 mov dword ptr [ecx], eax
// 0088afa9  8b442468             mov eax, dword ptr [esp + 0x68]
// 0088afad  894104               mov dword ptr [ecx + 4], eax
// 0088afb0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0088afb4  894108               mov dword ptr [ecx + 8], eax
// 0088afb7  8b442470             mov eax, dword ptr [esp + 0x70]
// 0088afbb  89410c               mov dword ptr [ecx + 0xc], eax
// 0088afbe  55                   push ebp
// 0088afbf  8bce                 mov ecx, esi
// 0088afc1  ffd2                 call edx
// 0088afc3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0088afc7  8b442444             mov eax, dword ptr [esp + 0x44]
// 0088afcb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088afcf  03c2                 add eax, edx
// 0088afd1  99                   cdq 
// 0088afd2  2bc2                 sub eax, edx
// 0088afd4  83c1f9               add ecx, -7
// 0088afd7  d1f8                 sar eax, 1
// 0088afd9  837c243403           cmp dword ptr [esp + 0x34], 3
// 0088afde  7508                 jne 0x88afe8
// 0088afe0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0088afe8  8b16                 mov edx, dword ptr [esi]
// 0088afea  6a00                 push 0
// 0088afec  ff742438             push dword ptr [esp + 0x38]
// 0088aff0  ff74241c             push dword ptr [esp + 0x1c]
// 0088aff4  53                   push ebx
// 0088aff5  50                   push eax
// 0088aff6  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 0088affc  51                   push ecx
// 0088affd  57                   push edi
// 0088affe  55                   push ebp
// 0088afff  8bce                 mov ecx, esi
// 0088b001  ffd0                 call eax
// 0088b003  5f                   pop edi
// 0088b004  5e                   pop esi
// 0088b005  5d                   pop ebp
// 0088b006  5b                   pop ebx
// 0088b007  83c41c               add esp, 0x1c
// 0088b00a  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawSplitButtonFrame@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp