// roc 2007-03 00585080  unit: seg_00580000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585080
//
// 00585080  83ec08               sub esp, 8
// 00585083  53                   push ebx
// 00585084  55                   push ebp
// 00585085  56                   push esi
// 00585086  57                   push edi
// 00585087  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0058508b  85ff                 test edi, edi
// 0058508d  8bf1                 mov esi, ecx
// 0058508f  8b4604               mov eax, dword ptr [esi + 4]
// 00585092  8b28                 mov ebp, dword ptr [eax]
// 00585094  7404                 je 0x58509a
// 00585096  3bfe                 cmp edi, esi
// 00585098  7406                 je 0x5850a0
// 0058509a  ff1544e97700         call dword ptr [0x77e944]
// 005850a0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005850a4  3bdd                 cmp ebx, ebp
// 005850a6  7559                 jne 0x585101
// 005850a8  8b442428             mov eax, dword ptr [esp + 0x28]
// 005850ac  85c0                 test eax, eax
// 005850ae  8b6e04               mov ebp, dword ptr [esi + 4]
// 005850b1  7404                 je 0x5850b7
// 005850b3  3bc6                 cmp eax, esi
// 005850b5  7406                 je 0x5850bd
// 005850b7  ff1544e97700         call dword ptr [0x77e944]
// 005850bd  396c242c             cmp dword ptr [esp + 0x2c], ebp
// 005850c1  753e                 jne 0x585101
// 005850c3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005850c6  8b5104               mov edx, dword ptr [ecx + 4]
// 005850c9  52                   push edx
// 005850ca  8bce                 mov ecx, esi
// 005850cc  e8bffcffff           call 0x584d90
// 005850d1  8b4604               mov eax, dword ptr [esi + 4]
// 005850d4  894004               mov dword ptr [eax + 4], eax
// 005850d7  8b4604               mov eax, dword ptr [esi + 4]
// 005850da  c7460800000000       mov dword ptr [esi + 8], 0
// 005850e1  8900                 mov dword ptr [eax], eax
// 005850e3  8b4604               mov eax, dword ptr [esi + 4]
// 005850e6  894008               mov dword ptr [eax + 8], eax
// 005850e9  8b4604               mov eax, dword ptr [esi + 4]
// 005850ec  8b08                 mov ecx, dword ptr [eax]
// 005850ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005850f2  5f                   pop edi
// 005850f3  8930                 mov dword ptr [eax], esi
// 005850f5  5e                   pop esi
// 005850f6  5d                   pop ebp
// 005850f7  894804               mov dword ptr [eax + 4], ecx
// 005850fa  5b                   pop ebx
// 005850fb  83c408               add esp, 8
// 005850fe  c21400               ret 0x14
// 00585101  85ff                 test edi, edi
// 00585103  7406                 je 0x58510b
// 00585105  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 00585109  7406                 je 0x585111
// 0058510b  ff1544e97700         call dword ptr [0x77e944]
// 00585111  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 00585115  7421                 je 0x585138
// 00585117  8d4c2420             lea ecx, [esp + 0x20]
// 0058511b  e8e0c00600           call 0x5f1200
// 00585120  53                   push ebx
// 00585121  57                   push edi
// 00585122  8d542418             lea edx, [esp + 0x18]
// 00585126  52                   push edx
// 00585127  8bce                 mov ecx, esi
// 00585129  e8a2f8ffff           call 0x5849d0
// 0058512e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00585132  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00585136  ebc9                 jmp 0x585101
// 00585138  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058513c  8938                 mov dword ptr [eax], edi
// 0058513e  5f                   pop edi
// 0058513f  5e                   pop esi
// 00585140  5d                   pop ebp
// 00585141  895804               mov dword ptr [eax + 4], ebx
// 00585144  5b                   pop ebx
// 00585145  83c408               add esp, 8
// 00585148  c21400               ret 0x14
// library rbxgs/tool\ToolsArrow.cpp (function ?erase@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@V312@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
