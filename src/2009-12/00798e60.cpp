// roc 2009-12 00798e60  unit: lua_exception  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00798e60
//
// 00798e60  55                   push ebp
// 00798e61  8bec                 mov ebp, esp
// 00798e63  6aff                 push -1
// 00798e65  68b0459500           push 0x9545b0
// 00798e6a  64a100000000         mov eax, dword ptr fs:[0]
// 00798e70  50                   push eax
// 00798e71  64892500000000       mov dword ptr fs:[0], esp
// 00798e78  83ec30               sub esp, 0x30
// 00798e7b  53                   push ebx
// 00798e7c  56                   push esi
// 00798e7d  8bf1                 mov esi, ecx
// 00798e7f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00798e82  57                   push edi
// 00798e83  8965f0               mov dword ptr [ebp - 0x10], esp
// 00798e86  8975e0               mov dword ptr [ebp - 0x20], esi
// 00798e89  85c0                 test eax, eax
// 00798e8b  7505                 jne 0x798e92
// 00798e8d  8945ec               mov dword ptr [ebp - 0x14], eax
// 00798e90  eb19                 jmp 0x798eab
// 00798e92  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00798e95  2bc8                 sub ecx, eax
// 00798e97  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00798e9c  f7e9                 imul ecx
// 00798e9e  c1fa02               sar edx, 2
// 00798ea1  8bc2                 mov eax, edx
// 00798ea3  c1e81f               shr eax, 0x1f
// 00798ea6  03c2                 add eax, edx
// 00798ea8  8945ec               mov dword ptr [ebp - 0x14], eax
// 00798eab  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00798eae  85ff                 test edi, edi
// 00798eb0  0f84e9020000         je 0x79919f
// 00798eb6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00798eb9  8bcb                 mov ecx, ebx
// 00798ebb  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 00798ebe  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00798ec3  f7e9                 imul ecx
// 00798ec5  c1fa02               sar edx, 2
// 00798ec8  8bc2                 mov eax, edx
// 00798eca  c1e81f               shr eax, 0x1f
// 00798ecd  03c2                 add eax, edx
// 00798ecf  b9aaaaaa0a           mov ecx, 0xaaaaaaa
// 00798ed4  2bc8                 sub ecx, eax
// 00798ed6  3bcf                 cmp ecx, edi
// 00798ed8  7305                 jae 0x798edf
// 00798eda  e88192caff           call 0x442160
// 00798edf  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00798ee2  03c7                 add eax, edi
// 00798ee4  3bc8                 cmp ecx, eax
// 00798ee6  0f838e010000         jae 0x79907a
// 00798eec  8bd1                 mov edx, ecx
// 00798eee  d1ea                 shr edx, 1
// 00798ef0  bbaaaaaa0a           mov ebx, 0xaaaaaaa
// 00798ef5  2bda                 sub ebx, edx
// 00798ef7  3bd9                 cmp ebx, ecx
// 00798ef9  730c                 jae 0x798f07
// 00798efb  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 00798f02  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00798f05  eb05                 jmp 0x798f0c
// 00798f07  03ca                 add ecx, edx
// 00798f09  894dec               mov dword ptr [ebp - 0x14], ecx
// 00798f0c  3bc8                 cmp ecx, eax
// 00798f0e  7305                 jae 0x798f15
// 00798f10  8945ec               mov dword ptr [ebp - 0x14], eax
// 00798f13  8bc8                 mov ecx, eax
// 00798f15  6a00                 push 0
// 00798f17  51                   push ecx
// 00798f18  e863efffff           call 0x797e80
// 00798f1d  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00798f20  2b560c               sub edx, dword ptr [esi + 0xc]
// 00798f23  8bc8                 mov ecx, eax
// 00798f25  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00798f2a  f7ea                 imul edx
// 00798f2c  c1fa02               sar edx, 2
// 00798f2f  8bda                 mov ebx, edx
// 00798f31  33c0                 xor eax, eax
// 00798f33  83c408               add esp, 8
// 00798f36  c1eb1f               shr ebx, 0x1f
// 00798f39  03da                 add ebx, edx
// 00798f3b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00798f3e  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00798f41  8945fc               mov dword ptr [ebp - 4], eax
// 00798f44  52                   push edx
// 00798f45  894de8               mov dword ptr [ebp - 0x18], ecx
// 00798f48  8d045b               lea eax, [ebx + ebx*2]
// 00798f4b  8d0cc1               lea ecx, [ecx + eax*8]
// 00798f4e  57                   push edi
// 00798f4f  51                   push ecx
// 00798f50  8bce                 mov ecx, esi
// 00798f52  895ddc               mov dword ptr [ebp - 0x24], ebx
// 00798f55  e8d6faffff           call 0x798a30
// 00798f5a  8b460c               mov eax, dword ptr [esi + 0xc]
// 00798f5d  c6451400             mov byte ptr [ebp + 0x14], 0
// 00798f61  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00798f64  52                   push edx
// 00798f65  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00798f68  52                   push edx
// 00798f69  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00798f6c  8d4e08               lea ecx, [esi + 8]
// 00798f6f  51                   push ecx
// 00798f70  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00798f73  51                   push ecx
// 00798f74  52                   push edx
// 00798f75  50                   push eax
// 00798f76  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 00798f7d  e80ef6ffff           call 0x798590
// 00798f82  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00798f85  8b4610               mov eax, dword ptr [esi + 0x10]
// 00798f88  83c418               add esp, 0x18
// 00798f8b  03df                 add ebx, edi
// 00798f8d  8d0c5b               lea ecx, [ebx + ebx*2]
// 00798f90  8d0cca               lea ecx, [edx + ecx*8]
// 00798f93  c6451400             mov byte ptr [ebp + 0x14], 0
// 00798f97  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00798f9a  52                   push edx
// 00798f9b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00798f9e  52                   push edx
// 00798f9f  8d5608               lea edx, [esi + 8]
// 00798fa2  52                   push edx
// 00798fa3  51                   push ecx
// 00798fa4  50                   push eax
// 00798fa5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00798fa8  50                   push eax
// 00798fa9  c745e402000000       mov dword ptr [ebp - 0x1c], 2
// 00798fb0  e8dbf5ffff           call 0x798590
// 00798fb5  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00798fb8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00798fbb  2bcb                 sub ecx, ebx
// 00798fbd  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00798fc2  f7e9                 imul ecx
// 00798fc4  c1fa02               sar edx, 2
// 00798fc7  8bca                 mov ecx, edx
// 00798fc9  c1e91f               shr ecx, 0x1f
// 00798fcc  03ca                 add ecx, edx
// 00798fce  83c418               add esp, 0x18
// 00798fd1  03f9                 add edi, ecx
// 00798fd3  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00798fda  85db                 test ebx, ebx
// 00798fdc  741e                 je 0x798ffc
// 00798fde  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00798fe1  52                   push edx
// 00798fe2  8d4608               lea eax, [esi + 8]
// 00798fe5  50                   push eax
// 00798fe6  8b4610               mov eax, dword ptr [esi + 0x10]
// 00798fe9  50                   push eax
// 00798fea  53                   push ebx
// 00798feb  e860b8f0ff           call 0x6a4850
// 00798ff0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00798ff3  51                   push ecx
// 00798ff4  e861a80500           call 0x7f385a
// 00798ff9  83c414               add esp, 0x14
// 00798ffc  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00798fff  8d1440               lea edx, [eax + eax*2]
// 00799002  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00799005  8d0cd0               lea ecx, [eax + edx*8]
// 00799008  8d147f               lea edx, [edi + edi*2]
// 0079900b  894e14               mov dword ptr [esi + 0x14], ecx
// 0079900e  8d0cd0               lea ecx, [eax + edx*8]
// 00799011  894e10               mov dword ptr [esi + 0x10], ecx
// 00799014  89460c               mov dword ptr [esi + 0xc], eax
// 00799017  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0079901a  64890d00000000       mov dword ptr fs:[0], ecx
// 00799021  5f                   pop edi
// 00799022  5e                   pop esi
// 00799023  5b                   pop ebx
// 00799024  8be5                 mov esp, ebp
// 00799026  5d                   pop ebp
// 00799027  c21000               ret 0x10
// library openrbx-client/App\script\ScriptEvent.cpp (function ?_Insert_n@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@2@IABUWaitingThread@YieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
