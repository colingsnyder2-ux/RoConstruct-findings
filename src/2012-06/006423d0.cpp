// from server: 100% by auto
// roc 2012-06 006423d0  unit: G3D::Sphere  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006423d0
//
// 006423d0  8b06                 mov eax, dword ptr [esi]
// 006423d2  53                   push ebx
// 006423d3  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 006423da  8b0e                 mov ecx, dword ptr [esi]
// 006423dc  8b5104               mov edx, dword ptr [ecx + 4]
// 006423df  6a01                 push 1
// 006423e1  56                   push esi
// 006423e2  ffd2                 call edx
// 006423e4  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 006423ea  33db                 xor ebx, ebx
// 006423ec  83c408               add esp, 8
// 006423ef  38580c               cmp byte ptr [eax + 0xc], bl
// 006423f2  7413                 je 0x642407
// 006423f4  8b0e                 mov ecx, dword ptr [esi]
// 006423f6  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 006423fd  8b16                 mov edx, dword ptr [esi]
// 006423ff  8b02                 mov eax, dword ptr [edx]
// 00642401  56                   push esi
// 00642402  ffd0                 call eax
// 00642404  83c404               add esp, 4
// 00642407  8d86da000000         lea eax, [esi + 0xda]
// 0064240d  b910000000           mov ecx, 0x10
// 00642412  b205                 mov dl, 5
// 00642414  8858f0               mov byte ptr [eax - 0x10], bl
// 00642417  c60001               mov byte ptr [eax], 1
// 0064241a  885010               mov byte ptr [eax + 0x10], dl
// 0064241d  40                   inc eax
// 0064241e  83e901               sub ecx, 1
// 00642421  75f1                 jne 0x642414
// 00642423  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00642429  b901000000           mov ecx, 1
// 0064242e  8bd1                 mov edx, ecx
// 00642430  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00642436  895e28               mov dword ptr [esi + 0x28], ebx
// 00642439  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 0064243f  889e00010000         mov byte ptr [esi + 0x100], bl
// 00642445  889e03010000         mov byte ptr [esi + 0x103], bl
// 0064244b  889e08010000         mov byte ptr [esi + 0x108], bl
// 00642451  889e09010000         mov byte ptr [esi + 0x109], bl
// 00642457  c6860101000001       mov byte ptr [esi + 0x101], 1
// 0064245e  c6860201000001       mov byte ptr [esi + 0x102], 1
// 00642465  66898e04010000       mov word ptr [esi + 0x104], cx
// 0064246c  66899606010000       mov word ptr [esi + 0x106], dx
// 00642473  88480c               mov byte ptr [eax + 0xc], cl
// 00642476  8ac1                 mov al, cl
// 00642478  5b                   pop ebx
// 00642479  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
