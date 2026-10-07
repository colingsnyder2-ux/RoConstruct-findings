// roc 2008-06 007a2ed0  unit: CXTButtonThemeOfficeXP  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a2ed0
//
// 007a2ed0  83ec10               sub esp, 0x10
// 007a2ed3  53                   push ebx
// 007a2ed4  55                   push ebp
// 007a2ed5  56                   push esi
// 007a2ed6  57                   push edi
// 007a2ed7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007a2edb  8b4718               mov eax, dword ptr [edi + 0x18]
// 007a2ede  50                   push eax
// 007a2edf  8bf1                 mov esi, ecx
// 007a2ee1  e842910100           call 0x7bc028
// 007a2ee6  8d4f1c               lea ecx, [edi + 0x1c]
// 007a2ee9  51                   push ecx
// 007a2eea  8d542414             lea edx, [esp + 0x14]
// 007a2eee  52                   push edx
// 007a2eef  8bd8                 mov ebx, eax
// 007a2ef1  ff15702d8000         call dword ptr [0x802d70]
// 007a2ef7  8b7f10               mov edi, dword ptr [edi + 0x10]
// 007a2efa  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a2efe  8b2dac2d8000         mov ebp, dword ptr [0x802dac]
// 007a2f04  83e701               and edi, 1
// 007a2f07  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 007a2f0e  7556                 jne 0x7a2f66
// 007a2f10  ffd5                 call ebp
// 007a2f12  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a2f16  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 007a2f19  744b                 je 0x7a2f66
// 007a2f1b  85ff                 test edi, edi
// 007a2f1d  754b                 jne 0x7a2f6a
// 007a2f1f  8bd1                 mov edx, ecx
// 007a2f21  397a7c               cmp dword ptr [edx + 0x7c], edi
// 007a2f24  754c                 jne 0x7a2f72
// 007a2f26  8b4628               mov eax, dword ptr [esi + 0x28]
// 007a2f29  83f8ff               cmp eax, -1
// 007a2f2c  7503                 jne 0x7a2f31
// 007a2f2e  8b4624               mov eax, dword ptr [esi + 0x24]
// 007a2f31  50                   push eax
// 007a2f32  8d442414             lea eax, [esp + 0x14]
// 007a2f36  50                   push eax
// 007a2f37  8bcb                 mov ecx, ebx
// 007a2f39  e820e4efff           call 0x6a135e
// 007a2f3e  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 007a2f45  0f8414010000         je 0x7a305f
// 007a2f4b  8b4658               mov eax, dword ptr [esi + 0x58]
// 007a2f4e  83f8ff               cmp eax, -1
// 007a2f51  7505                 jne 0x7a2f58
// 007a2f53  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007a2f56  eb02                 jmp 0x7a2f5a
// 007a2f58  8bc8                 mov ecx, eax
// 007a2f5a  83f8ff               cmp eax, -1
// 007a2f5d  7503                 jne 0x7a2f62
// 007a2f5f  8b4654               mov eax, dword ptr [esi + 0x54]
// 007a2f62  51                   push ecx
// 007a2f63  50                   push eax
// 007a2f64  eb70                 jmp 0x7a2fd6
// 007a2f66  85ff                 test edi, edi
// 007a2f68  7408                 je 0x7a2f72
// 007a2f6a  8d8e8c000000         lea ecx, [esi + 0x8c]
// 007a2f70  eb34                 jmp 0x7a2fa6
// 007a2f72  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a2f76  83787c00             cmp dword ptr [eax + 0x7c], 0
// 007a2f7a  7424                 je 0x7a2fa0
// 007a2f7c  83b8a000000000       cmp dword ptr [eax + 0xa0], 0
// 007a2f83  750b                 jne 0x7a2f90
// 007a2f85  ffd5                 call ebp
// 007a2f87  8b542428             mov edx, dword ptr [esp + 0x28]
// 007a2f8b  3b4220               cmp eax, dword ptr [edx + 0x20]
// 007a2f8e  7508                 jne 0x7a2f98
// 007a2f90  8d8e8c000000         lea ecx, [esi + 0x8c]
// 007a2f96  eb0e                 jmp 0x7a2fa6
// 007a2f98  8d8ebc000000         lea ecx, [esi + 0xbc]
// 007a2f9e  eb06                 jmp 0x7a2fa6
// 007a2fa0  8d8e98000000         lea ecx, [esi + 0x98]
// 007a2fa6  8b4108               mov eax, dword ptr [ecx + 8]
// 007a2fa9  83f8ff               cmp eax, -1
// 007a2fac  7503                 jne 0x7a2fb1
// 007a2fae  8b4104               mov eax, dword ptr [ecx + 4]
// 007a2fb1  50                   push eax
// 007a2fb2  8d442414             lea eax, [esp + 0x14]
// 007a2fb6  50                   push eax
// 007a2fb7  8bcb                 mov ecx, ebx
// 007a2fb9  e8a0e3efff           call 0x6a135e
// 007a2fbe  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007a2fc1  83f8ff               cmp eax, -1
// 007a2fc4  7503                 jne 0x7a2fc9
// 007a2fc6  8b4648               mov eax, dword ptr [esi + 0x48]
// 007a2fc9  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 007a2fcc  83f9ff               cmp ecx, -1
// 007a2fcf  7503                 jne 0x7a2fd4
// 007a2fd1  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 007a2fd4  50                   push eax
// 007a2fd5  51                   push ecx
// 007a2fd6  8d4c2418             lea ecx, [esp + 0x18]
// 007a2fda  51                   push ecx
// 007a2fdb  8bcb                 mov ecx, ebx
// 007a2fdd  e876e3efff           call 0x6a1358
// 007a2fe2  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 007a2fe9  7474                 je 0x7a305f
// 007a2feb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a2fef  e84cf3feff           call 0x792340
// 007a2ff4  3c01                 cmp al, 1
// 007a2ff6  7567                 jne 0x7a305f
// 007a2ff8  e843cdf3ff           call 0x6dfd40
// 007a2ffd  6a0d                 push 0xd
// 007a2fff  8bc8                 mov ecx, eax
// 007a3001  e81ac5f3ff           call 0x6df520
// 007a3006  8bf0                 mov esi, eax
// 007a3008  e833cdf3ff           call 0x6dfd40
// 007a300d  6a0d                 push 0xd
// 007a300f  8bc8                 mov ecx, eax
// 007a3011  e80ac5f3ff           call 0x6df520
// 007a3016  56                   push esi
// 007a3017  50                   push eax
// 007a3018  8d542418             lea edx, [esp + 0x18]
// 007a301c  52                   push edx
// 007a301d  8bcb                 mov ecx, ebx
// 007a301f  e834e3efff           call 0x6a1358
// 007a3024  6aff                 push -1
// 007a3026  6aff                 push -1
// 007a3028  8d442418             lea eax, [esp + 0x18]
// 007a302c  50                   push eax
// 007a302d  ff15282d8000         call dword ptr [0x802d28]
// 007a3033  e808cdf3ff           call 0x6dfd40
// 007a3038  6a0d                 push 0xd
// 007a303a  8bc8                 mov ecx, eax
// 007a303c  e8dfc4f3ff           call 0x6df520
// 007a3041  8bf0                 mov esi, eax
// 007a3043  e8f8ccf3ff           call 0x6dfd40
// 007a3048  6a0d                 push 0xd
// 007a304a  8bc8                 mov ecx, eax
// 007a304c  e8cfc4f3ff           call 0x6df520
// 007a3051  56                   push esi
// 007a3052  50                   push eax
// 007a3053  8d4c2418             lea ecx, [esp + 0x18]
// 007a3057  51                   push ecx
// 007a3058  8bcb                 mov ecx, ebx
// 007a305a  e8f9e2efff           call 0x6a1358
// 007a305f  5f                   pop edi
// 007a3060  5e                   pop esi
// 007a3061  5d                   pop ebp
// 007a3062  b801000000           mov eax, 1
// 007a3067  5b                   pop ebx
// 007a3068  83c410               add esp, 0x10
// 007a306b  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonThemeBackground@CXTButtonThemeOfficeXP@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
