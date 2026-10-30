// roc 2009-12 0086a600  unit: CXTPPropertyGridToolTip  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a600
//
// 0086a600  6aff                 push -1
// 0086a602  684a699600           push 0x96694a
// 0086a607  64a100000000         mov eax, dword ptr fs:[0]
// 0086a60d  50                   push eax
// 0086a60e  53                   push ebx
// 0086a60f  56                   push esi
// 0086a610  57                   push edi
// 0086a611  a10052b600           mov eax, dword ptr [0xb65200]
// 0086a616  33c4                 xor eax, esp
// 0086a618  50                   push eax
// 0086a619  8d442410             lea eax, [esp + 0x10]
// 0086a61d  64a300000000         mov dword ptr fs:[0], eax
// 0086a623  8bf1                 mov esi, ecx
// 0086a625  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0086a629  85db                 test ebx, ebx
// 0086a62b  7c0b                 jl 0x86a638
// 0086a62d  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0086a633  3b5828               cmp ebx, dword ptr [eax + 0x28]
// 0086a636  7e09                 jle 0x86a641
// 0086a638  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086a63e  8b5928               mov ebx, dword ptr [ecx + 0x28]
// 0086a641  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0086a645  85ff                 test edi, edi
// 0086a647  7535                 jne 0x86a67e
// 0086a649  680c010000           push 0x10c
// 0086a64e  e80d92f8ff           call 0x7f3860
// 0086a653  83c404               add esp, 4
// 0086a656  89442420             mov dword ptr [esp + 0x20], eax
// 0086a65a  897c2418             mov dword ptr [esp + 0x18], edi
// 0086a65e  85c0                 test eax, eax
// 0086a660  7410                 je 0x86a672
// 0086a662  8b542424             mov edx, dword ptr [esp + 0x24]
// 0086a666  57                   push edi
// 0086a667  57                   push edi
// 0086a668  52                   push edx
// 0086a669  8bc8                 mov ecx, eax
// 0086a66b  e880c6ffff           call 0x866cf0
// 0086a670  eb02                 jmp 0x86a674
// 0086a672  33c0                 xor eax, eax
// 0086a674  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0086a67c  8bf8                 mov edi, eax
// 0086a67e  6a01                 push 1
// 0086a680  6a00                 push 0
// 0086a682  6a00                 push 0
// 0086a684  8bce                 mov ecx, esi
// 0086a686  e805fdffff           call 0x86a390
// 0086a68b  6a01                 push 1
// 0086a68d  89b7bc000000         mov dword ptr [edi + 0xbc], esi
// 0086a693  c7879800000001000000 mov dword ptr [edi + 0x98], 1
// 0086a69d  c7878c00000000000000 mov dword ptr [edi + 0x8c], 0
// 0086a6a7  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086a6ad  57                   push edi
// 0086a6ae  53                   push ebx
// 0086a6af  83c120               add ecx, 0x20
// 0086a6b2  e889340800           call 0x8edb40
// 0086a6b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086a6ba  85c0                 test eax, eax
// 0086a6bc  7436                 je 0x86a6f4
// 0086a6be  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0086a6c4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0086a6c7  4a                   dec edx
// 0086a6c8  3bda                 cmp ebx, edx
// 0086a6ca  7c12                 jl 0x86a6de
// 0086a6cc  6a00                 push 0
// 0086a6ce  6a00                 push 0
// 0086a6d0  688b010000           push 0x18b
// 0086a6d5  50                   push eax
// 0086a6d6  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086a6dc  eb0d                 jmp 0x86a6eb
// 0086a6de  43                   inc ebx
// 0086a6df  53                   push ebx
// 0086a6e0  e83bb5ffff           call 0x865c20
// 0086a6e5  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0086a6eb  50                   push eax
// 0086a6ec  57                   push edi
// 0086a6ed  8bce                 mov ecx, esi
// 0086a6ef  e8bce0ffff           call 0x8687b0
// 0086a6f4  8bce                 mov ecx, esi
// 0086a6f6  e8f5e1ffff           call 0x8688f0
// 0086a6fb  8bc7                 mov eax, edi
// 0086a6fd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086a701  64890d00000000       mov dword ptr fs:[0], ecx
// 0086a708  59                   pop ecx
// 0086a709  5f                   pop edi
// 0086a70a  5e                   pop esi
// 0086a70b  5b                   pop ebx
// 0086a70c  83c40c               add esp, 0xc
// 0086a70f  c20c00               ret 0xc
// copied from an identical function in another client (function ?InsertCategory@CXTPPropertyGridView@@QAEPAVCXTPPropertyGridItem@@HPBDPAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp