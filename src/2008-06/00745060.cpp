// from server: 100% by auto
// roc 2008-06 00745060  unit: VCRect::?$CArray  size: 875 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745060
//
// 00745060  55                   push ebp
// 00745061  8bec                 mov ebp, esp
// 00745063  6aff                 push -1
// 00745065  68987d7e00           push 0x7e7d98
// 0074506a  64a100000000         mov eax, dword ptr fs:[0]
// 00745070  50                   push eax
// 00745071  83ec4c               sub esp, 0x4c
// 00745074  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00745079  33c5                 xor eax, ebp
// 0074507b  8945ec               mov dword ptr [ebp - 0x14], eax
// 0074507e  53                   push ebx
// 0074507f  56                   push esi
// 00745080  57                   push edi
// 00745081  50                   push eax
// 00745082  8d45f4               lea eax, [ebp - 0xc]
// 00745085  64a300000000         mov dword ptr fs:[0], eax
// 0074508b  8965f0               mov dword ptr [ebp - 0x10], esp
// 0074508e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00745091  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00745094  8b7508               mov esi, dword ptr [ebp + 8]
// 00745097  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0074509a  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 0074509d  8b5d14               mov ebx, dword ptr [ebp + 0x14]
// 007450a0  8945c4               mov dword ptr [ebp - 0x3c], eax
// 007450a3  8b07                 mov eax, dword ptr [edi]
// 007450a5  8945bc               mov dword ptr [ebp - 0x44], eax
// 007450a8  33c0                 xor eax, eax
// 007450aa  897dcc               mov dword ptr [ebp - 0x34], edi
// 007450ad  894dc0               mov dword ptr [ebp - 0x40], ecx
// 007450b0  8955d4               mov dword ptr [ebp - 0x2c], edx
// 007450b3  8945e0               mov dword ptr [ebp - 0x20], eax
// 007450b6  8945dc               mov dword ptr [ebp - 0x24], eax
// 007450b9  3bf0                 cmp esi, eax
// 007450bb  7507                 jne 0x7450c4
// 007450bd  8907                 mov dword ptr [edi], eax
// 007450bf  e9eb020000           jmp 0x7453af
// 007450c4  8b16                 mov edx, dword ptr [esi]
// 007450c6  8b523c               mov edx, dword ptr [edx + 0x3c]
// 007450c9  6a08                 push 8
// 007450cb  8d45e4               lea eax, [ebp - 0x1c]
// 007450ce  50                   push eax
// 007450cf  8bce                 mov ecx, esi
// 007450d1  ffd2                 call edx
// 007450d3  8d45e4               lea eax, [ebp - 0x1c]
// 007450d6  6a08                 push 8
// 007450d8  50                   push eax
// 007450d9  e8028cddff           call 0x51dce0
// 007450de  83c408               add esp, 8
// 007450e1  85c0                 test eax, eax
// 007450e3  743b                 je 0x745120
// 007450e5  6a00                 push 0
// 007450e7  68104f7400           push 0x744f10
// 007450ec  6a00                 push 0
// 007450ee  68683a8600           push 0x863a68
// 007450f3  e888aaddff           call 0x51fb80
// 007450f8  83c410               add esp, 0x10
// 007450fb  8945e0               mov dword ptr [ebp - 0x20], eax
// 007450fe  85c0                 test eax, eax
// 00745100  741e                 je 0x745120
// 00745102  50                   push eax
// 00745103  e83891ddff           call 0x51e240
// 00745108  83c404               add esp, 4
// 0074510b  8945dc               mov dword ptr [ebp - 0x24], eax
// 0074510e  85c0                 test eax, eax
// 00745110  751b                 jne 0x74512d
// 00745112  50                   push eax
// 00745113  50                   push eax
// 00745114  8d4de0               lea ecx, [ebp - 0x20]
// 00745117  51                   push ecx
// 00745118  e893aaddff           call 0x51fbb0
// 0074511d  83c40c               add esp, 0xc
// 00745120  c70700000000         mov dword ptr [edi], 0
// 00745126  33c0                 xor eax, eax
// 00745128  e982020000           jmp 0x7453af
// 0074512d  8d4da8               lea ecx, [ebp - 0x58]
// 00745130  e8dd6f0700           call 0x7bc112
// 00745135  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00745138  68e04e7400           push 0x744ee0
// 0074513d  56                   push esi
// 0074513e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00745145  52                   push edx
// 00745146  c645fc01             mov byte ptr [ebp - 4], 1
// 0074514a  e8c1f9ddff           call 0x524b10
// 0074514f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00745152  6a08                 push 8
// 00745154  50                   push eax
// 00745155  e8668addff           call 0x51dbc0
// 0074515a  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0074515d  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00745160  51                   push ecx
// 00745161  52                   push edx
// 00745162  e8499cddff           call 0x51edb0
// 00745167  8b75c4               mov esi, dword ptr [ebp - 0x3c]
// 0074516a  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0074516d  6a00                 push 0
// 0074516f  6a00                 push 0
// 00745171  6a00                 push 0
// 00745173  8d45d0               lea eax, [ebp - 0x30]
// 00745176  50                   push eax
// 00745177  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0074517a  8d4dd8               lea ecx, [ebp - 0x28]
// 0074517d  51                   push ecx
// 0074517e  53                   push ebx
// 0074517f  56                   push esi
// 00745180  52                   push edx
// 00745181  50                   push eax
// 00745182  e809f8ddff           call 0x524990
// 00745187  83c440               add esp, 0x40
// 0074518a  837dd810             cmp dword ptr [ebp - 0x28], 0x10
// 0074518e  750c                 jne 0x74519c
// 00745190  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00745193  51                   push ecx
// 00745194  e817b0ddff           call 0x5201b0
// 00745199  83c404               add esp, 4
// 0074519c  837dd003             cmp dword ptr [ebp - 0x30], 3
// 007451a0  750c                 jne 0x7451ae
// 007451a2  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 007451a5  52                   push edx
// 007451a6  e865b0ddff           call 0x520210
// 007451ab  83c404               add esp, 4
// 007451ae  837dd808             cmp dword ptr [ebp - 0x28], 8
// 007451b2  7d0c                 jge 0x7451c0
// 007451b4  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 007451b7  50                   push eax
// 007451b8  e853b0ddff           call 0x520210
// 007451bd  83c404               add esp, 4
// 007451c0  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 007451c3  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 007451c6  6a10                 push 0x10
// 007451c8  51                   push ecx
// 007451c9  52                   push edx
// 007451ca  e801f7ddff           call 0x5248d0
// 007451cf  83c40c               add esp, 0xc
// 007451d2  85c0                 test eax, eax
// 007451d4  740c                 je 0x7451e2
// 007451d6  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 007451d9  50                   push eax
// 007451da  e831b0ddff           call 0x520210
// 007451df  83c404               add esp, 4
// 007451e2  8b45d0               mov eax, dword ptr [ebp - 0x30]
// 007451e5  85c0                 test eax, eax
// 007451e7  7405                 je 0x7451ee
// 007451e9  83f804               cmp eax, 4
// 007451ec  750c                 jne 0x7451fa
// 007451ee  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 007451f1  51                   push ecx
// 007451f2  e829b0ddff           call 0x520220
// 007451f7  83c404               add esp, 4
// 007451fa  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 007451fd  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00745200  8d55c8               lea edx, [ebp - 0x38]
// 00745203  52                   push edx
// 00745204  50                   push eax
// 00745205  51                   push ecx
// 00745206  e825f7ddff           call 0x524930
// 0074520b  83c40c               add esp, 0xc
// 0074520e  85c0                 test eax, eax
// 00745210  7433                 je 0x745245
// 00745212  d9e8                 fld1 
// 00745214  8b55c8               mov edx, dword ptr [ebp - 0x38]
// 00745217  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0074521a  83ec08               sub esp, 8
// 0074521d  dd1c24               fstp qword ptr [esp]
// 00745220  6a01                 push 1
// 00745222  6a02                 push 2
// 00745224  52                   push edx
// 00745225  50                   push eax
// 00745226  e8e5aeddff           call 0x520110
// 0074522b  8b45c8               mov eax, dword ptr [ebp - 0x38]
// 0074522e  8a4802               mov cl, byte ptr [eax + 2]
// 00745231  8b7dd4               mov edi, dword ptr [ebp - 0x2c]
// 00745234  880f                 mov byte ptr [edi], cl
// 00745236  8a5004               mov dl, byte ptr [eax + 4]
// 00745239  885701               mov byte ptr [edi + 1], dl
// 0074523c  8a4006               mov al, byte ptr [eax + 6]
// 0074523f  83c418               add esp, 0x18
// 00745242  884702               mov byte ptr [edi + 2], al
// 00745245  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00745248  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0074524b  8d4db4               lea ecx, [ebp - 0x4c]
// 0074524e  51                   push ecx
// 0074524f  52                   push edx
// 00745250  50                   push eax
// 00745251  e80af7ddff           call 0x524960
// 00745256  83c40c               add esp, 0xc
// 00745259  85c0                 test eax, eax
// 0074525b  741f                 je 0x74527c
// 0074525d  dd45b4               fld qword ptr [ebp - 0x4c]
// 00745260  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00745263  83ec10               sub esp, 0x10
// 00745266  dd5c2408             fstp qword ptr [esp + 8]
// 0074526a  dd05603a8600         fld qword ptr [0x863a60]
// 00745270  dd1c24               fstp qword ptr [esp]
// 00745273  51                   push ecx
// 00745274  e847afddff           call 0x5201c0
// 00745279  83c414               add esp, 0x14
// 0074527c  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0074527f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00745282  52                   push edx
// 00745283  50                   push eax
// 00745284  e8679eddff           call 0x51f0f0
// 00745289  8b45dc               mov eax, dword ptr [ebp - 0x24]
// 0074528c  6a00                 push 0
// 0074528e  6a00                 push 0
// 00745290  6a00                 push 0
// 00745292  8d4dd0               lea ecx, [ebp - 0x30]
// 00745295  51                   push ecx
// 00745296  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00745299  8d55d8               lea edx, [ebp - 0x28]
// 0074529c  52                   push edx
// 0074529d  53                   push ebx
// 0074529e  56                   push esi
// 0074529f  50                   push eax
// 007452a0  51                   push ecx
// 007452a1  e8eaf6ddff           call 0x524990
// 007452a6  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 007452a9  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 007452ac  52                   push edx
// 007452ad  50                   push eax
// 007452ae  e83df6ddff           call 0x5248f0
// 007452b3  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 007452b6  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 007452b9  51                   push ecx
// 007452ba  8bf0                 mov esi, eax
// 007452bc  52                   push edx
// 007452bd  8975d4               mov dword ptr [ebp - 0x2c], esi
// 007452c0  e84bf6ddff           call 0x524910
// 007452c5  8b4dc0               mov ecx, dword ptr [ebp - 0x40]
// 007452c8  0fb6c0               movzx eax, al
// 007452cb  8901                 mov dword ptr [ecx], eax
// 007452cd  8b45bc               mov eax, dword ptr [ebp - 0x44]
// 007452d0  83c43c               add esp, 0x3c
// 007452d3  85c0                 test eax, eax
// 007452d5  740a                 je 0x7452e1
// 007452d7  50                   push eax
// 007452d8  ff15c0288000         call dword ptr [0x8028c0]
// 007452de  83c404               add esp, 4
// 007452e1  8b13                 mov edx, dword ptr [ebx]
// 007452e3  0fafd6               imul edx, esi
// 007452e6  8b35b0288000         mov esi, dword ptr [0x8028b0]
// 007452ec  52                   push edx
// 007452ed  ffd6                 call esi
// 007452ef  8bf8                 mov edi, eax
// 007452f1  83c404               add esp, 4
// 007452f4  85ff                 test edi, edi
// 007452f6  750a                 jne 0x745302
// 007452f8  50                   push eax
// 007452f9  6aff                 push -1
// 007452fb  6a09                 push 9
// 007452fd  e896750700           call 0x7bc898
// 00745302  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 00745305  8938                 mov dword ptr [eax], edi
// 00745307  8b0b                 mov ecx, dword ptr [ebx]
// 00745309  03c9                 add ecx, ecx
// 0074530b  03c9                 add ecx, ecx
// 0074530d  51                   push ecx
// 0074530e  ffd6                 call esi
// 00745310  8bf0                 mov esi, eax
// 00745312  83c404               add esp, 4
// 00745315  85f6                 test esi, esi
// 00745317  7541                 jne 0x74535a
// 00745319  50                   push eax
// 0074531a  6aff                 push -1
// 0074531c  6a09                 push 9
// 0074531e  e875750700           call 0x7bc898
// 00745323  8b55b0               mov edx, dword ptr [ebp - 0x50]
// 00745326  6a00                 push 0
// 00745328  8d45dc               lea eax, [ebp - 0x24]
// 0074532b  50                   push eax
// 0074532c  8d4de0               lea ecx, [ebp - 0x20]
// 0074532f  51                   push ecx
// 00745330  8955ac               mov dword ptr [ebp - 0x54], edx
// 00745333  e878a8ddff           call 0x51fbb0
// 00745338  8b55cc               mov edx, dword ptr [ebp - 0x34]
// 0074533b  83c40c               add esp, 0xc
// 0074533e  c70200000000         mov dword ptr [edx], 0
// 00745344  b84a537400           mov eax, 0x74534a
// 00745349  c3                   ret 
// 0074534a  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00745351  e8aa6d0700           call 0x7bc100
// 00745356  33c0                 xor eax, eax
// 00745358  eb55                 jmp 0x7453af
// 0074535a  33c0                 xor eax, eax
// 0074535c  8bcf                 mov ecx, edi
// 0074535e  8bff                 mov edi, edi
// 00745360  3b03                 cmp eax, dword ptr [ebx]
// 00745362  7309                 jae 0x74536d
// 00745364  890c86               mov dword ptr [esi + eax*4], ecx
// 00745367  40                   inc eax
// 00745368  034dd4               add ecx, dword ptr [ebp - 0x2c]
// 0074536b  ebf3                 jmp 0x745360
// 0074536d  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00745370  56                   push esi
// 00745371  50                   push eax
// 00745372  e8d9a2ddff           call 0x51f650
// 00745377  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0074537a  6a00                 push 0
// 0074537c  51                   push ecx
// 0074537d  e82ea3ddff           call 0x51f6b0
// 00745382  56                   push esi
// 00745383  ff15c0288000         call dword ptr [0x8028c0]
// 00745389  83c414               add esp, 0x14
// 0074538c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00745393  e8686d0700           call 0x7bc100
// 00745398  6a00                 push 0
// 0074539a  8d55dc               lea edx, [ebp - 0x24]
// 0074539d  52                   push edx
// 0074539e  8d45e0               lea eax, [ebp - 0x20]
// 007453a1  50                   push eax
// 007453a2  e809a8ddff           call 0x51fbb0
// 007453a7  83c40c               add esp, 0xc
// 007453aa  b801000000           mov eax, 1
// 007453af  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007453b2  64890d00000000       mov dword ptr fs:[0], ecx
// 007453b9  59                   pop ecx
// 007453ba  5f                   pop edi
// 007453bb  5e                   pop esi
// 007453bc  5b                   pop ebx
// 007453bd  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 007453c0  33cd                 xor ecx, ebp
// 007453c2  e80bcaf5ff           call 0x6a1dd2
// 007453c7  8be5                 mov esp, ebp
// 007453c9  5d                   pop ebp
// 007453ca  c3                   ret 

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp
