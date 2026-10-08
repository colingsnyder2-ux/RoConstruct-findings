// roc 2007-03 00570c80  unit: seg_00570000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570c80
//
// 00570c80  6aff                 push -1
// 00570c82  681b617500           push 0x75611b
// 00570c87  64a100000000         mov eax, dword ptr fs:[0]
// 00570c8d  50                   push eax
// 00570c8e  64892500000000       mov dword ptr fs:[0], esp
// 00570c95  83ec0c               sub esp, 0xc
// 00570c98  56                   push esi
// 00570c99  8bf1                 mov esi, ecx
// 00570c9b  33c0                 xor eax, eax
// 00570c9d  57                   push edi
// 00570c9e  89742408             mov dword ptr [esp + 8], esi
// 00570ca2  894604               mov dword ptr [esi + 4], eax
// 00570ca5  894608               mov dword ptr [esi + 8], eax
// 00570ca8  89460c               mov dword ptr [esi + 0xc], eax
// 00570cab  8944241c             mov dword ptr [esp + 0x1c], eax
// 00570caf  894614               mov dword ptr [esi + 0x14], eax
// 00570cb2  894618               mov dword ptr [esi + 0x18], eax
// 00570cb5  89461c               mov dword ptr [esi + 0x1c], eax
// 00570cb8  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00570cbc  3bf8                 cmp edi, eax
// 00570cbe  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00570cc3  897e20               mov dword ptr [esi + 0x20], edi
// 00570cc6  7443                 je 0x570d0b
// 00570cc8  55                   push ebp
// 00570cc9  e842faffff           call 0x570710
// 00570cce  8be8                 mov ebp, eax
// 00570cd0  8bcd                 mov ecx, ebp
// 00570cd2  896c2410             mov dword ptr [esp + 0x10], ebp
// 00570cd6  e8a55d1b00           call 0x726a80
// 00570cdb  c644241401           mov byte ptr [esp + 0x14], 1
// 00570ce0  57                   push edi
// 00570ce1  8bce                 mov ecx, esi
// 00570ce3  c644242402           mov byte ptr [esp + 0x24], 2
// 00570ce8  e893feffff           call 0x570b80
// 00570ced  8d442428             lea eax, [esp + 0x28]
// 00570cf1  50                   push eax
// 00570cf2  8d4f10               lea ecx, [edi + 0x10]
// 00570cf5  8974242c             mov dword ptr [esp + 0x2c], esi
// 00570cf9  e842450100           call 0x585240
// 00570cfe  8bcd                 mov ecx, ebp
// 00570d00  c644242001           mov byte ptr [esp + 0x20], 1
// 00570d05  e8965d1b00           call 0x726aa0
// 00570d0a  5d                   pop ebp
// 00570d0b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00570d0f  5f                   pop edi
// 00570d10  8bc6                 mov eax, esi
// 00570d12  5e                   pop esi
// 00570d13  64890d00000000       mov dword ptr fs:[0], ecx
// 00570d1a  83c418               add esp, 0x18
// 00570d1d  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??0?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAE@PAV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
