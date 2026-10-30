// roc 2009-12 0085fe10  unit: CXTPToolTipContextToolTip  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085fe10
//
// 0085fe10  81ec30010000         sub esp, 0x130
// 0085fe16  a10052b600           mov eax, dword ptr [0xb65200]
// 0085fe1b  33c4                 xor eax, esp
// 0085fe1d  8984242c010000       mov dword ptr [esp + 0x12c], eax
// 0085fe24  ff1544ca9800         call dword ptr [0x98ca44]
// 0085fe2a  8d0c24               lea ecx, [esp]
// 0085fe2d  51                   push ecx
// 0085fe2e  50                   push eax
// 0085fe2f  ff15ecc99800         call dword ptr [0x98c9ec]
// 0085fe35  85c0                 test eax, eax
// 0085fe37  751a                 jne 0x85fe53
// 0085fe39  b815000000           mov eax, 0x15
// 0085fe3e  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0085fe45  33cc                 xor ecx, esp
// 0085fe47  e84e55f9ff           call 0x7f539a
// 0085fe4c  81c430010000         add esp, 0x130
// 0085fe52  c3                   ret 
// 0085fe53  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085fe57  8d542414             lea edx, [esp + 0x14]
// 0085fe5b  52                   push edx
// 0085fe5c  6a18                 push 0x18
// 0085fe5e  50                   push eax
// 0085fe5f  ff155cb19800         call dword ptr [0x98b15c]
// 0085fe65  85c0                 test eax, eax
// 0085fe67  74d0                 je 0x85fe39
// 0085fe69  6800010000           push 0x100
// 0085fe6e  8d4c2430             lea ecx, [esp + 0x30]
// 0085fe72  6aff                 push -1
// 0085fe74  51                   push ecx
// 0085fe75  e82a4cf9ff           call 0x7f4aa4
// 0085fe7a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085fe7e  83c40c               add esp, 0xc
// 0085fe81  8d54242c             lea edx, [esp + 0x2c]
// 0085fe85  52                   push edx
// 0085fe86  6800010000           push 0x100
// 0085fe8b  50                   push eax
// 0085fe8c  ff15bcb09800         call dword ptr [0x98b0bc]
// 0085fe92  85c0                 test eax, eax
// 0085fe94  74a3                 je 0x85fe39
// 0085fe96  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085fe9a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085fe9e  53                   push ebx
// 0085fe9f  55                   push ebp
// 0085fea0  8b2da0b29800         mov ebp, dword ptr [0x98b2a0]
// 0085fea6  56                   push esi
// 0085fea7  57                   push edi
// 0085fea8  6a10                 push 0x10
// 0085feaa  51                   push ecx
// 0085feab  52                   push edx
// 0085feac  ffd5                 call ebp
// 0085feae  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0085feb2  33c9                 xor ecx, ecx
// 0085feb4  85db                 test ebx, ebx
// 0085feb6  7508                 jne 0x85fec0
// 0085feb8  8d48ff               lea ecx, [eax - 1]
// 0085febb  99                   cdq 
// 0085febc  2bc2                 sub eax, edx
// 0085febe  d1f8                 sar eax, 1
// 0085fec0  3d80000000           cmp eax, 0x80
// 0085fec5  7205                 jb 0x85fecc
// 0085fec7  b87f000000           mov eax, 0x7f
// 0085fecc  81f980000000         cmp ecx, 0x80
// 0085fed2  7202                 jb 0x85fed6
// 0085fed4  33c9                 xor ecx, ecx
// 0085fed6  8d70ff               lea esi, [eax - 1]
// 0085fed9  85f6                 test esi, esi
// 0085fedb  7c23                 jl 0x85ff00
// 0085fedd  8d4900               lea ecx, [ecx]
// 0085fee0  b8ffff0000           mov eax, 0xffff
// 0085fee5  663944743c           cmp word ptr [esp + esi*2 + 0x3c], ax
// 0085feea  7514                 jne 0x85ff00
// 0085feec  85c9                 test ecx, ecx
// 0085feee  740b                 je 0x85fefb
// 0085fef0  668b544c3c           mov dx, word ptr [esp + ecx*2 + 0x3c]
// 0085fef5  49                   dec ecx
// 0085fef6  6685d2               test dx, dx
// 0085fef9  7505                 jne 0x85ff00
// 0085fefb  83ee01               sub esi, 1
// 0085fefe  79e0                 jns 0x85fee0
// 0085ff00  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 0085ff06  85db                 test ebx, ebx
// 0085ff08  7403                 je 0x85ff0d
// 0085ff0a  53                   push ebx
// 0085ff0b  ffd7                 call edi
// 0085ff0d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085ff11  85c0                 test eax, eax
// 0085ff13  7403                 je 0x85ff18
// 0085ff15  50                   push eax
// 0085ff16  ffd7                 call edi
// 0085ff18  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085ff1c  50                   push eax
// 0085ff1d  6a10                 push 0x10
// 0085ff1f  46                   inc esi
// 0085ff20  56                   push esi
// 0085ff21  ffd5                 call ebp
// 0085ff23  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 0085ff2a  2b442418             sub eax, dword ptr [esp + 0x18]
// 0085ff2e  5f                   pop edi
// 0085ff2f  5e                   pop esi
// 0085ff30  5d                   pop ebp
// 0085ff31  5b                   pop ebx
// 0085ff32  33cc                 xor ecx, esp
// 0085ff34  e86154f9ff           call 0x7f539a
// 0085ff39  81c430010000         add esp, 0x130
// 0085ff3f  c3                   ret 
// copied from an identical function in another client (function ?GetCursorHeight@CXTPToolTipContextToolTip@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp