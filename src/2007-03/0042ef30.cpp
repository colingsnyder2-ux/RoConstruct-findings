// roc 2007-03 0042ef30  unit: seg_00420000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042ef30
//
// 0042ef30  83ec08               sub esp, 8
// 0042ef33  56                   push esi
// 0042ef34  8bf1                 mov esi, ecx
// 0042ef36  8b5604               mov edx, dword ptr [esi + 4]
// 0042ef39  85d2                 test edx, edx
// 0042ef3b  57                   push edi
// 0042ef3c  7504                 jne 0x42ef42
// 0042ef3e  33c9                 xor ecx, ecx
// 0042ef40  eb08                 jmp 0x42ef4a
// 0042ef42  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042ef45  2bca                 sub ecx, edx
// 0042ef47  c1f903               sar ecx, 3
// 0042ef4a  85d2                 test edx, edx
// 0042ef4c  743d                 je 0x42ef8b
// 0042ef4e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0042ef51  2bc2                 sub eax, edx
// 0042ef53  c1f803               sar eax, 3
// 0042ef56  3bc8                 cmp ecx, eax
// 0042ef58  7331                 jae 0x42ef8b
// 0042ef5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042ef5e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042ef62  8b7e08               mov edi, dword ptr [esi + 8]
// 0042ef65  c644240800           mov byte ptr [esp + 8], 0
// 0042ef6a  8b442408             mov eax, dword ptr [esp + 8]
// 0042ef6e  50                   push eax
// 0042ef6f  51                   push ecx
// 0042ef70  56                   push esi
// 0042ef71  52                   push edx
// 0042ef72  6a01                 push 1
// 0042ef74  57                   push edi
// 0042ef75  e856f9ffff           call 0x42e8d0
// 0042ef7a  83c418               add esp, 0x18
// 0042ef7d  83c708               add edi, 8
// 0042ef80  897e08               mov dword ptr [esi + 8], edi
// 0042ef83  5f                   pop edi
// 0042ef84  5e                   pop esi
// 0042ef85  83c408               add esp, 8
// 0042ef88  c20400               ret 4
// 0042ef8b  8b7e08               mov edi, dword ptr [esi + 8]
// 0042ef8e  3bd7                 cmp edx, edi
// 0042ef90  7606                 jbe 0x42ef98
// 0042ef92  ff1544e97700         call dword ptr [0x77e944]
// 0042ef98  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042ef9c  50                   push eax
// 0042ef9d  57                   push edi
// 0042ef9e  56                   push esi
// 0042ef9f  8d4c2414             lea ecx, [esp + 0x14]
// 0042efa3  51                   push ecx
// 0042efa4  8bce                 mov ecx, esi
// 0042efa6  e855feffff           call 0x42ee00
// 0042efab  5f                   pop edi
// 0042efac  5e                   pop esi
// 0042efad  83c408               add esp, 8
// 0042efb0  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?push_back@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
