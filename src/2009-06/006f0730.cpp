// from server: 100% by auto
// roc 2009-06 006f0730  unit: seg_006f0000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0730
//
// 006f0730  51                   push ecx
// 006f0731  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f0734  6a04                 push 4
// 006f0736  8d442404             lea eax, [esp + 4]
// 006f073a  50                   push eax
// 006f073b  51                   push ecx
// 006f073c  e80fcaffff           call 0x6ed150
// 006f0741  83c40c               add esp, 0xc
// 006f0744  85c0                 test eax, eax
// 006f0746  7423                 je 0x6f076b
// 006f0748  8b560c               mov edx, dword ptr [esi + 0xc]
// 006f074b  8b06                 mov eax, dword ptr [esi]
// 006f074d  6840e08e00           push 0x8ee040
// 006f0752  52                   push edx
// 006f0753  6824e08e00           push 0x8ee024
// 006f0758  50                   push eax
// 006f0759  e84289fdff           call 0x6c90a0
// 006f075e  8b0e                 mov ecx, dword ptr [esi]
// 006f0760  6a03                 push 3
// 006f0762  51                   push ecx
// 006f0763  e8782bfdff           call 0x6c32e0
// 006f0768  83c418               add esp, 0x18
// 006f076b  8b0424               mov eax, dword ptr [esp]
// 006f076e  85c0                 test eax, eax
// 006f0770  7502                 jne 0x6f0774
// 006f0772  59                   pop ecx
// 006f0773  c3                   ret 
// 006f0774  8b5608               mov edx, dword ptr [esi + 8]
// 006f0777  57                   push edi
// 006f0778  50                   push eax
// 006f0779  8b06                 mov eax, dword ptr [esi]
// 006f077b  52                   push edx
// 006f077c  50                   push eax
// 006f077d  e85ecaffff           call 0x6ed1e0
// 006f0782  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f0786  8b5604               mov edx, dword ptr [esi + 4]
// 006f0789  51                   push ecx
// 006f078a  8bf8                 mov edi, eax
// 006f078c  57                   push edi
// 006f078d  52                   push edx
// 006f078e  e8bdc9ffff           call 0x6ed150
// 006f0793  83c418               add esp, 0x18
// 006f0796  85c0                 test eax, eax
// 006f0798  7423                 je 0x6f07bd
// 006f079a  8b460c               mov eax, dword ptr [esi + 0xc]
// 006f079d  8b0e                 mov ecx, dword ptr [esi]
// 006f079f  6840e08e00           push 0x8ee040
// 006f07a4  50                   push eax
// 006f07a5  6824e08e00           push 0x8ee024
// 006f07aa  51                   push ecx
// 006f07ab  e8f088fdff           call 0x6c90a0
// 006f07b0  8b16                 mov edx, dword ptr [esi]
// 006f07b2  6a03                 push 3
// 006f07b4  52                   push edx
// 006f07b5  e8262bfdff           call 0x6c32e0
// 006f07ba  83c418               add esp, 0x18
// 006f07bd  8b442404             mov eax, dword ptr [esp + 4]
// 006f07c1  8b0e                 mov ecx, dword ptr [esi]
// 006f07c3  48                   dec eax
// 006f07c4  50                   push eax
// 006f07c5  57                   push edi
// 006f07c6  51                   push ecx
// 006f07c7  e874c3ffff           call 0x6ecb40
// 006f07cc  83c40c               add esp, 0xc
// 006f07cf  5f                   pop edi
// 006f07d0  59                   pop ecx
// 006f07d1  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
