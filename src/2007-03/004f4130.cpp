// roc 2007-03 004f4130  unit: seg_004f0000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f4130
//
// 004f4130  56                   push esi
// 004f4131  57                   push edi
// 004f4132  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f4136  85ff                 test edi, edi
// 004f4138  8bf1                 mov esi, ecx
// 004f413a  750f                 jne 0x4f414b
// 004f413c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f4140  50                   push eax
// 004f4141  e8aaefffff           call 0x4f30f0
// 004f4146  5f                   pop edi
// 004f4147  5e                   pop esi
// 004f4148  c20800               ret 8
// 004f414b  8b860c280400         mov eax, dword ptr [esi + 0x4280c]
// 004f4151  3bf8                 cmp edi, eax
// 004f4153  53                   push ebx
// 004f4154  724f                 jb 0x4f41a5
// 004f4156  0500007d00           add eax, 0x7d0000
// 004f415b  3bf8                 cmp edi, eax
// 004f415d  7346                 jae 0x4f41a5
// 004f415f  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f4163  3d80000000           cmp eax, 0x80
// 004f4168  7708                 ja 0x4f4172
// 004f416a  5b                   pop ebx
// 004f416b  8bc7                 mov eax, edi
// 004f416d  5f                   pop edi
// 004f416e  5e                   pop esi
// 004f416f  c20800               ret 8
// 004f4172  50                   push eax
// 004f4173  e878efffff           call 0x4f30f0
// 004f4178  6880000000           push 0x80
// 004f417d  8bd8                 mov ebx, eax
// 004f417f  57                   push edi
// 004f4180  53                   push ebx
// 004f4181  e82affffff           call 0x4f40b0
// 004f4186  8b8e08280400         mov ecx, dword ptr [esi + 0x42808]
// 004f418c  83c40c               add esp, 0xc
// 004f418f  89bc8e08400000       mov dword ptr [esi + ecx*4 + 0x4008], edi
// 004f4196  83860828040001       add dword ptr [esi + 0x42808], 1
// 004f419d  8bc3                 mov eax, ebx
// 004f419f  5b                   pop ebx
// 004f41a0  5f                   pop edi
// 004f41a1  5e                   pop esi
// 004f41a2  c20800               ret 8
// 004f41a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f41a9  55                   push ebp
// 004f41aa  8b6ffc               mov ebp, dword ptr [edi - 4]
// 004f41ad  3bc5                 cmp eax, ebp
// 004f41af  7709                 ja 0x4f41ba
// 004f41b1  5d                   pop ebp
// 004f41b2  5b                   pop ebx
// 004f41b3  8bc7                 mov eax, edi
// 004f41b5  5f                   pop edi
// 004f41b6  5e                   pop esi
// 004f41b7  c20800               ret 8
// 004f41ba  50                   push eax
// 004f41bb  e830efffff           call 0x4f30f0
// 004f41c0  55                   push ebp
// 004f41c1  8bd8                 mov ebx, eax
// 004f41c3  57                   push edi
// 004f41c4  53                   push ebx
// 004f41c5  e8e6feffff           call 0x4f40b0
// 004f41ca  83c40c               add esp, 0xc
// 004f41cd  57                   push edi
// 004f41ce  8bce                 mov ecx, esi
// 004f41d0  e88bf0ffff           call 0x4f3260
// 004f41d5  5d                   pop ebp
// 004f41d6  8bc3                 mov eax, ebx
// 004f41d8  5b                   pop ebx
// 004f41d9  5f                   pop edi
// 004f41da  5e                   pop esi
// 004f41db  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?realloc@BufferPool@G3D@@QAEPAXPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
