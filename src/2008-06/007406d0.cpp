// roc 2008-06 007406d0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 483 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007406d0
//
// 007406d0  83ec30               sub esp, 0x30
// 007406d3  837c244400           cmp dword ptr [esp + 0x44], 0
// 007406d8  56                   push esi
// 007406d9  8bf1                 mov esi, ecx
// 007406db  7539                 jne 0x740716
// 007406dd  8b442440             mov eax, dword ptr [esp + 0x40]
// 007406e1  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007406e8  8b442438             mov eax, dword ptr [esp + 0x38]
// 007406ec  7514                 jne 0x740702
// 007406ee  c70003000000         mov dword ptr [eax], 3
// 007406f4  c7400403000000       mov dword ptr [eax + 4], 3
// 007406fb  5e                   pop esi
// 007406fc  83c430               add esp, 0x30
// 007406ff  c21400               ret 0x14
// 00740702  c70006000000         mov dword ptr [eax], 6
// 00740708  c7400406000000       mov dword ptr [eax + 4], 6
// 0074070f  5e                   pop esi
// 00740710  83c430               add esp, 0x30
// 00740713  c21400               ret 0x14
// 00740716  53                   push ebx
// 00740717  55                   push ebp
// 00740718  57                   push edi
// 00740719  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0074071d  8b5720               mov edx, dword ptr [edi + 0x20]
// 00740720  8d4c2430             lea ecx, [esp + 0x30]
// 00740724  51                   push ecx
// 00740725  52                   push edx
// 00740726  ff15842d8000         call dword ptr [0x802d84]
// 0074072c  83bff800000002       cmp dword ptr [edi + 0xf8], 2
// 00740733  8b442450             mov eax, dword ptr [esp + 0x50]
// 00740737  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 0074073d  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00740743  8ba8c0000000         mov ebp, dword ptr [eax + 0xc0]
// 00740749  8b98b4000000         mov ebx, dword ptr [eax + 0xb4]
// 0074074f  894c2424             mov dword ptr [esp + 0x24], ecx
// 00740753  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 00740759  89542428             mov dword ptr [esp + 0x28], edx
// 0074075d  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 00740763  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00740767  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 0074076d  89542410             mov dword ptr [esp + 0x10], edx
// 00740771  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 00740777  894c2418             mov dword ptr [esp + 0x18], ecx
// 0074077b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0074077f  7566                 jne 0x7407e7
// 00740781  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00740788  6a27                 push 0x27
// 0074078a  8bce                 mov ecx, esi
// 0074078c  7536                 jne 0x7407c4
// 0074078e  e8ddd8f6ff           call 0x6ae070
// 00740793  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00740797  8b16                 mov edx, dword ptr [esi]
// 00740799  50                   push eax
// 0074079a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0074079e  40                   inc eax
// 0074079f  50                   push eax
// 007407a0  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007407a6  83c1fe               add ecx, -2
// 007407a9  51                   push ecx
// 007407aa  57                   push edi
// 007407ab  8bce                 mov ecx, esi
// 007407ad  ffd0                 call eax
// 007407af  038680000000         add eax, dword ptr [esi + 0x80]
// 007407b5  8b542454             mov edx, dword ptr [esp + 0x54]
// 007407b9  8d4c28ff             lea ecx, [eax + ebp - 1]
// 007407bd  51                   push ecx
// 007407be  52                   push edx
// 007407bf  e9cd000000           jmp 0x740891
// 007407c4  e8a7d8f6ff           call 0x6ae070
// 007407c9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007407cd  50                   push eax
// 007407ce  8b442420             mov eax, dword ptr [esp + 0x20]
// 007407d2  40                   inc eax
// 007407d3  50                   push eax
// 007407d4  4b                   dec ebx
// 007407d5  53                   push ebx
// 007407d6  83c5fe               add ebp, -2
// 007407d9  55                   push ebp
// 007407da  51                   push ecx
// 007407db  8bce                 mov ecx, esi
// 007407dd  e8eedaf6ff           call 0x6ae2d0
// 007407e2  e9b1000000           jmp 0x740898
// 007407e7  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 007407ed  83ff05               cmp edi, 5
// 007407f0  745b                 je 0x74084d
// 007407f2  83ff02               cmp edi, 2
// 007407f5  7405                 je 0x7407fc
// 007407f7  83ff03               cmp edi, 3
// 007407fa  7551                 jne 0x74084d
// 007407fc  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00740803  6a27                 push 0x27
// 00740805  8bce                 mov ecx, esi
// 00740807  751f                 jne 0x740828
// 00740809  e862d8f6ff           call 0x6ae070
// 0074080e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00740812  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00740816  50                   push eax
// 00740817  8b442428             mov eax, dword ptr [esp + 0x28]
// 0074081b  52                   push edx
// 0074081c  8b542450             mov edx, dword ptr [esp + 0x50]
// 00740820  83c0fc               add eax, -4
// 00740823  50                   push eax
// 00740824  51                   push ecx
// 00740825  52                   push edx
// 00740826  eb69                 jmp 0x740891
// 00740828  e843d8f6ff           call 0x6ae070
// 0074082d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00740831  8b542448             mov edx, dword ptr [esp + 0x48]
// 00740835  50                   push eax
// 00740836  8b442420             mov eax, dword ptr [esp + 0x20]
// 0074083a  50                   push eax
// 0074083b  83c304               add ebx, 4
// 0074083e  53                   push ebx
// 0074083f  83c102               add ecx, 2
// 00740842  51                   push ecx
// 00740843  52                   push edx
// 00740844  8bce                 mov ecx, esi
// 00740846  e885daf6ff           call 0x6ae2d0
// 0074084b  eb4b                 jmp 0x740898
// 0074084d  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00740854  6a27                 push 0x27
// 00740856  8bce                 mov ecx, esi
// 00740858  751e                 jne 0x740878
// 0074085a  e811d8f6ff           call 0x6ae070
// 0074085f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00740863  50                   push eax
// 00740864  8b442420             mov eax, dword ptr [esp + 0x20]
// 00740868  50                   push eax
// 00740869  53                   push ebx
// 0074086a  83c5fc               add ebp, -4
// 0074086d  55                   push ebp
// 0074086e  51                   push ecx
// 0074086f  8bce                 mov ecx, esi
// 00740871  e85adaf6ff           call 0x6ae2d0
// 00740876  eb20                 jmp 0x740898
// 00740878  e8f3d7f6ff           call 0x6ae070
// 0074087d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00740881  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00740885  50                   push eax
// 00740886  8b442414             mov eax, dword ptr [esp + 0x14]
// 0074088a  52                   push edx
// 0074088b  83c3fc               add ebx, -4
// 0074088e  53                   push ebx
// 0074088f  50                   push eax
// 00740890  51                   push ecx
// 00740891  8bce                 mov ecx, esi
// 00740893  e808daf6ff           call 0x6ae2a0
// 00740898  8b442444             mov eax, dword ptr [esp + 0x44]
// 0074089c  5f                   pop edi
// 0074089d  5d                   pop ebp
// 0074089e  5b                   pop ebx
// 0074089f  c70000000000         mov dword ptr [eax], 0
// 007408a5  c7400400000000       mov dword ptr [eax + 4], 0
// 007408ac  5e                   pop esi
// 007408ad  83c430               add esp, 0x30
// 007408b0  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawCommandBarSeparator@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOfficeTheme.cpp
