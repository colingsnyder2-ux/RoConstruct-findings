// roc 2007-03 00687b70  unit: seg_00680000  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00687b70
//
// 00687b70  83ec14               sub esp, 0x14
// 00687b73  56                   push esi
// 00687b74  8bf1                 mov esi, ecx
// 00687b76  56                   push esi
// 00687b77  8d4c240c             lea ecx, [esp + 0xc]
// 00687b7b  e8503cfeff           call 0x66b7d0
// 00687b80  8b4808               mov ecx, dword ptr [eax + 8]
// 00687b83  2b08                 sub ecx, dword ptr [eax]
// 00687b85  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 00687b8c  894c2404             mov dword ptr [esp + 4], ecx
// 00687b90  db442404             fild dword ptr [esp + 4]
// 00687b94  7557                 jne 0x687bed
// 00687b96  db44241c             fild dword ptr [esp + 0x1c]
// 00687b9a  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00687ba0  d9e8                 fld1 
// 00687ba2  d8d1                 fcom st(1)
// 00687ba4  dfe0                 fnstsw ax
// 00687ba6  f6c405               test ah, 5
// 00687ba9  7a04                 jp 0x687baf
// 00687bab  ddd8                 fstp st(0)
// 00687bad  eb02                 jmp 0x687bb1
// 00687baf  ddd9                 fstp st(1)
// 00687bb1  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00687bb7  d9ee                 fldz 
// 00687bb9  ddea                 fucomp st(2)
// 00687bbb  dfe0                 fnstsw ax
// 00687bbd  f6c444               test ah, 0x44
// 00687bc0  0f8b8e000000         jnp 0x687c54
// 00687bc6  d8d1                 fcom st(1)
// 00687bc8  dfe0                 fnstsw ax
// 00687bca  f6c405               test ah, 5
// 00687bcd  7a0f                 jp 0x687bde
// 00687bcf  ddd9                 fstp st(1)
// 00687bd1  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00687bd7  5e                   pop esi
// 00687bd8  83c414               add esp, 0x14
// 00687bdb  c20400               ret 4
// 00687bde  ddd8                 fstp st(0)
// 00687be0  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00687be6  5e                   pop esi
// 00687be7  83c414               add esp, 0x14
// 00687bea  c20400               ret 4
// 00687bed  d9ee                 fldz 
// 00687bef  dde9                 fucomp st(1)
// 00687bf1  dfe0                 fnstsw ax
// 00687bf3  f6c444               test ah, 0x44
// 00687bf6  7a0a                 jp 0x687c02
// 00687bf8  ddd8                 fstp st(0)
// 00687bfa  dd05584f7900         fld qword ptr [0x794f58]
// 00687c00  eb04                 jmp 0x687c06
// 00687c02  da7c241c             fidivr dword ptr [esp + 0x1c]
// 00687c06  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00687c0c  dd05a09b7800         fld qword ptr [0x789ba0]
// 00687c12  d8d1                 fcom st(1)
// 00687c14  dfe0                 fnstsw ax
// 00687c16  f6c405               test ah, 5
// 00687c19  7a04                 jp 0x687c1f
// 00687c1b  ddd8                 fstp st(0)
// 00687c1d  eb02                 jmp 0x687c21
// 00687c1f  ddd9                 fstp st(1)
// 00687c21  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00687c27  dd05f0ed7c00         fld qword ptr [0x7cedf0]
// 00687c2d  d8d1                 fcom st(1)
// 00687c2f  dfe0                 fnstsw ax
// 00687c31  f6c441               test ah, 0x41
// 00687c34  750f                 jne 0x687c45
// 00687c36  ddd8                 fstp st(0)
// 00687c38  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00687c3e  5e                   pop esi
// 00687c3f  83c414               add esp, 0x14
// 00687c42  c20400               ret 4
// 00687c45  ddd9                 fstp st(1)
// 00687c47  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00687c4d  5e                   pop esi
// 00687c4e  83c414               add esp, 0x14
// 00687c51  c20400               ret 4
// 00687c54  ddd8                 fstp st(0)
// 00687c56  5e                   pop esi
// 00687c57  ddd8                 fstp st(0)
// 00687c59  83c414               add esp, 0x14
// 00687c5c  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
