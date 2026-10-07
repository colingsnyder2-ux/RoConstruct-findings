// roc 2008-06 006287a0  unit: seg_00620000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006287a0
//
// 006287a0  53                   push ebx
// 006287a1  55                   push ebp
// 006287a2  56                   push esi
// 006287a3  57                   push edi
// 006287a4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006287a8  6a05                 push 5
// 006287aa  6a01                 push 1
// 006287ac  57                   push edi
// 006287ad  e88e8efeff           call 0x611640
// 006287b2  6a01                 push 1
// 006287b4  6a02                 push 2
// 006287b6  57                   push edi
// 006287b7  e8b490feff           call 0x611870
// 006287bc  6a03                 push 3
// 006287be  57                   push edi
// 006287bf  8bf0                 mov esi, eax
// 006287c1  e83a96feff           call 0x611e00
// 006287c6  83c420               add esp, 0x20
// 006287c9  85c0                 test eax, eax
// 006287cb  7f0a                 jg 0x6287d7
// 006287cd  6a01                 push 1
// 006287cf  57                   push edi
// 006287d0  e8ab98feff           call 0x612080
// 006287d5  eb08                 jmp 0x6287df
// 006287d7  6a03                 push 3
// 006287d9  57                   push edi
// 006287da  e82190feff           call 0x611800
// 006287df  8bd8                 mov ebx, eax
// 006287e1  8beb                 mov ebp, ebx
// 006287e3  2bee                 sub ebp, esi
// 006287e5  45                   inc ebp
// 006287e6  83c408               add esp, 8
// 006287e9  85ed                 test ebp, ebp
// 006287eb  7f07                 jg 0x6287f4
// 006287ed  5f                   pop edi
// 006287ee  5e                   pop esi
// 006287ef  5d                   pop ebp
// 006287f0  33c0                 xor eax, eax
// 006287f2  5b                   pop ebx
// 006287f3  c3                   ret 
// 006287f4  68d4568400           push 0x8456d4
// 006287f9  55                   push ebp
// 006287fa  57                   push edi
// 006287fb  e8f084feff           call 0x610cf0
// 00628800  83c40c               add esp, 0xc
// 00628803  3bf3                 cmp esi, ebx
// 00628805  7f11                 jg 0x628818
// 00628807  56                   push esi
// 00628808  6a01                 push 1
// 0062880a  57                   push edi
// 0062880b  e8209dfeff           call 0x612530
// 00628810  46                   inc esi
// 00628811  83c40c               add esp, 0xc
// 00628814  3bf3                 cmp esi, ebx
// 00628816  7eef                 jle 0x628807
// 00628818  5f                   pop edi
// 00628819  5e                   pop esi
// 0062881a  8bc5                 mov eax, ebp
// 0062881c  5d                   pop ebp
// 0062881d  5b                   pop ebx
// 0062881e  c3                   ret 
// library lua-5.1.3/lbaselib.c (function _luaB_unpack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lbaselib.c
