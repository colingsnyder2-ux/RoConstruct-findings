// roc 2011-06 007ddfd0  unit: seg_007d0000  size: 668 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ddfd0
//
// 007ddfd0  83ec10               sub esp, 0x10
// 007ddfd3  53                   push ebx
// 007ddfd4  55                   push ebp
// 007ddfd5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007ddfd9  56                   push esi
// 007ddfda  57                   push edi
// 007ddfdb  8bf0                 mov esi, eax
// 007ddfdd  e83efeffff           call 0x7dde20
// 007ddfe2  8bf8                 mov edi, eax
// 007ddfe4  8d4701               lea eax, [edi + 1]
// 007ddfe7  3dffffff0f           cmp eax, 0xfffffff
// 007ddfec  7717                 ja 0x7de005
// 007ddfee  8b16                 mov edx, dword ptr [esi]
// 007ddff0  8bcf                 mov ecx, edi
// 007ddff2  c1e104               shl ecx, 4
// 007ddff5  51                   push ecx
// 007ddff6  6a00                 push 0
// 007ddff8  6a00                 push 0
// 007ddffa  52                   push edx
// 007ddffb  e840ceffff           call 0x7dae40
// 007de000  83c410               add esp, 0x10
// 007de003  eb0b                 jmp 0x7de010
// 007de005  8b06                 mov eax, dword ptr [esi]
// 007de007  50                   push eax
// 007de008  e813ceffff           call 0x7dae20
// 007de00d  83c404               add esp, 4
// 007de010  33db                 xor ebx, ebx
// 007de012  3bfb                 cmp edi, ebx
// 007de014  894508               mov dword ptr [ebp + 8], eax
// 007de017  897d28               mov dword ptr [ebp + 0x28], edi
// 007de01a  0f8e58010000         jle 0x7de178
// 007de020  33c0                 xor eax, eax
// 007de022  8bcf                 mov ecx, edi
// 007de024  8b5508               mov edx, dword ptr [ebp + 8]
// 007de027  895c1008             mov dword ptr [eax + edx + 8], ebx
// 007de02b  83c010               add eax, 0x10
// 007de02e  83e901               sub ecx, 1
// 007de031  75f1                 jne 0x7de024
// 007de033  3bfb                 cmp edi, ebx
// 007de035  0f8e3d010000         jle 0x7de178
// 007de03b  897c2414             mov dword ptr [esp + 0x14], edi
// 007de03f  90                   nop 
// 007de040  8b4e04               mov ecx, dword ptr [esi + 4]
// 007de043  8b7d08               mov edi, dword ptr [ebp + 8]
// 007de046  6a01                 push 1
// 007de048  8d442428             lea eax, [esp + 0x28]
// 007de04c  50                   push eax
// 007de04d  51                   push ecx
// 007de04e  03fb                 add edi, ebx
// 007de050  e8dbc7ffff           call 0x7da830
// 007de055  83c40c               add esp, 0xc
// 007de058  85c0                 test eax, eax
// 007de05a  7423                 je 0x7de07f
// 007de05c  8b560c               mov edx, dword ptr [esi + 0xc]
// 007de05f  8b06                 mov eax, dword ptr [esi]
// 007de061  68b4e3ab00           push 0xabe3b4
// 007de066  52                   push edx
// 007de067  6898e3ab00           push 0xabe398
// 007de06c  50                   push eax
// 007de06d  e8aeedf9ff           call 0x77ce20
// 007de072  8b0e                 mov ecx, dword ptr [esi]
// 007de074  6a03                 push 3
// 007de076  51                   push ecx
// 007de077  e87407faff           call 0x77e7f0
// 007de07c  83c418               add esp, 0x18
// 007de07f  0fbe442424           movsx eax, byte ptr [esp + 0x24]
// 007de084  83f804               cmp eax, 4
// 007de087  0f87ba000000         ja 0x7de147
// 007de08d  ff248558e27d00       jmp dword ptr [eax*4 + 0x7de258]
// 007de094  c7470800000000       mov dword ptr [edi + 8], 0
// 007de09b  e9ca000000           jmp 0x7de16a
// 007de0a0  8b4604               mov eax, dword ptr [esi + 4]
// 007de0a3  6a01                 push 1
// 007de0a5  8d542417             lea edx, [esp + 0x17]
// 007de0a9  52                   push edx
// 007de0aa  50                   push eax
// 007de0ab  e880c7ffff           call 0x7da830
// 007de0b0  83c40c               add esp, 0xc
// 007de0b3  85c0                 test eax, eax
// 007de0b5  7423                 je 0x7de0da
// 007de0b7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007de0ba  8b16                 mov edx, dword ptr [esi]
// 007de0bc  68b4e3ab00           push 0xabe3b4
// 007de0c1  51                   push ecx
// 007de0c2  6898e3ab00           push 0xabe398
// 007de0c7  52                   push edx
// 007de0c8  e853edf9ff           call 0x77ce20
// 007de0cd  8b06                 mov eax, dword ptr [esi]
// 007de0cf  6a03                 push 3
// 007de0d1  50                   push eax
// 007de0d2  e81907faff           call 0x77e7f0
// 007de0d7  83c418               add esp, 0x18
// 007de0da  33c9                 xor ecx, ecx
// 007de0dc  384c2413             cmp byte ptr [esp + 0x13], cl
// 007de0e0  c7470801000000       mov dword ptr [edi + 8], 1
// 007de0e7  0f95c1               setne cl
// 007de0ea  890f                 mov dword ptr [edi], ecx
// 007de0ec  eb7c                 jmp 0x7de16a
// 007de0ee  8b4604               mov eax, dword ptr [esi + 4]
// 007de0f1  6a08                 push 8
// 007de0f3  8d54241c             lea edx, [esp + 0x1c]
// 007de0f7  52                   push edx
// 007de0f8  50                   push eax
// 007de0f9  e832c7ffff           call 0x7da830
// 007de0fe  83c40c               add esp, 0xc
// 007de101  85c0                 test eax, eax
// 007de103  7423                 je 0x7de128
// 007de105  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007de108  8b16                 mov edx, dword ptr [esi]
// 007de10a  68b4e3ab00           push 0xabe3b4
// 007de10f  51                   push ecx
// 007de110  6898e3ab00           push 0xabe398
// 007de115  52                   push edx
// 007de116  e805edf9ff           call 0x77ce20
// 007de11b  8b06                 mov eax, dword ptr [esi]
// 007de11d  6a03                 push 3
// 007de11f  50                   push eax
// 007de120  e8cb06faff           call 0x77e7f0
// 007de125  83c418               add esp, 0x18
// 007de128  dd442418             fld qword ptr [esp + 0x18]
// 007de12c  c7470803000000       mov dword ptr [edi + 8], 3
// 007de133  dd1f                 fstp qword ptr [edi]
// 007de135  eb33                 jmp 0x7de16a
// 007de137  e854fdffff           call 0x7dde90
// 007de13c  8907                 mov dword ptr [edi], eax
// 007de13e  c7470804000000       mov dword ptr [edi + 8], 4
// 007de145  eb23                 jmp 0x7de16a
// 007de147  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007de14a  8b16                 mov edx, dword ptr [esi]
// 007de14c  68d0e3ab00           push 0xabe3d0
// 007de151  51                   push ecx
// 007de152  6898e3ab00           push 0xabe398
// 007de157  52                   push edx
// 007de158  e8c3ecf9ff           call 0x77ce20
// 007de15d  8b06                 mov eax, dword ptr [esi]
// 007de15f  6a03                 push 3
// 007de161  50                   push eax
// 007de162  e88906faff           call 0x77e7f0
// 007de167  83c418               add esp, 0x18
// 007de16a  83c310               add ebx, 0x10
// 007de16d  836c241401           sub dword ptr [esp + 0x14], 1
// 007de172  0f85c8feffff         jne 0x7de040
// 007de178  8b5604               mov edx, dword ptr [esi + 4]
// 007de17b  6a04                 push 4
// 007de17d  8d4c2428             lea ecx, [esp + 0x28]
// 007de181  51                   push ecx
// 007de182  52                   push edx
// 007de183  e8a8c6ffff           call 0x7da830
// 007de188  83c40c               add esp, 0xc
// 007de18b  85c0                 test eax, eax
// 007de18d  7423                 je 0x7de1b2
// 007de18f  8b460c               mov eax, dword ptr [esi + 0xc]
// 007de192  8b0e                 mov ecx, dword ptr [esi]
// 007de194  68b4e3ab00           push 0xabe3b4
// 007de199  50                   push eax
// 007de19a  6898e3ab00           push 0xabe398
// 007de19f  51                   push ecx
// 007de1a0  e87becf9ff           call 0x77ce20
// 007de1a5  8b16                 mov edx, dword ptr [esi]
// 007de1a7  6a03                 push 3
// 007de1a9  52                   push edx
// 007de1aa  e84106faff           call 0x77e7f0
// 007de1af  83c418               add esp, 0x18
// 007de1b2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007de1b6  85ff                 test edi, edi
// 007de1b8  7d27                 jge 0x7de1e1
// 007de1ba  8b460c               mov eax, dword ptr [esi + 0xc]
// 007de1bd  8b0e                 mov ecx, dword ptr [esi]
// 007de1bf  68c4e3ab00           push 0xabe3c4
// 007de1c4  50                   push eax
// 007de1c5  6898e3ab00           push 0xabe398
// 007de1ca  51                   push ecx
// 007de1cb  e850ecf9ff           call 0x77ce20
// 007de1d0  8b16                 mov edx, dword ptr [esi]
// 007de1d2  6a03                 push 3
// 007de1d4  52                   push edx
// 007de1d5  e81606faff           call 0x77e7f0
// 007de1da  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007de1de  83c418               add esp, 0x18
// 007de1e1  8d4701               lea eax, [edi + 1]
// 007de1e4  3dffffff3f           cmp eax, 0x3fffffff
// 007de1e9  7719                 ja 0x7de204
// 007de1eb  8b16                 mov edx, dword ptr [esi]
// 007de1ed  8d0cbd00000000       lea ecx, [edi*4]
// 007de1f4  51                   push ecx
// 007de1f5  6a00                 push 0
// 007de1f7  6a00                 push 0
// 007de1f9  52                   push edx
// 007de1fa  e841ccffff           call 0x7dae40
// 007de1ff  83c410               add esp, 0x10
// 007de202  eb0b                 jmp 0x7de20f
// 007de204  8b06                 mov eax, dword ptr [esi]
// 007de206  50                   push eax
// 007de207  e814ccffff           call 0x7dae20
// 007de20c  83c404               add esp, 4
// 007de20f  894510               mov dword ptr [ebp + 0x10], eax
// 007de212  33c0                 xor eax, eax
// 007de214  897d34               mov dword ptr [ebp + 0x34], edi
// 007de217  85ff                 test edi, edi
// 007de219  7e14                 jle 0x7de22f
// 007de21b  eb03                 jmp 0x7de220
// 007de21d  8d4900               lea ecx, [ecx]
// 007de220  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 007de223  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 007de22a  40                   inc eax
// 007de22b  3bc7                 cmp eax, edi
// 007de22d  7cf1                 jl 0x7de220
// 007de22f  33db                 xor ebx, ebx
// 007de231  85ff                 test edi, edi
// 007de233  7e18                 jle 0x7de24d
// 007de235  8b5520               mov edx, dword ptr [ebp + 0x20]
// 007de238  52                   push edx
// 007de239  56                   push esi
// 007de23a  e8f1020000           call 0x7de530
// 007de23f  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 007de242  890499               mov dword ptr [ecx + ebx*4], eax
// 007de245  43                   inc ebx
// 007de246  83c408               add esp, 8
// 007de249  3bdf                 cmp ebx, edi
// 007de24b  7ce8                 jl 0x7de235
// 007de24d  5f                   pop edi
// 007de24e  5e                   pop esi
// 007de24f  5d                   pop ebp
// 007de250  5b                   pop ebx
// 007de251  83c410               add esp, 0x10
// 007de254  c3                   ret 
// 007de255  8d4900               lea ecx, [ecx]
// 007de258  94                   xchg esp, eax
// 007de259  e07d                 loopne 0x7de2d8
// 007de25b  00a0e07d0047         add byte ptr [eax + 0x47007de0], ah
// 007de261  e17d                 loope 0x7de2e0
// 007de263  00ee                 add dh, ch
// 007de265  e07d                 loopne 0x7de2e4
// 007de267  0037                 add byte ptr [edi], dh
// 007de269  e17d                 loope 0x7de2e8
// library lua-5.1.4/lundump.c (function _LoadConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
