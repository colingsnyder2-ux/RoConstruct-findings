// roc 2007-08 00614820  unit: seg_00610000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614820
//
// 00614820  83ec08               sub esp, 8
// 00614823  53                   push ebx
// 00614824  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 00614827  55                   push ebp
// 00614828  56                   push esi
// 00614829  8b33                 mov esi, dword ptr [ebx]
// 0061482b  33ed                 xor ebp, ebp
// 0061482d  c6464a00             mov byte ptr [esi + 0x4a], 0
// 00614831  837f1029             cmp dword ptr [edi + 0x10], 0x29
// 00614835  895c2410             mov dword ptr [esp + 0x10], ebx
// 00614839  8974240c             mov dword ptr [esp + 0xc], esi
// 0061483d  0f84e5000000         je 0x614928
// 00614843  eb0b                 jmp 0x614850
// 00614845  8da42400000000       lea esp, [esp]
// 0061484c  8d642400             lea esp, [esp]
// 00614850  8b4710               mov eax, dword ptr [edi + 0x10]
// 00614853  2d17010000           sub eax, 0x117
// 00614858  0f84a3000000         je 0x614901
// 0061485e  83e806               sub eax, 6
// 00614861  7413                 je 0x614876
// 00614863  6884347c00           push 0x7c3484
// 00614868  57                   push edi
// 00614869  e8522d0000           call 0x6175c0
// 0061486e  83c408               add esp, 8
// 00614871  e998000000           jmp 0x61490e
// 00614876  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 00614879  57                   push edi
// 0061487a  e871410000           call 0x6189f0
// 0061487f  8b7730               mov esi, dword ptr [edi + 0x30]
// 00614882  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00614886  8d4c2801             lea ecx, [eax + ebp + 1]
// 0061488a  83c404               add esp, 4
// 0061488d  81f9c8000000         cmp ecx, 0xc8
// 00614893  7e47                 jle 0x6148dc
// 00614895  8b16                 mov edx, dword ptr [esi]
// 00614897  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0061489a  85c0                 test eax, eax
// 0061489c  6814347c00           push 0x7c3414
// 006148a1  68c8000000           push 0xc8
// 006148a6  7513                 jne 0x6148bb
// 006148a8  8b4610               mov eax, dword ptr [esi + 0x10]
// 006148ab  68a8337c00           push 0x7c33a8
// 006148b0  50                   push eax
// 006148b1  e8daa5ffff           call 0x60ee90
// 006148b6  83c410               add esp, 0x10
// 006148b9  eb12                 jmp 0x6148cd
// 006148bb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006148be  50                   push eax
// 006148bf  6880337c00           push 0x7c3380
// 006148c4  51                   push ecx
// 006148c5  e8c6a5ffff           call 0x60ee90
// 006148ca  83c414               add esp, 0x14
// 006148cd  8b560c               mov edx, dword ptr [esi + 0xc]
// 006148d0  6a00                 push 0
// 006148d2  50                   push eax
// 006148d3  52                   push edx
// 006148d4  e8472c0000           call 0x617520
// 006148d9  83c40c               add esp, 0xc
// 006148dc  53                   push ebx
// 006148dd  57                   push edi
// 006148de  e82df3ffff           call 0x613c10
// 006148e3  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006148e7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006148eb  03cd                 add ecx, ebp
// 006148ed  83c408               add esp, 8
// 006148f0  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 006148f8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006148fc  83c501               add ebp, 1
// 006148ff  eb0d                 jmp 0x61490e
// 00614901  57                   push edi
// 00614902  e8e9400000           call 0x6189f0
// 00614907  83c404               add esp, 4
// 0061490a  804e4a02             or byte ptr [esi + 0x4a], 2
// 0061490e  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00614912  7514                 jne 0x614928
// 00614914  837f102c             cmp dword ptr [edi + 0x10], 0x2c
// 00614918  750e                 jne 0x614928
// 0061491a  57                   push edi
// 0061491b  e8d0400000           call 0x6189f0
// 00614920  83c404               add esp, 4
// 00614923  e928ffffff           jmp 0x614850
// 00614928  8bd5                 mov edx, ebp
// 0061492a  8bc7                 mov eax, edi
// 0061492c  e88ff3ffff           call 0x613cc0
// 00614931  8a564a               mov dl, byte ptr [esi + 0x4a]
// 00614934  8a4332               mov al, byte ptr [ebx + 0x32]
// 00614937  80e201               and dl, 1
// 0061493a  2ac2                 sub al, dl
// 0061493c  884649               mov byte ptr [esi + 0x49], al
// 0061493f  0fb64b32             movzx ecx, byte ptr [ebx + 0x32]
// 00614943  51                   push ecx
// 00614944  53                   push ebx
// 00614945  e8663f0100           call 0x6288b0
// 0061494a  83c408               add esp, 8
// 0061494d  5e                   pop esi
// 0061494e  5d                   pop ebp
// 0061494f  5b                   pop ebx
// 00614950  83c408               add esp, 8
// 00614953  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?parlist@@YAXPAULexState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
