// from server: 100% by auto
// roc 2009-06 0057d630  unit: G3D::_internal::DialogTemplate  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057d630
//
// 0057d630  8b06                 mov eax, dword ptr [esi]
// 0057d632  53                   push ebx
// 0057d633  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 0057d63a  8b0e                 mov ecx, dword ptr [esi]
// 0057d63c  8b5104               mov edx, dword ptr [ecx + 4]
// 0057d63f  6a01                 push 1
// 0057d641  56                   push esi
// 0057d642  ffd2                 call edx
// 0057d644  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057d64a  33db                 xor ebx, ebx
// 0057d64c  83c408               add esp, 8
// 0057d64f  38580c               cmp byte ptr [eax + 0xc], bl
// 0057d652  7413                 je 0x57d667
// 0057d654  8b0e                 mov ecx, dword ptr [esi]
// 0057d656  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 0057d65d  8b16                 mov edx, dword ptr [esi]
// 0057d65f  8b02                 mov eax, dword ptr [edx]
// 0057d661  56                   push esi
// 0057d662  ffd0                 call eax
// 0057d664  83c404               add esp, 4
// 0057d667  8d86da000000         lea eax, [esi + 0xda]
// 0057d66d  b910000000           mov ecx, 0x10
// 0057d672  b205                 mov dl, 5
// 0057d674  8858f0               mov byte ptr [eax - 0x10], bl
// 0057d677  c60001               mov byte ptr [eax], 1
// 0057d67a  885010               mov byte ptr [eax + 0x10], dl
// 0057d67d  40                   inc eax
// 0057d67e  83e901               sub ecx, 1
// 0057d681  75f1                 jne 0x57d674
// 0057d683  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057d689  b901000000           mov ecx, 1
// 0057d68e  8bd1                 mov edx, ecx
// 0057d690  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 0057d696  895e28               mov dword ptr [esi + 0x28], ebx
// 0057d699  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 0057d69f  889e00010000         mov byte ptr [esi + 0x100], bl
// 0057d6a5  889e03010000         mov byte ptr [esi + 0x103], bl
// 0057d6ab  889e08010000         mov byte ptr [esi + 0x108], bl
// 0057d6b1  889e09010000         mov byte ptr [esi + 0x109], bl
// 0057d6b7  c6860101000001       mov byte ptr [esi + 0x101], 1
// 0057d6be  c6860201000001       mov byte ptr [esi + 0x102], 1
// 0057d6c5  66898e04010000       mov word ptr [esi + 0x104], cx
// 0057d6cc  66899606010000       mov word ptr [esi + 0x106], dx
// 0057d6d3  88480c               mov byte ptr [eax + 0xc], cl
// 0057d6d6  8ac1                 mov al, cl
// 0057d6d8  5b                   pop ebx
// 0057d6d9  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
