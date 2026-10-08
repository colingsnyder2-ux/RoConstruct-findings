// roc 2007-03 004e5970  unit: seg_004e0000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e5970
//
// 004e5970  83ec08               sub esp, 8
// 004e5973  56                   push esi
// 004e5974  8bf1                 mov esi, ecx
// 004e5976  8b5604               mov edx, dword ptr [esi + 4]
// 004e5979  85d2                 test edx, edx
// 004e597b  57                   push edi
// 004e597c  7504                 jne 0x4e5982
// 004e597e  33c9                 xor ecx, ecx
// 004e5980  eb08                 jmp 0x4e598a
// 004e5982  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e5985  2bca                 sub ecx, edx
// 004e5987  c1f902               sar ecx, 2
// 004e598a  85d2                 test edx, edx
// 004e598c  743d                 je 0x4e59cb
// 004e598e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004e5991  2bc2                 sub eax, edx
// 004e5993  c1f802               sar eax, 2
// 004e5996  3bc8                 cmp ecx, eax
// 004e5998  7331                 jae 0x4e59cb
// 004e599a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e599e  8b542414             mov edx, dword ptr [esp + 0x14]
// 004e59a2  8b7e08               mov edi, dword ptr [esi + 8]
// 004e59a5  c644240800           mov byte ptr [esp + 8], 0
// 004e59aa  8b442408             mov eax, dword ptr [esp + 8]
// 004e59ae  50                   push eax
// 004e59af  51                   push ecx
// 004e59b0  56                   push esi
// 004e59b1  52                   push edx
// 004e59b2  6a01                 push 1
// 004e59b4  57                   push edi
// 004e59b5  e876deffff           call 0x4e3830
// 004e59ba  83c418               add esp, 0x18
// 004e59bd  83c704               add edi, 4
// 004e59c0  897e08               mov dword ptr [esi + 8], edi
// 004e59c3  5f                   pop edi
// 004e59c4  5e                   pop esi
// 004e59c5  83c408               add esp, 8
// 004e59c8  c20400               ret 4
// 004e59cb  8b7e08               mov edi, dword ptr [esi + 8]
// 004e59ce  3bd7                 cmp edx, edi
// 004e59d0  7606                 jbe 0x4e59d8
// 004e59d2  ff1544e97700         call dword ptr [0x77e944]
// 004e59d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e59dc  50                   push eax
// 004e59dd  57                   push edi
// 004e59de  56                   push esi
// 004e59df  8d4c2414             lea ecx, [esp + 0x14]
// 004e59e3  51                   push ecx
// 004e59e4  8bce                 mov ecx, esi
// 004e59e6  e885fbffff           call 0x4e5570
// 004e59eb  5f                   pop edi
// 004e59ec  5e                   pop esi
// 004e59ed  83c408               add esp, 8
// 004e59f0  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?push_back@?$vector@W4CameraType@Camera@RBX@@V?$allocator@W4CameraType@Camera@RBX@@@std@@@std@@QAEXABW4CameraType@Camera@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
