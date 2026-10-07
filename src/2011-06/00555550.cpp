// roc 2011-06 00555550  unit: G3D::LineSegment  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00555550
//
// 00555550  8b06                 mov eax, dword ptr [esi]
// 00555552  53                   push ebx
// 00555553  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 0055555a  8b0e                 mov ecx, dword ptr [esi]
// 0055555c  8b5104               mov edx, dword ptr [ecx + 4]
// 0055555f  6a01                 push 1
// 00555561  56                   push esi
// 00555562  ffd2                 call edx
// 00555564  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0055556a  33db                 xor ebx, ebx
// 0055556c  83c408               add esp, 8
// 0055556f  38580c               cmp byte ptr [eax + 0xc], bl
// 00555572  7413                 je 0x555587
// 00555574  8b0e                 mov ecx, dword ptr [esi]
// 00555576  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 0055557d  8b16                 mov edx, dword ptr [esi]
// 0055557f  8b02                 mov eax, dword ptr [edx]
// 00555581  56                   push esi
// 00555582  ffd0                 call eax
// 00555584  83c404               add esp, 4
// 00555587  8d86da000000         lea eax, [esi + 0xda]
// 0055558d  b910000000           mov ecx, 0x10
// 00555592  b205                 mov dl, 5
// 00555594  8858f0               mov byte ptr [eax - 0x10], bl
// 00555597  c60001               mov byte ptr [eax], 1
// 0055559a  885010               mov byte ptr [eax + 0x10], dl
// 0055559d  40                   inc eax
// 0055559e  83e901               sub ecx, 1
// 005555a1  75f1                 jne 0x555594
// 005555a3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005555a9  b901000000           mov ecx, 1
// 005555ae  8bd1                 mov edx, ecx
// 005555b0  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 005555b6  895e28               mov dword ptr [esi + 0x28], ebx
// 005555b9  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 005555bf  889e00010000         mov byte ptr [esi + 0x100], bl
// 005555c5  889e03010000         mov byte ptr [esi + 0x103], bl
// 005555cb  889e08010000         mov byte ptr [esi + 0x108], bl
// 005555d1  889e09010000         mov byte ptr [esi + 0x109], bl
// 005555d7  c6860101000001       mov byte ptr [esi + 0x101], 1
// 005555de  c6860201000001       mov byte ptr [esi + 0x102], 1
// 005555e5  66898e04010000       mov word ptr [esi + 0x104], cx
// 005555ec  66899606010000       mov word ptr [esi + 0x106], dx
// 005555f3  88480c               mov byte ptr [eax + 0xc], cl
// 005555f6  8ac1                 mov al, cl
// 005555f8  5b                   pop ebx
// 005555f9  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
