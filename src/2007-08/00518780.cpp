// from server: 100% by auto
// roc 2007-08 00518780  unit: seg_00510000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518780
//
// 00518780  51                   push ecx
// 00518781  8b442408             mov eax, dword ptr [esp + 8]
// 00518785  53                   push ebx
// 00518786  55                   push ebp
// 00518787  56                   push esi
// 00518788  57                   push edi
// 00518789  33f6                 xor esi, esi
// 0051878b  33ff                 xor edi, edi
// 0051878d  85c0                 test eax, eax
// 0051878f  89742410             mov dword ptr [esp + 0x10], esi
// 00518793  7402                 je 0x518797
// 00518795  8b30                 mov esi, dword ptr [eax]
// 00518797  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051879b  85c0                 test eax, eax
// 0051879d  7402                 je 0x5187a1
// 0051879f  8b38                 mov edi, dword ptr [eax]
// 005187a1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005187a5  85c0                 test eax, eax
// 005187a7  7406                 je 0x5187af
// 005187a9  8b00                 mov eax, dword ptr [eax]
// 005187ab  89442410             mov dword ptr [esp + 0x10], eax
// 005187af  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005187b3  8b9e4c020000         mov ebx, dword ptr [esi + 0x24c]
// 005187b9  8bae44020000         mov ebp, dword ptr [esi + 0x244]
// 005187bf  51                   push ecx
// 005187c0  57                   push edi
// 005187c1  56                   push esi
// 005187c2  e8f9fcffff           call 0x5184c0
// 005187c7  83c40c               add esp, 0xc
// 005187ca  85ff                 test edi, edi
// 005187cc  7423                 je 0x5187f1
// 005187ce  6aff                 push -1
// 005187d0  6800400000           push 0x4000
// 005187d5  57                   push edi
// 005187d6  56                   push esi
// 005187d7  e894c7ffff           call 0x514f70
// 005187dc  55                   push ebp
// 005187dd  53                   push ebx
// 005187de  57                   push edi
// 005187df  e82c630000           call 0x51eb10
// 005187e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005187e8  83c41c               add esp, 0x1c
// 005187eb  c70200000000         mov dword ptr [edx], 0
// 005187f1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005187f5  85ff                 test edi, edi
// 005187f7  7423                 je 0x51881c
// 005187f9  6aff                 push -1
// 005187fb  6800400000           push 0x4000
// 00518800  57                   push edi
// 00518801  56                   push esi
// 00518802  e869c7ffff           call 0x514f70
// 00518807  55                   push ebp
// 00518808  53                   push ebx
// 00518809  57                   push edi
// 0051880a  e801630000           call 0x51eb10
// 0051880f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00518813  83c41c               add esp, 0x1c
// 00518816  c70000000000         mov dword ptr [eax], 0
// 0051881c  55                   push ebp
// 0051881d  53                   push ebx
// 0051881e  56                   push esi
// 0051881f  e8ec620000           call 0x51eb10
// 00518824  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00518828  83c40c               add esp, 0xc
// 0051882b  5f                   pop edi
// 0051882c  5e                   pop esi
// 0051882d  5d                   pop ebp
// 0051882e  c70100000000         mov dword ptr [ecx], 0
// 00518834  5b                   pop ebx
// 00518835  59                   pop ecx
// 00518836  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_destroy_read_struct)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
