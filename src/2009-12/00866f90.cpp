// roc 2009-12 00866f90  unit: CPropertyGridItemBrickColor  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866f90
//
// 00866f90  6aff                 push -1
// 00866f92  68bbf19500           push 0x95f1bb
// 00866f97  64a100000000         mov eax, dword ptr fs:[0]
// 00866f9d  50                   push eax
// 00866f9e  83ec14               sub esp, 0x14
// 00866fa1  53                   push ebx
// 00866fa2  56                   push esi
// 00866fa3  a10052b600           mov eax, dword ptr [0xb65200]
// 00866fa8  33c4                 xor eax, esp
// 00866faa  50                   push eax
// 00866fab  8d442420             lea eax, [esp + 0x20]
// 00866faf  64a300000000         mov dword ptr fs:[0], eax
// 00866fb5  8d4c2414             lea ecx, [esp + 0x14]
// 00866fb9  ff1574de9800         call dword ptr [0x98de74]
// 00866fbf  8d4c2410             lea ecx, [esp + 0x10]
// 00866fc3  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00866fcb  ff1574de9800         call dword ptr [0x98de74]
// 00866fd1  8d4c240c             lea ecx, [esp + 0xc]
// 00866fd5  ff1574de9800         call dword ptr [0x98de74]
// 00866fdb  8b742430             mov esi, dword ptr [esp + 0x30]
// 00866fdf  6a3b                 push 0x3b
// 00866fe1  6a00                 push 0
// 00866fe3  56                   push esi
// 00866fe4  8d442420             lea eax, [esp + 0x20]
// 00866fe8  50                   push eax
// 00866fe9  c644243802           mov byte ptr [esp + 0x38], 2
// 00866fee  e82bf40b00           call 0x92641e
// 00866ff3  6a3b                 push 0x3b
// 00866ff5  6a01                 push 1
// 00866ff7  56                   push esi
// 00866ff8  8d4c241c             lea ecx, [esp + 0x1c]
// 00866ffc  51                   push ecx
// 00866ffd  e81cf40b00           call 0x92641e
// 00867002  6a3b                 push 0x3b
// 00867004  6a02                 push 2
// 00867006  56                   push esi
// 00867007  8d542418             lea edx, [esp + 0x18]
// 0086700b  52                   push edx
// 0086700c  e80df40b00           call 0x92641e
// 00867011  8d4c2414             lea ecx, [esp + 0x14]
// 00867015  ff1580de9800         call dword ptr [0x98de80]
// 0086701b  8b3598b79800         mov esi, dword ptr [0x98b798]
// 00867021  50                   push eax
// 00867022  ffd6                 call esi
// 00867024  bbff000000           mov ebx, 0xff
// 00867029  83c404               add esp, 4
// 0086702c  3bc3                 cmp eax, ebx
// 0086702e  7d16                 jge 0x867046
// 00867030  8d4c2414             lea ecx, [esp + 0x14]
// 00867034  ff1580de9800         call dword ptr [0x98de80]
// 0086703a  50                   push eax
// 0086703b  ffd6                 call esi
// 0086703d  83c404               add esp, 4
// 00867040  8944241c             mov dword ptr [esp + 0x1c], eax
// 00867044  eb04                 jmp 0x86704a
// 00867046  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0086704a  8d4c2410             lea ecx, [esp + 0x10]
// 0086704e  ff1580de9800         call dword ptr [0x98de80]
// 00867054  50                   push eax
// 00867055  ffd6                 call esi
// 00867057  83c404               add esp, 4
// 0086705a  3bc3                 cmp eax, ebx
// 0086705c  7d16                 jge 0x867074
// 0086705e  8d4c2410             lea ecx, [esp + 0x10]
// 00867062  ff1580de9800         call dword ptr [0x98de80]
// 00867068  50                   push eax
// 00867069  ffd6                 call esi
// 0086706b  83c404               add esp, 4
// 0086706e  89442418             mov dword ptr [esp + 0x18], eax
// 00867072  eb04                 jmp 0x867078
// 00867074  895c2418             mov dword ptr [esp + 0x18], ebx
// 00867078  8d4c240c             lea ecx, [esp + 0xc]
// 0086707c  ff1580de9800         call dword ptr [0x98de80]
// 00867082  50                   push eax
// 00867083  ffd6                 call esi
// 00867085  83c404               add esp, 4
// 00867088  3bc3                 cmp eax, ebx
// 0086708a  7d12                 jge 0x86709e
// 0086708c  8d4c240c             lea ecx, [esp + 0xc]
// 00867090  ff1580de9800         call dword ptr [0x98de80]
// 00867096  50                   push eax
// 00867097  ffd6                 call esi
// 00867099  83c404               add esp, 4
// 0086709c  8bd8                 mov ebx, eax
// 0086709e  8d4c240c             lea ecx, [esp + 0xc]
// 008670a2  ff15c0de9800         call dword ptr [0x98dec0]
// 008670a8  8d4c2410             lea ecx, [esp + 0x10]
// 008670ac  ff15c0de9800         call dword ptr [0x98dec0]
// 008670b2  8d4c2414             lea ecx, [esp + 0x14]
// 008670b6  ff15c0de9800         call dword ptr [0x98dec0]
// 008670bc  0fb64c2418           movzx ecx, byte ptr [esp + 0x18]
// 008670c1  0fb654241c           movzx edx, byte ptr [esp + 0x1c]
// 008670c6  0fb6c3               movzx eax, bl
// 008670c9  c1e008               shl eax, 8
// 008670cc  0bc1                 or eax, ecx
// 008670ce  c1e008               shl eax, 8
// 008670d1  0bc2                 or eax, edx
// 008670d3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008670d7  64890d00000000       mov dword ptr fs:[0], ecx
// 008670de  59                   pop ecx
// 008670df  5e                   pop esi
// 008670e0  5b                   pop ebx
// 008670e1  83c420               add esp, 0x20
// 008670e4  c3                   ret 
// copied from an identical function in another client (function ?StringToRGB@CXTPPropertyGridItemColor@@SAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemColor.cpp