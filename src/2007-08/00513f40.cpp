// roc 2007-08 00513f40  unit: G3D::_internal::DialogTemplate  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513f40
//
// 00513f40  57                   push edi
// 00513f41  8b7c2408             mov edi, dword ptr [esp + 8]
// 00513f45  85ff                 test edi, edi
// 00513f47  746b                 je 0x513fb4
// 00513f49  56                   push esi
// 00513f4a  8b742410             mov esi, dword ptr [esp + 0x10]
// 00513f4e  85f6                 test esi, esi
// 00513f50  7461                 je 0x513fb3
// 00513f52  8b442414             mov eax, dword ptr [esp + 0x14]
// 00513f56  3dffffff7f           cmp eax, 0x7fffffff
// 00513f5b  7e15                 jle 0x513f72
// 00513f5d  6870117a00           push 0x7a1170
// 00513f62  57                   push edi
// 00513f63  e828aa0000           call 0x51e990
// 00513f68  83c408               add esp, 8
// 00513f6b  b8ffffff7f           mov eax, 0x7fffffff
// 00513f70  eb14                 jmp 0x513f86
// 00513f72  85c0                 test eax, eax
// 00513f74  7d10                 jge 0x513f86
// 00513f76  688c117a00           push 0x7a118c
// 00513f7b  57                   push edi
// 00513f7c  e80faa0000           call 0x51e990
// 00513f81  83c408               add esp, 8
// 00513f84  33c0                 xor eax, eax
// 00513f86  8944240c             mov dword ptr [esp + 0xc], eax
// 00513f8a  db44240c             fild dword ptr [esp + 0xc]
// 00513f8e  834e0801             or dword ptr [esi + 8], 1
// 00513f92  85c0                 test eax, eax
// 00513f94  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00513f9a  dc3548117a00         fdiv qword ptr [0x7a1148]
// 00513fa0  d95e28               fstp dword ptr [esi + 0x28]
// 00513fa3  750e                 jne 0x513fb3
// 00513fa5  6860117a00           push 0x7a1160
// 00513faa  57                   push edi
// 00513fab  e8e0a90000           call 0x51e990
// 00513fb0  83c408               add esp, 8
// 00513fb3  5e                   pop esi
// 00513fb4  5f                   pop edi
// 00513fb5  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_gAMA_fixed)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
