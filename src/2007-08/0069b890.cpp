// roc 2007-08 0069b890  unit: CXTPPropertyGridView  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069b890
//
// 0069b890  83ec14               sub esp, 0x14
// 0069b893  56                   push esi
// 0069b894  8bf1                 mov esi, ecx
// 0069b896  56                   push esi
// 0069b897  8d4c240c             lea ecx, [esp + 0xc]
// 0069b89b  e80047feff           call 0x67ffa0
// 0069b8a0  8b4808               mov ecx, dword ptr [eax + 8]
// 0069b8a3  2b08                 sub ecx, dword ptr [eax]
// 0069b8a5  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 0069b8ac  894c2404             mov dword ptr [esp + 4], ecx
// 0069b8b0  db442404             fild dword ptr [esp + 4]
// 0069b8b4  7557                 jne 0x69b90d
// 0069b8b6  db44241c             fild dword ptr [esp + 0x1c]
// 0069b8ba  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0069b8c0  d9e8                 fld1 
// 0069b8c2  d8d1                 fcom st(1)
// 0069b8c4  dfe0                 fnstsw ax
// 0069b8c6  f6c405               test ah, 5
// 0069b8c9  7a04                 jp 0x69b8cf
// 0069b8cb  ddd8                 fstp st(0)
// 0069b8cd  eb02                 jmp 0x69b8d1
// 0069b8cf  ddd9                 fstp st(1)
// 0069b8d1  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0069b8d7  d9ee                 fldz 
// 0069b8d9  ddea                 fucomp st(2)
// 0069b8db  dfe0                 fnstsw ax
// 0069b8dd  f6c444               test ah, 0x44
// 0069b8e0  0f8b8e000000         jnp 0x69b974
// 0069b8e6  d8d1                 fcom st(1)
// 0069b8e8  dfe0                 fnstsw ax
// 0069b8ea  f6c405               test ah, 5
// 0069b8ed  7a0f                 jp 0x69b8fe
// 0069b8ef  ddd9                 fstp st(1)
// 0069b8f1  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0069b8f7  5e                   pop esi
// 0069b8f8  83c414               add esp, 0x14
// 0069b8fb  c20400               ret 4
// 0069b8fe  ddd8                 fstp st(0)
// 0069b900  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0069b906  5e                   pop esi
// 0069b907  83c414               add esp, 0x14
// 0069b90a  c20400               ret 4
// 0069b90d  d9ee                 fldz 
// 0069b90f  dde9                 fucomp st(1)
// 0069b911  dfe0                 fnstsw ax
// 0069b913  f6c444               test ah, 0x44
// 0069b916  7a0a                 jp 0x69b922
// 0069b918  ddd8                 fstp st(0)
// 0069b91a  dd05485b7900         fld qword ptr [0x795b48]
// 0069b920  eb04                 jmp 0x69b926
// 0069b922  da7c241c             fidivr dword ptr [esp + 0x1c]
// 0069b926  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0069b92c  dd0528b17800         fld qword ptr [0x78b128]
// 0069b932  d8d1                 fcom st(1)
// 0069b934  dfe0                 fnstsw ax
// 0069b936  f6c405               test ah, 5
// 0069b939  7a04                 jp 0x69b93f
// 0069b93b  ddd8                 fstp st(0)
// 0069b93d  eb02                 jmp 0x69b941
// 0069b93f  ddd9                 fstp st(1)
// 0069b941  dd96c8000000         fst qword ptr [esi + 0xc8]
// 0069b947  dd05f81e7d00         fld qword ptr [0x7d1ef8]
// 0069b94d  d8d1                 fcom st(1)
// 0069b94f  dfe0                 fnstsw ax
// 0069b951  f6c441               test ah, 0x41
// 0069b954  750f                 jne 0x69b965
// 0069b956  ddd8                 fstp st(0)
// 0069b958  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0069b95e  5e                   pop esi
// 0069b95f  83c414               add esp, 0x14
// 0069b962  c20400               ret 4
// 0069b965  ddd9                 fstp st(1)
// 0069b967  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 0069b96d  5e                   pop esi
// 0069b96e  83c414               add esp, 0x14
// 0069b971  c20400               ret 4
// 0069b974  ddd8                 fstp st(0)
// 0069b976  5e                   pop esi
// 0069b977  ddd8                 fstp st(0)
// 0069b979  83c414               add esp, 0x14
// 0069b97c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
