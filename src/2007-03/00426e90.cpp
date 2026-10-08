// roc 2007-03 00426e90  unit: seg_00420000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00426e90
//
// 00426e90  83ec08               sub esp, 8
// 00426e93  56                   push esi
// 00426e94  8bf1                 mov esi, ecx
// 00426e96  8b5604               mov edx, dword ptr [esi + 4]
// 00426e99  85d2                 test edx, edx
// 00426e9b  57                   push edi
// 00426e9c  7504                 jne 0x426ea2
// 00426e9e  33c9                 xor ecx, ecx
// 00426ea0  eb08                 jmp 0x426eaa
// 00426ea2  8b4e08               mov ecx, dword ptr [esi + 8]
// 00426ea5  2bca                 sub ecx, edx
// 00426ea7  c1f903               sar ecx, 3
// 00426eaa  85d2                 test edx, edx
// 00426eac  743d                 je 0x426eeb
// 00426eae  8b460c               mov eax, dword ptr [esi + 0xc]
// 00426eb1  2bc2                 sub eax, edx
// 00426eb3  c1f803               sar eax, 3
// 00426eb6  3bc8                 cmp ecx, eax
// 00426eb8  7331                 jae 0x426eeb
// 00426eba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00426ebe  8b542414             mov edx, dword ptr [esp + 0x14]
// 00426ec2  8b7e08               mov edi, dword ptr [esi + 8]
// 00426ec5  c644240800           mov byte ptr [esp + 8], 0
// 00426eca  8b442408             mov eax, dword ptr [esp + 8]
// 00426ece  50                   push eax
// 00426ecf  51                   push ecx
// 00426ed0  56                   push esi
// 00426ed1  52                   push edx
// 00426ed2  6a01                 push 1
// 00426ed4  57                   push edi
// 00426ed5  e8d68a0700           call 0x49f9b0
// 00426eda  83c418               add esp, 0x18
// 00426edd  83c708               add edi, 8
// 00426ee0  897e08               mov dword ptr [esi + 8], edi
// 00426ee3  5f                   pop edi
// 00426ee4  5e                   pop esi
// 00426ee5  83c408               add esp, 8
// 00426ee8  c20400               ret 4
// 00426eeb  8b7e08               mov edi, dword ptr [esi + 8]
// 00426eee  3bd7                 cmp edx, edi
// 00426ef0  7606                 jbe 0x426ef8
// 00426ef2  ff1544e97700         call dword ptr [0x77e944]
// 00426ef8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00426efc  50                   push eax
// 00426efd  57                   push edi
// 00426efe  56                   push esi
// 00426eff  8d4c2414             lea ecx, [esp + 0x14]
// 00426f03  51                   push ecx
// 00426f04  8bce                 mov ecx, esi
// 00426f06  e8e5eaffff           call 0x4259f0
// 00426f0b  5f                   pop edi
// 00426f0c  5e                   pop esi
// 00426f0d  83c408               add esp, 8
// 00426f10  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?push_back@?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@VPartInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
