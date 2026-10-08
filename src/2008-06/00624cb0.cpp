// from server: 100% by auto
// roc 2008-06 00624cb0  unit: lua_exception  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00624cb0
//
// 00624cb0  56                   push esi
// 00624cb1  57                   push edi
// 00624cb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00624cb6  68dc4b8400           push 0x844bdc
// 00624cbb  6a01                 push 1
// 00624cbd  57                   push edi
// 00624cbe  e8edc8feff           call 0x6115b0
// 00624cc3  8bf0                 mov esi, eax
// 00624cc5  83c40c               add esp, 0xc
// 00624cc8  833e00               cmp dword ptr [esi], 0
// 00624ccb  750e                 jne 0x624cdb
// 00624ccd  68e44b8400           push 0x844be4
// 00624cd2  57                   push edi
// 00624cd3  e888bffeff           call 0x610c60
// 00624cd8  83c408               add esp, 8
// 00624cdb  8b36                 mov esi, dword ptr [esi]
// 00624cdd  56                   push esi
// 00624cde  b802000000           mov eax, 2
// 00624ce3  e888feffff           call 0x624b70
// 00624ce8  83c404               add esp, 4
// 00624ceb  5f                   pop edi
// 00624cec  5e                   pop esi
// 00624ced  c3                   ret 
// library lua-5.1.4/liolib.c (function _f_write)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 liolib.c
