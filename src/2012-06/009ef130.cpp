// roc 2012-06 009ef130  unit: CXTPPropertyGridView  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ef130
//
// 009ef130  83ec14               sub esp, 0x14
// 009ef133  56                   push esi
// 009ef134  8bf1                 mov esi, ecx
// 009ef136  56                   push esi
// 009ef137  8d4c240c             lea ecx, [esp + 0xc]
// 009ef13b  e80060feff           call 0x9d5140
// 009ef140  8b4808               mov ecx, dword ptr [eax + 8]
// 009ef143  2b08                 sub ecx, dword ptr [eax]
// 009ef145  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 009ef14c  894c2404             mov dword ptr [esp + 4], ecx
// 009ef150  db442404             fild dword ptr [esp + 4]
// 009ef154  7557                 jne 0x9ef1ad
// 009ef156  db44241c             fild dword ptr [esp + 0x1c]
// 009ef15a  dd96c8000000         fst qword ptr [esi + 0xc8]
// 009ef160  d9e8                 fld1 
// 009ef162  d8d1                 fcom st(1)
// 009ef164  dfe0                 fnstsw ax
// 009ef166  f6c405               test ah, 5
// 009ef169  7a04                 jp 0x9ef16f
// 009ef16b  ddd8                 fstp st(0)
// 009ef16d  eb02                 jmp 0x9ef171
// 009ef16f  ddd9                 fstp st(1)
// 009ef171  dd96c8000000         fst qword ptr [esi + 0xc8]
// 009ef177  d9ee                 fldz 
// 009ef179  ddea                 fucomp st(2)
// 009ef17b  dfe0                 fnstsw ax
// 009ef17d  f6c444               test ah, 0x44
// 009ef180  0f8b8e000000         jnp 0x9ef214
// 009ef186  d8d1                 fcom st(1)
// 009ef188  dfe0                 fnstsw ax
// 009ef18a  f6c405               test ah, 5
// 009ef18d  7a0f                 jp 0x9ef19e
// 009ef18f  ddd9                 fstp st(1)
// 009ef191  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 009ef197  5e                   pop esi
// 009ef198  83c414               add esp, 0x14
// 009ef19b  c20400               ret 4
// 009ef19e  ddd8                 fstp st(0)
// 009ef1a0  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 009ef1a6  5e                   pop esi
// 009ef1a7  83c414               add esp, 0x14
// 009ef1aa  c20400               ret 4
// 009ef1ad  d9ee                 fldz 
// 009ef1af  dde9                 fucomp st(1)
// 009ef1b1  dfe0                 fnstsw ax
// 009ef1b3  f6c444               test ah, 0x44
// 009ef1b6  7a0a                 jp 0x9ef1c2
// 009ef1b8  ddd8                 fstp st(0)
// 009ef1ba  dd0500a2b600         fld qword ptr [0xb6a200]
// 009ef1c0  eb04                 jmp 0x9ef1c6
// 009ef1c2  da7c241c             fidivr dword ptr [esp + 0x1c]
// 009ef1c6  dd96c8000000         fst qword ptr [esi + 0xc8]
// 009ef1cc  dd0568fdb400         fld qword ptr [0xb4fd68]
// 009ef1d2  d8d1                 fcom st(1)
// 009ef1d4  dfe0                 fnstsw ax
// 009ef1d6  f6c405               test ah, 5
// 009ef1d9  7a04                 jp 0x9ef1df
// 009ef1db  ddd8                 fstp st(0)
// 009ef1dd  eb02                 jmp 0x9ef1e1
// 009ef1df  ddd9                 fstp st(1)
// 009ef1e1  dd96c8000000         fst qword ptr [esi + 0xc8]
// 009ef1e7  dd059090c100         fld qword ptr [0xc19090]
// 009ef1ed  d8d1                 fcom st(1)
// 009ef1ef  dfe0                 fnstsw ax
// 009ef1f1  f6c441               test ah, 0x41
// 009ef1f4  750f                 jne 0x9ef205
// 009ef1f6  ddd8                 fstp st(0)
// 009ef1f8  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 009ef1fe  5e                   pop esi
// 009ef1ff  83c414               add esp, 0x14
// 009ef202  c20400               ret 4
// 009ef205  ddd9                 fstp st(1)
// 009ef207  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 009ef20d  5e                   pop esi
// 009ef20e  83c414               add esp, 0x14
// 009ef211  c20400               ret 4
// 009ef214  ddd8                 fstp st(0)
// 009ef216  5e                   pop esi
// 009ef217  ddd8                 fstp st(0)
// 009ef219  83c414               add esp, 0x14
// 009ef21c  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
