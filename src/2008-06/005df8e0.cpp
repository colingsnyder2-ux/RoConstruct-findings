// roc 2008-06 005df8e0  unit: RBX::VLighting::?$FactoryProduct  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df8e0
//
// 005df8e0  8b442404             mov eax, dword ptr [esp + 4]
// 005df8e4  53                   push ebx
// 005df8e5  8b19                 mov ebx, dword ptr [ecx]
// 005df8e7  55                   push ebp
// 005df8e8  8b6904               mov ebp, dword ptr [ecx + 4]
// 005df8eb  56                   push esi
// 005df8ec  57                   push edi
// 005df8ed  85db                 test ebx, ebx
// 005df8ef  7508                 jne 0x5df8f9
// 005df8f1  81fd00000080         cmp ebp, 0x80000000
// 005df8f7  7451                 je 0x5df94a
// 005df8f9  83fbff               cmp ebx, -1
// 005df8fc  7508                 jne 0x5df906
// 005df8fe  81fdffffff7f         cmp ebp, 0x7fffffff
// 005df904  7444                 je 0x5df94a
// 005df906  83fbfe               cmp ebx, -2
// 005df909  750c                 jne 0x5df917
// 005df90b  81fdffffff7f         cmp ebp, 0x7fffffff
// 005df911  0f84e2000000         je 0x5df9f9
// 005df917  8b30                 mov esi, dword ptr [eax]
// 005df919  8b7804               mov edi, dword ptr [eax + 4]
// 005df91c  85f6                 test esi, esi
// 005df91e  7508                 jne 0x5df928
// 005df920  81ff00000080         cmp edi, 0x80000000
// 005df926  7422                 je 0x5df94a
// 005df928  83feff               cmp esi, -1
// 005df92b  7508                 jne 0x5df935
// 005df92d  81ffffffff7f         cmp edi, 0x7fffffff
// 005df933  7415                 je 0x5df94a
// 005df935  83fefe               cmp esi, -2
// 005df938  0f859b000000         jne 0x5df9d9
// 005df93e  81ffffffff7f         cmp edi, 0x7fffffff
// 005df944  0f858f000000         jne 0x5df9d9
// 005df94a  83fbfe               cmp ebx, -2
// 005df94d  750c                 jne 0x5df95b
// 005df94f  81fdffffff7f         cmp ebp, 0x7fffffff
// 005df955  0f849e000000         je 0x5df9f9
// 005df95b  8b30                 mov esi, dword ptr [eax]
// 005df95d  8b7804               mov edi, dword ptr [eax + 4]
// 005df960  83fefe               cmp esi, -2
// 005df963  750c                 jne 0x5df971
// 005df965  81ffffffff7f         cmp edi, 0x7fffffff
// 005df96b  0f849f000000         je 0x5dfa10
// 005df971  85db                 test ebx, ebx
// 005df973  7510                 jne 0x5df985
// 005df975  81fd00000080         cmp ebp, 0x80000000
// 005df97b  7508                 jne 0x5df985
// 005df97d  85f6                 test esi, esi
// 005df97f  7519                 jne 0x5df99a
// 005df981  3bfd                 cmp edi, ebp
// 005df983  7515                 jne 0x5df99a
// 005df985  83feff               cmp esi, -1
// 005df988  751a                 jne 0x5df9a4
// 005df98a  81ffffffff7f         cmp edi, 0x7fffffff
// 005df990  7512                 jne 0x5df9a4
// 005df992  3bde                 cmp ebx, esi
// 005df994  7504                 jne 0x5df99a
// 005df996  3bef                 cmp ebp, edi
// 005df998  7417                 je 0x5df9b1
// 005df99a  5f                   pop edi
// 005df99b  5e                   pop esi
// 005df99c  5d                   pop ebp
// 005df99d  83c8ff               or eax, 0xffffffff
// 005df9a0  5b                   pop ebx
// 005df9a1  c20400               ret 4
// 005df9a4  83fbff               cmp ebx, -1
// 005df9a7  7516                 jne 0x5df9bf
// 005df9a9  81fdffffff7f         cmp ebp, 0x7fffffff
// 005df9af  750e                 jne 0x5df9bf
// 005df9b1  57                   push edi
// 005df9b2  56                   push esi
// 005df9b3  e868c7f7ff           call 0x55c120
// 005df9b8  83c408               add esp, 8
// 005df9bb  84c0                 test al, al
// 005df9bd  742e                 je 0x5df9ed
// 005df9bf  85f6                 test esi, esi
// 005df9c1  7516                 jne 0x5df9d9
// 005df9c3  81ff00000080         cmp edi, 0x80000000
// 005df9c9  750e                 jne 0x5df9d9
// 005df9cb  55                   push ebp
// 005df9cc  53                   push ebx
// 005df9cd  e82ec7f7ff           call 0x55c100
// 005df9d2  83c408               add esp, 8
// 005df9d5  84c0                 test al, al
// 005df9d7  7414                 je 0x5df9ed
// 005df9d9  3bef                 cmp ebp, edi
// 005df9db  7f10                 jg 0x5df9ed
// 005df9dd  7cbb                 jl 0x5df99a
// 005df9df  3bde                 cmp ebx, esi
// 005df9e1  72b7                 jb 0x5df99a
// 005df9e3  3bef                 cmp ebp, edi
// 005df9e5  7c20                 jl 0x5dfa07
// 005df9e7  7f04                 jg 0x5df9ed
// 005df9e9  3bde                 cmp ebx, esi
// 005df9eb  761a                 jbe 0x5dfa07
// 005df9ed  5f                   pop edi
// 005df9ee  5e                   pop esi
// 005df9ef  5d                   pop ebp
// 005df9f0  b801000000           mov eax, 1
// 005df9f5  5b                   pop ebx
// 005df9f6  c20400               ret 4
// 005df9f9  8338fe               cmp dword ptr [eax], -2
// 005df9fc  7512                 jne 0x5dfa10
// 005df9fe  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 005dfa05  7509                 jne 0x5dfa10
// 005dfa07  5f                   pop edi
// 005dfa08  5e                   pop esi
// 005dfa09  5d                   pop ebp
// 005dfa0a  33c0                 xor eax, eax
// 005dfa0c  5b                   pop ebx
// 005dfa0d  c20400               ret 4
// 005dfa10  5f                   pop edi
// 005dfa11  5e                   pop esi
// 005dfa12  5d                   pop ebp
// 005dfa13  b802000000           mov eax, 2
// 005dfa18  5b                   pop ebx
// 005dfa19  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
