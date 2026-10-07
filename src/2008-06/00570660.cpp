// roc 2008-06 00570660  unit: RBX::W4NormalId::?$EnumDesc  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570660
//
// 00570660  6aff                 push -1
// 00570662  688b007d00           push 0x7d008b
// 00570667  64a100000000         mov eax, dword ptr fs:[0]
// 0057066d  50                   push eax
// 0057066e  64892500000000       mov dword ptr fs:[0], esp
// 00570675  83ec10               sub esp, 0x10
// 00570678  55                   push ebp
// 00570679  56                   push esi
// 0057067a  57                   push edi
// 0057067b  8bf1                 mov esi, ecx
// 0057067d  6a04                 push 4
// 0057067f  89742414             mov dword ptr [esp + 0x14], esi
// 00570683  e898021300           call 0x6a0920
// 00570688  33ed                 xor ebp, ebp
// 0057068a  83c404               add esp, 4
// 0057068d  3bc5                 cmp eax, ebp
// 0057068f  7404                 je 0x570695
// 00570691  8930                 mov dword ptr [eax], esi
// 00570693  eb02                 jmp 0x570697
// 00570695  33c0                 xor eax, eax
// 00570697  8906                 mov dword ptr [esi], eax
// 00570699  896e0c               mov dword ptr [esi + 0xc], ebp
// 0057069c  896e10               mov dword ptr [esi + 0x10], ebp
// 0057069f  896e14               mov dword ptr [esi + 0x14], ebp
// 005706a2  6a04                 push 4
// 005706a4  c744242801000000     mov dword ptr [esp + 0x28], 1
// 005706ac  8d7e18               lea edi, [esi + 0x18]
// 005706af  e86c021300           call 0x6a0920
// 005706b4  83c404               add esp, 4
// 005706b7  3bc5                 cmp eax, ebp
// 005706b9  7404                 je 0x5706bf
// 005706bb  8938                 mov dword ptr [eax], edi
// 005706bd  eb02                 jmp 0x5706c1
// 005706bf  33c0                 xor eax, eax
// 005706c1  8907                 mov dword ptr [edi], eax
// 005706c3  896f0c               mov dword ptr [edi + 0xc], ebp
// 005706c6  896f10               mov dword ptr [edi + 0x10], ebp
// 005706c9  896f14               mov dword ptr [edi + 0x14], ebp
// 005706cc  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005706d0  c644242403           mov byte ptr [esp + 0x24], 3
// 005706d5  897e30               mov dword ptr [esi + 0x30], edi
// 005706d8  3bfd                 cmp edi, ebp
// 005706da  7441                 je 0x57071d
// 005706dc  e84ff7ffff           call 0x56fe30
// 005706e1  8be8                 mov ebp, eax
// 005706e3  8bcd                 mov ecx, ebp
// 005706e5  896c2414             mov dword ptr [esp + 0x14], ebp
// 005706e9  e8a229ffff           call 0x563090
// 005706ee  c644241801           mov byte ptr [esp + 0x18], 1
// 005706f3  57                   push edi
// 005706f4  8bce                 mov ecx, esi
// 005706f6  c644242804           mov byte ptr [esp + 0x28], 4
// 005706fb  e840fdffff           call 0x570440
// 00570700  8d44242c             lea eax, [esp + 0x2c]
// 00570704  50                   push eax
// 00570705  8d4f18               lea ecx, [edi + 0x18]
// 00570708  89742430             mov dword ptr [esp + 0x30], esi
// 0057070c  e88f0cebff           call 0x4213a0
// 00570711  8bcd                 mov ecx, ebp
// 00570713  c644242403           mov byte ptr [esp + 0x24], 3
// 00570718  e8c329ffff           call 0x5630e0
// 0057071d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00570721  5f                   pop edi
// 00570722  8bc6                 mov eax, esi
// 00570724  5e                   pop esi
// 00570725  5d                   pop ebp
// 00570726  64890d00000000       mov dword ptr fs:[0], ecx
// 0057072d  83c41c               add esp, 0x1c
// 00570730  c20400               ret 4
// library rbxgs/reflection\reflection_object.cpp (function ??0?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAE@PAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
