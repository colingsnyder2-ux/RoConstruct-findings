// from server: 100% by auto
// roc 2010-06 00737350  unit: seg_00730000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737350
//
// 00737350  56                   push esi
// 00737351  8b742408             mov esi, dword ptr [esp + 8]
// 00737355  57                   push edi
// 00737356  6a02                 push 2
// 00737358  56                   push esi
// 00737359  e8e29dfeff           call 0x721140
// 0073735e  6a05                 push 5
// 00737360  6a01                 push 1
// 00737362  56                   push esi
// 00737363  8bf8                 mov edi, eax
// 00737365  e836bbfeff           call 0x722ea0
// 0073736a  83c414               add esp, 0x14
// 0073736d  85ff                 test edi, edi
// 0073736f  7415                 je 0x737386
// 00737371  83ff05               cmp edi, 5
// 00737374  7410                 je 0x737386
// 00737376  6834e7a400           push 0xa4e734
// 0073737b  6a02                 push 2
// 0073737d  56                   push esi
// 0073737e  e8adb9feff           call 0x722d30
// 00737383  83c40c               add esp, 0xc
// 00737386  6804e7a400           push 0xa4e704
// 0073738b  6a01                 push 1
// 0073738d  56                   push esi
// 0073738e  e8cdb1feff           call 0x722560
// 00737393  83c40c               add esp, 0xc
// 00737396  85c0                 test eax, eax
// 00737398  740e                 je 0x7373a8
// 0073739a  6810e7a400           push 0xa4e710
// 0073739f  56                   push esi
// 007373a0  e8fbb0feff           call 0x7224a0
// 007373a5  83c408               add esp, 8
// 007373a8  6a02                 push 2
// 007373aa  56                   push esi
// 007373ab  e8b09bfeff           call 0x720f60
// 007373b0  6a01                 push 1
// 007373b2  56                   push esi
// 007373b3  e878a7feff           call 0x721b30
// 007373b8  83c410               add esp, 0x10
// 007373bb  5f                   pop edi
// 007373bc  b801000000           mov eax, 1
// 007373c1  5e                   pop esi
// 007373c2  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_setmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
