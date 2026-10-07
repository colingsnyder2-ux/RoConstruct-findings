// roc 2008-06 00570580  unit: RBX::W4NormalId::?$EnumDesc  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570580
//
// 00570580  6aff                 push -1
// 00570582  688b007d00           push 0x7d008b
// 00570587  64a100000000         mov eax, dword ptr fs:[0]
// 0057058d  50                   push eax
// 0057058e  64892500000000       mov dword ptr fs:[0], esp
// 00570595  83ec10               sub esp, 0x10
// 00570598  55                   push ebp
// 00570599  56                   push esi
// 0057059a  57                   push edi
// 0057059b  8bf1                 mov esi, ecx
// 0057059d  6a04                 push 4
// 0057059f  89742414             mov dword ptr [esp + 0x14], esi
// 005705a3  e878031300           call 0x6a0920
// 005705a8  33ed                 xor ebp, ebp
// 005705aa  83c404               add esp, 4
// 005705ad  3bc5                 cmp eax, ebp
// 005705af  7404                 je 0x5705b5
// 005705b1  8930                 mov dword ptr [eax], esi
// 005705b3  eb02                 jmp 0x5705b7
// 005705b5  33c0                 xor eax, eax
// 005705b7  8906                 mov dword ptr [esi], eax
// 005705b9  896e0c               mov dword ptr [esi + 0xc], ebp
// 005705bc  896e10               mov dword ptr [esi + 0x10], ebp
// 005705bf  896e14               mov dword ptr [esi + 0x14], ebp
// 005705c2  6a04                 push 4
// 005705c4  c744242801000000     mov dword ptr [esp + 0x28], 1
// 005705cc  8d7e18               lea edi, [esi + 0x18]
// 005705cf  e84c031300           call 0x6a0920
// 005705d4  83c404               add esp, 4
// 005705d7  3bc5                 cmp eax, ebp
// 005705d9  7404                 je 0x5705df
// 005705db  8938                 mov dword ptr [eax], edi
// 005705dd  eb02                 jmp 0x5705e1
// 005705df  33c0                 xor eax, eax
// 005705e1  8907                 mov dword ptr [edi], eax
// 005705e3  896f0c               mov dword ptr [edi + 0xc], ebp
// 005705e6  896f10               mov dword ptr [edi + 0x10], ebp
// 005705e9  896f14               mov dword ptr [edi + 0x14], ebp
// 005705ec  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005705f0  c644242403           mov byte ptr [esp + 0x24], 3
// 005705f5  897e30               mov dword ptr [esi + 0x30], edi
// 005705f8  3bfd                 cmp edi, ebp
// 005705fa  7441                 je 0x57063d
// 005705fc  e82ff8ffff           call 0x56fe30
// 00570601  8be8                 mov ebp, eax
// 00570603  8bcd                 mov ecx, ebp
// 00570605  896c2414             mov dword ptr [esp + 0x14], ebp
// 00570609  e8822affff           call 0x563090
// 0057060e  c644241801           mov byte ptr [esp + 0x18], 1
// 00570613  57                   push edi
// 00570614  8bce                 mov ecx, esi
// 00570616  c644242804           mov byte ptr [esp + 0x28], 4
// 0057061b  e880fdffff           call 0x5703a0
// 00570620  8d44242c             lea eax, [esp + 0x2c]
// 00570624  50                   push eax
// 00570625  8d4f18               lea ecx, [edi + 0x18]
// 00570628  89742430             mov dword ptr [esp + 0x30], esi
// 0057062c  e86f0debff           call 0x4213a0
// 00570631  8bcd                 mov ecx, ebp
// 00570633  c644242403           mov byte ptr [esp + 0x24], 3
// 00570638  e8a32affff           call 0x5630e0
// 0057063d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00570641  5f                   pop edi
// 00570642  8bc6                 mov eax, esi
// 00570644  5e                   pop esi
// 00570645  5d                   pop ebp
// 00570646  64890d00000000       mov dword ptr fs:[0], ecx
// 0057064d  83c41c               add esp, 0x1c
// 00570650  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??0?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAE@PAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
