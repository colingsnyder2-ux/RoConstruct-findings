// roc 2010-06 00722900  unit: RBX::UniversalTool  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722900
//
// 00722900  53                   push ebx
// 00722901  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00722905  8d830f270000         lea eax, [ebx + 0x270f]
// 0072290b  56                   push esi
// 0072290c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00722910  3d0f270000           cmp eax, 0x270f
// 00722915  770d                 ja 0x722924
// 00722917  56                   push esi
// 00722918  e833e6ffff           call 0x720f50
// 0072291d  83c404               add esp, 4
// 00722920  8d5c0301             lea ebx, [ebx + eax + 1]
// 00722924  6aff                 push -1
// 00722926  56                   push esi
// 00722927  e814e8ffff           call 0x721140
// 0072292c  83c408               add esp, 8
// 0072292f  85c0                 test eax, eax
// 00722931  7511                 jne 0x722944
// 00722933  6afe                 push -2
// 00722935  56                   push esi
// 00722936  e825e6ffff           call 0x720f60
// 0072293b  83c408               add esp, 8
// 0072293e  5e                   pop esi
// 0072293f  83c8ff               or eax, 0xffffffff
// 00722942  5b                   pop ebx
// 00722943  c3                   ret 
// 00722944  57                   push edi
// 00722945  6a00                 push 0
// 00722947  53                   push ebx
// 00722948  56                   push esi
// 00722949  e8f2eeffff           call 0x721840
// 0072294e  6aff                 push -1
// 00722950  56                   push esi
// 00722951  e88ae9ffff           call 0x7212e0
// 00722956  6afe                 push -2
// 00722958  56                   push esi
// 00722959  8bf8                 mov edi, eax
// 0072295b  e800e6ffff           call 0x720f60
// 00722960  83c41c               add esp, 0x1c
// 00722963  85ff                 test edi, edi
// 00722965  7425                 je 0x72298c
// 00722967  57                   push edi
// 00722968  53                   push ebx
// 00722969  56                   push esi
// 0072296a  e8d1eeffff           call 0x721840
// 0072296f  6a00                 push 0
// 00722971  53                   push ebx
// 00722972  56                   push esi
// 00722973  e848f1ffff           call 0x721ac0
// 00722978  83c418               add esp, 0x18
// 0072297b  57                   push edi
// 0072297c  53                   push ebx
// 0072297d  56                   push esi
// 0072297e  e83df1ffff           call 0x721ac0
// 00722983  83c40c               add esp, 0xc
// 00722986  8bc7                 mov eax, edi
// 00722988  5f                   pop edi
// 00722989  5e                   pop esi
// 0072298a  5b                   pop ebx
// 0072298b  c3                   ret 
// 0072298c  53                   push ebx
// 0072298d  56                   push esi
// 0072298e  e82deaffff           call 0x7213c0
// 00722993  8bf8                 mov edi, eax
// 00722995  83c408               add esp, 8
// 00722998  47                   inc edi
// 00722999  57                   push edi
// 0072299a  53                   push ebx
// 0072299b  56                   push esi
// 0072299c  e81ff1ffff           call 0x721ac0
// 007229a1  83c40c               add esp, 0xc
// 007229a4  8bc7                 mov eax, edi
// 007229a6  5f                   pop edi
// 007229a7  5e                   pop esi
// 007229a8  5b                   pop ebx
// 007229a9  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_ref)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
