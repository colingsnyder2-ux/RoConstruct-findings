// roc 2009-12 008e1100  unit: CXTPOffice2007Image  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1100
//
// 008e1100  6aff                 push -1
// 008e1102  68bb5b9600           push 0x965bbb
// 008e1107  64a100000000         mov eax, dword ptr fs:[0]
// 008e110d  50                   push eax
// 008e110e  83ec18               sub esp, 0x18
// 008e1111  56                   push esi
// 008e1112  a10052b600           mov eax, dword ptr [0xb65200]
// 008e1117  33c4                 xor eax, esp
// 008e1119  50                   push eax
// 008e111a  8d442420             lea eax, [esp + 0x20]
// 008e111e  64a300000000         mov dword ptr fs:[0], eax
// 008e1124  8bf1                 mov esi, ecx
// 008e1126  51                   push ecx
// 008e1127  8d442438             lea eax, [esp + 0x38]
// 008e112b  8bcc                 mov ecx, esp
// 008e112d  8964241c             mov dword ptr [esp + 0x1c], esp
// 008e1131  50                   push eax
// 008e1132  c744243001000000     mov dword ptr [esp + 0x30], 1
// 008e113a  ff1594de9800         call dword ptr [0x98de94]
// 008e1140  51                   push ecx
// 008e1141  8d542438             lea edx, [esp + 0x38]
// 008e1145  8bcc                 mov ecx, esp
// 008e1147  89642424             mov dword ptr [esp + 0x24], esp
// 008e114b  52                   push edx
// 008e114c  c644243402           mov byte ptr [esp + 0x34], 2
// 008e1151  ff1594de9800         call dword ptr [0x98de94]
// 008e1157  8d442410             lea eax, [esp + 0x10]
// 008e115b  50                   push eax
// 008e115c  8bce                 mov ecx, esi
// 008e115e  c644243401           mov byte ptr [esp + 0x34], 1
// 008e1163  e818faffff           call 0x8e0b80
// 008e1168  8d4c2408             lea ecx, [esp + 8]
// 008e116c  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008e1172  84c0                 test al, al
// 008e1174  7434                 je 0x8e11aa
// 008e1176  8d4c2408             lea ecx, [esp + 8]
// 008e117a  ff15c0de9800         call dword ptr [0x98dec0]
// 008e1180  8d4c2430             lea ecx, [esp + 0x30]
// 008e1184  ff15c0de9800         call dword ptr [0x98dec0]
// 008e118a  8d4c2434             lea ecx, [esp + 0x34]
// 008e118e  ff15c0de9800         call dword ptr [0x98dec0]
// 008e1194  83c8ff               or eax, 0xffffffff
// 008e1197  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e119b  64890d00000000       mov dword ptr fs:[0], ecx
// 008e11a2  59                   pop ecx
// 008e11a3  5e                   pop esi
// 008e11a4  83c424               add esp, 0x24
// 008e11a7  c20800               ret 8
// 008e11aa  33c0                 xor eax, eax
// 008e11ac  8d4c240c             lea ecx, [esp + 0xc]
// 008e11b0  51                   push ecx
// 008e11b1  8d542414             lea edx, [esp + 0x14]
// 008e11b5  89442418             mov dword ptr [esp + 0x18], eax
// 008e11b9  89442414             mov dword ptr [esp + 0x14], eax
// 008e11bd  89442410             mov dword ptr [esp + 0x10], eax
// 008e11c1  52                   push edx
// 008e11c2  8d44241c             lea eax, [esp + 0x1c]
// 008e11c6  50                   push eax
// 008e11c7  683cbea000           push 0xa0be3c
// 008e11cc  8d4c2418             lea ecx, [esp + 0x18]
// 008e11d0  ff1580de9800         call dword ptr [0x98de80]
// 008e11d6  50                   push eax
// 008e11d7  ff1570b89800         call dword ptr [0x98b870]
// 008e11dd  0fb6742420           movzx esi, byte ptr [esp + 0x20]
// 008e11e2  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 008e11e7  0fb6542428           movzx edx, byte ptr [esp + 0x28]
// 008e11ec  c1e608               shl esi, 8
// 008e11ef  0bf1                 or esi, ecx
// 008e11f1  c1e608               shl esi, 8
// 008e11f4  83c414               add esp, 0x14
// 008e11f7  8d4c2408             lea ecx, [esp + 8]
// 008e11fb  0bf2                 or esi, edx
// 008e11fd  ff15c0de9800         call dword ptr [0x98dec0]
// 008e1203  8d4c2430             lea ecx, [esp + 0x30]
// 008e1207  ff15c0de9800         call dword ptr [0x98dec0]
// 008e120d  8d4c2434             lea ecx, [esp + 0x34]
// 008e1211  ff15c0de9800         call dword ptr [0x98dec0]
// 008e1217  8bc6                 mov eax, esi
// 008e1219  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e121d  64890d00000000       mov dword ptr fs:[0], ecx
// 008e1224  59                   pop ecx
// 008e1225  5e                   pop esi
// 008e1226  83c424               add esp, 0x24
// 008e1229  c20800               ret 8
// copied from an identical function in another client (function ?GetImageColor@CXTPOffice2007Images@@QAEKV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp