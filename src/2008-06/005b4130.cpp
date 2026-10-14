// roc 2008-06 005b4130  unit: RBX::VHat::?$FactoryProduct  size: 436 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b4130
//
// 005b4130  83ec28               sub esp, 0x28
// 005b4133  d9056c748200         fld dword ptr [0x82746c]
// 005b4139  53                   push ebx
// 005b413a  55                   push ebp
// 005b413b  d95c2410             fstp dword ptr [esp + 0x10]
// 005b413f  56                   push esi
// 005b4140  57                   push edi
// 005b4141  8bd9                 mov ebx, ecx
// 005b4143  8d44243c             lea eax, [esp + 0x3c]
// 005b4147  8d4b50               lea ecx, [ebx + 0x50]
// 005b414a  50                   push eax
// 005b414b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005b4153  e8b8fdffff           call 0x5b3f10
// 005b4158  d900                 fld dword ptr [eax]
// 005b415a  8b7324               mov esi, dword ptr [ebx + 0x24]
// 005b415d  d95c2428             fstp dword ptr [esp + 0x28]
// 005b4161  d94004               fld dword ptr [eax + 4]
// 005b4164  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005b416a  d95c242c             fstp dword ptr [esp + 0x2c]
// 005b416e  d94008               fld dword ptr [eax + 8]
// 005b4171  d95c2430             fstp dword ptr [esp + 0x30]
// 005b4175  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 005b4178  7602                 jbe 0x5b417c
// 005b417a  ffd5                 call ebp
// 005b417c  8b4328               mov eax, dword ptr [ebx + 0x28]
// 005b417f  8b7b18               mov edi, dword ptr [ebx + 0x18]
// 005b4182  8944241c             mov dword ptr [esp + 0x1c], eax
// 005b4186  394324               cmp dword ptr [ebx + 0x24], eax
// 005b4189  7602                 jbe 0x5b418d
// 005b418b  ffd5                 call ebp
// 005b418d  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 005b4190  894c2420             mov dword ptr [esp + 0x20], ecx
// 005b4194  85ff                 test edi, edi
// 005b4196  7406                 je 0x5b419e
// 005b4198  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 005b419c  7402                 je 0x5b41a0
// 005b419e  ffd5                 call ebp
// 005b41a0  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 005b41a4  0f841a010000         je 0x5b42c4
// 005b41aa  85ff                 test edi, edi
// 005b41ac  0f85bb000000         jne 0x5b426d
// 005b41b2  ffd5                 call ebp
// 005b41b4  33c0                 xor eax, eax
// 005b41b6  3b7010               cmp esi, dword ptr [eax + 0x10]
// 005b41b9  7202                 jb 0x5b41bd
// 005b41bb  ffd5                 call ebp
// 005b41bd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005b41c1  3916                 cmp dword ptr [esi], edx
// 005b41c3  0f84cf000000         je 0x5b4298
// 005b41c9  85ff                 test edi, edi
// 005b41cb  0f85a3000000         jne 0x5b4274
// 005b41d1  ffd5                 call ebp
// 005b41d3  33c0                 xor eax, eax
// 005b41d5  3b7010               cmp esi, dword ptr [eax + 0x10]
// 005b41d8  7202                 jb 0x5b41dc
// 005b41da  ffd5                 call ebp
// 005b41dc  56                   push esi
// 005b41dd  8d4b50               lea ecx, [ebx + 0x50]
// 005b41e0  e82bfdffff           call 0x5b3f10
// 005b41e5  d900                 fld dword ptr [eax]
// 005b41e7  d94004               fld dword ptr [eax + 4]
// 005b41ea  d94008               fld dword ptr [eax + 8]
// 005b41ed  d9442428             fld dword ptr [esp + 0x28]
// 005b41f1  dee3                 fsubrp st(3)
// 005b41f3  d9ca                 fxch st(2)
// 005b41f5  d9e1                 fabs 
// 005b41f7  d944242c             fld dword ptr [esp + 0x2c]
// 005b41fb  dee2                 fsubrp st(2)
// 005b41fd  d9c9                 fxch st(1)
// 005b41ff  d9e1                 fabs 
// 005b4201  dec1                 faddp st(1)
// 005b4203  d9442430             fld dword ptr [esp + 0x30]
// 005b4207  dee2                 fsubrp st(2)
// 005b4209  d9c9                 fxch st(1)
// 005b420b  d9e1                 fabs 
// 005b420d  dec1                 faddp st(1)
// 005b420f  d9542414             fst dword ptr [esp + 0x14]
// 005b4213  d9442418             fld dword ptr [esp + 0x18]
// 005b4217  d8d9                 fcomp st(1)
// 005b4219  dfe0                 fnstsw ax
// 005b421b  f6c441               test ah, 0x41
// 005b421e  755b                 jne 0x5b427b
// 005b4220  8b6b24               mov ebp, dword ptr [ebx + 0x24]
// 005b4223  3b6b28               cmp ebp, dword ptr [ebx + 0x28]
// 005b4226  760c                 jbe 0x5b4234
// 005b4228  ddd8                 fstp st(0)
// 005b422a  ff1590288000         call dword ptr [0x802890]
// 005b4230  d9442414             fld dword ptr [esp + 0x14]
// 005b4234  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005b4237  85ff                 test edi, edi
// 005b4239  7404                 je 0x5b423f
// 005b423b  3bf8                 cmp edi, eax
// 005b423d  740c                 je 0x5b424b
// 005b423f  ddd8                 fstp st(0)
// 005b4241  ff1590288000         call dword ptr [0x802890]
// 005b4247  d9442414             fld dword ptr [esp + 0x14]
// 005b424b  d9ee                 fldz 
// 005b424d  8bc6                 mov eax, esi
// 005b424f  2bc5                 sub eax, ebp
// 005b4251  dde9                 fucomp st(1)
// 005b4253  c1f802               sar eax, 2
// 005b4256  89442410             mov dword ptr [esp + 0x10], eax
// 005b425a  dfe0                 fnstsw ax
// 005b425c  f6c444               test ah, 0x44
// 005b425f  7b61                 jnp 0x5b42c2
// 005b4261  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005b4267  d95c2418             fstp dword ptr [esp + 0x18]
// 005b426b  eb10                 jmp 0x5b427d
// 005b426d  8b07                 mov eax, dword ptr [edi]
// 005b426f  e942ffffff           jmp 0x5b41b6
// 005b4274  8b07                 mov eax, dword ptr [edi]
// 005b4276  e95affffff           jmp 0x5b41d5
// 005b427b  ddd8                 fstp st(0)
// 005b427d  85ff                 test edi, edi
// 005b427f  7513                 jne 0x5b4294
// 005b4281  ffd5                 call ebp
// 005b4283  33c0                 xor eax, eax
// 005b4285  3b7010               cmp esi, dword ptr [eax + 0x10]
// 005b4288  7202                 jb 0x5b428c
// 005b428a  ffd5                 call ebp
// 005b428c  83c604               add esi, 4
// 005b428f  e900ffffff           jmp 0x5b4194
// 005b4294  8b07                 mov eax, dword ptr [edi]
// 005b4296  ebed                 jmp 0x5b4285
// 005b4298  8b6b24               mov ebp, dword ptr [ebx + 0x24]
// 005b429b  3b6b28               cmp ebp, dword ptr [ebx + 0x28]
// 005b429e  7606                 jbe 0x5b42a6
// 005b42a0  ff1590288000         call dword ptr [0x802890]
// 005b42a6  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005b42a9  85ff                 test edi, edi
// 005b42ab  7404                 je 0x5b42b1
// 005b42ad  3bf8                 cmp edi, eax
// 005b42af  7406                 je 0x5b42b7
// 005b42b1  ff1590288000         call dword ptr [0x802890]
// 005b42b7  2bf5                 sub esi, ebp
// 005b42b9  c1fe02               sar esi, 2
// 005b42bc  89742410             mov dword ptr [esp + 0x10], esi
// 005b42c0  eb02                 jmp 0x5b42c4
// 005b42c2  ddd8                 fstp st(0)
// 005b42c4  8d44243c             lea eax, [esp + 0x3c]
// 005b42c8  50                   push eax
// 005b42c9  8d8b90000000         lea ecx, [ebx + 0x90]
// 005b42cf  e8fc90ebff           call 0x46d3d0
// 005b42d4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b42d8  5f                   pop edi
// 005b42d9  5e                   pop esi
// 005b42da  5d                   pop ebp
// 005b42db  8908                 mov dword ptr [eax], ecx
// 005b42dd  5b                   pop ebx
// 005b42de  83c428               add esp, 0x28
// 005b42e1  c20400               ret 4
// library rbxgs-dll/v8datamodel\BrickColor.cpp (function ?generatePaletteMap@BrickMap@BrickColor@RBX@@AAEXW4Number@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/BrickColor.cpp
