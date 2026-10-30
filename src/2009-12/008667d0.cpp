// roc 2009-12 008667d0  unit: CXTPPropertyGridItemConstraints  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008667d0
//
// 008667d0  6aff                 push -1
// 008667d2  68b9ef9500           push 0x95efb9
// 008667d7  64a100000000         mov eax, dword ptr fs:[0]
// 008667dd  50                   push eax
// 008667de  51                   push ecx
// 008667df  53                   push ebx
// 008667e0  55                   push ebp
// 008667e1  56                   push esi
// 008667e2  57                   push edi
// 008667e3  a10052b600           mov eax, dword ptr [0xb65200]
// 008667e8  33c4                 xor eax, esp
// 008667ea  50                   push eax
// 008667eb  8d442418             lea eax, [esp + 0x18]
// 008667ef  64a300000000         mov dword ptr fs:[0], eax
// 008667f5  8bf1                 mov esi, ecx
// 008667f7  33db                 xor ebx, ebx
// 008667f9  83cfff               or edi, 0xffffffff
// 008667fc  6856fd9900           push 0x99fd56
// 00866801  8d8ea4000000         lea ecx, [esi + 0xa4]
// 00866807  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 0086680d  899ea0000000         mov dword ptr [esi + 0xa0], ebx
// 00866813  89be80000000         mov dword ptr [esi + 0x80], edi
// 00866819  899e94000000         mov dword ptr [esi + 0x94], ebx
// 0086681f  899eb8000000         mov dword ptr [esi + 0xb8], ebx
// 00866825  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 0086682b  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00866831  ff155cde9800         call dword ptr [0x98de5c]
// 00866837  bd01000000           mov ebp, 1
// 0086683c  6a3c                 push 0x3c
// 0086683e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 00866844  899e98000000         mov dword ptr [esi + 0x98], ebx
// 0086684a  899e88000000         mov dword ptr [esi + 0x88], ebx
// 00866850  89ae8c000000         mov dword ptr [esi + 0x8c], ebp
// 00866856  e805d0f8ff           call 0x7f3860
// 0086685b  83c404               add esp, 4
// 0086685e  89442414             mov dword ptr [esp + 0x14], eax
// 00866862  895c2420             mov dword ptr [esp + 0x20], ebx
// 00866866  3bc3                 cmp eax, ebx
// 00866868  740a                 je 0x866874
// 0086686a  56                   push esi
// 0086686b  8bc8                 mov ecx, eax
// 0086686d  e83efcffff           call 0x8664b0
// 00866872  eb02                 jmp 0x866876
// 00866874  33c0                 xor eax, eax
// 00866876  6a38                 push 0x38
// 00866878  897c2424             mov dword ptr [esp + 0x24], edi
// 0086687c  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 00866882  e8d9cff8ff           call 0x7f3860
// 00866887  83c404               add esp, 4
// 0086688a  89442414             mov dword ptr [esp + 0x14], eax
// 0086688e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00866892  3bc3                 cmp eax, ebx
// 00866894  740a                 je 0x8668a0
// 00866896  56                   push esi
// 00866897  8bc8                 mov ecx, eax
// 00866899  e8d2fd0500           call 0x8c6670
// 0086689e  eb02                 jmp 0x8668a2
// 008668a0  33c0                 xor eax, eax
// 008668a2  6a14                 push 0x14
// 008668a4  897c2424             mov dword ptr [esp + 0x24], edi
// 008668a8  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 008668ae  e8adcff8ff           call 0x7f3860
// 008668b3  83c404               add esp, 4
// 008668b6  89442414             mov dword ptr [esp + 0x14], eax
// 008668ba  c744242002000000     mov dword ptr [esp + 0x20], 2
// 008668c2  3bc3                 cmp eax, ebx
// 008668c4  7409                 je 0x8668cf
// 008668c6  8bc8                 mov ecx, eax
// 008668c8  e833110600           call 0x8c7a00
// 008668cd  eb02                 jmp 0x8668d1
// 008668cf  33c0                 xor eax, eax
// 008668d1  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 008668d7  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008668dd  897834               mov dword ptr [eax + 0x34], edi
// 008668e0  8bce                 mov ecx, esi
// 008668e2  897c2420             mov dword ptr [esp + 0x20], edi
// 008668e6  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 008668ec  895e7c               mov dword ptr [esi + 0x7c], ebx
// 008668ef  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 008668f5  89ae04010000         mov dword ptr [esi + 0x104], ebp
// 008668fb  89be00010000         mov dword ptr [esi + 0x100], edi
// 00866901  c786dc0000000a000000 mov dword ptr [esi + 0xdc], 0xa
// 0086690b  89ae9c000000         mov dword ptr [esi + 0x9c], ebp
// 00866911  889ef1000000         mov byte ptr [esi + 0xf1], bl
// 00866917  899ef4000000         mov dword ptr [esi + 0xf4], ebx
// 0086691d  c686f00000002a       mov byte ptr [esi + 0xf0], 0x2a
// 00866924  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 0086692a  c7860801000080000000 mov dword ptr [esi + 0x108], 0x80
// 00866934  e80ffb0b00           call 0x926448
// 00866939  6a34                 push 0x34
// 0086693b  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00866941  899ed0000000         mov dword ptr [esi + 0xd0], ebx
// 00866947  e814cff8ff           call 0x7f3860
// 0086694c  83c404               add esp, 4
// 0086694f  89442414             mov dword ptr [esp + 0x14], eax
// 00866953  c744242003000000     mov dword ptr [esp + 0x20], 3
// 0086695b  3bc3                 cmp eax, ebx
// 0086695d  7421                 je 0x866980
// 0086695f  8bc8                 mov ecx, eax
// 00866961  e8eaf9ffff           call 0x866350
// 00866966  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 0086696c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00866970  64890d00000000       mov dword ptr fs:[0], ecx
// 00866977  59                   pop ecx
// 00866978  5f                   pop edi
// 00866979  5e                   pop esi
// 0086697a  5d                   pop ebp
// 0086697b  5b                   pop ebx
// 0086697c  83c410               add esp, 0x10
// 0086697f  c3                   ret 
// 00866980  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 00866986  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086698a  64890d00000000       mov dword ptr fs:[0], ecx
// 00866991  59                   pop ecx
// 00866992  5f                   pop edi
// 00866993  5e                   pop esi
// 00866994  5d                   pop ebp
// 00866995  5b                   pop ebx
// 00866996  83c410               add esp, 0x10
// 00866999  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPPropertyGridItem@@AAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp