// roc 2007-08 005acea0  unit: RBX::VLighting::?$FactoryProduct  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acea0
//
// 005acea0  8b442404             mov eax, dword ptr [esp + 4]
// 005acea4  53                   push ebx
// 005acea5  8b19                 mov ebx, dword ptr [ecx]
// 005acea7  85db                 test ebx, ebx
// 005acea9  55                   push ebp
// 005aceaa  8b6904               mov ebp, dword ptr [ecx + 4]
// 005acead  56                   push esi
// 005aceae  57                   push edi
// 005aceaf  7508                 jne 0x5aceb9
// 005aceb1  81fd00000080         cmp ebp, 0x80000000
// 005aceb7  7451                 je 0x5acf0a
// 005aceb9  83fbff               cmp ebx, -1
// 005acebc  7508                 jne 0x5acec6
// 005acebe  81fdffffff7f         cmp ebp, 0x7fffffff
// 005acec4  7444                 je 0x5acf0a
// 005acec6  83fbfe               cmp ebx, -2
// 005acec9  750c                 jne 0x5aced7
// 005acecb  81fdffffff7f         cmp ebp, 0x7fffffff
// 005aced1  0f84e2000000         je 0x5acfb9
// 005aced7  8b30                 mov esi, dword ptr [eax]
// 005aced9  85f6                 test esi, esi
// 005acedb  8b7804               mov edi, dword ptr [eax + 4]
// 005acede  7508                 jne 0x5acee8
// 005acee0  81ff00000080         cmp edi, 0x80000000
// 005acee6  7422                 je 0x5acf0a
// 005acee8  83feff               cmp esi, -1
// 005aceeb  7508                 jne 0x5acef5
// 005aceed  81ffffffff7f         cmp edi, 0x7fffffff
// 005acef3  7415                 je 0x5acf0a
// 005acef5  83fefe               cmp esi, -2
// 005acef8  0f859b000000         jne 0x5acf99
// 005acefe  81ffffffff7f         cmp edi, 0x7fffffff
// 005acf04  0f858f000000         jne 0x5acf99
// 005acf0a  83fbfe               cmp ebx, -2
// 005acf0d  750c                 jne 0x5acf1b
// 005acf0f  81fdffffff7f         cmp ebp, 0x7fffffff
// 005acf15  0f849e000000         je 0x5acfb9
// 005acf1b  8b30                 mov esi, dword ptr [eax]
// 005acf1d  83fefe               cmp esi, -2
// 005acf20  8b7804               mov edi, dword ptr [eax + 4]
// 005acf23  750c                 jne 0x5acf31
// 005acf25  81ffffffff7f         cmp edi, 0x7fffffff
// 005acf2b  0f849f000000         je 0x5acfd0
// 005acf31  85db                 test ebx, ebx
// 005acf33  7510                 jne 0x5acf45
// 005acf35  81fd00000080         cmp ebp, 0x80000000
// 005acf3b  7508                 jne 0x5acf45
// 005acf3d  85f6                 test esi, esi
// 005acf3f  7519                 jne 0x5acf5a
// 005acf41  3bfd                 cmp edi, ebp
// 005acf43  7515                 jne 0x5acf5a
// 005acf45  83feff               cmp esi, -1
// 005acf48  751a                 jne 0x5acf64
// 005acf4a  81ffffffff7f         cmp edi, 0x7fffffff
// 005acf50  7512                 jne 0x5acf64
// 005acf52  3bde                 cmp ebx, esi
// 005acf54  7504                 jne 0x5acf5a
// 005acf56  3bef                 cmp ebp, edi
// 005acf58  7417                 je 0x5acf71
// 005acf5a  5f                   pop edi
// 005acf5b  5e                   pop esi
// 005acf5c  5d                   pop ebp
// 005acf5d  83c8ff               or eax, 0xffffffff
// 005acf60  5b                   pop ebx
// 005acf61  c20400               ret 4
// 005acf64  83fbff               cmp ebx, -1
// 005acf67  7516                 jne 0x5acf7f
// 005acf69  81fdffffff7f         cmp ebp, 0x7fffffff
// 005acf6f  750e                 jne 0x5acf7f
// 005acf71  57                   push edi
// 005acf72  56                   push esi
// 005acf73  e87876f8ff           call 0x5345f0
// 005acf78  83c408               add esp, 8
// 005acf7b  84c0                 test al, al
// 005acf7d  742e                 je 0x5acfad
// 005acf7f  85f6                 test esi, esi
// 005acf81  7516                 jne 0x5acf99
// 005acf83  81ff00000080         cmp edi, 0x80000000
// 005acf89  750e                 jne 0x5acf99
// 005acf8b  55                   push ebp
// 005acf8c  53                   push ebx
// 005acf8d  e83e76f8ff           call 0x5345d0
// 005acf92  83c408               add esp, 8
// 005acf95  84c0                 test al, al
// 005acf97  7414                 je 0x5acfad
// 005acf99  3bef                 cmp ebp, edi
// 005acf9b  7f10                 jg 0x5acfad
// 005acf9d  7cbb                 jl 0x5acf5a
// 005acf9f  3bde                 cmp ebx, esi
// 005acfa1  72b7                 jb 0x5acf5a
// 005acfa3  3bef                 cmp ebp, edi
// 005acfa5  7c20                 jl 0x5acfc7
// 005acfa7  7f04                 jg 0x5acfad
// 005acfa9  3bde                 cmp ebx, esi
// 005acfab  761a                 jbe 0x5acfc7
// 005acfad  5f                   pop edi
// 005acfae  5e                   pop esi
// 005acfaf  5d                   pop ebp
// 005acfb0  b801000000           mov eax, 1
// 005acfb5  5b                   pop ebx
// 005acfb6  c20400               ret 4
// 005acfb9  8338fe               cmp dword ptr [eax], -2
// 005acfbc  7512                 jne 0x5acfd0
// 005acfbe  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 005acfc5  7509                 jne 0x5acfd0
// 005acfc7  5f                   pop edi
// 005acfc8  5e                   pop esi
// 005acfc9  5d                   pop ebp
// 005acfca  33c0                 xor eax, eax
// 005acfcc  5b                   pop ebx
// 005acfcd  c20400               ret 4
// 005acfd0  5f                   pop edi
// 005acfd1  5e                   pop esi
// 005acfd2  5d                   pop ebp
// 005acfd3  b802000000           mov eax, 2
// 005acfd8  5b                   pop ebx
// 005acfd9  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
