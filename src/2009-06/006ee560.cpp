// roc 2009-06 006ee560  unit: seg_006e0000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ee560
//
// 006ee560  83ec08               sub esp, 8
// 006ee563  53                   push ebx
// 006ee564  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 006ee567  55                   push ebp
// 006ee568  56                   push esi
// 006ee569  8b33                 mov esi, dword ptr [ebx]
// 006ee56b  33ed                 xor ebp, ebp
// 006ee56d  c6464a00             mov byte ptr [esi + 0x4a], 0
// 006ee571  837f1029             cmp dword ptr [edi + 0x10], 0x29
// 006ee575  895c2410             mov dword ptr [esp + 0x10], ebx
// 006ee579  8974240c             mov dword ptr [esp + 0xc], esi
// 006ee57d  0f84e3000000         je 0x6ee666
// 006ee583  eb0b                 jmp 0x6ee590
// 006ee585  8da42400000000       lea esp, [esp]
// 006ee58c  8d642400             lea esp, [esp]
// 006ee590  8b4710               mov eax, dword ptr [edi + 0x10]
// 006ee593  2d17010000           sub eax, 0x117
// 006ee598  0f84a1000000         je 0x6ee63f
// 006ee59e  83e806               sub eax, 6
// 006ee5a1  7413                 je 0x6ee5b6
// 006ee5a3  68ccde8e00           push 0x8edecc
// 006ee5a8  57                   push edi
// 006ee5a9  e8422d0000           call 0x6f12f0
// 006ee5ae  83c408               add esp, 8
// 006ee5b1  e996000000           jmp 0x6ee64c
// 006ee5b6  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 006ee5b9  57                   push edi
// 006ee5ba  e821410000           call 0x6f26e0
// 006ee5bf  8b7730               mov esi, dword ptr [edi + 0x30]
// 006ee5c2  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006ee5c6  8d4c2801             lea ecx, [eax + ebp + 1]
// 006ee5ca  83c404               add esp, 4
// 006ee5cd  81f9c8000000         cmp ecx, 0xc8
// 006ee5d3  7e47                 jle 0x6ee61c
// 006ee5d5  8b16                 mov edx, dword ptr [esi]
// 006ee5d7  8b423c               mov eax, dword ptr [edx + 0x3c]
// 006ee5da  685cde8e00           push 0x8ede5c
// 006ee5df  68c8000000           push 0xc8
// 006ee5e4  85c0                 test eax, eax
// 006ee5e6  7513                 jne 0x6ee5fb
// 006ee5e8  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ee5eb  68f0dd8e00           push 0x8eddf0
// 006ee5f0  50                   push eax
// 006ee5f1  e8aaaafdff           call 0x6c90a0
// 006ee5f6  83c410               add esp, 0x10
// 006ee5f9  eb12                 jmp 0x6ee60d
// 006ee5fb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ee5fe  50                   push eax
// 006ee5ff  68c8dd8e00           push 0x8eddc8
// 006ee604  51                   push ecx
// 006ee605  e896aafdff           call 0x6c90a0
// 006ee60a  83c414               add esp, 0x14
// 006ee60d  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ee610  6a00                 push 0
// 006ee612  50                   push eax
// 006ee613  52                   push edx
// 006ee614  e8372c0000           call 0x6f1250
// 006ee619  83c40c               add esp, 0xc
// 006ee61c  53                   push ebx
// 006ee61d  57                   push edi
// 006ee61e  e85df3ffff           call 0x6ed980
// 006ee623  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006ee627  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006ee62b  03cd                 add ecx, ebp
// 006ee62d  83c408               add esp, 8
// 006ee630  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 006ee638  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ee63c  45                   inc ebp
// 006ee63d  eb0d                 jmp 0x6ee64c
// 006ee63f  57                   push edi
// 006ee640  e89b400000           call 0x6f26e0
// 006ee645  83c404               add esp, 4
// 006ee648  804e4a02             or byte ptr [esi + 0x4a], 2
// 006ee64c  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 006ee650  7514                 jne 0x6ee666
// 006ee652  837f102c             cmp dword ptr [edi + 0x10], 0x2c
// 006ee656  750e                 jne 0x6ee666
// 006ee658  57                   push edi
// 006ee659  e882400000           call 0x6f26e0
// 006ee65e  83c404               add esp, 4
// 006ee661  e92affffff           jmp 0x6ee590
// 006ee666  8bd5                 mov edx, ebp
// 006ee668  8bc7                 mov eax, edi
// 006ee66a  e8b1f3ffff           call 0x6eda20
// 006ee66f  8a564a               mov dl, byte ptr [esi + 0x4a]
// 006ee672  8a4332               mov al, byte ptr [ebx + 0x32]
// 006ee675  80e201               and dl, 1
// 006ee678  2ac2                 sub al, dl
// 006ee67a  884649               mov byte ptr [esi + 0x49], al
// 006ee67d  0fb64b32             movzx ecx, byte ptr [ebx + 0x32]
// 006ee681  51                   push ecx
// 006ee682  53                   push ebx
// 006ee683  e8b8b60000           call 0x6f9d40
// 006ee688  83c408               add esp, 8
// 006ee68b  5e                   pop esi
// 006ee68c  5d                   pop ebp
// 006ee68d  5b                   pop ebx
// 006ee68e  83c408               add esp, 8
// 006ee691  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?parlist@@YAXPAULexState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
