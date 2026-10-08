// roc 2007-03 00570be0  unit: seg_00570000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570be0
//
// 00570be0  6aff                 push -1
// 00570be2  681b617500           push 0x75611b
// 00570be7  64a100000000         mov eax, dword ptr fs:[0]
// 00570bed  50                   push eax
// 00570bee  64892500000000       mov dword ptr fs:[0], esp
// 00570bf5  83ec0c               sub esp, 0xc
// 00570bf8  56                   push esi
// 00570bf9  8bf1                 mov esi, ecx
// 00570bfb  33c0                 xor eax, eax
// 00570bfd  57                   push edi
// 00570bfe  89742408             mov dword ptr [esp + 8], esi
// 00570c02  894604               mov dword ptr [esi + 4], eax
// 00570c05  894608               mov dword ptr [esi + 8], eax
// 00570c08  89460c               mov dword ptr [esi + 0xc], eax
// 00570c0b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00570c0f  894614               mov dword ptr [esi + 0x14], eax
// 00570c12  894618               mov dword ptr [esi + 0x18], eax
// 00570c15  89461c               mov dword ptr [esi + 0x1c], eax
// 00570c18  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00570c1c  3bf8                 cmp edi, eax
// 00570c1e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00570c23  897e20               mov dword ptr [esi + 0x20], edi
// 00570c26  7443                 je 0x570c6b
// 00570c28  55                   push ebp
// 00570c29  e8e2faffff           call 0x570710
// 00570c2e  8be8                 mov ebp, eax
// 00570c30  8bcd                 mov ecx, ebp
// 00570c32  896c2410             mov dword ptr [esp + 0x10], ebp
// 00570c36  e8455e1b00           call 0x726a80
// 00570c3b  c644241401           mov byte ptr [esp + 0x14], 1
// 00570c40  57                   push edi
// 00570c41  8bce                 mov ecx, esi
// 00570c43  c644242402           mov byte ptr [esp + 0x24], 2
// 00570c48  e8d3feffff           call 0x570b20
// 00570c4d  8d442428             lea eax, [esp + 0x28]
// 00570c51  50                   push eax
// 00570c52  8d4f10               lea ecx, [edi + 0x10]
// 00570c55  8974242c             mov dword ptr [esp + 0x2c], esi
// 00570c59  e8e2450100           call 0x585240
// 00570c5e  8bcd                 mov ecx, ebp
// 00570c60  c644242001           mov byte ptr [esp + 0x20], 1
// 00570c65  e8365e1b00           call 0x726aa0
// 00570c6a  5d                   pop ebp
// 00570c6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00570c6f  5f                   pop edi
// 00570c70  8bc6                 mov eax, esi
// 00570c72  5e                   pop esi
// 00570c73  64890d00000000       mov dword ptr fs:[0], ecx
// 00570c7a  83c418               add esp, 0x18
// 00570c7d  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??0?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAE@PAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
