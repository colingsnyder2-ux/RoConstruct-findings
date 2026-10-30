// from server: 100% by auto
// roc 2008-06 00714ec0  unit: CXTPPropertyGridView  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714ec0
//
// 00714ec0  83ec14               sub esp, 0x14
// 00714ec3  56                   push esi
// 00714ec4  8bf1                 mov esi, ecx
// 00714ec6  56                   push esi
// 00714ec7  8d4c240c             lea ecx, [esp + 0xc]
// 00714ecb  e8002cfeff           call 0x6f7ad0
// 00714ed0  8b4808               mov ecx, dword ptr [eax + 8]
// 00714ed3  2b08                 sub ecx, dword ptr [eax]
// 00714ed5  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 00714edc  894c2404             mov dword ptr [esp + 4], ecx
// 00714ee0  db442404             fild dword ptr [esp + 4]
// 00714ee4  7557                 jne 0x714f3d
// 00714ee6  db44241c             fild dword ptr [esp + 0x1c]
// 00714eea  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00714ef0  d9e8                 fld1 
// 00714ef2  d8d1                 fcom st(1)
// 00714ef4  dfe0                 fnstsw ax
// 00714ef6  f6c405               test ah, 5
// 00714ef9  7a04                 jp 0x714eff
// 00714efb  ddd8                 fstp st(0)
// 00714efd  eb02                 jmp 0x714f01
// 00714eff  ddd9                 fstp st(1)
// 00714f01  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00714f07  d9ee                 fldz 
// 00714f09  ddea                 fucomp st(2)
// 00714f0b  dfe0                 fnstsw ax
// 00714f0d  f6c444               test ah, 0x44
// 00714f10  0f8b8e000000         jnp 0x714fa4
// 00714f16  d8d1                 fcom st(1)
// 00714f18  dfe0                 fnstsw ax
// 00714f1a  f6c405               test ah, 5
// 00714f1d  7a0f                 jp 0x714f2e
// 00714f1f  ddd9                 fstp st(1)
// 00714f21  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00714f27  5e                   pop esi
// 00714f28  83c414               add esp, 0x14
// 00714f2b  c20400               ret 4
// 00714f2e  ddd8                 fstp st(0)
// 00714f30  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00714f36  5e                   pop esi
// 00714f37  83c414               add esp, 0x14
// 00714f3a  c20400               ret 4
// 00714f3d  d9ee                 fldz 
// 00714f3f  dde9                 fucomp st(1)
// 00714f41  dfe0                 fnstsw ax
// 00714f43  f6c444               test ah, 0x44
// 00714f46  7a0a                 jp 0x714f52
// 00714f48  ddd8                 fstp st(0)
// 00714f4a  dd0538e78100         fld qword ptr [0x81e738]
// 00714f50  eb04                 jmp 0x714f56
// 00714f52  da7c241c             fidivr dword ptr [esp + 0x1c]
// 00714f56  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00714f5c  dd0530128100         fld qword ptr [0x811230]
// 00714f62  d8d1                 fcom st(1)
// 00714f64  dfe0                 fnstsw ax
// 00714f66  f6c405               test ah, 5
// 00714f69  7a04                 jp 0x714f6f
// 00714f6b  ddd8                 fstp st(0)
// 00714f6d  eb02                 jmp 0x714f71
// 00714f6f  ddd9                 fstp st(1)
// 00714f71  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00714f77  dd0500e88400         fld qword ptr [0x84e800]
// 00714f7d  d8d1                 fcom st(1)
// 00714f7f  dfe0                 fnstsw ax
// 00714f81  f6c441               test ah, 0x41
// 00714f84  750f                 jne 0x714f95
// 00714f86  ddd8                 fstp st(0)
// 00714f88  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00714f8e  5e                   pop esi
// 00714f8f  83c414               add esp, 0x14
// 00714f92  c20400               ret 4
// 00714f95  ddd9                 fstp st(1)
// 00714f97  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00714f9d  5e                   pop esi
// 00714f9e  83c414               add esp, 0x14
// 00714fa1  c20400               ret 4
// 00714fa4  ddd8                 fstp st(0)
// 00714fa6  5e                   pop esi
// 00714fa7  ddd8                 fstp st(0)
// 00714fa9  83c414               add esp, 0x14
// 00714fac  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
