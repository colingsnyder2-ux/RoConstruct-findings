// roc 2008-06 00512590  unit: G3D::GCamera  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512590
//
// 00512590  51                   push ecx
// 00512591  80794800             cmp byte ptr [ecx + 0x48], 0
// 00512595  890c24               mov dword ptr [esp], ecx
// 00512598  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051259c  0f84dc000000         je 0x51267e
// 005125a2  56                   push esi
// 005125a3  57                   push edi
// 005125a4  6816b78000           push 0x80b716
// 005125a9  ff154c248000         call dword ptr [0x80244c]
// 005125af  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005125b3  8b4714               mov eax, dword ptr [edi + 0x14]
// 005125b6  33f6                 xor esi, esi
// 005125b8  85c0                 test eax, eax
// 005125ba  0f86b8000000         jbe 0x512678
// 005125c0  53                   push ebx
// 005125c1  55                   push ebp
// 005125c2  8d5f04               lea ebx, [edi + 4]
// 005125c5  8d6e01               lea ebp, [esi + 1]
// 005125c8  3bf0                 cmp esi, eax
// 005125ca  7606                 jbe 0x5125d2
// 005125cc  ff1590288000         call dword ptr [0x802890]
// 005125d2  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 005125d6  7204                 jb 0x5125dc
// 005125d8  8b03                 mov eax, dword ptr [ebx]
// 005125da  eb02                 jmp 0x5125de
// 005125dc  8bc3                 mov eax, ebx
// 005125de  803c300a             cmp byte ptr [eax + esi], 0xa
// 005125e2  7514                 jne 0x5125f8
// 005125e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005125e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005125ec  83c054               add eax, 0x54
// 005125ef  50                   push eax
// 005125f0  ff1550248000         call dword ptr [0x802450]
// 005125f6  eb71                 jmp 0x512669
// 005125f8  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005125fb  7606                 jbe 0x512603
// 005125fd  ff1590288000         call dword ptr [0x802890]
// 00512603  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00512606  83f910               cmp ecx, 0x10
// 00512609  7204                 jb 0x51260f
// 0051260b  8b03                 mov eax, dword ptr [ebx]
// 0051260d  eb02                 jmp 0x512611
// 0051260f  8bc3                 mov eax, ebx
// 00512611  803c300d             cmp byte ptr [eax + esi], 0xd
// 00512615  752c                 jne 0x512643
// 00512617  3b6f14               cmp ebp, dword ptr [edi + 0x14]
// 0051261a  7327                 jae 0x512643
// 0051261c  83f910               cmp ecx, 0x10
// 0051261f  7204                 jb 0x512625
// 00512621  8b03                 mov eax, dword ptr [ebx]
// 00512623  eb02                 jmp 0x512627
// 00512625  8bc3                 mov eax, ebx
// 00512627  803c280a             cmp byte ptr [eax + ebp], 0xa
// 0051262b  7516                 jne 0x512643
// 0051262d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00512631  83c154               add ecx, 0x54
// 00512634  51                   push ecx
// 00512635  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00512639  ff1550248000         call dword ptr [0x802450]
// 0051263f  46                   inc esi
// 00512640  45                   inc ebp
// 00512641  eb26                 jmp 0x512669
// 00512643  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00512646  7606                 jbe 0x51264e
// 00512648  ff1590288000         call dword ptr [0x802890]
// 0051264e  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00512652  7204                 jb 0x512658
// 00512654  8b03                 mov eax, dword ptr [ebx]
// 00512656  eb02                 jmp 0x51265a
// 00512658  8bc3                 mov eax, ebx
// 0051265a  0fb61430             movzx edx, byte ptr [eax + esi]
// 0051265e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00512662  52                   push edx
// 00512663  ff15b4248000         call dword ptr [0x8024b4]
// 00512669  8b4714               mov eax, dword ptr [edi + 0x14]
// 0051266c  46                   inc esi
// 0051266d  45                   inc ebp
// 0051266e  3bf0                 cmp esi, eax
// 00512670  0f825cffffff         jb 0x5125d2
// 00512676  5d                   pop ebp
// 00512677  5b                   pop ebx
// 00512678  5f                   pop edi
// 00512679  5e                   pop esi
// 0051267a  59                   pop ecx
// 0051267b  c20800               ret 8
// 0051267e  8b442408             mov eax, dword ptr [esp + 8]
// 00512682  50                   push eax
// 00512683  ff150c248000         call dword ptr [0x80240c]
// 00512689  59                   pop ecx
// 0051268a  c20800               ret 8
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?convertNewlines@TextOutput@G3D@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
