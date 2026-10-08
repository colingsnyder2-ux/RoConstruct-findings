// from server: 100% by auto
// roc 2010-06 00560d80  unit: G3D::_internal::DialogTemplate  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560d80
//
// 00560d80  8b06                 mov eax, dword ptr [esi]
// 00560d82  53                   push ebx
// 00560d83  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 00560d8a  8b0e                 mov ecx, dword ptr [esi]
// 00560d8c  8b5104               mov edx, dword ptr [ecx + 4]
// 00560d8f  6a01                 push 1
// 00560d91  56                   push esi
// 00560d92  ffd2                 call edx
// 00560d94  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00560d9a  33db                 xor ebx, ebx
// 00560d9c  83c408               add esp, 8
// 00560d9f  38580c               cmp byte ptr [eax + 0xc], bl
// 00560da2  7413                 je 0x560db7
// 00560da4  8b0e                 mov ecx, dword ptr [esi]
// 00560da6  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 00560dad  8b16                 mov edx, dword ptr [esi]
// 00560daf  8b02                 mov eax, dword ptr [edx]
// 00560db1  56                   push esi
// 00560db2  ffd0                 call eax
// 00560db4  83c404               add esp, 4
// 00560db7  8d86da000000         lea eax, [esi + 0xda]
// 00560dbd  b910000000           mov ecx, 0x10
// 00560dc2  b205                 mov dl, 5
// 00560dc4  8858f0               mov byte ptr [eax - 0x10], bl
// 00560dc7  c60001               mov byte ptr [eax], 1
// 00560dca  885010               mov byte ptr [eax + 0x10], dl
// 00560dcd  40                   inc eax
// 00560dce  83e901               sub ecx, 1
// 00560dd1  75f1                 jne 0x560dc4
// 00560dd3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00560dd9  b901000000           mov ecx, 1
// 00560dde  8bd1                 mov edx, ecx
// 00560de0  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00560de6  895e28               mov dword ptr [esi + 0x28], ebx
// 00560de9  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 00560def  889e00010000         mov byte ptr [esi + 0x100], bl
// 00560df5  889e03010000         mov byte ptr [esi + 0x103], bl
// 00560dfb  889e08010000         mov byte ptr [esi + 0x108], bl
// 00560e01  889e09010000         mov byte ptr [esi + 0x109], bl
// 00560e07  c6860101000001       mov byte ptr [esi + 0x101], 1
// 00560e0e  c6860201000001       mov byte ptr [esi + 0x102], 1
// 00560e15  66898e04010000       mov word ptr [esi + 0x104], cx
// 00560e1c  66899606010000       mov word ptr [esi + 0x106], dx
// 00560e23  88480c               mov byte ptr [eax + 0xc], cl
// 00560e26  8ac1                 mov al, cl
// 00560e28  5b                   pop ebx
// 00560e29  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
