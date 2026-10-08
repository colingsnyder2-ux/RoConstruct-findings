// roc 2012-06 007aa680  unit: RBX::VLighting::?$FactoryProduct  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007aa680
//
// 007aa680  8b442404             mov eax, dword ptr [esp + 4]
// 007aa684  53                   push ebx
// 007aa685  8b19                 mov ebx, dword ptr [ecx]
// 007aa687  55                   push ebp
// 007aa688  8b6904               mov ebp, dword ptr [ecx + 4]
// 007aa68b  56                   push esi
// 007aa68c  57                   push edi
// 007aa68d  85db                 test ebx, ebx
// 007aa68f  7508                 jne 0x7aa699
// 007aa691  81fd00000080         cmp ebp, 0x80000000
// 007aa697  7451                 je 0x7aa6ea
// 007aa699  83fbff               cmp ebx, -1
// 007aa69c  7508                 jne 0x7aa6a6
// 007aa69e  81fdffffff7f         cmp ebp, 0x7fffffff
// 007aa6a4  7444                 je 0x7aa6ea
// 007aa6a6  83fbfe               cmp ebx, -2
// 007aa6a9  750c                 jne 0x7aa6b7
// 007aa6ab  81fdffffff7f         cmp ebp, 0x7fffffff
// 007aa6b1  0f84e2000000         je 0x7aa799
// 007aa6b7  8b30                 mov esi, dword ptr [eax]
// 007aa6b9  8b7804               mov edi, dword ptr [eax + 4]
// 007aa6bc  85f6                 test esi, esi
// 007aa6be  7508                 jne 0x7aa6c8
// 007aa6c0  81ff00000080         cmp edi, 0x80000000
// 007aa6c6  7422                 je 0x7aa6ea
// 007aa6c8  83feff               cmp esi, -1
// 007aa6cb  7508                 jne 0x7aa6d5
// 007aa6cd  81ffffffff7f         cmp edi, 0x7fffffff
// 007aa6d3  7415                 je 0x7aa6ea
// 007aa6d5  83fefe               cmp esi, -2
// 007aa6d8  0f859b000000         jne 0x7aa779
// 007aa6de  81ffffffff7f         cmp edi, 0x7fffffff
// 007aa6e4  0f858f000000         jne 0x7aa779
// 007aa6ea  83fbfe               cmp ebx, -2
// 007aa6ed  750c                 jne 0x7aa6fb
// 007aa6ef  81fdffffff7f         cmp ebp, 0x7fffffff
// 007aa6f5  0f849e000000         je 0x7aa799
// 007aa6fb  8b30                 mov esi, dword ptr [eax]
// 007aa6fd  8b7804               mov edi, dword ptr [eax + 4]
// 007aa700  83fefe               cmp esi, -2
// 007aa703  750c                 jne 0x7aa711
// 007aa705  81ffffffff7f         cmp edi, 0x7fffffff
// 007aa70b  0f849f000000         je 0x7aa7b0
// 007aa711  85db                 test ebx, ebx
// 007aa713  7510                 jne 0x7aa725
// 007aa715  81fd00000080         cmp ebp, 0x80000000
// 007aa71b  7508                 jne 0x7aa725
// 007aa71d  85f6                 test esi, esi
// 007aa71f  7519                 jne 0x7aa73a
// 007aa721  3bfd                 cmp edi, ebp
// 007aa723  7515                 jne 0x7aa73a
// 007aa725  83feff               cmp esi, -1
// 007aa728  751a                 jne 0x7aa744
// 007aa72a  81ffffffff7f         cmp edi, 0x7fffffff
// 007aa730  7512                 jne 0x7aa744
// 007aa732  3bde                 cmp ebx, esi
// 007aa734  7504                 jne 0x7aa73a
// 007aa736  3bef                 cmp ebp, edi
// 007aa738  7417                 je 0x7aa751
// 007aa73a  5f                   pop edi
// 007aa73b  5e                   pop esi
// 007aa73c  5d                   pop ebp
// 007aa73d  83c8ff               or eax, 0xffffffff
// 007aa740  5b                   pop ebx
// 007aa741  c20400               ret 4
// 007aa744  83fbff               cmp ebx, -1
// 007aa747  7516                 jne 0x7aa75f
// 007aa749  81fdffffff7f         cmp ebp, 0x7fffffff
// 007aa74f  750e                 jne 0x7aa75f
// 007aa751  57                   push edi
// 007aa752  56                   push esi
// 007aa753  e8f812c6ff           call 0x40ba50
// 007aa758  83c408               add esp, 8
// 007aa75b  84c0                 test al, al
// 007aa75d  742e                 je 0x7aa78d
// 007aa75f  85f6                 test esi, esi
// 007aa761  7516                 jne 0x7aa779
// 007aa763  81ff00000080         cmp edi, 0x80000000
// 007aa769  750e                 jne 0x7aa779
// 007aa76b  55                   push ebp
// 007aa76c  53                   push ebx
// 007aa76d  e8fe12c6ff           call 0x40ba70
// 007aa772  83c408               add esp, 8
// 007aa775  84c0                 test al, al
// 007aa777  7414                 je 0x7aa78d
// 007aa779  3bef                 cmp ebp, edi
// 007aa77b  7f10                 jg 0x7aa78d
// 007aa77d  7cbb                 jl 0x7aa73a
// 007aa77f  3bde                 cmp ebx, esi
// 007aa781  72b7                 jb 0x7aa73a
// 007aa783  3bef                 cmp ebp, edi
// 007aa785  7c20                 jl 0x7aa7a7
// 007aa787  7f04                 jg 0x7aa78d
// 007aa789  3bde                 cmp ebx, esi
// 007aa78b  761a                 jbe 0x7aa7a7
// 007aa78d  5f                   pop edi
// 007aa78e  5e                   pop esi
// 007aa78f  5d                   pop ebp
// 007aa790  b801000000           mov eax, 1
// 007aa795  5b                   pop ebx
// 007aa796  c20400               ret 4
// 007aa799  8338fe               cmp dword ptr [eax], -2
// 007aa79c  7512                 jne 0x7aa7b0
// 007aa79e  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 007aa7a5  7509                 jne 0x7aa7b0
// 007aa7a7  5f                   pop edi
// 007aa7a8  5e                   pop esi
// 007aa7a9  5d                   pop ebp
// 007aa7aa  33c0                 xor eax, eax
// 007aa7ac  5b                   pop ebx
// 007aa7ad  c20400               ret 4
// 007aa7b0  5f                   pop edi
// 007aa7b1  5e                   pop esi
// 007aa7b2  5d                   pop ebp
// 007aa7b3  b802000000           mov eax, 2
// 007aa7b8  5b                   pop ebx
// 007aa7b9  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
