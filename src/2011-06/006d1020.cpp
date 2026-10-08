// roc 2011-06 006d1020  unit: RBX::VLighting::?$FactoryProduct  size: 855 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d1020
//
// 006d1020  6aff                 push -1
// 006d1022  682cc39e00           push 0x9ec32c
// 006d1027  64a100000000         mov eax, dword ptr fs:[0]
// 006d102d  50                   push eax
// 006d102e  64892500000000       mov dword ptr fs:[0], esp
// 006d1035  81ec8c000000         sub esp, 0x8c
// 006d103b  55                   push ebp
// 006d103c  56                   push esi
// 006d103d  57                   push edi
// 006d103e  6a01                 push 1
// 006d1040  33ed                 xor ebp, ebp
// 006d1042  6a02                 push 2
// 006d1044  8d4c2420             lea ecx, [esp + 0x20]
// 006d1048  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006d104c  ff159004a400         call dword ptr [0xa40490]
// 006d1052  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 006d1059  8bbc24b0000000       mov edi, dword ptr [esp + 0xb0]
// 006d1060  c78424a000000001000000 mov dword ptr [esp + 0xa0], 1
// 006d106b  3bf5                 cmp esi, ebp
// 006d106d  750c                 jne 0x6d107b
// 006d106f  81ff00000080         cmp edi, 0x80000000
// 006d1075  0f8459020000         je 0x6d12d4
// 006d107b  83feff               cmp esi, -1
// 006d107e  750c                 jne 0x6d108c
// 006d1080  81ffffffff7f         cmp edi, 0x7fffffff
// 006d1086  0f8448020000         je 0x6d12d4
// 006d108c  83fefe               cmp esi, -2
// 006d108f  750c                 jne 0x6d109d
// 006d1091  81ffffffff7f         cmp edi, 0x7fffffff
// 006d1097  0f8444020000         je 0x6d12e1
// 006d109d  8d4c240c             lea ecx, [esp + 0xc]
// 006d10a1  51                   push ecx
// 006d10a2  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 006d10a9  896c2410             mov dword ptr [esp + 0x10], ebp
// 006d10ad  896c2414             mov dword ptr [esp + 0x14], ebp
// 006d10b1  e8daf9ffff           call 0x6d0a90
// 006d10b6  83f8ff               cmp eax, -1
// 006d10b9  0f94c0               sete al
// 006d10bc  84c0                 test al, al
// 006d10be  741d                 je 0x6d10dd
// 006d10c0  8d542418             lea edx, [esp + 0x18]
// 006d10c4  6a2d                 push 0x2d
// 006d10c6  52                   push edx
// 006d10c7  e8f411d6ff           call 0x4322c0
// 006d10cc  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 006d10d3  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 006d10da  83c408               add esp, 8
// 006d10dd  55                   push ebp
// 006d10de  6800a493d6           push 0xd693a400
// 006d10e3  57                   push edi
// 006d10e4  56                   push esi
// 006d10e5  e8f6a21300           call 0x80b3e0
// 006d10ea  3bc5                 cmp eax, ebp
// 006d10ec  7d02                 jge 0x6d10f0
// 006d10ee  f7d8                 neg eax
// 006d10f0  8b350c07a400         mov esi, dword ptr [0xa4070c]
// 006d10f6  53                   push ebx
// 006d10f7  8bf8                 mov edi, eax
// 006d10f9  8d442410             lea eax, [esp + 0x10]
// 006d10fd  6a02                 push 2
// 006d10ff  50                   push eax
// 006d1100  ffd6                 call esi
// 006d1102  8b4804               mov ecx, dword ptr [eax + 4]
// 006d1105  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d1109  8b00                 mov eax, dword ptr [eax]
// 006d110b  51                   push ecx
// 006d110c  8b4a04               mov ecx, dword ptr [edx + 4]
// 006d110f  8d540c28             lea edx, [esp + ecx + 0x28]
// 006d1113  52                   push edx
// 006d1114  ffd0                 call eax
// 006d1116  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006d111a  8b4104               mov eax, dword ptr [ecx + 4]
// 006d111d  83c410               add esp, 0x10
// 006d1120  684888a700           push 0xa78848
// 006d1125  8d440420             lea eax, [esp + eax + 0x20]
// 006d1129  b330                 mov bl, 0x30
// 006d112b  57                   push edi
// 006d112c  8d4c2424             lea ecx, [esp + 0x24]
// 006d1130  885830               mov byte ptr [eax + 0x30], bl
// 006d1133  ff151405a400         call dword ptr [0xa40514]
// 006d1139  50                   push eax
// 006d113a  e8a102d5ff           call 0x4213e0
// 006d113f  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 006d1146  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 006d114d  83c408               add esp, 8
// 006d1150  55                   push ebp
// 006d1151  6800879303           push 0x3938700
// 006d1156  52                   push edx
// 006d1157  50                   push eax
// 006d1158  e883a21300           call 0x80b3e0
// 006d115d  55                   push ebp
// 006d115e  6a3c                 push 0x3c
// 006d1160  52                   push edx
// 006d1161  50                   push eax
// 006d1162  e879a91300           call 0x80bae0
// 006d1167  3bc5                 cmp eax, ebp
// 006d1169  7d02                 jge 0x6d116d
// 006d116b  f7d8                 neg eax
// 006d116d  8d4c2410             lea ecx, [esp + 0x10]
// 006d1171  6a02                 push 2
// 006d1173  51                   push ecx
// 006d1174  8bf8                 mov edi, eax
// 006d1176  ffd6                 call esi
// 006d1178  8b5004               mov edx, dword ptr [eax + 4]
// 006d117b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006d117f  52                   push edx
// 006d1180  8b5104               mov edx, dword ptr [ecx + 4]
// 006d1183  8d4c1428             lea ecx, [esp + edx + 0x28]
// 006d1187  8b10                 mov edx, dword ptr [eax]
// 006d1189  51                   push ecx
// 006d118a  ffd2                 call edx
// 006d118c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006d1190  8b4004               mov eax, dword ptr [eax + 4]
// 006d1193  83c410               add esp, 0x10
// 006d1196  684888a700           push 0xa78848
// 006d119b  8d440420             lea eax, [esp + eax + 0x20]
// 006d119f  57                   push edi
// 006d11a0  8d4c2424             lea ecx, [esp + 0x24]
// 006d11a4  885830               mov byte ptr [eax + 0x30], bl
// 006d11a7  ff151405a400         call dword ptr [0xa40514]
// 006d11ad  50                   push eax
// 006d11ae  e82d02d5ff           call 0x4213e0
// 006d11b3  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 006d11ba  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 006d11c1  83c408               add esp, 8
// 006d11c4  55                   push ebp
// 006d11c5  6840420f00           push 0xf4240
// 006d11ca  51                   push ecx
// 006d11cb  52                   push edx
// 006d11cc  e80fa21300           call 0x80b3e0
// 006d11d1  55                   push ebp
// 006d11d2  6a3c                 push 0x3c
// 006d11d4  52                   push edx
// 006d11d5  50                   push eax
// 006d11d6  e805a91300           call 0x80bae0
// 006d11db  3bc5                 cmp eax, ebp
// 006d11dd  7d02                 jge 0x6d11e1
// 006d11df  f7d8                 neg eax
// 006d11e1  8bf8                 mov edi, eax
// 006d11e3  8d442410             lea eax, [esp + 0x10]
// 006d11e7  6a02                 push 2
// 006d11e9  50                   push eax
// 006d11ea  ffd6                 call esi
// 006d11ec  8b4804               mov ecx, dword ptr [eax + 4]
// 006d11ef  8b542424             mov edx, dword ptr [esp + 0x24]
// 006d11f3  8b00                 mov eax, dword ptr [eax]
// 006d11f5  51                   push ecx
// 006d11f6  8b4a04               mov ecx, dword ptr [edx + 4]
// 006d11f9  8d540c28             lea edx, [esp + ecx + 0x28]
// 006d11fd  52                   push edx
// 006d11fe  ffd0                 call eax
// 006d1200  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006d1204  8b4104               mov eax, dword ptr [ecx + 4]
// 006d1207  83c410               add esp, 0x10
// 006d120a  8d44041c             lea eax, [esp + eax + 0x1c]
// 006d120e  57                   push edi
// 006d120f  8d4c2420             lea ecx, [esp + 0x20]
// 006d1213  885830               mov byte ptr [eax + 0x30], bl
// 006d1216  ff151405a400         call dword ptr [0xa40514]
// 006d121c  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 006d1223  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 006d122a  55                   push ebp
// 006d122b  6840420f00           push 0xf4240
// 006d1230  52                   push edx
// 006d1231  50                   push eax
// 006d1232  e8a9a81300           call 0x80bae0
// 006d1237  3bd5                 cmp edx, ebp
// 006d1239  7f0c                 jg 0x6d1247
// 006d123b  7c04                 jl 0x6d1241
// 006d123d  3bc5                 cmp eax, ebp
// 006d123f  7306                 jae 0x6d1247
// 006d1241  f7d8                 neg eax
// 006d1243  13d5                 adc edx, ebp
// 006d1245  f7da                 neg edx
// 006d1247  8bf8                 mov edi, eax
// 006d1249  8bea                 mov ebp, edx
// 006d124b  8bcf                 mov ecx, edi
// 006d124d  0bcd                 or ecx, ebp
// 006d124f  743c                 je 0x6d128d
// 006d1251  8d542410             lea edx, [esp + 0x10]
// 006d1255  6a06                 push 6
// 006d1257  52                   push edx
// 006d1258  ffd6                 call esi
// 006d125a  83c408               add esp, 8
// 006d125d  50                   push eax
// 006d125e  8d442420             lea eax, [esp + 0x20]
// 006d1262  689c5da700           push 0xa75d9c
// 006d1267  50                   push eax
// 006d1268  e87301d5ff           call 0x4213e0
// 006d126d  83c408               add esp, 8
// 006d1270  50                   push eax
// 006d1271  e84af7ffff           call 0x6d09c0
// 006d1276  8b08                 mov ecx, dword ptr [eax]
// 006d1278  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d127b  83c408               add esp, 8
// 006d127e  03c8                 add ecx, eax
// 006d1280  55                   push ebp
// 006d1281  885930               mov byte ptr [ecx + 0x30], bl
// 006d1284  57                   push edi
// 006d1285  8bc8                 mov ecx, eax
// 006d1287  ff158006a400         call dword ptr [0xa40680]
// 006d128d  5b                   pop ebx
// 006d128e  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 006d1295  56                   push esi
// 006d1296  8d4c241c             lea ecx, [esp + 0x1c]
// 006d129a  ff159404a400         call dword ptr [0xa40494]
// 006d12a0  8d4c2418             lea ecx, [esp + 0x18]
// 006d12a4  c744241401000000     mov dword ptr [esp + 0x14], 1
// 006d12ac  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 006d12b4  ff159804a400         call dword ptr [0xa40498]
// 006d12ba  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 006d12c1  5f                   pop edi
// 006d12c2  8bc6                 mov eax, esi
// 006d12c4  5e                   pop esi
// 006d12c5  5d                   pop ebp
// 006d12c6  64890d00000000       mov dword ptr fs:[0], ecx
// 006d12cd  81c498000000         add esp, 0x98
// 006d12d3  c3                   ret 
// 006d12d4  83fefe               cmp esi, -2
// 006d12d7  750c                 jne 0x6d12e5
// 006d12d9  81ffffffff7f         cmp edi, 0x7fffffff
// 006d12df  7504                 jne 0x6d12e5
// 006d12e1  33c0                 xor eax, eax
// 006d12e3  eb28                 jmp 0x6d130d
// 006d12e5  3bf5                 cmp esi, ebp
// 006d12e7  750f                 jne 0x6d12f8
// 006d12e9  81ff00000080         cmp edi, 0x80000000
// 006d12ef  7507                 jne 0x6d12f8
// 006d12f1  b801000000           mov eax, 1
// 006d12f6  eb15                 jmp 0x6d130d
// 006d12f8  83feff               cmp esi, -1
// 006d12fb  750b                 jne 0x6d1308
// 006d12fd  8d4603               lea eax, [esi + 3]
// 006d1300  81ffffffff7f         cmp edi, 0x7fffffff
// 006d1306  7405                 je 0x6d130d
// 006d1308  b805000000           mov eax, 5
// 006d130d  2bc5                 sub eax, ebp
// 006d130f  744f                 je 0x6d1360
// 006d1311  83e801               sub eax, 1
// 006d1314  7433                 je 0x6d1349
// 006d1316  83e801               sub eax, 1
// 006d1319  7417                 je 0x6d1332
// 006d131b  8d442418             lea eax, [esp + 0x18]
// 006d131f  68cabea500           push 0xa5beca
// 006d1324  50                   push eax
// 006d1325  e8b600d5ff           call 0x4213e0
// 006d132a  83c408               add esp, 8
// 006d132d  e95cffffff           jmp 0x6d128e
// 006d1332  8d4c2418             lea ecx, [esp + 0x18]
// 006d1336  68c458aa00           push 0xaa58c4
// 006d133b  51                   push ecx
// 006d133c  e89f00d5ff           call 0x4213e0
// 006d1341  83c408               add esp, 8
// 006d1344  e945ffffff           jmp 0x6d128e
// 006d1349  8d542418             lea edx, [esp + 0x18]
// 006d134d  68b858aa00           push 0xaa58b8
// 006d1352  52                   push edx
// 006d1353  e88800d5ff           call 0x4213e0
// 006d1358  83c408               add esp, 8
// 006d135b  e92effffff           jmp 0x6d128e
// 006d1360  8d442418             lea eax, [esp + 0x18]
// 006d1364  68a858aa00           push 0xaa58a8
// 006d1369  50                   push eax
// 006d136a  e87100d5ff           call 0x4213e0
// 006d136f  83c408               add esp, 8
// 006d1372  e917ffffff           jmp 0x6d128e
// library rbxgs/v8datamodel\Lighting.cpp (function ??$to_simple_string_type@D@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
