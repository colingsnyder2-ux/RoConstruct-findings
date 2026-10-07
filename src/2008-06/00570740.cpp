// roc 2008-06 00570740  unit: RBX::W4NormalId::?$EnumDesc  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570740
//
// 00570740  6aff                 push -1
// 00570742  688b007d00           push 0x7d008b
// 00570747  64a100000000         mov eax, dword ptr fs:[0]
// 0057074d  50                   push eax
// 0057074e  64892500000000       mov dword ptr fs:[0], esp
// 00570755  83ec10               sub esp, 0x10
// 00570758  55                   push ebp
// 00570759  56                   push esi
// 0057075a  57                   push edi
// 0057075b  8bf1                 mov esi, ecx
// 0057075d  6a04                 push 4
// 0057075f  89742414             mov dword ptr [esp + 0x14], esi
// 00570763  e8b8011300           call 0x6a0920
// 00570768  33ed                 xor ebp, ebp
// 0057076a  83c404               add esp, 4
// 0057076d  3bc5                 cmp eax, ebp
// 0057076f  7404                 je 0x570775
// 00570771  8930                 mov dword ptr [eax], esi
// 00570773  eb02                 jmp 0x570777
// 00570775  33c0                 xor eax, eax
// 00570777  8906                 mov dword ptr [esi], eax
// 00570779  896e0c               mov dword ptr [esi + 0xc], ebp
// 0057077c  896e10               mov dword ptr [esi + 0x10], ebp
// 0057077f  896e14               mov dword ptr [esi + 0x14], ebp
// 00570782  6a04                 push 4
// 00570784  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0057078c  8d7e18               lea edi, [esi + 0x18]
// 0057078f  e88c011300           call 0x6a0920
// 00570794  83c404               add esp, 4
// 00570797  3bc5                 cmp eax, ebp
// 00570799  7404                 je 0x57079f
// 0057079b  8938                 mov dword ptr [eax], edi
// 0057079d  eb02                 jmp 0x5707a1
// 0057079f  33c0                 xor eax, eax
// 005707a1  8907                 mov dword ptr [edi], eax
// 005707a3  896f0c               mov dword ptr [edi + 0xc], ebp
// 005707a6  896f10               mov dword ptr [edi + 0x10], ebp
// 005707a9  896f14               mov dword ptr [edi + 0x14], ebp
// 005707ac  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005707b0  c644242403           mov byte ptr [esp + 0x24], 3
// 005707b5  897e30               mov dword ptr [esi + 0x30], edi
// 005707b8  3bfd                 cmp edi, ebp
// 005707ba  7441                 je 0x5707fd
// 005707bc  e86ff6ffff           call 0x56fe30
// 005707c1  8be8                 mov ebp, eax
// 005707c3  8bcd                 mov ecx, ebp
// 005707c5  896c2414             mov dword ptr [esp + 0x14], ebp
// 005707c9  e8c228ffff           call 0x563090
// 005707ce  c644241801           mov byte ptr [esp + 0x18], 1
// 005707d3  57                   push edi
// 005707d4  8bce                 mov ecx, esi
// 005707d6  c644242804           mov byte ptr [esp + 0x28], 4
// 005707db  e800fdffff           call 0x5704e0
// 005707e0  8d44242c             lea eax, [esp + 0x2c]
// 005707e4  50                   push eax
// 005707e5  8d4f18               lea ecx, [edi + 0x18]
// 005707e8  89742430             mov dword ptr [esp + 0x30], esi
// 005707ec  e8af0bebff           call 0x4213a0
// 005707f1  8bcd                 mov ecx, ebp
// 005707f3  c644242403           mov byte ptr [esp + 0x24], 3
// 005707f8  e8e328ffff           call 0x5630e0
// 005707fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00570801  5f                   pop edi
// 00570802  8bc6                 mov eax, esi
// 00570804  5e                   pop esi
// 00570805  5d                   pop ebp
// 00570806  64890d00000000       mov dword ptr fs:[0], ecx
// 0057080d  83c41c               add esp, 0x1c
// 00570810  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??0?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAE@PAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
