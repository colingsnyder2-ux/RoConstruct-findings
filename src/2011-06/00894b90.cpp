// roc 2011-06 00894b90  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 639 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00894b90
//
// 00894b90  837c242800           cmp dword ptr [esp + 0x28], 0
// 00894b95  53                   push ebx
// 00894b96  55                   push ebp
// 00894b97  56                   push esi
// 00894b98  57                   push edi
// 00894b99  8bf1                 mov esi, ecx
// 00894b9b  7454                 je 0x894bf1
// 00894b9d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00894ba1  6a00                 push 0
// 00894ba3  6a00                 push 0
// 00894ba5  8d86fc040000         lea eax, [esi + 0x4fc]
// 00894bab  50                   push eax
// 00894bac  8d4c2424             lea ecx, [esp + 0x24]
// 00894bb0  51                   push ecx
// 00894bb1  57                   push edi
// 00894bb2  e8c9a1fcff           call 0x85ed80
// 00894bb7  8bc8                 mov ecx, eax
// 00894bb9  e8e2a4fcff           call 0x85f0a0
// 00894bbe  8b542418             mov edx, dword ptr [esp + 0x18]
// 00894bc2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00894bc6  6a2b                 push 0x2b
// 00894bc8  6a2b                 push 0x2b
// 00894bca  83ec10               sub esp, 0x10
// 00894bcd  8bc4                 mov eax, esp
// 00894bcf  8910                 mov dword ptr [eax], edx
// 00894bd1  8b542438             mov edx, dword ptr [esp + 0x38]
// 00894bd5  894804               mov dword ptr [eax + 4], ecx
// 00894bd8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00894bdc  895008               mov dword ptr [eax + 8], edx
// 00894bdf  89480c               mov dword ptr [eax + 0xc], ecx
// 00894be2  57                   push edi
// 00894be3  8bce                 mov ecx, esi
// 00894be5  e8c6abf7ff           call 0x80f7b0
// 00894bea  5f                   pop edi
// 00894beb  5e                   pop esi
// 00894bec  5d                   pop ebp
// 00894bed  5b                   pop ebx
// 00894bee  c23000               ret 0x30
// 00894bf1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 00894bf8  8b442440             mov eax, dword ptr [esp + 0x40]
// 00894bfc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00894c00  0f84be010000         je 0x894dc4
// 00894c06  83f902               cmp ecx, 2
// 00894c09  0f84b5010000         je 0x894dc4
// 00894c0f  83f802               cmp eax, 2
// 00894c12  7425                 je 0x894c39
// 00894c14  85c0                 test eax, eax
// 00894c16  7413                 je 0x894c2b
// 00894c18  83f803               cmp eax, 3
// 00894c1b  741c                 je 0x894c39
// 00894c1d  83f801               cmp eax, 1
// 00894c20  7409                 je 0x894c2b
// 00894c22  83f804               cmp eax, 4
// 00894c25  0f8599010000         jne 0x894dc4
// 00894c2b  83f803               cmp eax, 3
// 00894c2e  7409                 je 0x894c39
// 00894c30  83f805               cmp eax, 5
// 00894c33  7404                 je 0x894c39
// 00894c35  33ff                 xor edi, edi
// 00894c37  eb05                 jmp 0x894c3e
// 00894c39  bf01000000           mov edi, 1
// 00894c3e  837c243000           cmp dword ptr [esp + 0x30], 0
// 00894c43  7575                 jne 0x894cba
// 00894c45  8b542428             mov edx, dword ptr [esp + 0x28]
// 00894c49  52                   push edx
// 00894c4a  e81176f7ff           call 0x80c260
// 00894c4f  83c404               add esp, 4
// 00894c52  85c0                 test eax, eax
// 00894c54  741c                 je 0x894c72
// 00894c56  837c243400           cmp dword ptr [esp + 0x34], 0
// 00894c5b  8d8670050000         lea eax, [esi + 0x570]
// 00894c61  0f8513010000         jne 0x894d7a
// 00894c67  8d8690050000         lea eax, [esi + 0x590]
// 00894c6d  e908010000           jmp 0x894d7a
// 00894c72  837c243400           cmp dword ptr [esp + 0x34], 0
// 00894c77  0f848b010000         je 0x894e08
// 00894c7d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00894c81  8d8e50050000         lea ecx, [esi + 0x550]
// 00894c87  51                   push ecx
// 00894c88  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00894c8c  57                   push edi
// 00894c8d  6a3a                 push 0x3a
// 00894c8f  83ec10               sub esp, 0x10
// 00894c92  8bc4                 mov eax, esp
// 00894c94  8910                 mov dword ptr [eax], edx
// 00894c96  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00894c9a  894804               mov dword ptr [eax + 4], ecx
// 00894c9d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00894ca1  895008               mov dword ptr [eax + 8], edx
// 00894ca4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00894ca8  89480c               mov dword ptr [eax + 0xc], ecx
// 00894cab  52                   push edx
// 00894cac  8bce                 mov ecx, esi
// 00894cae  e86dfeffff           call 0x894b20
// 00894cb3  5f                   pop edi
// 00894cb4  5e                   pop esi
// 00894cb5  5d                   pop ebp
// 00894cb6  5b                   pop ebx
// 00894cb7  c23000               ret 0x30
// 00894cba  8b442434             mov eax, dword ptr [esp + 0x34]
// 00894cbe  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00894cc2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00894cc6  83f802               cmp eax, 2
// 00894cc9  7547                 jne 0x894d12
// 00894ccb  85ed                 test ebp, ebp
// 00894ccd  0f8588000000         jne 0x894d5b
// 00894cd3  85db                 test ebx, ebx
// 00894cd5  0f8584000000         jne 0x894d5f
// 00894cdb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00894cdf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00894ce3  6a33                 push 0x33
// 00894ce5  6a32                 push 0x32
// 00894ce7  83ec10               sub esp, 0x10
// 00894cea  8bc4                 mov eax, esp
// 00894cec  8908                 mov dword ptr [eax], ecx
// 00894cee  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00894cf2  895004               mov dword ptr [eax + 4], edx
// 00894cf5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00894cf9  894808               mov dword ptr [eax + 8], ecx
// 00894cfc  89500c               mov dword ptr [eax + 0xc], edx
// 00894cff  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00894d03  50                   push eax
// 00894d04  8bce                 mov ecx, esi
// 00894d06  e875b9f7ff           call 0x810680
// 00894d0b  5f                   pop edi
// 00894d0c  5e                   pop esi
// 00894d0d  5d                   pop ebp
// 00894d0e  5b                   pop ebx
// 00894d0f  c23000               ret 0x30
// 00894d12  85c0                 test eax, eax
// 00894d14  7449                 je 0x894d5f
// 00894d16  85ed                 test ebp, ebp
// 00894d18  7541                 jne 0x894d5b
// 00894d1a  85db                 test ebx, ebx
// 00894d1c  7541                 jne 0x894d5f
// 00894d1e  8d8e50050000         lea ecx, [esi + 0x550]
// 00894d24  51                   push ecx
// 00894d25  57                   push edi
// 00894d26  6a25                 push 0x25
// 00894d28  8b542424             mov edx, dword ptr [esp + 0x24]
// 00894d2c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00894d30  83ec10               sub esp, 0x10
// 00894d33  8bc4                 mov eax, esp
// 00894d35  8910                 mov dword ptr [eax], edx
// 00894d37  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00894d3b  894804               mov dword ptr [eax + 4], ecx
// 00894d3e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00894d42  895008               mov dword ptr [eax + 8], edx
// 00894d45  8b542430             mov edx, dword ptr [esp + 0x30]
// 00894d49  89480c               mov dword ptr [eax + 0xc], ecx
// 00894d4c  52                   push edx
// 00894d4d  8bce                 mov ecx, esi
// 00894d4f  e8ccfdffff           call 0x894b20
// 00894d54  5f                   pop edi
// 00894d55  5e                   pop esi
// 00894d56  5d                   pop ebp
// 00894d57  5b                   pop ebx
// 00894d58  c23000               ret 0x30
// 00894d5b  85db                 test ebx, ebx
// 00894d5d  7415                 je 0x894d74
// 00894d5f  53                   push ebx
// 00894d60  e8fb74f7ff           call 0x80c260
// 00894d65  83c404               add esp, 4
// 00894d68  85c0                 test eax, eax
// 00894d6a  7508                 jne 0x894d74
// 00894d6c  85ed                 test ebp, ebp
// 00894d6e  7441                 je 0x894db1
// 00894d70  85db                 test ebx, ebx
// 00894d72  7441                 je 0x894db5
// 00894d74  8d8670050000         lea eax, [esi + 0x570]
// 00894d7a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00894d7e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00894d82  50                   push eax
// 00894d83  57                   push edi
// 00894d84  6a32                 push 0x32
// 00894d86  83ec10               sub esp, 0x10
// 00894d89  8bc4                 mov eax, esp
// 00894d8b  8908                 mov dword ptr [eax], ecx
// 00894d8d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00894d91  895004               mov dword ptr [eax + 4], edx
// 00894d94  8b542440             mov edx, dword ptr [esp + 0x40]
// 00894d98  894808               mov dword ptr [eax + 8], ecx
// 00894d9b  89500c               mov dword ptr [eax + 0xc], edx
// 00894d9e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00894da2  50                   push eax
// 00894da3  8bce                 mov ecx, esi
// 00894da5  e876fdffff           call 0x894b20
// 00894daa  5f                   pop edi
// 00894dab  5e                   pop esi
// 00894dac  5d                   pop ebp
// 00894dad  5b                   pop ebx
// 00894dae  c23000               ret 0x30
// 00894db1  85db                 test ebx, ebx
// 00894db3  7453                 je 0x894e08
// 00894db5  8d8e90050000         lea ecx, [esi + 0x590]
// 00894dbb  51                   push ecx
// 00894dbc  57                   push edi
// 00894dbd  6a20                 push 0x20
// 00894dbf  e964ffffff           jmp 0x894d28
// 00894dc4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00894dc8  50                   push eax
// 00894dc9  8b442430             mov eax, dword ptr [esp + 0x30]
// 00894dcd  51                   push ecx
// 00894dce  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00894dd2  6a00                 push 0
// 00894dd4  51                   push ecx
// 00894dd5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00894dd9  52                   push edx
// 00894dda  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00894dde  50                   push eax
// 00894ddf  51                   push ecx
// 00894de0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00894de4  83ec10               sub esp, 0x10
// 00894de7  8bc4                 mov eax, esp
// 00894de9  8910                 mov dword ptr [eax], edx
// 00894deb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00894def  894804               mov dword ptr [eax + 4], ecx
// 00894df2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00894df6  895008               mov dword ptr [eax + 8], edx
// 00894df9  8b542440             mov edx, dword ptr [esp + 0x40]
// 00894dfd  89480c               mov dword ptr [eax + 0xc], ecx
// 00894e00  52                   push edx
// 00894e01  8bce                 mov ecx, esi
// 00894e03  e848380000           call 0x898650
// 00894e08  5f                   pop edi
// 00894e09  5e                   pop esi
// 00894e0a  5d                   pop ebp
// 00894e0b  5b                   pop ebx
// 00894e0c  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawRectangle@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
