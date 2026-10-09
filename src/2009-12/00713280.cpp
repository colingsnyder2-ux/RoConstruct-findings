// roc 2009-12 00713280  unit: RBX::VLighting::?$FactoryProduct  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713280
//
// 00713280  8b442404             mov eax, dword ptr [esp + 4]
// 00713284  53                   push ebx
// 00713285  8b19                 mov ebx, dword ptr [ecx]
// 00713287  55                   push ebp
// 00713288  8b6904               mov ebp, dword ptr [ecx + 4]
// 0071328b  56                   push esi
// 0071328c  57                   push edi
// 0071328d  85db                 test ebx, ebx
// 0071328f  7508                 jne 0x713299
// 00713291  81fd00000080         cmp ebp, 0x80000000
// 00713297  7451                 je 0x7132ea
// 00713299  83fbff               cmp ebx, -1
// 0071329c  7508                 jne 0x7132a6
// 0071329e  81fdffffff7f         cmp ebp, 0x7fffffff
// 007132a4  7444                 je 0x7132ea
// 007132a6  83fbfe               cmp ebx, -2
// 007132a9  750c                 jne 0x7132b7
// 007132ab  81fdffffff7f         cmp ebp, 0x7fffffff
// 007132b1  0f84e2000000         je 0x713399
// 007132b7  8b30                 mov esi, dword ptr [eax]
// 007132b9  8b7804               mov edi, dword ptr [eax + 4]
// 007132bc  85f6                 test esi, esi
// 007132be  7508                 jne 0x7132c8
// 007132c0  81ff00000080         cmp edi, 0x80000000
// 007132c6  7422                 je 0x7132ea
// 007132c8  83feff               cmp esi, -1
// 007132cb  7508                 jne 0x7132d5
// 007132cd  81ffffffff7f         cmp edi, 0x7fffffff
// 007132d3  7415                 je 0x7132ea
// 007132d5  83fefe               cmp esi, -2
// 007132d8  0f859b000000         jne 0x713379
// 007132de  81ffffffff7f         cmp edi, 0x7fffffff
// 007132e4  0f858f000000         jne 0x713379
// 007132ea  83fbfe               cmp ebx, -2
// 007132ed  750c                 jne 0x7132fb
// 007132ef  81fdffffff7f         cmp ebp, 0x7fffffff
// 007132f5  0f849e000000         je 0x713399
// 007132fb  8b30                 mov esi, dword ptr [eax]
// 007132fd  8b7804               mov edi, dword ptr [eax + 4]
// 00713300  83fefe               cmp esi, -2
// 00713303  750c                 jne 0x713311
// 00713305  81ffffffff7f         cmp edi, 0x7fffffff
// 0071330b  0f849f000000         je 0x7133b0
// 00713311  85db                 test ebx, ebx
// 00713313  7510                 jne 0x713325
// 00713315  81fd00000080         cmp ebp, 0x80000000
// 0071331b  7508                 jne 0x713325
// 0071331d  85f6                 test esi, esi
// 0071331f  7519                 jne 0x71333a
// 00713321  3bfd                 cmp edi, ebp
// 00713323  7515                 jne 0x71333a
// 00713325  83feff               cmp esi, -1
// 00713328  751a                 jne 0x713344
// 0071332a  81ffffffff7f         cmp edi, 0x7fffffff
// 00713330  7512                 jne 0x713344
// 00713332  3bde                 cmp ebx, esi
// 00713334  7504                 jne 0x71333a
// 00713336  3bef                 cmp ebp, edi
// 00713338  7417                 je 0x713351
// 0071333a  5f                   pop edi
// 0071333b  5e                   pop esi
// 0071333c  5d                   pop ebp
// 0071333d  83c8ff               or eax, 0xffffffff
// 00713340  5b                   pop ebx
// 00713341  c20400               ret 4
// 00713344  83fbff               cmp ebx, -1
// 00713347  7516                 jne 0x71335f
// 00713349  81fdffffff7f         cmp ebp, 0x7fffffff
// 0071334f  750e                 jne 0x71335f
// 00713351  57                   push edi
// 00713352  56                   push esi
// 00713353  e858d8cfff           call 0x410bb0
// 00713358  83c408               add esp, 8
// 0071335b  84c0                 test al, al
// 0071335d  742e                 je 0x71338d
// 0071335f  85f6                 test esi, esi
// 00713361  7516                 jne 0x713379
// 00713363  81ff00000080         cmp edi, 0x80000000
// 00713369  750e                 jne 0x713379
// 0071336b  55                   push ebp
// 0071336c  53                   push ebx
// 0071336d  e85ed8cfff           call 0x410bd0
// 00713372  83c408               add esp, 8
// 00713375  84c0                 test al, al
// 00713377  7414                 je 0x71338d
// 00713379  3bef                 cmp ebp, edi
// 0071337b  7f10                 jg 0x71338d
// 0071337d  7cbb                 jl 0x71333a
// 0071337f  3bde                 cmp ebx, esi
// 00713381  72b7                 jb 0x71333a
// 00713383  3bef                 cmp ebp, edi
// 00713385  7c20                 jl 0x7133a7
// 00713387  7f04                 jg 0x71338d
// 00713389  3bde                 cmp ebx, esi
// 0071338b  761a                 jbe 0x7133a7
// 0071338d  5f                   pop edi
// 0071338e  5e                   pop esi
// 0071338f  5d                   pop ebp
// 00713390  b801000000           mov eax, 1
// 00713395  5b                   pop ebx
// 00713396  c20400               ret 4
// 00713399  8338fe               cmp dword ptr [eax], -2
// 0071339c  7512                 jne 0x7133b0
// 0071339e  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 007133a5  7509                 jne 0x7133b0
// 007133a7  5f                   pop edi
// 007133a8  5e                   pop esi
// 007133a9  5d                   pop ebp
// 007133aa  33c0                 xor eax, eax
// 007133ac  5b                   pop ebx
// 007133ad  c20400               ret 4
// 007133b0  5f                   pop edi
// 007133b1  5e                   pop esi
// 007133b2  5d                   pop ebp
// 007133b3  b802000000           mov eax, 2
// 007133b8  5b                   pop ebx
// 007133b9  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
