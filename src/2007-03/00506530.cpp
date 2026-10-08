// roc 2007-03 00506530  unit: seg_00500000  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506530
//
// 00506530  8b06                 mov eax, dword ptr [esi]
// 00506532  53                   push ebx
// 00506533  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 0050653a  8b0e                 mov ecx, dword ptr [esi]
// 0050653c  8b5104               mov edx, dword ptr [ecx + 4]
// 0050653f  6a01                 push 1
// 00506541  56                   push esi
// 00506542  ffd2                 call edx
// 00506544  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0050654a  33db                 xor ebx, ebx
// 0050654c  83c408               add esp, 8
// 0050654f  38580c               cmp byte ptr [eax + 0xc], bl
// 00506552  7413                 je 0x506567
// 00506554  8b0e                 mov ecx, dword ptr [esi]
// 00506556  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 0050655d  8b16                 mov edx, dword ptr [esi]
// 0050655f  8b02                 mov eax, dword ptr [edx]
// 00506561  56                   push esi
// 00506562  ffd0                 call eax
// 00506564  83c404               add esp, 4
// 00506567  8d86da000000         lea eax, [esi + 0xda]
// 0050656d  b910000000           mov ecx, 0x10
// 00506572  b205                 mov dl, 5
// 00506574  8858f0               mov byte ptr [eax - 0x10], bl
// 00506577  c60001               mov byte ptr [eax], 1
// 0050657a  885010               mov byte ptr [eax + 0x10], dl
// 0050657d  83c001               add eax, 1
// 00506580  83e901               sub ecx, 1
// 00506583  75ef                 jne 0x506574
// 00506585  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0050658b  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00506591  895e28               mov dword ptr [esi + 0x28], ebx
// 00506594  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 0050659a  889e00010000         mov byte ptr [esi + 0x100], bl
// 005065a0  889e03010000         mov byte ptr [esi + 0x103], bl
// 005065a6  889e08010000         mov byte ptr [esi + 0x108], bl
// 005065ac  889e09010000         mov byte ptr [esi + 0x109], bl
// 005065b2  c6860101000001       mov byte ptr [esi + 0x101], 1
// 005065b9  c6860201000001       mov byte ptr [esi + 0x102], 1
// 005065c0  66c786040100000100   mov word ptr [esi + 0x104], 1
// 005065c9  66c786060100000100   mov word ptr [esi + 0x106], 1
// 005065d2  c6410c01             mov byte ptr [ecx + 0xc], 1
// 005065d6  b001                 mov al, 1
// 005065d8  5b                   pop ebx
// 005065d9  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
