// roc 2007-03 00445690  unit: seg_00440000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00445690
//
// 00445690  83ec08               sub esp, 8
// 00445693  56                   push esi
// 00445694  8bf1                 mov esi, ecx
// 00445696  8b5604               mov edx, dword ptr [esi + 4]
// 00445699  85d2                 test edx, edx
// 0044569b  57                   push edi
// 0044569c  7504                 jne 0x4456a2
// 0044569e  33c9                 xor ecx, ecx
// 004456a0  eb08                 jmp 0x4456aa
// 004456a2  8b4e08               mov ecx, dword ptr [esi + 8]
// 004456a5  2bca                 sub ecx, edx
// 004456a7  c1f902               sar ecx, 2
// 004456aa  85d2                 test edx, edx
// 004456ac  743d                 je 0x4456eb
// 004456ae  8b460c               mov eax, dword ptr [esi + 0xc]
// 004456b1  2bc2                 sub eax, edx
// 004456b3  c1f802               sar eax, 2
// 004456b6  3bc8                 cmp ecx, eax
// 004456b8  7331                 jae 0x4456eb
// 004456ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004456be  8b542414             mov edx, dword ptr [esp + 0x14]
// 004456c2  8b7e08               mov edi, dword ptr [esi + 8]
// 004456c5  c644240800           mov byte ptr [esp + 8], 0
// 004456ca  8b442408             mov eax, dword ptr [esp + 8]
// 004456ce  50                   push eax
// 004456cf  51                   push ecx
// 004456d0  56                   push esi
// 004456d1  52                   push edx
// 004456d2  6a01                 push 1
// 004456d4  57                   push edi
// 004456d5  e8362c1300           call 0x578310
// 004456da  83c418               add esp, 0x18
// 004456dd  83c704               add edi, 4
// 004456e0  897e08               mov dword ptr [esi + 8], edi
// 004456e3  5f                   pop edi
// 004456e4  5e                   pop esi
// 004456e5  83c408               add esp, 8
// 004456e8  c20400               ret 4
// 004456eb  8b7e08               mov edi, dword ptr [esi + 8]
// 004456ee  3bd7                 cmp edx, edi
// 004456f0  7606                 jbe 0x4456f8
// 004456f2  ff1544e97700         call dword ptr [0x77e944]
// 004456f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 004456fc  50                   push eax
// 004456fd  57                   push edi
// 004456fe  56                   push esi
// 004456ff  8d4c2414             lea ecx, [esp + 0x14]
// 00445703  51                   push ecx
// 00445704  8bce                 mov ecx, esi
// 00445706  e8f5feffff           call 0x445600
// 0044570b  5f                   pop edi
// 0044570c  5e                   pop esi
// 0044570d  83c408               add esp, 8
// 00445710  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?push_back@?$vector@W4CameraType@Camera@RBX@@V?$allocator@W4CameraType@Camera@RBX@@@std@@@std@@QAEXABW4CameraType@Camera@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
