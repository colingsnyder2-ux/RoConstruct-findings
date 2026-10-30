// roc 2009-12 008134a0  unit: CXTPToolBar  size: 569 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008134a0
//
// 008134a0  6aff                 push -1
// 008134a2  68d3a29500           push 0x95a2d3
// 008134a7  64a100000000         mov eax, dword ptr fs:[0]
// 008134ad  50                   push eax
// 008134ae  83ec10               sub esp, 0x10
// 008134b1  53                   push ebx
// 008134b2  56                   push esi
// 008134b3  57                   push edi
// 008134b4  a10052b600           mov eax, dword ptr [0xb65200]
// 008134b9  33c4                 xor eax, esp
// 008134bb  50                   push eax
// 008134bc  8d442420             lea eax, [esp + 0x20]
// 008134c0  64a300000000         mov dword ptr fs:[0], eax
// 008134c6  8bf9                 mov edi, ecx
// 008134c8  83bf8801000000       cmp dword ptr [edi + 0x188], 0
// 008134cf  0f84ef010000         je 0x8136c4
// 008134d5  83bfd800000000       cmp dword ptr [edi + 0xd8], 0
// 008134dc  0f84e2010000         je 0x8136c4
// 008134e2  8b07                 mov eax, dword ptr [edi]
// 008134e4  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 008134ea  ffd2                 call edx
// 008134ec  85c0                 test eax, eax
// 008134ee  0f84d0010000         je 0x8136c4
// 008134f4  837c243000           cmp dword ptr [esp + 0x30], 0
// 008134f9  0f840d010000         je 0x81360c
// 008134ff  8d4c2410             lea ecx, [esp + 0x10]
// 00813503  ff1574de9800         call dword ptr [0x98de74]
// 00813509  8d442414             lea eax, [esp + 0x14]
// 0081350d  50                   push eax
// 0081350e  8bcf                 mov ecx, edi
// 00813510  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00813518  e863a0feff           call 0x7fd580
// 0081351d  8d4c2430             lea ecx, [esp + 0x30]
// 00813521  ff1574de9800         call dword ptr [0x98de74]
// 00813527  c644242802           mov byte ptr [esp + 0x28], 2
// 0081352c  e86fb30500           call 0x86e8a0
// 00813531  8b10                 mov edx, dword ptr [eax]
// 00813533  8b5208               mov edx, dword ptr [edx + 8]
// 00813536  68d5230000           push 0x23d5
// 0081353b  8d4c2434             lea ecx, [esp + 0x34]
// 0081353f  51                   push ecx
// 00813540  8bc8                 mov ecx, eax
// 00813542  ffd2                 call edx
// 00813544  8d4c2414             lea ecx, [esp + 0x14]
// 00813548  ff1580de9800         call dword ptr [0x98de80]
// 0081354e  50                   push eax
// 0081354f  8d4c2434             lea ecx, [esp + 0x34]
// 00813553  ff1580de9800         call dword ptr [0x98de80]
// 00813559  50                   push eax
// 0081355a  8d442418             lea eax, [esp + 0x18]
// 0081355e  50                   push eax
// 0081355f  ff157cde9800         call dword ptr [0x98de7c]
// 00813565  83c40c               add esp, 0xc
// 00813568  8bcf                 mov ecx, edi
// 0081356a  e86146ffff           call 0x807bd0
// 0081356f  50                   push eax
// 00813570  8d4c241c             lea ecx, [esp + 0x1c]
// 00813574  e877dbffff           call 0x8110f0
// 00813579  6a00                 push 0
// 0081357b  6a31                 push 0x31
// 0081357d  8d4c2418             lea ecx, [esp + 0x18]
// 00813581  c644243003           mov byte ptr [esp + 0x30], 3
// 00813586  ff1580de9800         call dword ptr [0x98de80]
// 0081358c  50                   push eax
// 0081358d  e88608feff           call 0x7f3e18
// 00813592  83f801               cmp eax, 1
// 00813595  7441                 je 0x8135d8
// 00813597  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081359b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081359f  8991ec000000         mov dword ptr [ecx + 0xec], edx
// 008135a5  8d4c2430             lea ecx, [esp + 0x30]
// 008135a9  ff15c0de9800         call dword ptr [0x98dec0]
// 008135af  8d4c2414             lea ecx, [esp + 0x14]
// 008135b3  ff15c0de9800         call dword ptr [0x98dec0]
// 008135b9  8d4c2410             lea ecx, [esp + 0x10]
// 008135bd  ff15c0de9800         call dword ptr [0x98dec0]
// 008135c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008135c7  64890d00000000       mov dword ptr fs:[0], ecx
// 008135ce  59                   pop ecx
// 008135cf  5f                   pop edi
// 008135d0  5e                   pop esi
// 008135d1  5b                   pop ebx
// 008135d2  83c41c               add esp, 0x1c
// 008135d5  c20400               ret 4
// 008135d8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008135dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008135e0  8988ec000000         mov dword ptr [eax + 0xec], ecx
// 008135e6  8d4c2430             lea ecx, [esp + 0x30]
// 008135ea  ff15c0de9800         call dword ptr [0x98dec0]
// 008135f0  8d4c2414             lea ecx, [esp + 0x14]
// 008135f4  ff15c0de9800         call dword ptr [0x98dec0]
// 008135fa  8d4c2410             lea ecx, [esp + 0x10]
// 008135fe  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00813606  ff15c0de9800         call dword ptr [0x98dec0]
// 0081360c  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00813612  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 00813616  7457                 je 0x81366f
// 00813618  e8c31c0300           call 0x8452e0
// 0081361d  8b97fc000000         mov edx, dword ptr [edi + 0xfc]
// 00813623  8b5a3c               mov ebx, dword ptr [edx + 0x3c]
// 00813626  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 00813629  33f6                 xor esi, esi
// 0081362b  85c0                 test eax, eax
// 0081362d  7e55                 jle 0x813684
// 0081362f  90                   nop 
// 00813630  85f6                 test esi, esi
// 00813632  7c11                 jl 0x813645
// 00813634  3bf0                 cmp esi, eax
// 00813636  7d0d                 jge 0x813645
// 00813638  3b732c               cmp esi, dword ptr [ebx + 0x2c]
// 0081363b  7d2d                 jge 0x81366a
// 0081363d  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00813640  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00813643  eb02                 jmp 0x813647
// 00813645  33c0                 xor eax, eax
// 00813647  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 0081364e  7510                 jne 0x813660
// 00813650  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00813656  6a01                 push 1
// 00813658  6aff                 push -1
// 0081365a  50                   push eax
// 0081365b  e8503c0300           call 0x8472b0
// 00813660  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 00813663  46                   inc esi
// 00813664  3bf0                 cmp esi, eax
// 00813666  7cc8                 jl 0x813630
// 00813668  eb1a                 jmp 0x813684
// 0081366a  e89d04feff           call 0x7f3b0c
// 0081366f  8b17                 mov edx, dword ptr [edi]
// 00813671  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 00813677  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0081367d  6a00                 push 0
// 0081367f  50                   push eax
// 00813680  8bcf                 mov ecx, edi
// 00813682  ffd2                 call edx
// 00813684  8bcf                 mov ecx, edi
// 00813686  e8053affff           call 0x807090
// 0081368b  8bf0                 mov esi, eax
// 0081368d  85f6                 test esi, esi
// 0081368f  7420                 je 0x8136b1
// 00813691  8b4620               mov eax, dword ptr [esi + 0x20]
// 00813694  50                   push eax
// 00813695  ff1584cc9800         call dword ptr [0x98cc84]
// 0081369b  85c0                 test eax, eax
// 0081369d  7412                 je 0x8136b1
// 0081369f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008136a2  57                   push edi
// 008136a3  6a00                 push 0
// 008136a5  6864280000           push 0x2864
// 008136aa  51                   push ecx
// 008136ab  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008136b1  8bcf                 mov ecx, edi
// 008136b3  e8d80bffff           call 0x804290
// 008136b8  8b17                 mov edx, dword ptr [edi]
// 008136ba  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 008136c0  8bcf                 mov ecx, edi
// 008136c2  ffd0                 call eax
// 008136c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008136c8  64890d00000000       mov dword ptr fs:[0], ecx
// 008136cf  59                   pop ecx
// 008136d0  5f                   pop edi
// 008136d1  5e                   pop esi
// 008136d2  5b                   pop ebx
// 008136d3  83c41c               add esp, 0x1c
// 008136d6  c20400               ret 4
// copied from an identical function in another client (function ?Reset@CXTPToolBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPToolBar.cpp