// roc 2012-06 0098cfa0  unit: CXTPPaintManager  size: 873 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098cfa0
//
// 0098cfa0  83ec64               sub esp, 0x64
// 0098cfa3  53                   push ebx
// 0098cfa4  56                   push esi
// 0098cfa5  57                   push edi
// 0098cfa6  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 0098cfaa  8bf1                 mov esi, ecx
// 0098cfac  57                   push edi
// 0098cfad  8d4c2444             lea ecx, [esp + 0x44]
// 0098cfb1  e8ea810400           call 0x9d51a0
// 0098cfb6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0098cfba  2b442444             sub eax, dword ptr [esp + 0x44]
// 0098cfbe  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 0098cfc4  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0098cfc8  2b5c2440             sub ebx, dword ptr [esp + 0x40]
// 0098cfcc  89442414             mov dword ptr [esp + 0x14], eax
// 0098cfd0  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0098cfd6  8bb7fc000000         mov esi, dword ptr [edi + 0xfc]
// 0098cfdc  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098cfe0  33c0                 xor eax, eax
// 0098cfe2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0098cfe6  89742474             mov dword ptr [esp + 0x74], esi
// 0098cfea  85c9                 test ecx, ecx
// 0098cfec  0f8e09030000         jle 0x98d2fb
// 0098cff2  db44241c             fild dword ptr [esp + 0x1c]
// 0098cff6  55                   push ebp
// 0098cff7  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0098cffb  eb03                 jmp 0x98d000
// 0098cffd  8d4900               lea ecx, [ecx]
// 0098d000  40                   inc eax
// 0098d001  89442424             mov dword ptr [esp + 0x24], eax
// 0098d005  db442424             fild dword ptr [esp + 0x24]
// 0098d009  33ff                 xor edi, edi
// 0098d00b  897c2414             mov dword ptr [esp + 0x14], edi
// 0098d00f  897c2410             mov dword ptr [esp + 0x10], edi
// 0098d013  dc74243c             fdiv qword ptr [esp + 0x3c]
// 0098d017  dd5c2434             fstp qword ptr [esp + 0x34]
// 0098d01b  39bc2484000000       cmp dword ptr [esp + 0x84], edi
// 0098d022  0f8457010000         je 0x98d17f
// 0098d028  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0098d02b  33ed                 xor ebp, ebp
// 0098d02d  3bc7                 cmp eax, edi
// 0098d02f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0098d033  0f8eff000000         jle 0x98d138
// 0098d039  8da42400000000       lea esp, [esp]
// 0098d040  85ed                 test ebp, ebp
// 0098d042  7c15                 jl 0x98d059
// 0098d044  3be8                 cmp ebp, eax
// 0098d046  7d11                 jge 0x98d059
// 0098d048  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 0098d04b  0f8db3020000         jge 0x98d304
// 0098d051  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0098d054  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 0098d057  eb02                 jmp 0x98d05b
// 0098d059  33f6                 xor esi, esi
// 0098d05b  8b16                 mov edx, dword ptr [esi]
// 0098d05d  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0098d063  6a00                 push 0
// 0098d065  8bce                 mov ecx, esi
// 0098d067  ffd0                 call eax
// 0098d069  85c0                 test eax, eax
// 0098d06b  0f84a4000000         je 0x98d115
// 0098d071  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0098d077  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0098d07b  89442428             mov dword ptr [esp + 0x28], eax
// 0098d07f  3bc1                 cmp eax, ecx
// 0098d081  0f848a000000         je 0x98d111
// 0098d087  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 0098d08d  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 0098d093  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0098d099  89542454             mov dword ptr [esp + 0x54], edx
// 0098d09d  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0098d0a3  896c2458             mov dword ptr [esp + 0x58], ebp
// 0098d0a7  8944245c             mov dword ptr [esp + 0x5c], eax
// 0098d0ab  89542460             mov dword ptr [esp + 0x60], edx
// 0098d0af  85c9                 test ecx, ecx
// 0098d0b1  7406                 je 0x98d0b9
// 0098d0b3  dd442434             fld qword ptr [esp + 0x34]
// 0098d0b7  eb02                 jmp 0x98d0bb
// 0098d0b9  d9e8                 fld1 
// 0098d0bb  2bef                 sub ebp, edi
// 0098d0bd  896c2410             mov dword ptr [esp + 0x10], ebp
// 0098d0c1  da4c2410             fimul dword ptr [esp + 0x10]
// 0098d0c5  e8e664ffff           call 0x9835b0
// 0098d0ca  8bf0                 mov esi, eax
// 0098d0cc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0098d0d3  85c0                 test eax, eax
// 0098d0d5  7403                 je 0x98d0da
// 0098d0d7  8b4004               mov eax, dword ptr [eax + 4]
// 0098d0da  682000cc00           push 0xcc0020
// 0098d0df  55                   push ebp
// 0098d0e0  53                   push ebx
// 0098d0e1  57                   push edi
// 0098d0e2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0098d0e6  6a00                 push 0
// 0098d0e8  50                   push eax
// 0098d0e9  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0098d0f0  8b4804               mov ecx, dword ptr [eax + 4]
// 0098d0f3  56                   push esi
// 0098d0f4  53                   push ebx
// 0098d0f5  57                   push edi
// 0098d0f6  6a00                 push 0
// 0098d0f8  51                   push ecx
// 0098d0f9  ff15b420b200         call dword ptr [0xb220b4]
// 0098d0ff  8b442428             mov eax, dword ptr [esp + 0x28]
// 0098d103  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0098d107  03fe                 add edi, esi
// 0098d109  897c2414             mov dword ptr [esp + 0x14], edi
// 0098d10d  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0098d111  89442410             mov dword ptr [esp + 0x10], eax
// 0098d115  8b542478             mov edx, dword ptr [esp + 0x78]
// 0098d119  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0098d11c  45                   inc ebp
// 0098d11d  3be8                 cmp ebp, eax
// 0098d11f  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0098d123  8bf2                 mov esi, edx
// 0098d125  0f8c15ffffff         jl 0x98d040
// 0098d12b  837c241000           cmp dword ptr [esp + 0x10], 0
// 0098d130  7406                 je 0x98d138
// 0098d132  dd442434             fld qword ptr [esp + 0x34]
// 0098d136  eb02                 jmp 0x98d13a
// 0098d138  d9e8                 fld1 
// 0098d13a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0098d13e  2bef                 sub ebp, edi
// 0098d140  896c2410             mov dword ptr [esp + 0x10], ebp
// 0098d144  da4c2410             fimul dword ptr [esp + 0x10]
// 0098d148  e86364ffff           call 0x9835b0
// 0098d14d  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0098d154  85c9                 test ecx, ecx
// 0098d156  7403                 je 0x98d15b
// 0098d158  8b4904               mov ecx, dword ptr [ecx + 4]
// 0098d15b  682000cc00           push 0xcc0020
// 0098d160  55                   push ebp
// 0098d161  53                   push ebx
// 0098d162  57                   push edi
// 0098d163  6a00                 push 0
// 0098d165  51                   push ecx
// 0098d166  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0098d16d  8b5104               mov edx, dword ptr [ecx + 4]
// 0098d170  50                   push eax
// 0098d171  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098d175  53                   push ebx
// 0098d176  50                   push eax
// 0098d177  6a00                 push 0
// 0098d179  52                   push edx
// 0098d17a  e957010000           jmp 0x98d2d6
// 0098d17f  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0098d182  83ed01               sub ebp, 1
// 0098d185  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0098d189  0f88fe000000         js 0x98d28d
// 0098d18f  90                   nop 
// 0098d190  85ed                 test ebp, ebp
// 0098d192  7c0d                 jl 0x98d1a1
// 0098d194  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 0098d197  7d08                 jge 0x98d1a1
// 0098d199  8b4628               mov eax, dword ptr [esi + 0x28]
// 0098d19c  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0098d19f  eb02                 jmp 0x98d1a3
// 0098d1a1  33f6                 xor esi, esi
// 0098d1a3  8b16                 mov edx, dword ptr [esi]
// 0098d1a5  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0098d1ab  6a00                 push 0
// 0098d1ad  8bce                 mov ecx, esi
// 0098d1af  ffd0                 call eax
// 0098d1b1  85c0                 test eax, eax
// 0098d1b3  0f84b6000000         je 0x98d26f
// 0098d1b9  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0098d1bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0098d1c3  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098d1c7  3bc1                 cmp eax, ecx
// 0098d1c9  0f849c000000         je 0x98d26b
// 0098d1cf  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 0098d1d5  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0098d1db  89542464             mov dword ptr [esp + 0x64], edx
// 0098d1df  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0098d1e5  89442468             mov dword ptr [esp + 0x68], eax
// 0098d1e9  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0098d1ef  8b742418             mov esi, dword ptr [esp + 0x18]
// 0098d1f3  2bf0                 sub esi, eax
// 0098d1f5  8954246c             mov dword ptr [esp + 0x6c], edx
// 0098d1f9  85c9                 test ecx, ecx
// 0098d1fb  7406                 je 0x98d203
// 0098d1fd  dd442434             fld qword ptr [esp + 0x34]
// 0098d201  eb02                 jmp 0x98d205
// 0098d203  d9e8                 fld1 
// 0098d205  8bee                 mov ebp, esi
// 0098d207  2bef                 sub ebp, edi
// 0098d209  896c2428             mov dword ptr [esp + 0x28], ebp
// 0098d20d  da4c2428             fimul dword ptr [esp + 0x28]
// 0098d211  e89a63ffff           call 0x9835b0
// 0098d216  8bf8                 mov edi, eax
// 0098d218  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0098d21f  85c0                 test eax, eax
// 0098d221  7504                 jne 0x98d227
// 0098d223  33c9                 xor ecx, ecx
// 0098d225  eb03                 jmp 0x98d22a
// 0098d227  8b4804               mov ecx, dword ptr [eax + 4]
// 0098d22a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0098d22e  682000cc00           push 0xcc0020
// 0098d233  55                   push ebp
// 0098d234  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0098d238  53                   push ebx
// 0098d239  8bd0                 mov edx, eax
// 0098d23b  2bd6                 sub edx, esi
// 0098d23d  52                   push edx
// 0098d23e  6a00                 push 0
// 0098d240  51                   push ecx
// 0098d241  57                   push edi
// 0098d242  2bc7                 sub eax, edi
// 0098d244  53                   push ebx
// 0098d245  2bc5                 sub eax, ebp
// 0098d247  50                   push eax
// 0098d248  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0098d24f  8b4804               mov ecx, dword ptr [eax + 4]
// 0098d252  6a00                 push 0
// 0098d254  51                   push ecx
// 0098d255  ff15b420b200         call dword ptr [0xb220b4]
// 0098d25b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098d25f  03ef                 add ebp, edi
// 0098d261  896c2414             mov dword ptr [esp + 0x14], ebp
// 0098d265  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0098d269  8bfe                 mov edi, esi
// 0098d26b  89442410             mov dword ptr [esp + 0x10], eax
// 0098d26f  8b742478             mov esi, dword ptr [esp + 0x78]
// 0098d273  83ed01               sub ebp, 1
// 0098d276  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0098d27a  0f8910ffffff         jns 0x98d190
// 0098d280  837c241000           cmp dword ptr [esp + 0x10], 0
// 0098d285  7406                 je 0x98d28d
// 0098d287  dd442434             fld qword ptr [esp + 0x34]
// 0098d28b  eb02                 jmp 0x98d28f
// 0098d28d  d9e8                 fld1 
// 0098d28f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0098d293  2bef                 sub ebp, edi
// 0098d295  896c2410             mov dword ptr [esp + 0x10], ebp
// 0098d299  da4c2410             fimul dword ptr [esp + 0x10]
// 0098d29d  e80e63ffff           call 0x9835b0
// 0098d2a2  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0098d2a9  85c9                 test ecx, ecx
// 0098d2ab  7403                 je 0x98d2b0
// 0098d2ad  8b4904               mov ecx, dword ptr [ecx + 4]
// 0098d2b0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0098d2b4  682000cc00           push 0xcc0020
// 0098d2b9  55                   push ebp
// 0098d2ba  53                   push ebx
// 0098d2bb  6a00                 push 0
// 0098d2bd  6a00                 push 0
// 0098d2bf  51                   push ecx
// 0098d2c0  50                   push eax
// 0098d2c1  2bd0                 sub edx, eax
// 0098d2c3  2b542430             sub edx, dword ptr [esp + 0x30]
// 0098d2c7  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 0098d2ce  8b4804               mov ecx, dword ptr [eax + 4]
// 0098d2d1  53                   push ebx
// 0098d2d2  52                   push edx
// 0098d2d3  6a00                 push 0
// 0098d2d5  51                   push ecx
// 0098d2d6  ff15b420b200         call dword ptr [0xb220b4]
// 0098d2dc  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098d2e0  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0098d2e4  99                   cdq 
// 0098d2e5  f7ff                 idiv edi
// 0098d2e7  50                   push eax
// 0098d2e8  ff157c22b200         call dword ptr [0xb2227c]
// 0098d2ee  8b442424             mov eax, dword ptr [esp + 0x24]
// 0098d2f2  3bc7                 cmp eax, edi
// 0098d2f4  0f8c06fdffff         jl 0x98d000
// 0098d2fa  5d                   pop ebp
// 0098d2fb  5f                   pop edi
// 0098d2fc  5e                   pop esi
// 0098d2fd  5b                   pop ebx
// 0098d2fe  83c464               add esp, 0x64
// 0098d301  c21000               ret 0x10
// 0098d304  e8b750ffff           call 0x9823c0
// copied from an identical function in another client (function ?AnimateExpanding@CXTPPaintManager@@UAEXPAVCXTPCommandBar@@PAVCDC@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp