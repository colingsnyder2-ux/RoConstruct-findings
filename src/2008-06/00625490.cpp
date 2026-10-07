// roc 2008-06 00625490  unit: lua_exception  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00625490
//
// 00625490  55                   push ebp
// 00625491  56                   push esi
// 00625492  57                   push edi
// 00625493  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00625497  6a05                 push 5
// 00625499  6a01                 push 1
// 0062549b  57                   push edi
// 0062549c  e89fc1feff           call 0x611640
// 006254a1  6a01                 push 1
// 006254a3  57                   push edi
// 006254a4  e8d7cbfeff           call 0x612080
// 006254a9  8bf0                 mov esi, eax
// 006254ab  57                   push edi
// 006254ac  46                   inc esi
// 006254ad  e85ec7feff           call 0x611c10
// 006254b2  83c418               add esp, 0x18
// 006254b5  83e802               sub eax, 2
// 006254b8  7467                 je 0x625521
// 006254ba  83e801               sub eax, 1
// 006254bd  7412                 je 0x6254d1
// 006254bf  68ac4d8400           push 0x844dac
// 006254c4  57                   push edi
// 006254c5  e896b7feff           call 0x610c60
// 006254ca  83c408               add esp, 8
// 006254cd  5f                   pop edi
// 006254ce  5e                   pop esi
// 006254cf  5d                   pop ebp
// 006254d0  c3                   ret 
// 006254d1  6a02                 push 2
// 006254d3  57                   push edi
// 006254d4  e827c3feff           call 0x611800
// 006254d9  8be8                 mov ebp, eax
// 006254db  83c408               add esp, 8
// 006254de  3bf5                 cmp esi, ebp
// 006254e0  7d04                 jge 0x6254e6
// 006254e2  8bf5                 mov esi, ebp
// 006254e4  3bf5                 cmp esi, ebp
// 006254e6  7e3b                 jle 0x625523
// 006254e8  53                   push ebx
// 006254e9  8da42400000000       lea esp, [esp]
// 006254f0  8d5eff               lea ebx, [esi - 1]
// 006254f3  53                   push ebx
// 006254f4  6a01                 push 1
// 006254f6  57                   push edi
// 006254f7  e834d0feff           call 0x612530
// 006254fc  56                   push esi
// 006254fd  6a01                 push 1
// 006254ff  57                   push edi
// 00625500  e87bd2feff           call 0x612780
// 00625505  8bf3                 mov esi, ebx
// 00625507  83c418               add esp, 0x18
// 0062550a  3bf5                 cmp esi, ebp
// 0062550c  7fe2                 jg 0x6254f0
// 0062550e  5b                   pop ebx
// 0062550f  55                   push ebp
// 00625510  6a01                 push 1
// 00625512  57                   push edi
// 00625513  e868d2feff           call 0x612780
// 00625518  83c40c               add esp, 0xc
// 0062551b  5f                   pop edi
// 0062551c  5e                   pop esi
// 0062551d  33c0                 xor eax, eax
// 0062551f  5d                   pop ebp
// 00625520  c3                   ret 
// 00625521  8bee                 mov ebp, esi
// 00625523  55                   push ebp
// 00625524  6a01                 push 1
// 00625526  57                   push edi
// 00625527  e854d2feff           call 0x612780
// 0062552c  83c40c               add esp, 0xc
// 0062552f  5f                   pop edi
// 00625530  5e                   pop esi
// 00625531  33c0                 xor eax, eax
// 00625533  5d                   pop ebp
// 00625534  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tinsert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
