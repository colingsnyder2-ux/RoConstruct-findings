// roc 2009-12 007d25b0  unit: seg_007d0000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d25b0
//
// 007d25b0  83ec08               sub esp, 8
// 007d25b3  53                   push ebx
// 007d25b4  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 007d25b7  55                   push ebp
// 007d25b8  56                   push esi
// 007d25b9  8b33                 mov esi, dword ptr [ebx]
// 007d25bb  33ed                 xor ebp, ebp
// 007d25bd  c6464a00             mov byte ptr [esi + 0x4a], 0
// 007d25c1  837f1029             cmp dword ptr [edi + 0x10], 0x29
// 007d25c5  895c2410             mov dword ptr [esp + 0x10], ebx
// 007d25c9  8974240c             mov dword ptr [esp + 0xc], esi
// 007d25cd  0f84e3000000         je 0x7d26b6
// 007d25d3  eb0b                 jmp 0x7d25e0
// 007d25d5  8da42400000000       lea esp, [esp]
// 007d25dc  8d642400             lea esp, [esp]
// 007d25e0  8b4710               mov eax, dword ptr [edi + 0x10]
// 007d25e3  2d17010000           sub eax, 0x117
// 007d25e8  0f84a1000000         je 0x7d268f
// 007d25ee  83e806               sub eax, 6
// 007d25f1  7413                 je 0x7d2606
// 007d25f3  68e4ee9e00           push 0x9eeee4
// 007d25f8  57                   push edi
// 007d25f9  e8422d0000           call 0x7d5340
// 007d25fe  83c408               add esp, 8
// 007d2601  e996000000           jmp 0x7d269c
// 007d2606  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 007d2609  57                   push edi
// 007d260a  e821410000           call 0x7d6730
// 007d260f  8b7730               mov esi, dword ptr [edi + 0x30]
// 007d2612  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 007d2616  8d4c2801             lea ecx, [eax + ebp + 1]
// 007d261a  83c404               add esp, 4
// 007d261d  81f9c8000000         cmp ecx, 0xc8
// 007d2623  7e47                 jle 0x7d266c
// 007d2625  8b16                 mov edx, dword ptr [esi]
// 007d2627  8b423c               mov eax, dword ptr [edx + 0x3c]
// 007d262a  6874ee9e00           push 0x9eee74
// 007d262f  68c8000000           push 0xc8
// 007d2634  85c0                 test eax, eax
// 007d2636  7513                 jne 0x7d264b
// 007d2638  8b4610               mov eax, dword ptr [esi + 0x10]
// 007d263b  6808ee9e00           push 0x9eee08
// 007d2640  50                   push eax
// 007d2641  e83a7ffcff           call 0x79a580
// 007d2646  83c410               add esp, 0x10
// 007d2649  eb12                 jmp 0x7d265d
// 007d264b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007d264e  50                   push eax
// 007d264f  68e0ed9e00           push 0x9eede0
// 007d2654  51                   push ecx
// 007d2655  e8267ffcff           call 0x79a580
// 007d265a  83c414               add esp, 0x14
// 007d265d  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d2660  6a00                 push 0
// 007d2662  50                   push eax
// 007d2663  52                   push edx
// 007d2664  e8372c0000           call 0x7d52a0
// 007d2669  83c40c               add esp, 0xc
// 007d266c  53                   push ebx
// 007d266d  57                   push edi
// 007d266e  e85df3ffff           call 0x7d19d0
// 007d2673  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007d2677  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007d267b  03cd                 add ecx, ebp
// 007d267d  83c408               add esp, 8
// 007d2680  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 007d2688  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d268c  45                   inc ebp
// 007d268d  eb0d                 jmp 0x7d269c
// 007d268f  57                   push edi
// 007d2690  e89b400000           call 0x7d6730
// 007d2695  83c404               add esp, 4
// 007d2698  804e4a02             or byte ptr [esi + 0x4a], 2
// 007d269c  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 007d26a0  7514                 jne 0x7d26b6
// 007d26a2  837f102c             cmp dword ptr [edi + 0x10], 0x2c
// 007d26a6  750e                 jne 0x7d26b6
// 007d26a8  57                   push edi
// 007d26a9  e882400000           call 0x7d6730
// 007d26ae  83c404               add esp, 4
// 007d26b1  e92affffff           jmp 0x7d25e0
// 007d26b6  8bd5                 mov edx, ebp
// 007d26b8  8bc7                 mov eax, edi
// 007d26ba  e8b1f3ffff           call 0x7d1a70
// 007d26bf  8a564a               mov dl, byte ptr [esi + 0x4a]
// 007d26c2  8a4332               mov al, byte ptr [ebx + 0x32]
// 007d26c5  80e201               and dl, 1
// 007d26c8  2ac2                 sub al, dl
// 007d26ca  884649               mov byte ptr [esi + 0x49], al
// 007d26cd  0fb64b32             movzx ecx, byte ptr [ebx + 0x32]
// 007d26d1  51                   push ecx
// 007d26d2  53                   push ebx
// 007d26d3  e8889a0000           call 0x7dc160
// 007d26d8  83c408               add esp, 8
// 007d26db  5e                   pop esi
// 007d26dc  5d                   pop ebp
// 007d26dd  5b                   pop ebx
// 007d26de  83c408               add esp, 8
// 007d26e1  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?parlist@@YAXPAULexState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
