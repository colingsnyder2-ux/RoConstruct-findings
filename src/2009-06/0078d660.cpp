// roc 2009-06 0078d660  unit: CXTPPropertyGridView  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078d660
//
// 0078d660  83ec14               sub esp, 0x14
// 0078d663  56                   push esi
// 0078d664  8bf1                 mov esi, ecx
// 0078d666  56                   push esi
// 0078d667  8d4c240c             lea ecx, [esp + 0xc]
// 0078d66b  e8002efeff           call 0x770470
// 0078d670  8b4808               mov ecx, dword ptr [eax + 8]
// 0078d673  2b08                 sub ecx, dword ptr [eax]
// 0078d675  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0078d67c  894c2404             mov dword ptr [esp + 4], ecx
// 0078d680  db442404             fild dword ptr [esp + 4]
// 0078d684  7557                 jne 0x78d6dd
// 0078d686  db44241c             fild dword ptr [esp + 0x1c]
// 0078d68a  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0078d690  d9e8                 fld1 
// 0078d692  d8d1                 fcom st(1)
// 0078d694  dfe0                 fnstsw ax
// 0078d696  f6c405               test ah, 5
// 0078d699  7a04                 jp 0x78d69f
// 0078d69b  ddd8                 fstp st(0)
// 0078d69d  eb02                 jmp 0x78d6a1
// 0078d69f  ddd9                 fstp st(1)
// 0078d6a1  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0078d6a7  d9ee                 fldz 
// 0078d6a9  ddea                 fucomp st(2)
// 0078d6ab  dfe0                 fnstsw ax
// 0078d6ad  f6c444               test ah, 0x44
// 0078d6b0  0f8b8e000000         jnp 0x78d744
// 0078d6b6  d8d1                 fcom st(1)
// 0078d6b8  dfe0                 fnstsw ax
// 0078d6ba  f6c405               test ah, 5
// 0078d6bd  7a0f                 jp 0x78d6ce
// 0078d6bf  ddd9                 fstp st(1)
// 0078d6c1  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0078d6c7  5e                   pop esi
// 0078d6c8  83c414               add esp, 0x14
// 0078d6cb  c20400               ret 4
// 0078d6ce  ddd8                 fstp st(0)
// 0078d6d0  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0078d6d6  5e                   pop esi
// 0078d6d7  83c414               add esp, 0x14
// 0078d6da  c20400               ret 4
// 0078d6dd  d9ee                 fldz 
// 0078d6df  dde9                 fucomp st(1)
// 0078d6e1  dfe0                 fnstsw ax
// 0078d6e3  f6c444               test ah, 0x44
// 0078d6e6  7a0a                 jp 0x78d6f2
// 0078d6e8  ddd8                 fstp st(0)
// 0078d6ea  dd05f8018c00         fld qword ptr [0x8c01f8]
// 0078d6f0  eb04                 jmp 0x78d6f6
// 0078d6f2  da7c241c             fidivr dword ptr [esp + 0x1c]
// 0078d6f6  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0078d6fc  dd05b8178b00         fld qword ptr [0x8b17b8]
// 0078d702  d8d1                 fcom st(1)
// 0078d704  dfe0                 fnstsw ax
// 0078d706  f6c405               test ah, 5
// 0078d709  7a04                 jp 0x78d70f
// 0078d70b  ddd8                 fstp st(0)
// 0078d70d  eb02                 jmp 0x78d711
// 0078d70f  ddd9                 fstp st(1)
// 0078d711  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0078d717  dd05e0ed8f00         fld qword ptr [0x8fede0]
// 0078d71d  d8d1                 fcom st(1)
// 0078d71f  dfe0                 fnstsw ax
// 0078d721  f6c441               test ah, 0x41
// 0078d724  750f                 jne 0x78d735
// 0078d726  ddd8                 fstp st(0)
// 0078d728  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0078d72e  5e                   pop esi
// 0078d72f  83c414               add esp, 0x14
// 0078d732  c20400               ret 4
// 0078d735  ddd9                 fstp st(1)
// 0078d737  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0078d73d  5e                   pop esi
// 0078d73e  83c414               add esp, 0x14
// 0078d741  c20400               ret 4
// 0078d744  ddd8                 fstp st(0)
// 0078d746  5e                   pop esi
// 0078d747  ddd8                 fstp st(0)
// 0078d749  83c414               add esp, 0x14
// 0078d74c  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
