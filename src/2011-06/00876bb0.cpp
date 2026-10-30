// roc 2011-06 00876bb0  unit: CXTPPropertyGridView  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00876bb0
//
// 00876bb0  83ec14               sub esp, 0x14
// 00876bb3  56                   push esi
// 00876bb4  8bf1                 mov esi, ecx
// 00876bb6  56                   push esi
// 00876bb7  8d4c240c             lea ecx, [esp + 0xc]
// 00876bbb  e87061feff           call 0x85cd30
// 00876bc0  8b4808               mov ecx, dword ptr [eax + 8]
// 00876bc3  2b08                 sub ecx, dword ptr [eax]
// 00876bc5  83bed000000000       cmp dword ptr [esi + 0xd0], 0
// 00876bcc  894c2404             mov dword ptr [esp + 4], ecx
// 00876bd0  db442404             fild dword ptr [esp + 4]
// 00876bd4  7557                 jne 0x876c2d
// 00876bd6  db44241c             fild dword ptr [esp + 0x1c]
// 00876bda  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00876be0  d9e8                 fld1 
// 00876be2  d8d1                 fcom st(1)
// 00876be4  dfe0                 fnstsw ax
// 00876be6  f6c405               test ah, 5
// 00876be9  7a04                 jp 0x876bef
// 00876beb  ddd8                 fstp st(0)
// 00876bed  eb02                 jmp 0x876bf1
// 00876bef  ddd9                 fstp st(1)
// 00876bf1  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00876bf7  d9ee                 fldz 
// 00876bf9  ddea                 fucomp st(2)
// 00876bfb  dfe0                 fnstsw ax
// 00876bfd  f6c444               test ah, 0x44
// 00876c00  0f8b8e000000         jnp 0x876c94
// 00876c06  d8d1                 fcom st(1)
// 00876c08  dfe0                 fnstsw ax
// 00876c0a  f6c405               test ah, 5
// 00876c0d  7a0f                 jp 0x876c1e
// 00876c0f  ddd9                 fstp st(1)
// 00876c11  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00876c17  5e                   pop esi
// 00876c18  83c414               add esp, 0x14
// 00876c1b  c20400               ret 4
// 00876c1e  ddd8                 fstp st(0)
// 00876c20  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00876c26  5e                   pop esi
// 00876c27  83c414               add esp, 0x14
// 00876c2a  c20400               ret 4
// 00876c2d  d9ee                 fldz 
// 00876c2f  dde9                 fucomp st(1)
// 00876c31  dfe0                 fnstsw ax
// 00876c33  f6c444               test ah, 0x44
// 00876c36  7a0a                 jp 0x876c42
// 00876c38  ddd8                 fstp st(0)
// 00876c3a  dd0508afa700         fld qword ptr [0xa7af08]
// 00876c40  eb04                 jmp 0x876c46
// 00876c42  da7c241c             fidivr dword ptr [esp + 0x1c]
// 00876c46  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00876c4c  dd058062a600         fld qword ptr [0xa66280]
// 00876c52  d8d1                 fcom st(1)
// 00876c54  dfe0                 fnstsw ax
// 00876c56  f6c405               test ah, 5
// 00876c59  7a04                 jp 0x876c5f
// 00876c5b  ddd8                 fstp st(0)
// 00876c5d  eb02                 jmp 0x876c61
// 00876c5f  ddd9                 fstp st(1)
// 00876c61  dd96c8000000         fst qword ptr [esi + 0xc8]
// 00876c67  dd05b8d9ac00         fld qword ptr [0xacd9b8]
// 00876c6d  d8d1                 fcom st(1)
// 00876c6f  dfe0                 fnstsw ax
// 00876c71  f6c441               test ah, 0x41
// 00876c74  750f                 jne 0x876c85
// 00876c76  ddd8                 fstp st(0)
// 00876c78  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00876c7e  5e                   pop esi
// 00876c7f  83c414               add esp, 0x14
// 00876c82  c20400               ret 4
// 00876c85  ddd9                 fstp st(1)
// 00876c87  dd9ec8000000         fstp qword ptr [esi + 0xc8]
// 00876c8d  5e                   pop esi
// 00876c8e  83c414               add esp, 0x14
// 00876c91  c20400               ret 4
// 00876c94  ddd8                 fstp st(0)
// 00876c96  5e                   pop esi
// 00876c97  ddd8                 fstp st(0)
// 00876c99  83c414               add esp, 0x14
// 00876c9c  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetDividerPos@CXTPPropertyGridView@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
