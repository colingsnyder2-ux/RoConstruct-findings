// roc 2009-12 005ff410  unit: G3D::_internal::DialogTemplate  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ff410
//
// 005ff410  8b06                 mov eax, dword ptr [esi]
// 005ff412  53                   push ebx
// 005ff413  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 005ff41a  8b0e                 mov ecx, dword ptr [esi]
// 005ff41c  8b5104               mov edx, dword ptr [ecx + 4]
// 005ff41f  6a01                 push 1
// 005ff421  56                   push esi
// 005ff422  ffd2                 call edx
// 005ff424  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005ff42a  33db                 xor ebx, ebx
// 005ff42c  83c408               add esp, 8
// 005ff42f  38580c               cmp byte ptr [eax + 0xc], bl
// 005ff432  7413                 je 0x5ff447
// 005ff434  8b0e                 mov ecx, dword ptr [esi]
// 005ff436  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 005ff43d  8b16                 mov edx, dword ptr [esi]
// 005ff43f  8b02                 mov eax, dword ptr [edx]
// 005ff441  56                   push esi
// 005ff442  ffd0                 call eax
// 005ff444  83c404               add esp, 4
// 005ff447  8d86da000000         lea eax, [esi + 0xda]
// 005ff44d  b910000000           mov ecx, 0x10
// 005ff452  b205                 mov dl, 5
// 005ff454  8858f0               mov byte ptr [eax - 0x10], bl
// 005ff457  c60001               mov byte ptr [eax], 1
// 005ff45a  885010               mov byte ptr [eax + 0x10], dl
// 005ff45d  40                   inc eax
// 005ff45e  83e901               sub ecx, 1
// 005ff461  75f1                 jne 0x5ff454
// 005ff463  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005ff469  b901000000           mov ecx, 1
// 005ff46e  8bd1                 mov edx, ecx
// 005ff470  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 005ff476  895e28               mov dword ptr [esi + 0x28], ebx
// 005ff479  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 005ff47f  889e00010000         mov byte ptr [esi + 0x100], bl
// 005ff485  889e03010000         mov byte ptr [esi + 0x103], bl
// 005ff48b  889e08010000         mov byte ptr [esi + 0x108], bl
// 005ff491  889e09010000         mov byte ptr [esi + 0x109], bl
// 005ff497  c6860101000001       mov byte ptr [esi + 0x101], 1
// 005ff49e  c6860201000001       mov byte ptr [esi + 0x102], 1
// 005ff4a5  66898e04010000       mov word ptr [esi + 0x104], cx
// 005ff4ac  66899606010000       mov word ptr [esi + 0x106], dx
// 005ff4b3  88480c               mov byte ptr [eax + 0xc], cl
// 005ff4b6  8ac1                 mov al, cl
// 005ff4b8  5b                   pop ebx
// 005ff4b9  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
