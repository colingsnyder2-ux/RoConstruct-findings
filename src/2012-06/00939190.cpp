// roc 2012-06 00939190  unit: seg_00930000  size: 306 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00939190
//
// 00939190  83ec08               sub esp, 8
// 00939193  53                   push ebx
// 00939194  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 00939197  55                   push ebp
// 00939198  56                   push esi
// 00939199  8b33                 mov esi, dword ptr [ebx]
// 0093919b  33ed                 xor ebp, ebp
// 0093919d  c6464a00             mov byte ptr [esi + 0x4a], 0
// 009391a1  837f1029             cmp dword ptr [edi + 0x10], 0x29
// 009391a5  895c2410             mov dword ptr [esp + 0x10], ebx
// 009391a9  8974240c             mov dword ptr [esp + 0xc], esi
// 009391ad  0f84e3000000         je 0x939296
// 009391b3  eb0b                 jmp 0x9391c0
// 009391b5  8da42400000000       lea esp, [esp]
// 009391bc  8d642400             lea esp, [esp]
// 009391c0  8b4710               mov eax, dword ptr [edi + 0x10]
// 009391c3  2d17010000           sub eax, 0x117
// 009391c8  0f84a1000000         je 0x93926f
// 009391ce  83e806               sub eax, 6
// 009391d1  7413                 je 0x9391e6
// 009391d3  6840fcbf00           push 0xbffc40
// 009391d8  57                   push edi
// 009391d9  e832e0ffff           call 0x937210
// 009391de  83c408               add esp, 8
// 009391e1  e996000000           jmp 0x93927c
// 009391e6  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 009391e9  57                   push edi
// 009391ea  e8d1f1ffff           call 0x9383c0
// 009391ef  8b7730               mov esi, dword ptr [edi + 0x30]
// 009391f2  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 009391f6  8d4c2801             lea ecx, [eax + ebp + 1]
// 009391fa  83c404               add esp, 4
// 009391fd  81f9c8000000         cmp ecx, 0xc8
// 00939203  7e47                 jle 0x93924c
// 00939205  8b16                 mov edx, dword ptr [esi]
// 00939207  8b423c               mov eax, dword ptr [edx + 0x3c]
// 0093920a  68d0fbbf00           push 0xbffbd0
// 0093920f  68c8000000           push 0xc8
// 00939214  85c0                 test eax, eax
// 00939216  7513                 jne 0x93922b
// 00939218  8b4610               mov eax, dword ptr [esi + 0x10]
// 0093921b  6864fbbf00           push 0xbffb64
// 00939220  50                   push eax
// 00939221  e81a6ff1ff           call 0x850140
// 00939226  83c410               add esp, 0x10
// 00939229  eb12                 jmp 0x93923d
// 0093922b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0093922e  50                   push eax
// 0093922f  683cfbbf00           push 0xbffb3c
// 00939234  51                   push ecx
// 00939235  e8066ff1ff           call 0x850140
// 0093923a  83c414               add esp, 0x14
// 0093923d  8b560c               mov edx, dword ptr [esi + 0xc]
// 00939240  6a00                 push 0
// 00939242  50                   push eax
// 00939243  52                   push edx
// 00939244  e827dfffff           call 0x937170
// 00939249  83c40c               add esp, 0xc
// 0093924c  53                   push ebx
// 0093924d  57                   push edi
// 0093924e  e81df3ffff           call 0x938570
// 00939253  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00939257  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0093925b  03cd                 add ecx, ebp
// 0093925d  83c408               add esp, 8
// 00939260  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 00939268  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0093926c  45                   inc ebp
// 0093926d  eb0d                 jmp 0x93927c
// 0093926f  57                   push edi
// 00939270  e84bf1ffff           call 0x9383c0
// 00939275  83c404               add esp, 4
// 00939278  804e4a02             or byte ptr [esi + 0x4a], 2
// 0093927c  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00939280  7514                 jne 0x939296
// 00939282  837f102c             cmp dword ptr [edi + 0x10], 0x2c
// 00939286  750e                 jne 0x939296
// 00939288  57                   push edi
// 00939289  e832f1ffff           call 0x9383c0
// 0093928e  83c404               add esp, 4
// 00939291  e92affffff           jmp 0x9391c0
// 00939296  8bd5                 mov edx, ebp
// 00939298  8bc7                 mov eax, edi
// 0093929a  e871f3ffff           call 0x938610
// 0093929f  8a564a               mov dl, byte ptr [esi + 0x4a]
// 009392a2  8a4332               mov al, byte ptr [ebx + 0x32]
// 009392a5  80e201               and dl, 1
// 009392a8  2ac2                 sub al, dl
// 009392aa  884649               mov byte ptr [esi + 0x49], al
// 009392ad  0fb64b32             movzx ecx, byte ptr [ebx + 0x32]
// 009392b1  51                   push ecx
// 009392b2  53                   push ebx
// 009392b3  e8c8df0200           call 0x967280
// 009392b8  83c408               add esp, 8
// 009392bb  5e                   pop esi
// 009392bc  5d                   pop ebp
// 009392bd  5b                   pop ebx
// 009392be  83c408               add esp, 8
// 009392c1  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?parlist@@YAXPAULexState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
