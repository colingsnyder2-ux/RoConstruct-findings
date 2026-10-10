// from server: 100% by tester
// roc 2007-03 0047de20  unit: seg_00470000  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047de20
//
// 0047de20  6aff                 push -1
// 0047de22  68d17d7400           push 0x747dd1
// 0047de27  64a100000000         mov eax, dword ptr fs:[0]
// 0047de2d  50                   push eax
// 0047de2e  83ec0c               sub esp, 0xc
// 0047de31  53                   push ebx
// 0047de32  55                   push ebp
// 0047de33  56                   push esi
// 0047de34  57                   push edi
// 0047de35  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047de3a  33c4                 xor eax, esp
// 0047de3c  50                   push eax
// 0047de3d  8d442420             lea eax, [esp + 0x20]
// 0047de41  64a300000000         mov dword ptr fs:[0], eax
// 0047de47  8bf9                 mov edi, ecx
// 0047de49  897c2418             mov dword ptr [esp + 0x18], edi
// 0047de4d  8b7704               mov esi, dword ptr [edi + 4]
// 0047de50  8b442430             mov eax, dword ptr [esp + 0x30]
// 0047de54  3bc6                 cmp eax, esi
// 0047de56  89742414             mov dword ptr [esp + 0x14], esi
// 0047de5a  894704               mov dword ptr [edi + 4], eax
// 0047de5d  7d5b                 jge 0x47deba
// 0047de5f  8d2cc500000000       lea ebp, [eax*8]
// 0047de66  2be8                 sub ebp, eax
// 0047de68  03ed                 add ebp, ebp
// 0047de6a  03ed                 add ebp, ebp
// 0047de6c  8bde                 mov ebx, esi
// 0047de6e  03ed                 add ebp, ebp
// 0047de70  2bd8                 sub ebx, eax
// 0047de72  8b37                 mov esi, dword ptr [edi]
// 0047de74  03f5                 add esi, ebp
// 0047de76  8974241c             mov dword ptr [esp + 0x1c], esi
// 0047de7a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0047de7d  50                   push eax
// 0047de7e  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0047de86  e8f5540700           call 0x4f3380
// 0047de8b  33c0                 xor eax, eax
// 0047de8d  83c404               add esp, 4
// 0047de90  8d4e04               lea ecx, [esi + 4]
// 0047de93  89462c               mov dword ptr [esi + 0x2c], eax
// 0047de96  894630               mov dword ptr [esi + 0x30], eax
// 0047de99  894634               mov dword ptr [esi + 0x34], eax
// 0047de9c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0047dea4  ff158ce77700         call dword ptr [0x77e78c]
// 0047deaa  83c538               add ebp, 0x38
// 0047dead  83eb01               sub ebx, 1
// 0047deb0  75c0                 jne 0x47de72
// 0047deb2  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047deb6  8b442430             mov eax, dword ptr [esp + 0x30]
// 0047deba  f605807f8b0001       test byte ptr [0x8b7f80], 1
// 0047dec1  7514                 jne 0x47ded7
// 0047dec3  830d807f8b0001       or dword ptr [0x8b7f80], 1
// 0047deca  bb0a000000           mov ebx, 0xa
// 0047decf  891d7c7f8b00         mov dword ptr [0x8b7f7c], ebx
// 0047ded5  eb06                 jmp 0x47dedd
// 0047ded7  8b1d7c7f8b00         mov ebx, dword ptr [0x8b7f7c]
// 0047dedd  8b6f04               mov ebp, dword ptr [edi + 4]
// 0047dee0  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047dee3  3be9                 cmp ebp, ecx
// 0047dee5  7e7e                 jle 0x47df65
// 0047dee7  85c9                 test ecx, ecx
// 0047dee9  7508                 jne 0x47def3
// 0047deeb  894708               mov dword ptr [edi + 8], eax
// 0047deee  e995000000           jmp 0x47df88
// 0047def3  3beb                 cmp ebp, ebx
// 0047def5  7d08                 jge 0x47deff
// 0047def7  895f08               mov dword ptr [edi + 8], ebx
// 0047defa  e989000000           jmp 0x47df88
// 0047deff  d905104c7900         fld dword ptr [0x794c10]
// 0047df05  8d04cd00000000       lea eax, [ecx*8]
// 0047df0c  2bc1                 sub eax, ecx
// 0047df0e  d95c2434             fstp dword ptr [esp + 0x34]
// 0047df12  03c0                 add eax, eax
// 0047df14  03c0                 add eax, eax
// 0047df16  03c0                 add eax, eax
// 0047df18  3d801a0600           cmp eax, 0x61a80
// 0047df1d  7608                 jbe 0x47df27
// 0047df1f  d9050c4c7900         fld dword ptr [0x794c0c]
// 0047df25  eb0d                 jmp 0x47df34
// 0047df27  3d00fa0000           cmp eax, 0xfa00
// 0047df2c  760a                 jbe 0x47df38
// 0047df2e  d905084c7900         fld dword ptr [0x794c08]
// 0047df34  d95c2434             fstp dword ptr [esp + 0x34]
// 0047df38  8bf1                 mov esi, ecx
// 0047df3a  89742430             mov dword ptr [esp + 0x30], esi
// 0047df3e  db442430             fild dword ptr [esp + 0x30]
// 0047df42  d84c2434             fmul dword ptr [esp + 0x34]
// 0047df46  e8b5121a00           call 0x61f200
// 0047df4b  2bc6                 sub eax, esi
// 0047df4d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047df51  03c5                 add eax, ebp
// 0047df53  894708               mov dword ptr [edi + 8], eax
// 0047df56  8b0d7c7f8b00         mov ecx, dword ptr [0x8b7f7c]
// 0047df5c  3bc1                 cmp eax, ecx
// 0047df5e  7d28                 jge 0x47df88
// 0047df60  894f08               mov dword ptr [edi + 8], ecx
// 0047df63  eb23                 jmp 0x47df88
// 0047df65  b856555555           mov eax, 0x55555556
// 0047df6a  f7e9                 imul ecx
// 0047df6c  8bca                 mov ecx, edx
// 0047df6e  c1e91f               shr ecx, 0x1f
// 0047df71  03ca                 add ecx, edx
// 0047df73  3be9                 cmp ebp, ecx
// 0047df75  7f1d                 jg 0x47df94
// 0047df77  807c243400           cmp byte ptr [esp + 0x34], 0
// 0047df7c  7416                 je 0x47df94
// 0047df7e  3beb                 cmp ebp, ebx
// 0047df80  7e12                 jle 0x47df94
// 0047df82  3bee                 cmp ebp, esi
// 0047df84  7d02                 jge 0x47df88
// 0047df86  8bf5                 mov esi, ebp
// 0047df88  56                   push esi
// 0047df89  8bcf                 mov ecx, edi
// 0047df8b  e860f4ffff           call 0x47d3f0
// 0047df90  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047df94  3b7704               cmp esi, dword ptr [edi + 4]
// 0047df97  89742434             mov dword ptr [esp + 0x34], esi
// 0047df9b  7d49                 jge 0x47dfe6
// 0047df9d  8d4900               lea ecx, [ecx]
// 0047dfa0  8b07                 mov eax, dword ptr [edi]
// 0047dfa2  8d14f500000000       lea edx, [esi*8]
// 0047dfa9  2bd6                 sub edx, esi
// 0047dfab  8d2cd0               lea ebp, [eax + edx*8]
// 0047dfae  896c2430             mov dword ptr [esp + 0x30], ebp
// 0047dfb2  33db                 xor ebx, ebx
// 0047dfb4  3beb                 cmp ebp, ebx
// 0047dfb6  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0047dfbe  7412                 je 0x47dfd2
// 0047dfc0  8d4d04               lea ecx, [ebp + 4]
// 0047dfc3  ff1584e77700         call dword ptr [0x77e784]
// 0047dfc9  895d30               mov dword ptr [ebp + 0x30], ebx
// 0047dfcc  895d34               mov dword ptr [ebp + 0x34], ebx
// 0047dfcf  895d2c               mov dword ptr [ebp + 0x2c], ebx
// 0047dfd2  83c601               add esi, 1
// 0047dfd5  3b7704               cmp esi, dword ptr [edi + 4]
// 0047dfd8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0047dfe0  89742434             mov dword ptr [esp + 0x34], esi
// 0047dfe4  7cba                 jl 0x47dfa0
// 0047dfe6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047dfea  64890d00000000       mov dword ptr fs:[0], ecx
// 0047dff1  59                   pop ecx
// 0047dff2  5f                   pop edi
// 0047dff3  5e                   pop esi
// 0047dff4  5d                   pop ebp
// 0047dff5  5b                   pop ebx
// 0047dff6  83c418               add esp, 0x18
// 0047dff9  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
