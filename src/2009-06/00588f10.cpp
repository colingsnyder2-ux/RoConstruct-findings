// roc 2009-06 00588f10  unit: seg_00580000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588f10
//
// 00588f10  56                   push esi
// 00588f11  8b742408             mov esi, dword ptr [esp + 8]
// 00588f15  8b4614               mov eax, dword ptr [esi + 0x14]
// 00588f18  83f865               cmp eax, 0x65
// 00588f1b  7421                 je 0x588f3e
// 00588f1d  83f866               cmp eax, 0x66
// 00588f20  741c                 je 0x588f3e
// 00588f22  83f867               cmp eax, 0x67
// 00588f25  7444                 je 0x588f6b
// 00588f27  8b06                 mov eax, dword ptr [esi]
// 00588f29  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00588f30  8b0e                 mov ecx, dword ptr [esi]
// 00588f32  8b5614               mov edx, dword ptr [esi + 0x14]
// 00588f35  895118               mov dword ptr [ecx + 0x18], edx
// 00588f38  8b06                 mov eax, dword ptr [esi]
// 00588f3a  8b08                 mov ecx, dword ptr [eax]
// 00588f3c  eb27                 jmp 0x588f65
// 00588f3e  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00588f44  3b5620               cmp edx, dword ptr [esi + 0x20]
// 00588f47  7313                 jae 0x588f5c
// 00588f49  8b06                 mov eax, dword ptr [esi]
// 00588f4b  c7401443000000       mov dword ptr [eax + 0x14], 0x43
// 00588f52  8b0e                 mov ecx, dword ptr [esi]
// 00588f54  8b11                 mov edx, dword ptr [ecx]
// 00588f56  56                   push esi
// 00588f57  ffd2                 call edx
// 00588f59  83c404               add esp, 4
// 00588f5c  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00588f62  8b4808               mov ecx, dword ptr [eax + 8]
// 00588f65  56                   push esi
// 00588f66  ffd1                 call ecx
// 00588f68  83c404               add esp, 4
// 00588f6b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00588f71  80780d00             cmp byte ptr [eax + 0xd], 0
// 00588f75  0f8586000000         jne 0x589001
// 00588f7b  53                   push ebx
// 00588f7c  57                   push edi
// 00588f7d  bb18000000           mov ebx, 0x18
// 00588f82  8b10                 mov edx, dword ptr [eax]
// 00588f84  56                   push esi
// 00588f85  ffd2                 call edx
// 00588f87  33ff                 xor edi, edi
// 00588f89  83c404               add esp, 4
// 00588f8c  39bee0000000         cmp dword ptr [esi + 0xe0], edi
// 00588f92  7650                 jbe 0x588fe4
// 00588f94  837e0800             cmp dword ptr [esi + 8], 0
// 00588f98  741d                 je 0x588fb7
// 00588f9a  8b4608               mov eax, dword ptr [esi + 8]
// 00588f9d  897804               mov dword ptr [eax + 4], edi
// 00588fa0  8b4e08               mov ecx, dword ptr [esi + 8]
// 00588fa3  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 00588fa9  895108               mov dword ptr [ecx + 8], edx
// 00588fac  8b4608               mov eax, dword ptr [esi + 8]
// 00588faf  8b08                 mov ecx, dword ptr [eax]
// 00588fb1  56                   push esi
// 00588fb2  ffd1                 call ecx
// 00588fb4  83c404               add esp, 4
// 00588fb7  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 00588fbd  8b4204               mov eax, dword ptr [edx + 4]
// 00588fc0  6a00                 push 0
// 00588fc2  56                   push esi
// 00588fc3  ffd0                 call eax
// 00588fc5  83c408               add esp, 8
// 00588fc8  84c0                 test al, al
// 00588fca  750f                 jne 0x588fdb
// 00588fcc  8b0e                 mov ecx, dword ptr [esi]
// 00588fce  895914               mov dword ptr [ecx + 0x14], ebx
// 00588fd1  8b16                 mov edx, dword ptr [esi]
// 00588fd3  8b02                 mov eax, dword ptr [edx]
// 00588fd5  56                   push esi
// 00588fd6  ffd0                 call eax
// 00588fd8  83c404               add esp, 4
// 00588fdb  47                   inc edi
// 00588fdc  3bbee0000000         cmp edi, dword ptr [esi + 0xe0]
// 00588fe2  72b0                 jb 0x588f94
// 00588fe4  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00588fea  8b5108               mov edx, dword ptr [ecx + 8]
// 00588fed  56                   push esi
// 00588fee  ffd2                 call edx
// 00588ff0  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00588ff6  83c404               add esp, 4
// 00588ff9  80780d00             cmp byte ptr [eax + 0xd], 0
// 00588ffd  7483                 je 0x588f82
// 00588fff  5f                   pop edi
// 00589000  5b                   pop ebx
// 00589001  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00589007  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0058900a  56                   push esi
// 0058900b  ffd1                 call ecx
// 0058900d  8b5618               mov edx, dword ptr [esi + 0x18]
// 00589010  8b4210               mov eax, dword ptr [edx + 0x10]
// 00589013  56                   push esi
// 00589014  ffd0                 call eax
// 00589016  56                   push esi
// 00589017  e8f45fffff           call 0x57f010
// 0058901c  83c40c               add esp, 0xc
// 0058901f  5e                   pop esi
// 00589020  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_finish_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
