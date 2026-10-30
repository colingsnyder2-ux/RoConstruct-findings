// from server: 100% by auto
// roc 2009-06 00598120  unit: seg_00590000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598120
//
// 00598120  53                   push ebx
// 00598121  56                   push esi
// 00598122  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00598126  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0059812d  57                   push edi
// 0059812e  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 00598134  897c2410             mov dword ptr [esp + 0x10], edi
// 00598138  0f8581000000         jne 0x5981bf
// 0059813e  55                   push ebp
// 0059813f  33ed                 xor ebp, ebp
// 00598141  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 00598147  7e75                 jle 0x5981be
// 00598149  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0059814f  90                   nop 
// 00598150  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00598157  8b3b                 mov edi, dword ptr [ebx]
// 00598159  7436                 je 0x598191
// 0059815b  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00598162  751b                 jne 0x59817f
// 00598164  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0059816b  7541                 jne 0x5981ae
// 0059816d  8b4714               mov eax, dword ptr [edi + 0x14]
// 00598170  6a00                 push 0
// 00598172  50                   push eax
// 00598173  8bc6                 mov eax, esi
// 00598175  e8d6f5ffff           call 0x597750
// 0059817a  83c408               add esp, 8
// 0059817d  eb2f                 jmp 0x5981ae
// 0059817f  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00598182  6a01                 push 1
// 00598184  51                   push ecx
// 00598185  8bc6                 mov eax, esi
// 00598187  e8c4f5ffff           call 0x597750
// 0059818c  83c408               add esp, 8
// 0059818f  eb1d                 jmp 0x5981ae
// 00598191  8b5714               mov edx, dword ptr [edi + 0x14]
// 00598194  6a00                 push 0
// 00598196  52                   push edx
// 00598197  8bc6                 mov eax, esi
// 00598199  e8b2f5ffff           call 0x597750
// 0059819e  8b4718               mov eax, dword ptr [edi + 0x18]
// 005981a1  6a01                 push 1
// 005981a3  50                   push eax
// 005981a4  8bc6                 mov eax, esi
// 005981a6  e8a5f5ffff           call 0x597750
// 005981ab  83c410               add esp, 0x10
// 005981ae  45                   inc ebp
// 005981af  83c304               add ebx, 4
// 005981b2  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 005981b8  7c96                 jl 0x598150
// 005981ba  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005981be  5d                   pop ebp
// 005981bf  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 005981c5  3b4f1c               cmp ecx, dword ptr [edi + 0x1c]
// 005981c8  742b                 je 0x5981f5
// 005981ca  68dd000000           push 0xdd
// 005981cf  e8bcf2ffff           call 0x597490
// 005981d4  83c404               add esp, 4
// 005981d7  bb04000000           mov ebx, 4
// 005981dc  e81ff3ffff           call 0x597500
// 005981e1  8b9ebc000000         mov ebx, dword ptr [esi + 0xbc]
// 005981e7  e814f3ffff           call 0x597500
// 005981ec  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 005981f2  89571c               mov dword ptr [edi + 0x1c], edx
// 005981f5  5f                   pop edi
// 005981f6  8bc6                 mov eax, esi
// 005981f8  5e                   pop esi
// 005981f9  5b                   pop ebx
// 005981fa  e931f8ffff           jmp 0x597a30
// library jpeg-6b/jcmarker.c (function _write_scan_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
