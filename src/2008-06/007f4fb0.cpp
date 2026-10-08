// roc 2008-06 007f4fb0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4fb0
//
// 007f4fb0  53                   push ebx
// 007f4fb1  55                   push ebp
// 007f4fb2  56                   push esi
// 007f4fb3  57                   push edi
// 007f4fb4  6a04                 push 4
// 007f4fb6  83ec0c               sub esp, 0xc
// 007f4fb9  8bc4                 mov eax, esp
// 007f4fbb  b970265b00           mov ecx, 0x5b2670
// 007f4fc0  8908                 mov dword ptr [eax], ecx
// 007f4fc2  33d2                 xor edx, edx
// 007f4fc4  895004               mov dword ptr [eax + 4], edx
// 007f4fc7  83ec0c               sub esp, 0xc
// 007f4fca  33f6                 xor esi, esi
// 007f4fcc  897008               mov dword ptr [eax + 8], esi
// 007f4fcf  8bc4                 mov eax, esp
// 007f4fd1  bf30085b00           mov edi, 0x5b0830
// 007f4fd6  8938                 mov dword ptr [eax], edi
// 007f4fd8  68ac298300           push 0x8329ac
// 007f4fdd  33db                 xor ebx, ebx
// 007f4fdf  33ed                 xor ebp, ebp
// 007f4fe1  895804               mov dword ptr [eax + 4], ebx
// 007f4fe4  68d4508300           push 0x8350d4
// 007f4fe9  b9206d9700           mov ecx, 0x976d20
// 007f4fee  896808               mov dword ptr [eax + 8], ebp
// 007f4ff1  e83acadbff           call 0x5b1a30
// 007f4ff6  6860e27f00           push 0x7fe260
// 007f4ffb  e8afc7eaff           call 0x6a17af
// 007f5000  83c404               add esp, 4
// 007f5003  5f                   pop edi
// 007f5004  5e                   pop esi
// 007f5005  5d                   pop ebp
// 007f5006  5b                   pop ebx
// 007f5007  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentPoint@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
