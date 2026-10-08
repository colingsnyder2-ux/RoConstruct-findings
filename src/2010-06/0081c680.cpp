// roc 2010-06 0081c680  unit: CXTPPropertyGridView  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081c680
//
// 0081c680  83ec14               sub esp, 0x14
// 0081c683  56                   push esi
// 0081c684  8bf1                 mov esi, ecx
// 0081c686  56                   push esi
// 0081c687  8d4c240c             lea ecx, [esp + 0xc]
// 0081c68b  e8202cfeff           call 0x7ff2b0
// 0081c690  8b4808               mov ecx, dword ptr [eax + 8]
// 0081c693  2b08                 sub ecx, dword ptr [eax]
// 0081c695  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0081c69c  894c2404             mov dword ptr [esp + 4], ecx
// 0081c6a0  db442404             fild dword ptr [esp + 4]
// 0081c6a4  7557                 jne 0x81c6fd
// 0081c6a6  db44241c             fild dword ptr [esp + 0x1c]
// 0081c6aa  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0081c6b0  d9e8                 fld1 
// 0081c6b2  d8d1                 fcom st(1)
// 0081c6b4  dfe0                 fnstsw ax
// 0081c6b6  f6c405               test ah, 5
// 0081c6b9  7a04                 jp 0x81c6bf
// 0081c6bb  ddd8                 fstp st(0)
// 0081c6bd  eb02                 jmp 0x81c6c1
// 0081c6bf  ddd9                 fstp st(1)
// 0081c6c1  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0081c6c7  d9ee                 fldz 
// 0081c6c9  ddea                 fucomp st(2)
// 0081c6cb  dfe0                 fnstsw ax
// 0081c6cd  f6c444               test ah, 0x44
// 0081c6d0  0f8b8e000000         jnp 0x81c764
// 0081c6d6  d8d1                 fcom st(1)
// 0081c6d8  dfe0                 fnstsw ax
// 0081c6da  f6c405               test ah, 5
// 0081c6dd  7a0f                 jp 0x81c6ee
// 0081c6df  ddd9                 fstp st(1)
// 0081c6e1  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0081c6e7  5e                   pop esi
// 0081c6e8  83c414               add esp, 0x14
// 0081c6eb  c20400               ret 4
// 0081c6ee  ddd8                 fstp st(0)
// 0081c6f0  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0081c6f6  5e                   pop esi
// 0081c6f7  83c414               add esp, 0x14
// 0081c6fa  c20400               ret 4
// 0081c6fd  d9ee                 fldz 
// 0081c6ff  dde9                 fucomp st(1)
// 0081c701  dfe0                 fnstsw ax
// 0081c703  f6c444               test ah, 0x44
// 0081c706  7a0a                 jp 0x81c712
// 0081c708  ddd8                 fstp st(0)
// 0081c70a  dd057850a100         fld qword ptr [0xa15078]
// 0081c710  eb04                 jmp 0x81c716
// 0081c712  da7c241c             fidivr dword ptr [esp + 0x1c]
// 0081c716  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0081c71c  dd053852a000         fld qword ptr [0xa05238]
// 0081c722  d8d1                 fcom st(1)
// 0081c724  dfe0                 fnstsw ax
// 0081c726  f6c405               test ah, 5
// 0081c729  7a04                 jp 0x81c72f
// 0081c72b  ddd8                 fstp st(0)
// 0081c72d  eb02                 jmp 0x81c731
// 0081c72f  ddd9                 fstp st(1)
// 0081c731  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0081c737  dd056035a600         fld qword ptr [0xa63560]
// 0081c73d  d8d1                 fcom st(1)
// 0081c73f  dfe0                 fnstsw ax
// 0081c741  f6c441               test ah, 0x41
// 0081c744  750f                 jne 0x81c755
// 0081c746  ddd8                 fstp st(0)
// 0081c748  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0081c74e  5e                   pop esi
// 0081c74f  83c414               add esp, 0x14
// 0081c752  c20400               ret 4
// 0081c755  ddd9                 fstp st(1)
// 0081c757  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0081c75d  5e                   pop esi
// 0081c75e  83c414               add esp, 0x14
// 0081c761  c20400               ret 4
// 0081c764  ddd8                 fstp st(0)
// 0081c766  5e                   pop esi
// 0081c767  ddd8                 fstp st(0)
// 0081c769  83c414               add esp, 0x14
// 0081c76c  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
