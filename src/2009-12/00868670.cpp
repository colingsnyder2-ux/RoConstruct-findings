// roc 2009-12 00868670  unit: CXTPPropertyGridView  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868670
//
// 00868670  83ec14               sub esp, 0x14
// 00868673  56                   push esi
// 00868674  8bf1                 mov esi, ecx
// 00868676  56                   push esi
// 00868677  8d4c240c             lea ecx, [esp + 0xc]
// 0086867b  e8f02bfeff           call 0x84b270
// 00868680  8b4808               mov ecx, dword ptr [eax + 8]
// 00868683  2b08                 sub ecx, dword ptr [eax]
// 00868685  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0086868c  894c2404             mov dword ptr [esp + 4], ecx
// 00868690  db442404             fild dword ptr [esp + 4]
// 00868694  7557                 jne 0x8686ed
// 00868696  db44241c             fild dword ptr [esp + 0x1c]
// 0086869a  dd96c8000000         fst qword ptr [esi + 0xc8]
// 008686a0  d9e8                 fld1 
// 008686a2  d8d1                 fcom st(1)
// 008686a4  dfe0                 fnstsw ax
// 008686a6  f6c405               test ah, 5
// 008686a9  7a04                 jp 0x8686af
// 008686ab  ddd8                 fstp st(0)
// 008686ad  eb02                 jmp 0x8686b1
// 008686af  ddd9                 fstp st(1)
// 008686b1  dd96c8000000         fst qword ptr [esi + 0xc8]
// 008686b7  d9ee                 fldz 
// 008686b9  ddea                 fucomp st(2)
// 008686bb  dfe0                 fnstsw ax
// 008686bd  f6c444               test ah, 0x44
// 008686c0  0f8b8e000000         jnp 0x868754
// 008686c6  d8d1                 fcom st(1)
// 008686c8  dfe0                 fnstsw ax
// 008686ca  f6c405               test ah, 5
// 008686cd  7a0f                 jp 0x8686de
// 008686cf  ddd9                 fstp st(1)
// 008686d1  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 008686d7  5e                   pop esi
// 008686d8  83c414               add esp, 0x14
// 008686db  c20400               ret 4
// 008686de  ddd8                 fstp st(0)
// 008686e0  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 008686e6  5e                   pop esi
// 008686e7  83c414               add esp, 0x14
// 008686ea  c20400               ret 4
// 008686ed  d9ee                 fldz 
// 008686ef  dde9                 fucomp st(1)
// 008686f1  dfe0                 fnstsw ax
// 008686f3  f6c444               test ah, 0x44
// 008686f6  7a0a                 jp 0x868702
// 008686f8  ddd8                 fstp st(0)
// 008686fa  dd0510329b00         fld qword ptr [0x9b3210]
// 00868700  eb04                 jmp 0x868706
// 00868702  da7c241c             fidivr dword ptr [esp + 0x1c]
// 00868706  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0086870c  dd05c0449a00         fld qword ptr [0x9a44c0]
// 00868712  d8d1                 fcom st(1)
// 00868714  dfe0                 fnstsw ax
// 00868716  f6c405               test ah, 5
// 00868719  7a04                 jp 0x86871f
// 0086871b  ddd8                 fstp st(0)
// 0086871d  eb02                 jmp 0x868721
// 0086871f  ddd9                 fstp st(1)
// 00868721  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00868727  dd05d89f9b00         fld qword ptr [0x9b9fd8]
// 0086872d  d8d1                 fcom st(1)
// 0086872f  dfe0                 fnstsw ax
// 00868731  f6c441               test ah, 0x41
// 00868734  750f                 jne 0x868745
// 00868736  ddd8                 fstp st(0)
// 00868738  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0086873e  5e                   pop esi
// 0086873f  83c414               add esp, 0x14
// 00868742  c20400               ret 4
// 00868745  ddd9                 fstp st(1)
// 00868747  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0086874d  5e                   pop esi
// 0086874e  83c414               add esp, 0x14
// 00868751  c20400               ret 4
// 00868754  ddd8                 fstp st(0)
// 00868756  5e                   pop esi
// 00868757  ddd8                 fstp st(0)
// 00868759  83c414               add esp, 0x14
// 0086875c  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
