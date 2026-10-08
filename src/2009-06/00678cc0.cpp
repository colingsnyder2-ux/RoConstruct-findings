// roc 2009-06 00678cc0  unit: RBX::VLighting::?$FactoryProduct  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678cc0
//
// 00678cc0  8b442404             mov eax, dword ptr [esp + 4]
// 00678cc4  53                   push ebx
// 00678cc5  8b19                 mov ebx, dword ptr [ecx]
// 00678cc7  55                   push ebp
// 00678cc8  8b6904               mov ebp, dword ptr [ecx + 4]
// 00678ccb  56                   push esi
// 00678ccc  57                   push edi
// 00678ccd  85db                 test ebx, ebx
// 00678ccf  7508                 jne 0x678cd9
// 00678cd1  81fd00000080         cmp ebp, 0x80000000
// 00678cd7  7451                 je 0x678d2a
// 00678cd9  83fbff               cmp ebx, -1
// 00678cdc  7508                 jne 0x678ce6
// 00678cde  81fdffffff7f         cmp ebp, 0x7fffffff
// 00678ce4  7444                 je 0x678d2a
// 00678ce6  83fbfe               cmp ebx, -2
// 00678ce9  750c                 jne 0x678cf7
// 00678ceb  81fdffffff7f         cmp ebp, 0x7fffffff
// 00678cf1  0f84e2000000         je 0x678dd9
// 00678cf7  8b30                 mov esi, dword ptr [eax]
// 00678cf9  8b7804               mov edi, dword ptr [eax + 4]
// 00678cfc  85f6                 test esi, esi
// 00678cfe  7508                 jne 0x678d08
// 00678d00  81ff00000080         cmp edi, 0x80000000
// 00678d06  7422                 je 0x678d2a
// 00678d08  83feff               cmp esi, -1
// 00678d0b  7508                 jne 0x678d15
// 00678d0d  81ffffffff7f         cmp edi, 0x7fffffff
// 00678d13  7415                 je 0x678d2a
// 00678d15  83fefe               cmp esi, -2
// 00678d18  0f859b000000         jne 0x678db9
// 00678d1e  81ffffffff7f         cmp edi, 0x7fffffff
// 00678d24  0f858f000000         jne 0x678db9
// 00678d2a  83fbfe               cmp ebx, -2
// 00678d2d  750c                 jne 0x678d3b
// 00678d2f  81fdffffff7f         cmp ebp, 0x7fffffff
// 00678d35  0f849e000000         je 0x678dd9
// 00678d3b  8b30                 mov esi, dword ptr [eax]
// 00678d3d  8b7804               mov edi, dword ptr [eax + 4]
// 00678d40  83fefe               cmp esi, -2
// 00678d43  750c                 jne 0x678d51
// 00678d45  81ffffffff7f         cmp edi, 0x7fffffff
// 00678d4b  0f849f000000         je 0x678df0
// 00678d51  85db                 test ebx, ebx
// 00678d53  7510                 jne 0x678d65
// 00678d55  81fd00000080         cmp ebp, 0x80000000
// 00678d5b  7508                 jne 0x678d65
// 00678d5d  85f6                 test esi, esi
// 00678d5f  7519                 jne 0x678d7a
// 00678d61  3bfd                 cmp edi, ebp
// 00678d63  7515                 jne 0x678d7a
// 00678d65  83feff               cmp esi, -1
// 00678d68  751a                 jne 0x678d84
// 00678d6a  81ffffffff7f         cmp edi, 0x7fffffff
// 00678d70  7512                 jne 0x678d84
// 00678d72  3bde                 cmp ebx, esi
// 00678d74  7504                 jne 0x678d7a
// 00678d76  3bef                 cmp ebp, edi
// 00678d78  7417                 je 0x678d91
// 00678d7a  5f                   pop edi
// 00678d7b  5e                   pop esi
// 00678d7c  5d                   pop ebp
// 00678d7d  83c8ff               or eax, 0xffffffff
// 00678d80  5b                   pop ebx
// 00678d81  c20400               ret 4
// 00678d84  83fbff               cmp ebx, -1
// 00678d87  7516                 jne 0x678d9f
// 00678d89  81fdffffff7f         cmp ebp, 0x7fffffff
// 00678d8f  750e                 jne 0x678d9f
// 00678d91  57                   push edi
// 00678d92  56                   push esi
// 00678d93  e89881d9ff           call 0x410f30
// 00678d98  83c408               add esp, 8
// 00678d9b  84c0                 test al, al
// 00678d9d  742e                 je 0x678dcd
// 00678d9f  85f6                 test esi, esi
// 00678da1  7516                 jne 0x678db9
// 00678da3  81ff00000080         cmp edi, 0x80000000
// 00678da9  750e                 jne 0x678db9
// 00678dab  55                   push ebp
// 00678dac  53                   push ebx
// 00678dad  e89e81d9ff           call 0x410f50
// 00678db2  83c408               add esp, 8
// 00678db5  84c0                 test al, al
// 00678db7  7414                 je 0x678dcd
// 00678db9  3bef                 cmp ebp, edi
// 00678dbb  7f10                 jg 0x678dcd
// 00678dbd  7cbb                 jl 0x678d7a
// 00678dbf  3bde                 cmp ebx, esi
// 00678dc1  72b7                 jb 0x678d7a
// 00678dc3  3bef                 cmp ebp, edi
// 00678dc5  7c20                 jl 0x678de7
// 00678dc7  7f04                 jg 0x678dcd
// 00678dc9  3bde                 cmp ebx, esi
// 00678dcb  761a                 jbe 0x678de7
// 00678dcd  5f                   pop edi
// 00678dce  5e                   pop esi
// 00678dcf  5d                   pop ebp
// 00678dd0  b801000000           mov eax, 1
// 00678dd5  5b                   pop ebx
// 00678dd6  c20400               ret 4
// 00678dd9  8338fe               cmp dword ptr [eax], -2
// 00678ddc  7512                 jne 0x678df0
// 00678dde  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 00678de5  7509                 jne 0x678df0
// 00678de7  5f                   pop edi
// 00678de8  5e                   pop esi
// 00678de9  5d                   pop ebp
// 00678dea  33c0                 xor eax, eax
// 00678dec  5b                   pop ebx
// 00678ded  c20400               ret 4
// 00678df0  5f                   pop edi
// 00678df1  5e                   pop esi
// 00678df2  5d                   pop ebp
// 00678df3  b802000000           mov eax, 2
// 00678df8  5b                   pop ebx
// 00678df9  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
