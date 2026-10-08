// roc 2009-06 0043ed70  unit: RBX::MergeBinder  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043ed70
//
// 0043ed70  55                   push ebp
// 0043ed71  8bec                 mov ebp, esp
// 0043ed73  6aff                 push -1
// 0043ed75  6880028500           push 0x850280
// 0043ed7a  64a100000000         mov eax, dword ptr fs:[0]
// 0043ed80  50                   push eax
// 0043ed81  64892500000000       mov dword ptr fs:[0], esp
// 0043ed88  83ec24               sub esp, 0x24
// 0043ed8b  53                   push ebx
// 0043ed8c  56                   push esi
// 0043ed8d  8bf1                 mov esi, ecx
// 0043ed8f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0043ed92  57                   push edi
// 0043ed93  8965f0               mov dword ptr [ebp - 0x10], esp
// 0043ed96  8975e0               mov dword ptr [ebp - 0x20], esi
// 0043ed99  85d2                 test edx, edx
// 0043ed9b  7504                 jne 0x43eda1
// 0043ed9d  33db                 xor ebx, ebx
// 0043ed9f  eb08                 jmp 0x43eda9
// 0043eda1  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 0043eda4  2bda                 sub ebx, edx
// 0043eda6  c1fb04               sar ebx, 4
// 0043eda9  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0043edac  85ff                 test edi, edi
// 0043edae  0f8475020000         je 0x43f029
// 0043edb4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043edb7  8bc1                 mov eax, ecx
// 0043edb9  2bc2                 sub eax, edx
// 0043edbb  c1f804               sar eax, 4
// 0043edbe  baffffff0f           mov edx, 0xfffffff
// 0043edc3  2bd0                 sub edx, eax
// 0043edc5  3bd7                 cmp edx, edi
// 0043edc7  7305                 jae 0x43edce
// 0043edc9  e892150500           call 0x490360
// 0043edce  8d1438               lea edx, [eax + edi]
// 0043edd1  3bda                 cmp ebx, edx
// 0043edd3  0f835b010000         jae 0x43ef34
// 0043edd9  8bc3                 mov eax, ebx
// 0043eddb  d1e8                 shr eax, 1
// 0043eddd  b9ffffff0f           mov ecx, 0xfffffff
// 0043ede2  2bc8                 sub ecx, eax
// 0043ede4  3bcb                 cmp ecx, ebx
// 0043ede6  7304                 jae 0x43edec
// 0043ede8  33db                 xor ebx, ebx
// 0043edea  eb02                 jmp 0x43edee
// 0043edec  03d8                 add ebx, eax
// 0043edee  3bda                 cmp ebx, edx
// 0043edf0  7302                 jae 0x43edf4
// 0043edf2  8bda                 mov ebx, edx
// 0043edf4  6a00                 push 0
// 0043edf6  53                   push ebx
// 0043edf7  e854370400           call 0x482550
// 0043edfc  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0043edff  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 0043ee02  33d2                 xor edx, edx
// 0043ee04  c1f904               sar ecx, 4
// 0043ee07  83c408               add esp, 8
// 0043ee0a  894de4               mov dword ptr [ebp - 0x1c], ecx
// 0043ee0d  8955e8               mov dword ptr [ebp - 0x18], edx
// 0043ee10  8955fc               mov dword ptr [ebp - 4], edx
// 0043ee13  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0043ee16  52                   push edx
// 0043ee17  c1e104               shl ecx, 4
// 0043ee1a  03c8                 add ecx, eax
// 0043ee1c  57                   push edi
// 0043ee1d  51                   push ecx
// 0043ee1e  8bce                 mov ecx, esi
// 0043ee20  8945ec               mov dword ptr [ebp - 0x14], eax
// 0043ee23  e8d8feffff           call 0x43ed00
// 0043ee28  8b460c               mov eax, dword ptr [esi + 0xc]
// 0043ee2b  c6451400             mov byte ptr [ebp + 0x14], 0
// 0043ee2f  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0043ee32  52                   push edx
// 0043ee33  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0043ee36  52                   push edx
// 0043ee37  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0043ee3a  8d4e08               lea ecx, [esi + 8]
// 0043ee3d  51                   push ecx
// 0043ee3e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0043ee41  51                   push ecx
// 0043ee42  52                   push edx
// 0043ee43  50                   push eax
// 0043ee44  c745e801000000       mov dword ptr [ebp - 0x18], 1
// 0043ee4b  e8c0fdffff           call 0x43ec10
// 0043ee50  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 0043ee53  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043ee56  83c418               add esp, 0x18
// 0043ee59  c6451400             mov byte ptr [ebp + 0x14], 0
// 0043ee5d  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0043ee60  52                   push edx
// 0043ee61  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0043ee64  03c7                 add eax, edi
// 0043ee66  52                   push edx
// 0043ee67  c1e004               shl eax, 4
// 0043ee6a  0345ec               add eax, dword ptr [ebp - 0x14]
// 0043ee6d  8d5608               lea edx, [esi + 8]
// 0043ee70  52                   push edx
// 0043ee71  50                   push eax
// 0043ee72  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0043ee75  51                   push ecx
// 0043ee76  50                   push eax
// 0043ee77  c745e802000000       mov dword ptr [ebp - 0x18], 2
// 0043ee7e  e88dfdffff           call 0x43ec10
// 0043ee83  8b460c               mov eax, dword ptr [esi + 0xc]
// 0043ee86  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043ee89  2bc8                 sub ecx, eax
// 0043ee8b  c1f904               sar ecx, 4
// 0043ee8e  83c418               add esp, 0x18
// 0043ee91  03f9                 add edi, ecx
// 0043ee93  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0043ee9a  85c0                 test eax, eax
// 0043ee9c  741e                 je 0x43eebc
// 0043ee9e  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0043eea1  52                   push edx
// 0043eea2  8d4e08               lea ecx, [esi + 8]
// 0043eea5  51                   push ecx
// 0043eea6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043eea9  51                   push ecx
// 0043eeaa  50                   push eax
// 0043eeab  e830f4ffff           call 0x43e2e0
// 0043eeb0  8b560c               mov edx, dword ptr [esi + 0xc]
// 0043eeb3  52                   push edx
// 0043eeb4  e8799b2d00           call 0x718a32
// 0043eeb9  83c414               add esp, 0x14
// 0043eebc  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0043eebf  c1e304               shl ebx, 4
// 0043eec2  03d8                 add ebx, eax
// 0043eec4  c1e704               shl edi, 4
// 0043eec7  03f8                 add edi, eax
// 0043eec9  895e14               mov dword ptr [esi + 0x14], ebx
// 0043eecc  897e10               mov dword ptr [esi + 0x10], edi
// 0043eecf  89460c               mov dword ptr [esi + 0xc], eax
// 0043eed2  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0043eed5  64890d00000000       mov dword ptr fs:[0], ecx
// 0043eedc  5f                   pop edi
// 0043eedd  5e                   pop esi
// 0043eede  5b                   pop ebx
// 0043eedf  8be5                 mov esp, ebp
// 0043eee1  5d                   pop ebp
// 0043eee2  c21000               ret 0x10
// library rbxgs/script\ScriptEvent.cpp (function ?_Insert_n@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@2@IABUWaitingThread@YieldingThreads@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
