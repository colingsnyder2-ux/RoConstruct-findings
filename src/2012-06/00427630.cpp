// roc 2012-06 00427630  unit: CInsertObjectDialog  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00427630
//
// 00427630  6aff                 push -1
// 00427632  680361ac00           push 0xac6103
// 00427637  64a100000000         mov eax, dword ptr fs:[0]
// 0042763d  50                   push eax
// 0042763e  64892500000000       mov dword ptr fs:[0], esp
// 00427645  51                   push ecx
// 00427646  56                   push esi
// 00427647  57                   push edi
// 00427648  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0042764c  8b07                 mov eax, dword ptr [edi]
// 0042764e  6a00                 push 0
// 00427650  68e801d600           push 0xd601e8
// 00427655  681c03d600           push 0xd6031c
// 0042765a  8bf1                 mov esi, ecx
// 0042765c  6a00                 push 0
// 0042765e  50                   push eax
// 0042765f  8974241c             mov dword ptr [esp + 0x1c], esi
// 00427663  e8e0bd5500           call 0x983448
// 00427668  8906                 mov dword ptr [esi], eax
// 0042766a  8b4704               mov eax, dword ptr [edi + 4]
// 0042766d  83c414               add esp, 0x14
// 00427670  8d4e04               lea ecx, [esi + 4]
// 00427673  8901                 mov dword ptr [ecx], eax
// 00427675  85c0                 test eax, eax
// 00427677  740c                 je 0x427685
// 00427679  83c004               add eax, 4
// 0042767c  ba01000000           mov edx, 1
// 00427681  f00fc110             lock xadd dword ptr [eax], edx
// 00427685  833e00               cmp dword ptr [esi], 0
// 00427688  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00427690  7517                 jne 0x4276a9
// 00427692  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0042769a  8d44241c             lea eax, [esp + 0x1c]
// 0042769e  50                   push eax
// 0042769f  c644241801           mov byte ptr [esp + 0x18], 1
// 004276a4  e8f7affdff           call 0x4026a0
// 004276a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004276ad  5f                   pop edi
// 004276ae  8bc6                 mov eax, esi
// 004276b0  5e                   pop esi
// 004276b1  64890d00000000       mov dword ptr fs:[0], ecx
// 004276b8  83c410               add esp, 0x10
// 004276bb  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VObject@RBX@@@?$shared_ptr@VInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VObject@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
