// from server: 100% by auto
// roc 2008-06 004763d0  unit: G3D::VARArea  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004763d0
//
// 004763d0  6aff                 push -1
// 004763d2  6814497c00           push 0x7c4914
// 004763d7  64a100000000         mov eax, dword ptr fs:[0]
// 004763dd  50                   push eax
// 004763de  64892500000000       mov dword ptr fs:[0], esp
// 004763e5  83ec08               sub esp, 8
// 004763e8  53                   push ebx
// 004763e9  33db                 xor ebx, ebx
// 004763eb  56                   push esi
// 004763ec  895c2418             mov dword ptr [esp + 0x18], ebx
// 004763f0  895c2408             mov dword ptr [esp + 8], ebx
// 004763f4  e877feffff           call 0x476270
// 004763f9  6a38                 push 0x38
// 004763fb  e820a52200           call 0x6a0920
// 00476400  83c404               add esp, 4
// 00476403  8944240c             mov dword ptr [esp + 0xc], eax
// 00476407  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0047640f  3bc3                 cmp eax, ebx
// 00476411  7413                 je 0x476426
// 00476413  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00476417  8b542424             mov edx, dword ptr [esp + 0x24]
// 0047641b  51                   push ecx
// 0047641c  52                   push edx
// 0047641d  8bc8                 mov ecx, eax
// 0047641f  e82cf7ffff           call 0x475b50
// 00476424  eb02                 jmp 0x476428
// 00476426  33c0                 xor eax, eax
// 00476428  8b742420             mov esi, dword ptr [esp + 0x20]
// 0047642c  50                   push eax
// 0047642d  8bce                 mov ecx, esi
// 0047642f  885c241c             mov byte ptr [esp + 0x1c], bl
// 00476433  891e                 mov dword ptr [esi], ebx
// 00476435  e8662b1200           call 0x598fa0
// 0047643a  56                   push esi
// 0047643b  b9d4ef9600           mov ecx, 0x96efd4
// 00476440  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00476444  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0047644c  e8fffcffff           call 0x476150
// 00476451  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00476455  8bc6                 mov eax, esi
// 00476457  5e                   pop esi
// 00476458  5b                   pop ebx
// 00476459  64890d00000000       mov dword ptr fs:[0], ecx
// 00476460  83c414               add esp, 0x14
// 00476463  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?create@VARArea@G3D@@SA?AV?$ReferenceCountedPointer@VVARArea@G3D@@@2@IW4UsageHint@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
