// roc 2010-06 00693090  unit: RBX::VLighting::?$FactoryProduct  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00693090
//
// 00693090  8b442404             mov eax, dword ptr [esp + 4]
// 00693094  53                   push ebx
// 00693095  8b19                 mov ebx, dword ptr [ecx]
// 00693097  55                   push ebp
// 00693098  8b6904               mov ebp, dword ptr [ecx + 4]
// 0069309b  56                   push esi
// 0069309c  57                   push edi
// 0069309d  85db                 test ebx, ebx
// 0069309f  7508                 jne 0x6930a9
// 006930a1  81fd00000080         cmp ebp, 0x80000000
// 006930a7  7451                 je 0x6930fa
// 006930a9  83fbff               cmp ebx, -1
// 006930ac  7508                 jne 0x6930b6
// 006930ae  81fdffffff7f         cmp ebp, 0x7fffffff
// 006930b4  7444                 je 0x6930fa
// 006930b6  83fbfe               cmp ebx, -2
// 006930b9  750c                 jne 0x6930c7
// 006930bb  81fdffffff7f         cmp ebp, 0x7fffffff
// 006930c1  0f84e2000000         je 0x6931a9
// 006930c7  8b30                 mov esi, dword ptr [eax]
// 006930c9  8b7804               mov edi, dword ptr [eax + 4]
// 006930cc  85f6                 test esi, esi
// 006930ce  7508                 jne 0x6930d8
// 006930d0  81ff00000080         cmp edi, 0x80000000
// 006930d6  7422                 je 0x6930fa
// 006930d8  83feff               cmp esi, -1
// 006930db  7508                 jne 0x6930e5
// 006930dd  81ffffffff7f         cmp edi, 0x7fffffff
// 006930e3  7415                 je 0x6930fa
// 006930e5  83fefe               cmp esi, -2
// 006930e8  0f859b000000         jne 0x693189
// 006930ee  81ffffffff7f         cmp edi, 0x7fffffff
// 006930f4  0f858f000000         jne 0x693189
// 006930fa  83fbfe               cmp ebx, -2
// 006930fd  750c                 jne 0x69310b
// 006930ff  81fdffffff7f         cmp ebp, 0x7fffffff
// 00693105  0f849e000000         je 0x6931a9
// 0069310b  8b30                 mov esi, dword ptr [eax]
// 0069310d  8b7804               mov edi, dword ptr [eax + 4]
// 00693110  83fefe               cmp esi, -2
// 00693113  750c                 jne 0x693121
// 00693115  81ffffffff7f         cmp edi, 0x7fffffff
// 0069311b  0f849f000000         je 0x6931c0
// 00693121  85db                 test ebx, ebx
// 00693123  7510                 jne 0x693135
// 00693125  81fd00000080         cmp ebp, 0x80000000
// 0069312b  7508                 jne 0x693135
// 0069312d  85f6                 test esi, esi
// 0069312f  7519                 jne 0x69314a
// 00693131  3bfd                 cmp edi, ebp
// 00693133  7515                 jne 0x69314a
// 00693135  83feff               cmp esi, -1
// 00693138  751a                 jne 0x693154
// 0069313a  81ffffffff7f         cmp edi, 0x7fffffff
// 00693140  7512                 jne 0x693154
// 00693142  3bde                 cmp ebx, esi
// 00693144  7504                 jne 0x69314a
// 00693146  3bef                 cmp ebp, edi
// 00693148  7417                 je 0x693161
// 0069314a  5f                   pop edi
// 0069314b  5e                   pop esi
// 0069314c  5d                   pop ebp
// 0069314d  83c8ff               or eax, 0xffffffff
// 00693150  5b                   pop ebx
// 00693151  c20400               ret 4
// 00693154  83fbff               cmp ebx, -1
// 00693157  7516                 jne 0x69316f
// 00693159  81fdffffff7f         cmp ebp, 0x7fffffff
// 0069315f  750e                 jne 0x69316f
// 00693161  57                   push edi
// 00693162  56                   push esi
// 00693163  e818ddd7ff           call 0x410e80
// 00693168  83c408               add esp, 8
// 0069316b  84c0                 test al, al
// 0069316d  742e                 je 0x69319d
// 0069316f  85f6                 test esi, esi
// 00693171  7516                 jne 0x693189
// 00693173  81ff00000080         cmp edi, 0x80000000
// 00693179  750e                 jne 0x693189
// 0069317b  55                   push ebp
// 0069317c  53                   push ebx
// 0069317d  e81eddd7ff           call 0x410ea0
// 00693182  83c408               add esp, 8
// 00693185  84c0                 test al, al
// 00693187  7414                 je 0x69319d
// 00693189  3bef                 cmp ebp, edi
// 0069318b  7f10                 jg 0x69319d
// 0069318d  7cbb                 jl 0x69314a
// 0069318f  3bde                 cmp ebx, esi
// 00693191  72b7                 jb 0x69314a
// 00693193  3bef                 cmp ebp, edi
// 00693195  7c20                 jl 0x6931b7
// 00693197  7f04                 jg 0x69319d
// 00693199  3bde                 cmp ebx, esi
// 0069319b  761a                 jbe 0x6931b7
// 0069319d  5f                   pop edi
// 0069319e  5e                   pop esi
// 0069319f  5d                   pop ebp
// 006931a0  b801000000           mov eax, 1
// 006931a5  5b                   pop ebx
// 006931a6  c20400               ret 4
// 006931a9  8338fe               cmp dword ptr [eax], -2
// 006931ac  7512                 jne 0x6931c0
// 006931ae  817804ffffff7f       cmp dword ptr [eax + 4], 0x7fffffff
// 006931b5  7509                 jne 0x6931c0
// 006931b7  5f                   pop edi
// 006931b8  5e                   pop esi
// 006931b9  5d                   pop ebp
// 006931ba  33c0                 xor eax, eax
// 006931bc  5b                   pop ebx
// 006931bd  c20400               ret 4
// 006931c0  5f                   pop edi
// 006931c1  5e                   pop esi
// 006931c2  5d                   pop ebp
// 006931c3  b802000000           mov eax, 2
// 006931c8  5b                   pop ebx
// 006931c9  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?compare@?$int_adapter@_J@date_time@boost@@ABEHABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
