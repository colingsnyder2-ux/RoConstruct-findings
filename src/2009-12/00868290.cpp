// roc 2009-12 00868290  unit: CXTPPropertyGridView  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868290
//
// 00868290  83ec10               sub esp, 0x10
// 00868293  53                   push ebx
// 00868294  56                   push esi
// 00868295  57                   push edi
// 00868296  8bf9                 mov edi, ecx
// 00868298  e8b3f6ffff           call 0x867950
// 0086829d  8b742420             mov esi, dword ptr [esp + 0x20]
// 008682a1  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 008682a5  8bd8                 mov ebx, eax
// 008682a7  0f8481000000         je 0x86832e
// 008682ad  8b4720               mov eax, dword ptr [edi + 0x20]
// 008682b0  6a00                 push 0
// 008682b2  6a00                 push 0
// 008682b4  688b010000           push 0x18b
// 008682b9  50                   push eax
// 008682ba  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008682c0  48                   dec eax
// 008682c1  394608               cmp dword ptr [esi + 8], eax
// 008682c4  7540                 jne 0x868306
// 008682c6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 008682c9  55                   push ebp
// 008682ca  51                   push ecx
// 008682cb  e860e10b00           call 0x926430
// 008682d0  57                   push edi
// 008682d1  8d4c2414             lea ecx, [esp + 0x14]
// 008682d5  8be8                 mov ebp, eax
// 008682d7  e8f42ffeff           call 0x84b2d0
// 008682dc  8b4374               mov eax, dword ptr [ebx + 0x74]
// 008682df  8b5628               mov edx, dword ptr [esi + 0x28]
// 008682e2  83c070               add eax, 0x70
// 008682e5  89542414             mov dword ptr [esp + 0x14], edx
// 008682e9  8b4808               mov ecx, dword ptr [eax + 8]
// 008682ec  83f9ff               cmp ecx, -1
// 008682ef  7505                 jne 0x8682f6
// 008682f1  8b4004               mov eax, dword ptr [eax + 4]
// 008682f4  eb02                 jmp 0x8682f8
// 008682f6  8bc1                 mov eax, ecx
// 008682f8  50                   push eax
// 008682f9  8d442414             lea eax, [esp + 0x14]
// 008682fd  50                   push eax
// 008682fe  8bcd                 mov ecx, ebp
// 00868300  e8f9c2f8ff           call 0x7f45fe
// 00868305  5d                   pop ebp
// 00868306  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 0086830c  e861e10b00           call 0x926472
// 00868311  a810                 test al, 0x10
// 00868313  740f                 je 0x868324
// 00868315  56                   push esi
// 00868316  6a06                 push 6
// 00868318  8bcf                 mov ecx, edi
// 0086831a  e8f1f5ffff           call 0x867910
// 0086831f  83f801               cmp eax, 1
// 00868322  740a                 je 0x86832e
// 00868324  8b13                 mov edx, dword ptr [ebx]
// 00868326  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00868329  56                   push esi
// 0086832a  8bcb                 mov ecx, ebx
// 0086832c  ffd0                 call eax
// 0086832e  5f                   pop edi
// 0086832f  5e                   pop esi
// 00868330  5b                   pop ebx
// 00868331  83c410               add esp, 0x10
// 00868334  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPPropertyGridView@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp