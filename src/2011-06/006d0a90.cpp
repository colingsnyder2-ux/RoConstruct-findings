// roc 2011-06 006d0a90  unit: G3D::VColor3::V?$Value::?$BoundPropGetSet  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0a90
//
// 006d0a90  8b442404             mov eax, dword ptr [esp + 4]
// 006d0a94  53                   push ebx
// 006d0a95  8b19                 mov ebx, dword ptr [ecx]
// 006d0a97  55                   push ebp
// 006d0a98  8b6904               mov ebp, dword ptr [ecx + 4]
// 006d0a9b  56                   push esi
// 006d0a9c  57                   push edi
// 006d0a9d  85db                 test ebx, ebx
// 006d0a9f  7508                 jne 0x6d0aa9
// 006d0aa1  81fd00000080         cmp ebp, 0x80000000
// 006d0aa7  7451                 je 0x6d0afa
// 006d0aa9  83fbff               cmp ebx, -1
// 006d0aac  7508                 jne 0x6d0ab6
// 006d0aae  81fdffffff7f         cmp ebp, 0x7fffffff
// 006d0ab4  7444                 je 0x6d0afa
// 006d0ab6  83fbfe               cmp ebx, -2
// 006d0ab9  750c                 jne 0x6d0ac7
// 006d0abb  81fdffffff7f         cmp ebp, 0x7fffffff
// 006d0ac1  0f84e2000000         je 0x6d0ba9
// 006d0ac7  8b30                 mov esi, dword ptr [eax]
// 006d0ac9  8b7804               mov edi, dword ptr [eax + 4]
// 006d0acc  85f6                 test esi, esi
// 006d0ace  7508                 jne 0x6d0ad8
// 006d0ad0  81ff00000080         cmp edi, 0x80000000
// 006d0ad6  7422                 je 0x6d0afa
// 006d0ad8  83feff               cmp esi, -1
// 006d0adb  7508                 jne 0x6d0ae5
// 006d0add  81ffffffff7f         cmp edi, 0x7fffffff
// 006d0ae3  7415                 je 0x6d0afa
// 006d0ae5  83fefe               cmp esi, -2
// 006d0ae8  0f859b000000         jne 0x6d0b89
// 006d0aee  81ffffffff7f         cmp edi, 0x7fffffff
// 006d0af4  0f858f000000         jne 0x6d0b89
// 006d0afa  83fbfe               cmp ebx, -2
// 006d0afd  750c                 jne 0x6d0b0b
// 006d0aff  81fdffffff7f         cmp ebp, 0x7fffffff
// 006d0b05  0f849e000000         je 0x6d0ba9
// 006d0b0b  8b30                 mov esi, dword ptr [eax]
// 006d0b0d  8b7804               mov edi, dword ptr [eax + 4]
// 006d0b10  83fefe               cmp esi, -2
// 006d0b13  750c                 jne 0x6d0b21
// 006d0b15  81ffffffff7f         cmp edi, 0x7fffffff
// 006d0b1b  0f849f000000         je 0x6d0bc0
// 006d0b21  85db                 test ebx, ebx
// 006d0b23  7510                 jne 0x6d0b35
// 006d0b25  81fd00000080         cmp ebp, 0x80000000
// 006d0b2b  7508                 jne 0x6d0b35
// 006d0b2d  85f6                 test esi, esi
// 006d0b2f  7519                 jne 0x6d0b4a
// 006d0b31  3bfd                 cmp edi, ebp
// 006d0b33  7515                 jne 0x6d0b4a
// 006d0b35  83feff               cmp esi, -1
// 006d0b38  751a                 jne 0x6d0b54
// 006d0b3a  81ffffffff7f         cmp edi, 0x7fffffff
// 006d0b40  7512                 jne 0x6d0b54
// 006d0b42  3bde                 cmp ebx, esi
// 006d0b44  7504                 jne 0x6d0b4a
// 006d0b46  3bef                 cmp ebp, edi
// 006d0b48  7417                 je 0x6d0b61
// 006d0b4a  5f                   pop edi
// 006d0b4b  5e                   pop esi
// 006d0b4c  5d                   pop ebp
// 006d0b4d  83c8ff               or eax, 0xffffffff
// 006d0b50  5b                   pop ebx
// 006d0b51  c20400               ret 4
// 006d0b54  83fbff               cmp ebx, -1
// 006d0b57  7516                 jne 0x6d0b6f
// 006d0b59  81fdffffff7f         cmp ebp, 0x7fffffff
// 006d0b5f  750e                 jne 0x6d0b6f
// 006d0b61  57                   push edi
// 006d0b62  56                   push esi
// 006d0b63  e8d897d3ff           call 0x40a340
// 006d0b68  83c408               add esp, 8
// 006d0b6b  84c0                 test al, al
// 006d0b6d  742e                 je 0x6d0b9d
// 006d0b6f  85f6                 test esi, esi
// 006d0b71  7516                 jne 0x6d0b89
// 006d0b73  81ff00000080         cmp edi, 0x80000000
// 006d0b79  750e                 jne 0x6d0b89
// 006d0b7b  55                   push ebp
// 006d0b7c  53                   push ebx
// 006d0b7d  e8de97d3ff           call 0x40a360
// 006d0b82  83c408               add esp, 8
// 006d0b85  84c0                 test al, al
// 006d0b87  7414                 je 0x6d0b9d
// 006d0b89  3bef                 cmp ebp, edi
// 006d0b8b  7f10                 jg 0x6d0b9d
// 006d0b8d  7cbb                 jl 0x6d0b4a
// 006d0b8f  3bde                 cmp ebx, esi
// 006d0b91  72b7                 jb 0x6d0b4a
// 006d0b93  3bef                 cmp ebp, edi
// 006d0b95  7c20                 jl 0x6d0bb7
// 006d0b97  7f04                 jg 0x6d0b9d
// 006d0b99  3bde                 cmp ebx, esi
// 006d0b9b  761a                 jbe 0x6d0bb7
// 006d0b9d  5f                   pop edi
// 006d0b9e  5e                   pop esi
// 006d0b9f  5d                   pop ebp
// 006d0ba0  b801000000           mov eax, 1
// 006d0ba5  5b                   pop ebx
// 006d0ba6  c20400               ret 4
// 006d0ba9  8338fe               cmp dword ptr [eax], -2
// 006d0bac  7512                 jne 0x6d0bc0
// 006d0bae  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 006d0bb5  7509                 jne 0x6d0bc0
// 006d0bb7  5f                   pop edi
// 006d0bb8  5e                   pop esi
// 006d0bb9  5d                   pop ebp
// 006d0bba  33c0                 xor eax, eax
// 006d0bbc  5b                   pop ebx
// 006d0bbd  c20400               ret 4
// 006d0bc0  5f                   pop edi
// 006d0bc1  5e                   pop esi
// 006d0bc2  5d                   pop ebp
// 006d0bc3  b802000000           mov eax, 2
// 006d0bc8  5b                   pop ebx
// 006d0bc9  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
