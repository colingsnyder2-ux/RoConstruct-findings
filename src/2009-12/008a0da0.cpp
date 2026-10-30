// roc 2009-12 008a0da0  unit: CXTPReportPaintManager  size: 1251 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a0da0
//
// 008a0da0  6aff                 push -1
// 008a0da2  68d4209600           push 0x9620d4
// 008a0da7  64a100000000         mov eax, dword ptr fs:[0]
// 008a0dad  50                   push eax
// 008a0dae  83ec50               sub esp, 0x50
// 008a0db1  a10052b600           mov eax, dword ptr [0xb65200]
// 008a0db6  33c4                 xor eax, esp
// 008a0db8  8944244c             mov dword ptr [esp + 0x4c], eax
// 008a0dbc  53                   push ebx
// 008a0dbd  55                   push ebp
// 008a0dbe  56                   push esi
// 008a0dbf  57                   push edi
// 008a0dc0  a10052b600           mov eax, dword ptr [0xb65200]
// 008a0dc5  33c4                 xor eax, esp
// 008a0dc7  50                   push eax
// 008a0dc8  8d442464             lea eax, [esp + 0x64]
// 008a0dcc  64a300000000         mov dword ptr fs:[0], eax
// 008a0dd2  8bf1                 mov esi, ecx
// 008a0dd4  89742420             mov dword ptr [esp + 0x20], esi
// 008a0dd8  e865560800           call 0x926442
// 008a0ddd  33ff                 xor edi, edi
// 008a0ddf  c7069c52a000         mov dword ptr [esi], 0xa0529c
// 008a0de5  b898019b00           mov eax, 0x9b0198
// 008a0dea  897c246c             mov dword ptr [esp + 0x6c], edi
// 008a0dee  897e24               mov dword ptr [esi + 0x24], edi
// 008a0df1  894620               mov dword ptr [esi + 0x20], eax
// 008a0df4  897e2c               mov dword ptr [esi + 0x2c], edi
// 008a0df7  894628               mov dword ptr [esi + 0x28], eax
// 008a0dfa  897e34               mov dword ptr [esi + 0x34], edi
// 008a0dfd  894630               mov dword ptr [esi + 0x30], eax
// 008a0e00  897e3c               mov dword ptr [esi + 0x3c], edi
// 008a0e03  894638               mov dword ptr [esi + 0x38], eax
// 008a0e06  8d4e40               lea ecx, [esi + 0x40]
// 008a0e09  c644246c04           mov byte ptr [esp + 0x6c], 4
// 008a0e0e  e8fddff8ff           call 0x82ee10
// 008a0e13  8d4e4c               lea ecx, [esi + 0x4c]
// 008a0e16  e8f5dff8ff           call 0x82ee10
// 008a0e1b  8d4e58               lea ecx, [esi + 0x58]
// 008a0e1e  e8eddff8ff           call 0x82ee10
// 008a0e23  8d4e64               lea ecx, [esi + 0x64]
// 008a0e26  e8e5dff8ff           call 0x82ee10
// 008a0e2b  8d4e70               lea ecx, [esi + 0x70]
// 008a0e2e  e8dddff8ff           call 0x82ee10
// 008a0e33  8d4e7c               lea ecx, [esi + 0x7c]
// 008a0e36  e8d5dff8ff           call 0x82ee10
// 008a0e3b  8d8e88000000         lea ecx, [esi + 0x88]
// 008a0e41  e8cadff8ff           call 0x82ee10
// 008a0e46  8d8e94000000         lea ecx, [esi + 0x94]
// 008a0e4c  e8bfdff8ff           call 0x82ee10
// 008a0e51  8d8ea0000000         lea ecx, [esi + 0xa0]
// 008a0e57  e8b4dff8ff           call 0x82ee10
// 008a0e5c  8d8eac000000         lea ecx, [esi + 0xac]
// 008a0e62  e8a9dff8ff           call 0x82ee10
// 008a0e67  8d8eb8000000         lea ecx, [esi + 0xb8]
// 008a0e6d  e89edff8ff           call 0x82ee10
// 008a0e72  8d8ec4000000         lea ecx, [esi + 0xc4]
// 008a0e78  e893dff8ff           call 0x82ee10
// 008a0e7d  8d8ed0000000         lea ecx, [esi + 0xd0]
// 008a0e83  e888dff8ff           call 0x82ee10
// 008a0e88  8d8edc000000         lea ecx, [esi + 0xdc]
// 008a0e8e  e87ddff8ff           call 0x82ee10
// 008a0e93  8d8ee8000000         lea ecx, [esi + 0xe8]
// 008a0e99  e872dff8ff           call 0x82ee10
// 008a0e9e  8d8ef4000000         lea ecx, [esi + 0xf4]
// 008a0ea4  e867dff8ff           call 0x82ee10
// 008a0ea9  8d8e00010000         lea ecx, [esi + 0x100]
// 008a0eaf  e85cdff8ff           call 0x82ee10
// 008a0eb4  8d8e0c010000         lea ecx, [esi + 0x10c]
// 008a0eba  e851dff8ff           call 0x82ee10
// 008a0ebf  8d8e18010000         lea ecx, [esi + 0x118]
// 008a0ec5  e846dff8ff           call 0x82ee10
// 008a0eca  8d8e24010000         lea ecx, [esi + 0x124]
// 008a0ed0  e83bdff8ff           call 0x82ee10
// 008a0ed5  8d8e30010000         lea ecx, [esi + 0x130]
// 008a0edb  e830dff8ff           call 0x82ee10
// 008a0ee0  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008a0ee6  e825dff8ff           call 0x82ee10
// 008a0eeb  8d8e48010000         lea ecx, [esi + 0x148]
// 008a0ef1  e81adff8ff           call 0x82ee10
// 008a0ef6  8d8e54010000         lea ecx, [esi + 0x154]
// 008a0efc  e82fdff8ff           call 0x82ee30
// 008a0f01  8d8e74010000         lea ecx, [esi + 0x174]
// 008a0f07  e824dff8ff           call 0x82ee30
// 008a0f0c  8d8e94010000         lea ecx, [esi + 0x194]
// 008a0f12  e819dff8ff           call 0x82ee30
// 008a0f17  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 008a0f1d  e8eedef8ff           call 0x82ee10
// 008a0f22  8d8ec0010000         lea ecx, [esi + 0x1c0]
// 008a0f28  e8e3def8ff           call 0x82ee10
// 008a0f2d  8d8ecc010000         lea ecx, [esi + 0x1cc]
// 008a0f33  e8d8def8ff           call 0x82ee10
// 008a0f38  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 008a0f3e  e8cddef8ff           call 0x82ee10
// 008a0f43  8d8ee4010000         lea ecx, [esi + 0x1e4]
// 008a0f49  e8c2def8ff           call 0x82ee10
// 008a0f4e  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008a0f54  e8b7def8ff           call 0x82ee10
// 008a0f59  8d8e14020000         lea ecx, [esi + 0x214]
// 008a0f5f  ff1574de9800         call dword ptr [0x98de74]
// 008a0f65  8d9e18020000         lea ebx, [esi + 0x218]
// 008a0f6b  8bcb                 mov ecx, ebx
// 008a0f6d  ff1574de9800         call dword ptr [0x98de74]
// 008a0f73  8d8e1c020000         lea ecx, [esi + 0x21c]
// 008a0f79  ff1574de9800         call dword ptr [0x98de74]
// 008a0f7f  8d8e20020000         lea ecx, [esi + 0x220]
// 008a0f85  ff1574de9800         call dword ptr [0x98de74]
// 008a0f8b  8d8e70020000         lea ecx, [esi + 0x270]
// 008a0f91  c644246c08           mov byte ptr [esp + 0x6c], 8
// 008a0f96  e87530f5ff           call 0x7f4010
// 008a0f9b  b848189a00           mov eax, 0x9a1848
// 008a0fa0  89be90020000         mov dword ptr [esi + 0x290], edi
// 008a0fa6  89868c020000         mov dword ptr [esi + 0x28c], eax
// 008a0fac  89be98020000         mov dword ptr [esi + 0x298], edi
// 008a0fb2  898694020000         mov dword ptr [esi + 0x294], eax
// 008a0fb8  89bea0020000         mov dword ptr [esi + 0x2a0], edi
// 008a0fbe  89869c020000         mov dword ptr [esi + 0x29c], eax
// 008a0fc4  bd01000000           mov ebp, 1
// 008a0fc9  55                   push ebp
// 008a0fca  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 008a0fd0  c64424700c           mov byte ptr [esp + 0x70], 0xc
// 008a0fd5  e866a7fcff           call 0x86b740
// 008a0fda  55                   push ebp
// 008a0fdb  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 008a0fe1  c64424700d           mov byte ptr [esp + 0x70], 0xd
// 008a0fe6  e855a7fcff           call 0x86b740
// 008a0feb  55                   push ebp
// 008a0fec  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 008a0ff2  c64424700e           mov byte ptr [esp + 0x70], 0xe
// 008a0ff7  e844a7fcff           call 0x86b740
// 008a0ffc  6a2c                 push 0x2c
// 008a0ffe  c64424700f           mov byte ptr [esp + 0x70], 0xf
// 008a1003  e85828f5ff           call 0x7f3860
// 008a1008  83c404               add esp, 4
// 008a100b  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a100f  c644246c10           mov byte ptr [esp + 0x6c], 0x10
// 008a1014  3bc7                 cmp eax, edi
// 008a1016  7409                 je 0x8a1021
// 008a1018  8bc8                 mov ecx, eax
// 008a101a  e84195ffff           call 0x89a560
// 008a101f  eb02                 jmp 0x8a1023
// 008a1021  33c0                 xor eax, eax
// 008a1023  6a08                 push 8
// 008a1025  8986e4020000         mov dword ptr [esi + 0x2e4], eax
// 008a102b  8b10                 mov edx, dword ptr [eax]
// 008a102d  6a0a                 push 0xa
// 008a102f  8bc8                 mov ecx, eax
// 008a1031  8b425c               mov eax, dword ptr [edx + 0x5c]
// 008a1034  6a0b                 push 0xb
// 008a1036  c64424780f           mov byte ptr [esp + 0x78], 0xf
// 008a103b  ffd0                 call eax
// 008a103d  b80c000000           mov eax, 0xc
// 008a1042  8bc8                 mov ecx, eax
// 008a1044  c786340100000000ff00 mov dword ptr [esi + 0x134], 0xff0000
// 008a104e  c786fc010000ffffffff mov dword ptr [esi + 0x1fc], 0xffffffff
// 008a1058  c7868002000003000000 mov dword ptr [esi + 0x280], 3
// 008a1062  898684020000         mov dword ptr [esi + 0x284], eax
// 008a1068  898e88020000         mov dword ptr [esi + 0x288], ecx
// 008a106e  89ae5c020000         mov dword ptr [esi + 0x25c], ebp
// 008a1074  c7866c02000002000000 mov dword ptr [esi + 0x26c], 2
// 008a107e  89ae7c020000         mov dword ptr [esi + 0x27c], ebp
// 008a1084  89be78020000         mov dword ptr [esi + 0x278], edi
// 008a108a  89be04020000         mov dword ptr [esi + 0x204], edi
// 008a1090  89be00020000         mov dword ptr [esi + 0x200], edi
// 008a1096  89ae08020000         mov dword ptr [esi + 0x208], ebp
// 008a109c  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 008a10a2  89ae3c020000         mov dword ptr [esi + 0x23c], ebp
// 008a10a8  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 008a10ae  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 008a10b4  89beb4020000         mov dword ptr [esi + 0x2b4], edi
// 008a10ba  c786b802000004000000 mov dword ptr [esi + 0x2b8], 4
// 008a10c4  89be30020000         mov dword ptr [esi + 0x230], edi
// 008a10ca  89ae34020000         mov dword ptr [esi + 0x234], ebp
// 008a10d0  89be2c020000         mov dword ptr [esi + 0x22c], edi
// 008a10d6  89ae0c020000         mov dword ptr [esi + 0x20c], ebp
// 008a10dc  89ae10020000         mov dword ptr [esi + 0x210], ebp
// 008a10e2  e8b9d7fcff           call 0x86e8a0
// 008a10e7  8b10                 mov edx, dword ptr [eax]
// 008a10e9  6851250000           push 0x2551
// 008a10ee  8d8e14020000         lea ecx, [esi + 0x214]
// 008a10f4  51                   push ecx
// 008a10f5  8bc8                 mov ecx, eax
// 008a10f7  8b4208               mov eax, dword ptr [edx + 8]
// 008a10fa  ffd0                 call eax
// 008a10fc  e89fd7fcff           call 0x86e8a0
// 008a1101  8b10                 mov edx, dword ptr [eax]
// 008a1103  6850250000           push 0x2550
// 008a1108  8d8e1c020000         lea ecx, [esi + 0x21c]
// 008a110e  51                   push ecx
// 008a110f  8bc8                 mov ecx, eax
// 008a1111  8b4208               mov eax, dword ptr [edx + 8]
// 008a1114  ffd0                 call eax
// 008a1116  e885d7fcff           call 0x86e8a0
// 008a111b  8b10                 mov edx, dword ptr [eax]
// 008a111d  6852250000           push 0x2552
// 008a1122  8d8e20020000         lea ecx, [esi + 0x220]
// 008a1128  51                   push ecx
// 008a1129  8bc8                 mov ecx, eax
// 008a112b  8b4208               mov eax, dword ptr [edx + 8]
// 008a112e  ffd0                 call eax
// 008a1130  e86bd7fcff           call 0x86e8a0
// 008a1135  8b10                 mov edx, dword ptr [eax]
// 008a1137  6853250000           push 0x2553
// 008a113c  8bc8                 mov ecx, eax
// 008a113e  8b4208               mov eax, dword ptr [edx + 8]
// 008a1141  53                   push ebx
// 008a1142  ffd0                 call eax
// 008a1144  85c0                 test eax, eax
// 008a1146  740d                 je 0x8a1155
// 008a1148  6868619a00           push 0x9a6168
// 008a114d  8bcb                 mov ecx, ebx
// 008a114f  ff1574d29800         call dword ptr [0x98d274]
// 008a1155  6a02                 push 2
// 008a1157  6a0a                 push 0xa
// 008a1159  57                   push edi
// 008a115a  6a0a                 push 0xa
// 008a115c  8d8e48020000         lea ecx, [esi + 0x248]
// 008a1162  51                   push ecx
// 008a1163  89be24020000         mov dword ptr [esi + 0x224], edi
// 008a1169  ff1538ca9800         call dword ptr [0x98ca38]
// 008a116f  57                   push edi
// 008a1170  8d542428             lea edx, [esp + 0x28]
// 008a1174  52                   push edx
// 008a1175  6a3c                 push 0x3c
// 008a1177  6a1f                 push 0x1f
// 008a1179  c7865802000014000000 mov dword ptr [esi + 0x258], 0x14
// 008a1183  89ae28020000         mov dword ptr [esi + 0x228], ebp
// 008a1189  ff1500cc9800         call dword ptr [0x98cc00]
// 008a118f  8d442424             lea eax, [esp + 0x24]
// 008a1193  50                   push eax
// 008a1194  ff1528b19800         call dword ptr [0x98b128]
// 008a119a  50                   push eax
// 008a119b  8d4e38               lea ecx, [esi + 0x38]
// 008a119e  e8872cf5ff           call 0x7f3e2a
// 008a11a3  8d4c2424             lea ecx, [esp + 0x24]
// 008a11a7  51                   push ecx
// 008a11a8  8bce                 mov ecx, esi
// 008a11aa  e8a1c9ffff           call 0x89db50
// 008a11af  8d542424             lea edx, [esp + 0x24]
// 008a11b3  52                   push edx
// 008a11b4  8bce                 mov ecx, esi
// 008a11b6  e8a5c8ffff           call 0x89da60
// 008a11bb  55                   push ebp
// 008a11bc  57                   push edi
// 008a11bd  6a19                 push 0x19
// 008a11bf  6a0c                 push 0xc
// 008a11c1  6a0c                 push 0xc
// 008a11c3  8d8e70020000         lea ecx, [esi + 0x270]
// 008a11c9  e83c2ef5ff           call 0x7f400a
// 008a11ce  bb18229a00           mov ebx, 0x9a2218
// 008a11d3  897c2418             mov dword ptr [esp + 0x18], edi
// 008a11d7  895c2414             mov dword ptr [esp + 0x14], ebx
// 008a11db  c644246c11           mov byte ptr [esp + 0x6c], 0x11
// 008a11e0  e8bbd6fcff           call 0x86e8a0
// 008a11e5  8b10                 mov edx, dword ptr [eax]
// 008a11e7  8b5214               mov edx, dword ptr [edx + 0x14]
// 008a11ea  684e250000           push 0x254e
// 008a11ef  8d4c2418             lea ecx, [esp + 0x18]
// 008a11f3  51                   push ecx
// 008a11f4  8bc8                 mov ecx, eax
// 008a11f6  ffd2                 call edx
// 008a11f8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a11fc  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008a1202  68ff00ff00           push 0xff00ff
// 008a1207  51                   push ecx
// 008a1208  50                   push eax
// 008a1209  e81029f5ff           call 0x7f3b1e
// 008a120e  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a1214  8b0a                 mov ecx, dword ptr [edx]
// 008a1216  e8051fb7ff           call 0x413120
// 008a121b  8bce                 mov ecx, esi
// 008a121d  89aea8020000         mov dword ptr [esi + 0x2a8], ebp
// 008a1223  89beac020000         mov dword ptr [esi + 0x2ac], edi
// 008a1229  89beb0020000         mov dword ptr [esi + 0x2b0], edi
// 008a122f  c786a40200000d000000 mov dword ptr [esi + 0x2a4], 0xd
// 008a1239  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 008a123f  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 008a1245  89be38020000         mov dword ptr [esi + 0x238], edi
// 008a124b  e820eeffff           call 0x8a0070
// 008a1250  8d4c2414             lea ecx, [esp + 0x14]
// 008a1254  c644246c0f           mov byte ptr [esp + 0x6c], 0xf
// 008a1259  895c2414             mov dword ptr [esp + 0x14], ebx
// 008a125d  e8cedfb6ff           call 0x40f230
// 008a1262  8bc6                 mov eax, esi
// 008a1264  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008a1268  64890d00000000       mov dword ptr fs:[0], ecx
// 008a126f  59                   pop ecx
// 008a1270  5f                   pop edi
// 008a1271  5e                   pop esi
// 008a1272  5d                   pop ebp
// 008a1273  5b                   pop ebx
// 008a1274  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a1278  33cc                 xor ecx, esp
// 008a127a  e81b41f5ff           call 0x7f539a
// 008a127f  83c45c               add esp, 0x5c
// 008a1282  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp