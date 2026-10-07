// roc 2008-06 00519c90  unit: G3D::_internal::DialogTemplate  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519c90
//
// 00519c90  8b06                 mov eax, dword ptr [esi]
// 00519c92  53                   push ebx
// 00519c93  c7401466000000       mov dword ptr [eax + 0x14], 0x66
// 00519c9a  8b0e                 mov ecx, dword ptr [esi]
// 00519c9c  8b5104               mov edx, dword ptr [ecx + 4]
// 00519c9f  6a01                 push 1
// 00519ca1  56                   push esi
// 00519ca2  ffd2                 call edx
// 00519ca4  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00519caa  33db                 xor ebx, ebx
// 00519cac  83c408               add esp, 8
// 00519caf  38580c               cmp byte ptr [eax + 0xc], bl
// 00519cb2  7413                 je 0x519cc7
// 00519cb4  8b0e                 mov ecx, dword ptr [esi]
// 00519cb6  c741143d000000       mov dword ptr [ecx + 0x14], 0x3d
// 00519cbd  8b16                 mov edx, dword ptr [esi]
// 00519cbf  8b02                 mov eax, dword ptr [edx]
// 00519cc1  56                   push esi
// 00519cc2  ffd0                 call eax
// 00519cc4  83c404               add esp, 4
// 00519cc7  8d86da000000         lea eax, [esi + 0xda]
// 00519ccd  b910000000           mov ecx, 0x10
// 00519cd2  b205                 mov dl, 5
// 00519cd4  8858f0               mov byte ptr [eax - 0x10], bl
// 00519cd7  c60001               mov byte ptr [eax], 1
// 00519cda  885010               mov byte ptr [eax + 0x10], dl
// 00519cdd  40                   inc eax
// 00519cde  83e901               sub ecx, 1
// 00519ce1  75f1                 jne 0x519cd4
// 00519ce3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00519ce9  b901000000           mov ecx, 1
// 00519cee  8bd1                 mov edx, ecx
// 00519cf0  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 00519cf6  895e28               mov dword ptr [esi + 0x28], ebx
// 00519cf9  889e0a010000         mov byte ptr [esi + 0x10a], bl
// 00519cff  889e00010000         mov byte ptr [esi + 0x100], bl
// 00519d05  889e03010000         mov byte ptr [esi + 0x103], bl
// 00519d0b  889e08010000         mov byte ptr [esi + 0x108], bl
// 00519d11  889e09010000         mov byte ptr [esi + 0x109], bl
// 00519d17  c6860101000001       mov byte ptr [esi + 0x101], 1
// 00519d1e  c6860201000001       mov byte ptr [esi + 0x102], 1
// 00519d25  66898e04010000       mov word ptr [esi + 0x104], cx
// 00519d2c  66899606010000       mov word ptr [esi + 0x106], dx
// 00519d33  88480c               mov byte ptr [eax + 0xc], cl
// 00519d36  8ac1                 mov al, cl
// 00519d38  5b                   pop ebx
// 00519d39  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_soi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
