// from server: 100% by colin
// roc 2008-06 007f6390  unit: seg_007f0000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f6390
//
// 007f6390  53                   push ebx
// 007f6391  55                   push ebp
// 007f6392  56                   push esi
// 007f6393  57                   push edi
// 007f6394  6a01                 push 1
// 007f6396  83ec0c               sub esp, 0xc
// 007f6399  8bc4                 mov eax, esp
// 007f639b  b940c55d00           mov ecx, 0x5dc540
// 007f63a0  8908                 mov dword ptr [eax], ecx
// 007f63a2  bab4feffff           mov edx, 0xfffffeb4
// 007f63a7  895004               mov dword ptr [eax + 4], edx
// 007f63aa  83ec0c               sub esp, 0xc
// 007f63ad  33f6                 xor esi, esi
// 007f63af  897008               mov dword ptr [eax + 8], esi
// 007f63b2  8bc4                 mov eax, esp
// 007f63b4  bf108d5d00           mov edi, 0x5d8d10
// 007f63b9  8bda                 mov ebx, edx
// 007f63bb  8938                 mov dword ptr [eax], edi
// 007f63bd  6890248200           push 0x822490
// 007f63c2  33ed                 xor ebp, ebp
// 007f63c4  895804               mov dword ptr [eax + 4], ebx
// 007f63c7  6810d88300           push 0x83d810
// 007f63cc  b9dca59700           mov ecx, 0x97a5dc
// 007f63d1  896808               mov dword ptr [eax + 8], ebp
// 007f63d4  e80741deff           call 0x5da4e0
// 007f63d9  68a0f27f00           push 0x7ff2a0
// 007f63de  e8ccb3eaff           call 0x6a17af
// 007f63e3  83c404               add esp, 4
// 007f63e6  5f                   pop edi
// 007f63e7  5e                   pop esi
// 007f63e8  5d                   pop ebp
// 007f63e9  5b                   pop ebx
// 007f63ea  c3                   ret 

// from server: 98% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_d25716957c544124.cpp
