// roc 2009-12 0086ff10  unit: CXTPNewToolbarDlg  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ff10
//
// 0086ff10  83ec30               sub esp, 0x30
// 0086ff13  53                   push ebx
// 0086ff14  8b1d34cc9800         mov ebx, dword ptr [0x98cc34]
// 0086ff1a  55                   push ebp
// 0086ff1b  56                   push esi
// 0086ff1c  33ed                 xor ebp, ebp
// 0086ff1e  57                   push edi
// 0086ff1f  8b3d24cc9800         mov edi, dword ptr [0x98cc24]
// 0086ff25  8bf1                 mov esi, ecx
// 0086ff27  896c2414             mov dword ptr [esp + 0x14], ebp
// 0086ff2b  c744241005000000     mov dword ptr [esp + 0x10], 5
// 0086ff33  896c2418             mov dword ptr [esp + 0x18], ebp
// 0086ff37  ff1528cc9800         call dword ptr [0x98cc28]
// 0086ff3d  3b06                 cmp eax, dword ptr [esi]
// 0086ff3f  0f8583010000         jne 0x8700c8
// 0086ff45  55                   push ebp
// 0086ff46  6a0f                 push 0xf
// 0086ff48  6a0f                 push 0xf
// 0086ff4a  55                   push ebp
// 0086ff4b  8d442434             lea eax, [esp + 0x34]
// 0086ff4f  50                   push eax
// 0086ff50  ffd7                 call edi
// 0086ff52  85c0                 test eax, eax
// 0086ff54  7430                 je 0x86ff86
// 0086ff56  6a0f                 push 0xf
// 0086ff58  6a0f                 push 0xf
// 0086ff5a  55                   push ebp
// 0086ff5b  8d4c2430             lea ecx, [esp + 0x30]
// 0086ff5f  51                   push ecx
// 0086ff60  ff15b0ca9800         call dword ptr [0x98cab0]
// 0086ff66  85c0                 test eax, eax
// 0086ff68  741c                 je 0x86ff86
// 0086ff6a  8d542424             lea edx, [esp + 0x24]
// 0086ff6e  52                   push edx
// 0086ff6f  ff1594ca9800         call dword ptr [0x98ca94]
// 0086ff75  55                   push ebp
// 0086ff76  6a0f                 push 0xf
// 0086ff78  6a0f                 push 0xf
// 0086ff7a  55                   push ebp
// 0086ff7b  8d442434             lea eax, [esp + 0x34]
// 0086ff7f  50                   push eax
// 0086ff80  ffd7                 call edi
// 0086ff82  85c0                 test eax, eax
// 0086ff84  75d0                 jne 0x86ff56
// 0086ff86  55                   push ebp
// 0086ff87  55                   push ebp
// 0086ff88  55                   push ebp
// 0086ff89  8d4c2430             lea ecx, [esp + 0x30]
// 0086ff8d  51                   push ecx
// 0086ff8e  ff15b0ca9800         call dword ptr [0x98cab0]
// 0086ff94  85c0                 test eax, eax
// 0086ff96  0f84b6010000         je 0x870152
// 0086ff9c  ff1528cc9800         call dword ptr [0x98cc28]
// 0086ffa2  3b06                 cmp eax, dword ptr [esi]
// 0086ffa4  0f85b2010000         jne 0x87015c
// 0086ffaa  8b442428             mov eax, dword ptr [esp + 0x28]
// 0086ffae  3d00020000           cmp eax, 0x200
// 0086ffb3  0f877d010000         ja 0x870136
// 0086ffb9  7465                 je 0x870020
// 0086ffbb  2d00010000           sub eax, 0x100
// 0086ffc0  7430                 je 0x86fff2
// 0086ffc2  83e801               sub eax, 1
// 0086ffc5  0f8577010000         jne 0x870142
// 0086ffcb  837c242c11           cmp dword ptr [esp + 0x2c], 0x11
// 0086ffd0  0f8561ffffff         jne 0x86ff37
// 0086ffd6  396e08               cmp dword ptr [esi + 8], ebp
// 0086ffd9  0f8558ffffff         jne 0x86ff37
// 0086ffdf  8bce                 mov ecx, esi
// 0086ffe1  c7460801000000       mov dword ptr [esi + 8], 1
// 0086ffe8  e8e3f7ffff           call 0x86f7d0
// 0086ffed  e945ffffff           jmp 0x86ff37
// 0086fff2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0086fff6  83f81b               cmp eax, 0x1b
// 0086fff9  0f845d010000         je 0x87015c
// 0086ffff  83f811               cmp eax, 0x11
// 00870002  0f852fffffff         jne 0x86ff37
// 00870008  396e08               cmp dword ptr [esi + 8], ebp
// 0087000b  0f8426ffffff         je 0x86ff37
// 00870011  8bce                 mov ecx, esi
// 00870013  896e08               mov dword ptr [esi + 8], ebp
// 00870016  e8b5f7ffff           call 0x86f7d0
// 0087001b  e917ffffff           jmp 0x86ff37
// 00870020  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00870024  755d                 jne 0x870083
// 00870026  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087002a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087002e  89442420             mov dword ptr [esp + 0x20], eax
// 00870032  8b4604               mov eax, dword ptr [esi + 4]
// 00870035  8954241c             mov dword ptr [esp + 0x1c], edx
// 00870039  3bc5                 cmp eax, ebp
// 0087003b  743e                 je 0x87007b
// 0087003d  39a800010000         cmp dword ptr [eax + 0x100], ebp
// 00870043  7436                 je 0x87007b
// 00870045  c744241405000000     mov dword ptr [esp + 0x14], 5
// 0087004d  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 00870053  8b4220               mov eax, dword ptr [edx + 0x20]
// 00870056  8d4c241c             lea ecx, [esp + 0x1c]
// 0087005a  51                   push ecx
// 0087005b  50                   push eax
// 0087005c  ffd3                 call ebx
// 0087005e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00870061  8b11                 mov edx, dword ptr [ecx]
// 00870063  8b9210010000         mov edx, dword ptr [edx + 0x110]
// 00870069  8d442414             lea eax, [esp + 0x14]
// 0087006d  50                   push eax
// 0087006e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00870072  50                   push eax
// 00870073  8b442424             mov eax, dword ptr [esp + 0x24]
// 00870077  50                   push eax
// 00870078  51                   push ecx
// 00870079  ffd2                 call edx
// 0087007b  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00870083  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00870087  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087008b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0087008f  c1e803               shr eax, 3
// 00870092  f7d0                 not eax
// 00870094  83e001               and eax, 1
// 00870097  894608               mov dword ptr [esi + 8], eax
// 0087009a  83ec08               sub esp, 8
// 0087009d  8bc4                 mov eax, esp
// 0087009f  8908                 mov dword ptr [eax], ecx
// 008700a1  8bce                 mov ecx, esi
// 008700a3  895004               mov dword ptr [eax + 4], edx
// 008700a6  e815fdffff           call 0x86fdc0
// 008700ab  f644242c01           test byte ptr [esp + 0x2c], 1
// 008700b0  7508                 jne 0x8700ba
// 008700b2  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008700ba  896c2410             mov dword ptr [esp + 0x10], ebp
// 008700be  396c2418             cmp dword ptr [esp + 0x18], ebp
// 008700c2  0f846ffeffff         je 0x86ff37
// 008700c8  396e10               cmp dword ptr [esi + 0x10], ebp
// 008700cb  745d                 je 0x87012a
// 008700cd  33c0                 xor eax, eax
// 008700cf  396e08               cmp dword ptr [esi + 8], ebp
// 008700d2  8d4c241c             lea ecx, [esp + 0x1c]
// 008700d6  0f95c0               setne al
// 008700d9  51                   push ecx
// 008700da  40                   inc eax
// 008700db  89442414             mov dword ptr [esp + 0x14], eax
// 008700df  ff1538cc9800         call dword ptr [0x98cc38]
// 008700e5  8b4610               mov eax, dword ptr [esi + 0x10]
// 008700e8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008700eb  8d54241c             lea edx, [esp + 0x1c]
// 008700ef  52                   push edx
// 008700f0  51                   push ecx
// 008700f1  ffd3                 call ebx
// 008700f3  8b5610               mov edx, dword ptr [esi + 0x10]
// 008700f6  8b4220               mov eax, dword ptr [edx + 0x20]
// 008700f9  8d7e18               lea edi, [esi + 0x18]
// 008700fc  57                   push edi
// 008700fd  50                   push eax
// 008700fe  ffd3                 call ebx
// 00870100  8b4704               mov eax, dword ptr [edi + 4]
// 00870103  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00870106  8b11                 mov edx, dword ptr [ecx]
// 00870108  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 0087010e  50                   push eax
// 0087010f  8b07                 mov eax, dword ptr [edi]
// 00870111  50                   push eax
// 00870112  8b442428             mov eax, dword ptr [esp + 0x28]
// 00870116  50                   push eax
// 00870117  8b442428             mov eax, dword ptr [esp + 0x28]
// 0087011b  50                   push eax
// 0087011c  8d442420             lea eax, [esp + 0x20]
// 00870120  50                   push eax
// 00870121  8b4604               mov eax, dword ptr [esi + 4]
// 00870124  50                   push eax
// 00870125  ffd2                 call edx
// 00870127  896e10               mov dword ptr [esi + 0x10], ebp
// 0087012a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087012e  5f                   pop edi
// 0087012f  5e                   pop esi
// 00870130  5d                   pop ebp
// 00870131  5b                   pop ebx
// 00870132  83c430               add esp, 0x30
// 00870135  c3                   ret 
// 00870136  2d02020000           sub eax, 0x202
// 0087013b  748b                 je 0x8700c8
// 0087013d  83e802               sub eax, 2
// 00870140  741a                 je 0x87015c
// 00870142  8d4c2424             lea ecx, [esp + 0x24]
// 00870146  51                   push ecx
// 00870147  ff1594ca9800         call dword ptr [0x98ca94]
// 0087014d  e9e5fdffff           jmp 0x86ff37
// 00870152  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00870156  52                   push edx
// 00870157  e89e45f8ff           call 0x7f46fa
// 0087015c  5f                   pop edi
// 0087015d  5e                   pop esi
// 0087015e  5d                   pop ebp
// 0087015f  b805000000           mov eax, 5
// 00870164  5b                   pop ebx
// 00870165  83c430               add esp, 0x30
// 00870168  c3                   ret 
// copied from an identical function in another client (function ?_DoDragDrop@CXTPCustomizeDropSource@@AAEKXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp