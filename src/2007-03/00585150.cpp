// roc 2007-03 00585150  unit: seg_00580000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585150
//
// 00585150  64a100000000         mov eax, dword ptr fs:[0]
// 00585156  6aff                 push -1
// 00585158  6890607500           push 0x756090
// 0058515d  50                   push eax
// 0058515e  64892500000000       mov dword ptr fs:[0], esp
// 00585165  8b5104               mov edx, dword ptr [ecx + 4]
// 00585168  8b4204               mov eax, dword ptr [edx + 4]
// 0058516b  83ec1c               sub esp, 0x1c
// 0058516e  53                   push ebx
// 0058516f  55                   push ebp
// 00585170  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00585174  33db                 xor ebx, ebx
// 00585176  385819               cmp byte ptr [eax + 0x19], bl
// 00585179  56                   push esi
// 0058517a  57                   push edi
// 0058517b  7516                 jne 0x585193
// 0058517d  8b7500               mov esi, dword ptr [ebp]
// 00585180  39700c               cmp dword ptr [eax + 0xc], esi
// 00585183  7d05                 jge 0x58518a
// 00585185  8b4008               mov eax, dword ptr [eax + 8]
// 00585188  eb04                 jmp 0x58518e
// 0058518a  8bd0                 mov edx, eax
// 0058518c  8b00                 mov eax, dword ptr [eax]
// 0058518e  385819               cmp byte ptr [eax + 0x19], bl
// 00585191  74ed                 je 0x585180
// 00585193  3b5104               cmp edx, dword ptr [ecx + 4]
// 00585196  8bfa                 mov edi, edx
// 00585198  8bf1                 mov esi, ecx
// 0058519a  7408                 je 0x5851a4
// 0058519c  8b4500               mov eax, dword ptr [ebp]
// 0058519f  3b420c               cmp eax, dword ptr [edx + 0xc]
// 005851a2  7d6e                 jge 0x585212
// 005851a4  895c2410             mov dword ptr [esp + 0x10], ebx
// 005851a8  895c2414             mov dword ptr [esp + 0x14], ebx
// 005851ac  8b5500               mov edx, dword ptr [ebp]
// 005851af  895c2434             mov dword ptr [esp + 0x34], ebx
// 005851b3  89542420             mov dword ptr [esp + 0x20], edx
// 005851b7  895c2424             mov dword ptr [esp + 0x24], ebx
// 005851bb  895c2428             mov dword ptr [esp + 0x28], ebx
// 005851bf  8d442420             lea eax, [esp + 0x20]
// 005851c3  50                   push eax
// 005851c4  57                   push edi
// 005851c5  56                   push esi
// 005851c6  8d542424             lea edx, [esp + 0x24]
// 005851ca  52                   push edx
// 005851cb  c644244401           mov byte ptr [esp + 0x44], 1
// 005851d0  e8ebfcffff           call 0x584ec0
// 005851d5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005851d9  3beb                 cmp ebp, ebx
// 005851db  8b30                 mov esi, dword ptr [eax]
// 005851dd  8b7804               mov edi, dword ptr [eax + 4]
// 005851e0  885c2434             mov byte ptr [esp + 0x34], bl
// 005851e4  742c                 je 0x585212
// 005851e6  8d4504               lea eax, [ebp + 4]
// 005851e9  83c9ff               or ecx, 0xffffffff
// 005851ec  f00fc108             lock xadd dword ptr [eax], ecx
// 005851f0  7520                 jne 0x585212
// 005851f2  8b5500               mov edx, dword ptr [ebp]
// 005851f5  8b4204               mov eax, dword ptr [edx + 4]
// 005851f8  8bcd                 mov ecx, ebp
// 005851fa  ffd0                 call eax
// 005851fc  8d4d08               lea ecx, [ebp + 8]
// 005851ff  83caff               or edx, 0xffffffff
// 00585202  f00fc111             lock xadd dword ptr [ecx], edx
// 00585206  750a                 jne 0x585212
// 00585208  8b4500               mov eax, dword ptr [ebp]
// 0058520b  8b5008               mov edx, dword ptr [eax + 8]
// 0058520e  8bcd                 mov ecx, ebp
// 00585210  ffd2                 call edx
// 00585212  3bf3                 cmp esi, ebx
// 00585214  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 0058521a  7502                 jne 0x58521e
// 0058521c  ffd3                 call ebx
// 0058521e  3b7e04               cmp edi, dword ptr [esi + 4]
// 00585221  7502                 jne 0x585225
// 00585223  ffd3                 call ebx
// 00585225  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00585229  8d4710               lea eax, [edi + 0x10]
// 0058522c  5f                   pop edi
// 0058522d  5e                   pop esi
// 0058522e  5d                   pop ebp
// 0058522f  5b                   pop ebx
// 00585230  64890d00000000       mov dword ptr fs:[0], ecx
// 00585237  83c428               add esp, 0x28
// 0058523a  c20400               ret 4
// copied from an identical function in another client (function ??A?$map@HV?$shared_ptr@UT@@@boost@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHV?$shared_ptr@UT@@@boost@@@std@@@4@@std@@QAEAAV?$shared_ptr@UT@@@boost@@ABH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll map_int_sp.cpp