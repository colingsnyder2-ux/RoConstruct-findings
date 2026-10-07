// roc 2007-08 00511e00  unit: G3D::_internal::DialogTemplate  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511e00
//
// 00511e00  8b06                 mov eax, dword ptr [esi]
// 00511e02  53                   push ebx
// 00511e03  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 00511e0a  8b0e                 mov ecx, dword ptr [esi]
// 00511e0c  8b5104               mov edx, dword ptr [ecx + 4]
// 00511e0f  6a01                 push 1
// 00511e11  56                   push esi
// 00511e12  ffd2                 call edx
// 00511e14  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00511e1a  33db                 xor ebx, ebx
// 00511e1c  83c408               add esp, 8
// 00511e1f  38580c               cmp byte ptr [eax + 0xc], bl
// 00511e22  7413                 je 0x511e37
// 00511e24  8b0e                 mov ecx, dword ptr [esi]
// 00511e26  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 00511e2d  8b16                 mov edx, dword ptr [esi]
// 00511e2f  8b02                 mov eax, dword ptr [edx]
// 00511e31  56                   push esi
// 00511e32  ffd0                 call eax
// 00511e34  83c404               add esp, 4
// 00511e37  8d86da000000         lea eax, [esi + 0xda]
// 00511e3d  b910000000           mov ecx, 0x10
// 00511e42  b205                 mov dl, 5
// 00511e44  8858f0               mov byte ptr [eax - 0x10], bl
// 00511e47  c60001               mov byte ptr [eax], 1
// 00511e4a  885010               mov byte ptr [eax + 0x10], dl
// 00511e4d  83c001               add eax, 1
// 00511e50  83e901               sub ecx, 1
// 00511e53  75ef                 jne 0x511e44
// 00511e55  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00511e5b  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00511e61  895e28               mov dword ptr [esi + 0x28], ebx
// 00511e64  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 00511e6a  889e00010000         mov byte ptr [esi + 0x100], bl
// 00511e70  889e03010000         mov byte ptr [esi + 0x103], bl
// 00511e76  889e08010000         mov byte ptr [esi + 0x108], bl
// 00511e7c  889e09010000         mov byte ptr [esi + 0x109], bl
// 00511e82  c6860101000001       mov byte ptr [esi + 0x101], 1
// 00511e89  c6860201000001       mov byte ptr [esi + 0x102], 1
// 00511e90  66c786040100000100   mov word ptr [esi + 0x104], 1
// 00511e99  66c786060100000100   mov word ptr [esi + 0x106], 1
// 00511ea2  c6410c01             mov byte ptr [ecx + 0xc], 1
// 00511ea6  b001                 mov al, 1
// 00511ea8  5b                   pop ebx
// 00511ea9  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
