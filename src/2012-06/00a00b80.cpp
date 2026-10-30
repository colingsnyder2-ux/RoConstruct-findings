// roc 2012-06 00a00b80  unit: XTPPaintThemes::CXTPDefaultTheme  size: 1636 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a00b80
//
// 00a00b80  6aff                 push -1
// 00a00b82  68112aae00           push 0xae2a11
// 00a00b87  64a100000000         mov eax, dword ptr fs:[0]
// 00a00b8d  50                   push eax
// 00a00b8e  83ec68               sub esp, 0x68
// 00a00b91  53                   push ebx
// 00a00b92  55                   push ebp
// 00a00b93  56                   push esi
// 00a00b94  57                   push edi
// 00a00b95  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a00b9a  33c4                 xor eax, esp
// 00a00b9c  50                   push eax
// 00a00b9d  8d44247c             lea eax, [esp + 0x7c]
// 00a00ba1  64a300000000         mov dword ptr fs:[0], eax
// 00a00ba7  8bf9                 mov edi, ecx
// 00a00ba9  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00a00bb0  85c0                 test eax, eax
// 00a00bb2  7414                 je 0xa00bc8
// 00a00bb4  8b4074               mov eax, dword ptr [eax + 0x74]
// 00a00bb7  83787400             cmp dword ptr [eax + 0x74], 0
// 00a00bbb  7506                 jne 0xa00bc3
// 00a00bbd  83787800             cmp dword ptr [eax + 0x78], 0
// 00a00bc1  7405                 je 0xa00bc8
// 00a00bc3  83c074               add eax, 0x74
// 00a00bc6  eb0c                 jmp 0xa00bd4
// 00a00bc8  6a00                 push 0
// 00a00bca  8d442428             lea eax, [esp + 0x28]
// 00a00bce  50                   push eax
// 00a00bcf  e8cc76f8ff           call 0x9882a0
// 00a00bd4  8b10                 mov edx, dword ptr [eax]
// 00a00bd6  8b4004               mov eax, dword ptr [eax + 4]
// 00a00bd9  8d4804               lea ecx, [eax + 4]
// 00a00bdc  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 00a00be2  3bc8                 cmp ecx, eax
// 00a00be4  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a00be8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a00bec  7f04                 jg 0xa00bf2
// 00a00bee  89442418             mov dword ptr [esp + 0x18], eax
// 00a00bf2  8d4a04               lea ecx, [edx + 4]
// 00a00bf5  3bc8                 cmp ecx, eax
// 00a00bf7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a00bfb  7f04                 jg 0xa00c01
// 00a00bfd  89442414             mov dword ptr [esp + 0x14], eax
// 00a00c01  83bc24ac00000000     cmp dword ptr [esp + 0xac], 0
// 00a00c09  0f84ab050000         je 0xa011ba
// 00a00c0f  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00a00c16  6a0f                 push 0xf
// 00a00c18  8bcf                 mov ecx, edi
// 00a00c1a  e8716cf8ff           call 0x987890
// 00a00c1f  50                   push eax
// 00a00c20  85ed                 test ebp, ebp
// 00a00c22  7525                 jne 0xa00c49
// 00a00c24  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00a00c2b  51                   push ecx
// 00a00c2c  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a00c33  e87422f8ff           call 0x982eac
// 00a00c38  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a00c3f  8928                 mov dword ptr [eax], ebp
// 00a00c41  896804               mov dword ptr [eax + 4], ebp
// 00a00c44  e985050000           jmp 0xa011ce
// 00a00c49  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 00a00c50  8d94249c000000       lea edx, [esp + 0x9c]
// 00a00c57  52                   push edx
// 00a00c58  8bce                 mov ecx, esi
// 00a00c5a  e84d22f8ff           call 0x982eac
// 00a00c5f  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a00c66  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a00c6d  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00a00c74  8b9dfc000000         mov ebx, dword ptr [ebp + 0xfc]
// 00a00c7a  48                   dec eax
// 00a00c7b  41                   inc ecx
// 00a00c7c  89442424             mov dword ptr [esp + 0x24], eax
// 00a00c80  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00a00c87  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a00c8b  8bcd                 mov ecx, ebp
// 00a00c8d  89542460             mov dword ptr [esp + 0x60], edx
// 00a00c91  89442468             mov dword ptr [esp + 0x68], eax
// 00a00c95  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 00a00c9c  e8af3af8ff           call 0x984750
// 00a00ca1  85c0                 test eax, eax
// 00a00ca3  7534                 jne 0xa00cd9
// 00a00ca5  83fb02               cmp ebx, 2
// 00a00ca8  7439                 je 0xa00ce3
// 00a00caa  ba01000000           mov edx, 1
// 00a00caf  8b8590000000         mov eax, dword ptr [ebp + 0x90]
// 00a00cb5  85c0                 test eax, eax
// 00a00cb7  753c                 jne 0xa00cf5
// 00a00cb9  8b8588000000         mov eax, dword ptr [ebp + 0x88]
// 00a00cbf  85c0                 test eax, eax
// 00a00cc1  7f32                 jg 0xa00cf5
// 00a00cc3  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00a00cc9  85c9                 test ecx, ecx
// 00a00ccb  741a                 je 0xa00ce7
// 00a00ccd  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00a00cd0  85c0                 test eax, eax
// 00a00cd2  7f21                 jg 0xa00cf5
// 00a00cd4  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a00cd7  eb14                 jmp 0xa00ced
// 00a00cd9  83f802               cmp eax, 2
// 00a00cdc  74cc                 je 0xa00caa
// 00a00cde  83f803               cmp eax, 3
// 00a00ce1  74c7                 je 0xa00caa
// 00a00ce3  33d2                 xor edx, edx
// 00a00ce5  ebc8                 jmp 0xa00caf
// 00a00ce7  8b8584000000         mov eax, dword ptr [ebp + 0x84]
// 00a00ced  85c0                 test eax, eax
// 00a00cef  0f841c010000         je 0xa00e11
// 00a00cf5  85d2                 test edx, edx
// 00a00cf7  0f8414010000         je 0xa00e11
// 00a00cfd  8b5500               mov edx, dword ptr [ebp]
// 00a00d00  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a00d04  8b92a8000000         mov edx, dword ptr [edx + 0xa8]
// 00a00d0a  50                   push eax
// 00a00d0b  8bcd                 mov ecx, ebp
// 00a00d0d  ffd2                 call edx
// 00a00d0f  8bd8                 mov ebx, eax
// 00a00d11  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00a00d15  85db                 test ebx, ebx
// 00a00d17  0f84f4000000         je 0xa00e11
// 00a00d1d  8bcb                 mov ecx, ebx
// 00a00d1f  e8fc6cf9ff           call 0x997a20
// 00a00d24  8be8                 mov ebp, eax
// 00a00d26  0faf6c242c           imul ebp, dword ptr [esp + 0x2c]
// 00a00d2b  8bcb                 mov ecx, ebx
// 00a00d2d  e82ea90200           call 0xa2b660
// 00a00d32  8bc8                 mov ecx, eax
// 00a00d34  8bc5                 mov eax, ebp
// 00a00d36  99                   cdq 
// 00a00d37  f7f9                 idiv ecx
// 00a00d39  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00a00d40  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a00d47  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a00d4b  6a05                 push 5
// 00a00d4d  6a01                 push 1
// 00a00d4f  6a00                 push 0
// 00a00d51  6a00                 push 0
// 00a00d53  6a01                 push 1
// 00a00d55  6a00                 push 0
// 00a00d57  8d1c2a               lea ebx, [edx + ebp]
// 00a00d5a  8b17                 mov edx, dword ptr [edi]
// 00a00d5c  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 00a00d62  894c2468             mov dword ptr [esp + 0x68], ecx
// 00a00d66  896c2464             mov dword ptr [esp + 0x64], ebp
// 00a00d6a  89442448             mov dword ptr [esp + 0x48], eax
// 00a00d6e  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00a00d75  89442470             mov dword ptr [esp + 0x70], eax
// 00a00d79  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 00a00d80  50                   push eax
// 00a00d81  83ec10               sub esp, 0x10
// 00a00d84  8bc4                 mov eax, esp
// 00a00d86  8928                 mov dword ptr [eax], ebp
// 00a00d88  894804               mov dword ptr [eax + 4], ecx
// 00a00d8b  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a00d92  895808               mov dword ptr [eax + 8], ebx
// 00a00d95  89480c               mov dword ptr [eax + 0xc], ecx
// 00a00d98  56                   push esi
// 00a00d99  8bcf                 mov ecx, edi
// 00a00d9b  ffd2                 call edx
// 00a00d9d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a00da1  2b442450             sub eax, dword ptr [esp + 0x50]
// 00a00da5  6a00                 push 0
// 00a00da7  99                   cdq 
// 00a00da8  2bc2                 sub eax, edx
// 00a00daa  8bc8                 mov ecx, eax
// 00a00dac  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a00db0  99                   cdq 
// 00a00db1  2bc2                 sub eax, edx
// 00a00db3  d1f8                 sar eax, 1
// 00a00db5  d1f9                 sar ecx, 1
// 00a00db7  2bc8                 sub ecx, eax
// 00a00db9  034c2454             add ecx, dword ptr [esp + 0x54]
// 00a00dbd  8bc3                 mov eax, ebx
// 00a00dbf  2bc5                 sub eax, ebp
// 00a00dc1  99                   cdq 
// 00a00dc2  2bc2                 sub eax, edx
// 00a00dc4  6a00                 push 0
// 00a00dc6  8be8                 mov ebp, eax
// 00a00dc8  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a00dcc  6a00                 push 0
// 00a00dce  6a01                 push 1
// 00a00dd0  99                   cdq 
// 00a00dd1  2bc2                 sub eax, edx
// 00a00dd3  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00a00dda  6a00                 push 0
// 00a00ddc  52                   push edx
// 00a00ddd  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a00de1  52                   push edx
// 00a00de2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a00de6  52                   push edx
// 00a00de7  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a00deb  d1f8                 sar eax, 1
// 00a00ded  d1fd                 sar ebp, 1
// 00a00def  2be8                 sub ebp, eax
// 00a00df1  036c246c             add ebp, dword ptr [esp + 0x6c]
// 00a00df5  8b07                 mov eax, dword ptr [edi]
// 00a00df7  52                   push edx
// 00a00df8  51                   push ecx
// 00a00df9  55                   push ebp
// 00a00dfa  56                   push esi
// 00a00dfb  8bcf                 mov ecx, edi
// 00a00dfd  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 00a00e03  ffd0                 call eax
// 00a00e05  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00a00e0c  43                   inc ebx
// 00a00e0d  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a00e11  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 00a00e18  85db                 test ebx, ebx
// 00a00e1a  742f                 je 0xa00e4b
// 00a00e1c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a00e20  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a00e24  6a0d                 push 0xd
// 00a00e26  6a0d                 push 0xd
// 00a00e28  83ec10               sub esp, 0x10
// 00a00e2b  8bc4                 mov eax, esp
// 00a00e2d  8908                 mov dword ptr [eax], ecx
// 00a00e2f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a00e33  895004               mov dword ptr [eax + 4], edx
// 00a00e36  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00a00e3d  894808               mov dword ptr [eax + 8], ecx
// 00a00e40  56                   push esi
// 00a00e41  8bcf                 mov ecx, edi
// 00a00e43  89500c               mov dword ptr [eax + 0xc], edx
// 00a00e46  e8257bf8ff           call 0x988970
// 00a00e4b  33c0                 xor eax, eax
// 00a00e4d  85db                 test ebx, ebx
// 00a00e4f  0f94c0               sete al
// 00a00e52  8bcf                 mov ecx, edi
// 00a00e54  8d04850e000000       lea eax, [eax*4 + 0xe]
// 00a00e5b  50                   push eax
// 00a00e5c  89442428             mov dword ptr [esp + 0x28], eax
// 00a00e60  e82b6af8ff           call 0x987890
// 00a00e65  8b16                 mov edx, dword ptr [esi]
// 00a00e67  89842494000000       mov dword ptr [esp + 0x94], eax
// 00a00e6e  50                   push eax
// 00a00e6f  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a00e72  8bce                 mov ecx, esi
// 00a00e74  ffd0                 call eax
// 00a00e76  6a01                 push 1
// 00a00e78  8bce                 mov ecx, esi
// 00a00e7a  e829870900           call 0xa995a8
// 00a00e7f  8b5500               mov edx, dword ptr [ebp]
// 00a00e82  8b5258               mov edx, dword ptr [edx + 0x58]
// 00a00e85  8d8424ac000000       lea eax, [esp + 0xac]
// 00a00e8c  50                   push eax
// 00a00e8d  8bcd                 mov ecx, ebp
// 00a00e8f  ffd2                 call edx
// 00a00e91  8d8424ac000000       lea eax, [esp + 0xac]
// 00a00e98  50                   push eax
// 00a00e99  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00a00ea4  e8776cf8ff           call 0x987b20
// 00a00ea9  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a00eb0  83c404               add esp, 4
// 00a00eb3  85c9                 test ecx, ecx
// 00a00eb5  741d                 je 0xa00ed4
// 00a00eb7  e86416faff           call 0x9a2520
// 00a00ebc  85c0                 test eax, eax
// 00a00ebe  7414                 je 0xa00ed4
// 00a00ec0  8b17                 mov edx, dword ptr [edi]
// 00a00ec2  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 00a00ec8  8d8424ac000000       lea eax, [esp + 0xac]
// 00a00ecf  50                   push eax
// 00a00ed0  8bcf                 mov ecx, edi
// 00a00ed2  ffd2                 call edx
// 00a00ed4  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00a00edb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a00edf  8d540104             lea edx, [ecx + eax + 4]
// 00a00ee3  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00a00eea  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a00ef1  89442440             mov dword ptr [esp + 0x40], eax
// 00a00ef5  8d87f0000000         lea eax, [edi + 0xf0]
// 00a00efb  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a00eff  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 00a00f06  50                   push eax
// 00a00f07  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a00f0b  56                   push esi
// 00a00f0c  8d4c2474             lea ecx, [esp + 0x74]
// 00a00f10  89542450             mov dword ptr [esp + 0x50], edx
// 00a00f14  e81746fdff           call 0x9d5530
// 00a00f19  8b2e                 mov ebp, dword ptr [esi]
// 00a00f1b  6824880000           push 0x8824
// 00a00f20  8d4c2440             lea ecx, [esp + 0x40]
// 00a00f24  51                   push ecx
// 00a00f25  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00a00f2c  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 00a00f34  ff155846b200         call dword ptr [0xb24658]
// 00a00f3a  50                   push eax
// 00a00f3b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00a00f42  ff159847b200         call dword ptr [0xb24798]
// 00a00f48  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00a00f4b  50                   push eax
// 00a00f4c  8bce                 mov ecx, esi
// 00a00f4e  ffd2                 call edx
// 00a00f50  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a00f57  83f802               cmp eax, 2
// 00a00f5a  740e                 je 0xa00f6a
// 00a00f5c  83f803               cmp eax, 3
// 00a00f5f  7409                 je 0xa00f6a
// 00a00f61  83f804               cmp eax, 4
// 00a00f64  0f858e000000         jne 0xa00ff8
// 00a00f6a  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a00f71  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00a00f78  03c1                 add eax, ecx
// 00a00f7a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a00f81  99                   cdq 
// 00a00f82  2bc2                 sub eax, edx
// 00a00f84  d1f8                 sar eax, 1
// 00a00f86  8d58fb               lea ebx, [eax - 5]
// 00a00f89  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 00a00f90  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 00a00f97  53                   push ebx
// 00a00f98  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 00a00f9f  83c1f9               add ecx, -7
// 00a00fa2  8d6805               lea ebp, [eax + 5]
// 00a00fa5  55                   push ebp
// 00a00fa6  8d51fb               lea edx, [ecx - 5]
// 00a00fa9  52                   push edx
// 00a00faa  53                   push ebx
// 00a00fab  52                   push edx
// 00a00fac  50                   push eax
// 00a00fad  51                   push ecx
// 00a00fae  56                   push esi
// 00a00faf  e8ec78f8ff           call 0x9888a0
// 00a00fb4  83c420               add esp, 0x20
// 00a00fb7  83bc249000000004     cmp dword ptr [esp + 0x90], 4
// 00a00fbf  7530                 jne 0xa00ff1
// 00a00fc1  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a00fc5  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00a00fcc  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a00fd3  52                   push edx
// 00a00fd4  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00a00fdb  49                   dec ecx
// 00a00fdc  51                   push ecx
// 00a00fdd  83c0ec               add eax, -0x14
// 00a00fe0  50                   push eax
// 00a00fe1  42                   inc edx
// 00a00fe2  52                   push edx
// 00a00fe3  50                   push eax
// 00a00fe4  56                   push esi
// 00a00fe5  8bcf                 mov ecx, edi
// 00a00fe7  e8c47df8ff           call 0x988db0
// 00a00fec  e9ab010000           jmp 0xa0119c
// 00a00ff1  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a00ff8  83f805               cmp eax, 5
// 00a00ffb  7409                 je 0xa01006
// 00a00ffd  83f806               cmp eax, 6
// 00a01000  0f8596010000         jne 0xa0119c
// 00a01006  8d44243c             lea eax, [esp + 0x3c]
// 00a0100a  50                   push eax
// 00a0100b  ff15903ab200         call dword ptr [0xb23a90]
// 00a01011  8b1e                 mov ebx, dword ptr [esi]
// 00a01013  6820040000           push 0x420
// 00a01018  8d4c2440             lea ecx, [esp + 0x40]
// 00a0101c  51                   push ecx
// 00a0101d  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00a01024  ff155846b200         call dword ptr [0xb24658]
// 00a0102a  50                   push eax
// 00a0102b  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 00a01032  ff159847b200         call dword ptr [0xb24798]
// 00a01038  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00a0103b  50                   push eax
// 00a0103c  8bce                 mov ecx, esi
// 00a0103e  ffd2                 call edx
// 00a01040  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a01043  8d44241c             lea eax, [esp + 0x1c]
// 00a01047  50                   push eax
// 00a01048  6a01                 push 1
// 00a0104a  68ecf3b400           push 0xb4f3ec
// 00a0104f  51                   push ecx
// 00a01050  ff154021b200         call dword ptr [0xb22140]
// 00a01056  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a0105a  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 00a0105e  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a01065  03542414             add edx, dword ptr [esp + 0x14]
// 00a01069  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0106d  8d540a09             lea edx, [edx + ecx + 9]
// 00a01071  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a01078  83c002               add eax, 2
// 00a0107b  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 00a01082  8be9                 mov ebp, ecx
// 00a01084  2be8                 sub ebp, eax
// 00a01086  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00a0108d  89442438             mov dword ptr [esp + 0x38], eax
// 00a01091  33c0                 xor eax, eax
// 00a01093  398424a8000000       cmp dword ptr [esp + 0xa8], eax
// 00a0109a  6a05                 push 5
// 00a0109c  0f94c0               sete al
// 00a0109f  894c2438             mov dword ptr [esp + 0x38], ecx
// 00a010a3  8d44000d             lea eax, [eax + eax + 0xd]
// 00a010a7  50                   push eax
// 00a010a8  83ec10               sub esp, 0x10
// 00a010ab  8bc4                 mov eax, esp
// 00a010ad  8910                 mov dword ptr [eax], edx
// 00a010af  8bd3                 mov edx, ebx
// 00a010b1  895004               mov dword ptr [eax + 4], edx
// 00a010b4  894808               mov dword ptr [eax + 8], ecx
// 00a010b7  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00a010be  89480c               mov dword ptr [eax + 0xc], ecx
// 00a010c1  56                   push esi
// 00a010c2  8bcf                 mov ecx, edi
// 00a010c4  e8a778f8ff           call 0x988970
// 00a010c9  83bc249000000005     cmp dword ptr [esp + 0x90], 5
// 00a010d1  0f85c5000000         jne 0xa0119c
// 00a010d7  83bc24a800000000     cmp dword ptr [esp + 0xa8], 0
// 00a010df  6a0f                 push 0xf
// 00a010e1  7549                 jne 0xa0112c
// 00a010e3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a010e7  2bc3                 sub eax, ebx
// 00a010e9  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00a010f0  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a010f4  2bc5                 sub eax, ebp
// 00a010f6  8bcf                 mov ecx, edi
// 00a010f8  89842494000000       mov dword ptr [esp + 0x94], eax
// 00a010ff  e88c67f8ff           call 0x987890
// 00a01104  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00a0110b  50                   push eax
// 00a0110c  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00a01113  83c2fc               add edx, -4
// 00a01116  52                   push edx
// 00a01117  83c0fc               add eax, -4
// 00a0111a  50                   push eax
// 00a0111b  8d4b02               lea ecx, [ebx + 2]
// 00a0111e  51                   push ecx
// 00a0111f  8d5502               lea edx, [ebp + 2]
// 00a01122  52                   push edx
// 00a01123  8bce                 mov ecx, esi
// 00a01125  e866840900           call 0xa99590
// 00a0112a  eb22                 jmp 0xa0114e
// 00a0112c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a01130  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a01134  6a0d                 push 0xd
// 00a01136  83ec10               sub esp, 0x10
// 00a01139  8bc4                 mov eax, esp
// 00a0113b  8928                 mov dword ptr [eax], ebp
// 00a0113d  895804               mov dword ptr [eax + 4], ebx
// 00a01140  894808               mov dword ptr [eax + 8], ecx
// 00a01143  56                   push esi
// 00a01144  8bcf                 mov ecx, edi
// 00a01146  89500c               mov dword ptr [eax + 0xc], edx
// 00a01149  e82278f8ff           call 0x988970
// 00a0114e  b801000000           mov eax, 1
// 00a01153  29442434             sub dword ptr [esp + 0x34], eax
// 00a01157  29442438             sub dword ptr [esp + 0x38], eax
// 00a0115b  03e8                 add ebp, eax
// 00a0115d  03d8                 add ebx, eax
// 00a0115f  8b07                 mov eax, dword ptr [edi]
// 00a01161  6a12                 push 0x12
// 00a01163  8bcf                 mov ecx, edi
// 00a01165  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00a0116c  e81f67f8ff           call 0x987890
// 00a01171  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a01175  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a01179  50                   push eax
// 00a0117a  83ec10               sub esp, 0x10
// 00a0117d  8bc4                 mov eax, esp
// 00a0117f  8928                 mov dword ptr [eax], ebp
// 00a01181  895804               mov dword ptr [eax + 4], ebx
// 00a01184  894808               mov dword ptr [eax + 8], ecx
// 00a01187  89500c               mov dword ptr [eax + 0xc], edx
// 00a0118a  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00a01191  8b90f0000000         mov edx, dword ptr [eax + 0xf0]
// 00a01197  56                   push esi
// 00a01198  8bcf                 mov ecx, edi
// 00a0119a  ffd2                 call edx
// 00a0119c  8d4c246c             lea ecx, [esp + 0x6c]
// 00a011a0  c684248400000000     mov byte ptr [esp + 0x84], 0
// 00a011a8  e80344fdff           call 0x9d55b0
// 00a011ad  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00a011b4  ff15d047b200         call dword ptr [0xb247d0]
// 00a011ba  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a011c1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a011c5  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a011c9  8908                 mov dword ptr [eax], ecx
// 00a011cb  895004               mov dword ptr [eax + 4], edx
// 00a011ce  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a011d2  64890d00000000       mov dword ptr fs:[0], ecx
// 00a011d9  59                   pop ecx
// 00a011da  5f                   pop edi
// 00a011db  5e                   pop esi
// 00a011dc  5d                   pop ebp
// 00a011dd  5b                   pop ebx
// 00a011de  83c474               add esp, 0x74
// 00a011e1  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDefaultTheme.cpp