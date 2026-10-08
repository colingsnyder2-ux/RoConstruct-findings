// roc 2008-06 007f5fb0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5fb0
//
// 007f5fb0  53                   push ebx
// 007f5fb1  55                   push ebp
// 007f5fb2  56                   push esi
// 007f5fb3  57                   push edi
// 007f5fb4  6a05                 push 5
// 007f5fb6  83ec0c               sub esp, 0xc
// 007f5fb9  8bc4                 mov eax, esp
// 007f5fbb  b9b0375d00           mov ecx, 0x5d37b0
// 007f5fc0  8908                 mov dword ptr [eax], ecx
// 007f5fc2  33d2                 xor edx, edx
// 007f5fc4  895004               mov dword ptr [eax + 4], edx
// 007f5fc7  83ec0c               sub esp, 0xc
// 007f5fca  33f6                 xor esi, esi
// 007f5fcc  897008               mov dword ptr [eax + 8], esi
// 007f5fcf  8bc4                 mov eax, esp
// 007f5fd1  bfa01b5d00           mov edi, 0x5d1ba0
// 007f5fd6  8938                 mov dword ptr [eax], edi
// 007f5fd8  6868c18300           push 0x83c168
// 007f5fdd  33db                 xor ebx, ebx
// 007f5fdf  33ed                 xor ebp, ebp
// 007f5fe1  895804               mov dword ptr [eax + 4], ebx
// 007f5fe4  6848258200           push 0x822548
// 007f5fe9  b9c49e9700           mov ecx, 0x979ec4
// 007f5fee  896808               mov dword ptr [eax + 8], ebp
// 007f5ff1  e89ac9ddff           call 0x5d2990
// 007f5ff6  6850f07f00           push 0x7ff050
// 007f5ffb  e8afb7eaff           call 0x6a17af
// 007f6000  83c404               add esp, 4
// 007f6003  5f                   pop edi
// 007f6004  5e                   pop esi
// 007f6005  5d                   pop ebp
// 007f6006  5b                   pop ebx
// 007f6007  c3                   ret 
// library rbxgs/v8datamodel\SpawnLocation.cpp (function ??__Eprop_TeamColor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/SpawnLocation.cpp
