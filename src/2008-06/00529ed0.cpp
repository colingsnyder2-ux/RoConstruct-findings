// from server: 100% by auto
// roc 2008-06 00529ed0  unit: G3D::Line  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529ed0
//
// 00529ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00529ed4  8a4808               mov cl, byte ptr [eax + 8]
// 00529ed7  53                   push ebx
// 00529ed8  56                   push esi
// 00529ed9  80f906               cmp cl, 6
// 00529edc  0f85a5000000         jne 0x529f87
// 00529ee2  80780908             cmp byte ptr [eax + 9], 8
// 00529ee6  753e                 jne 0x529f26
// 00529ee8  8b10                 mov edx, dword ptr [eax]
// 00529eea  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529eee  8bc8                 mov ecx, eax
// 00529ef0  85d2                 test edx, edx
// 00529ef2  0f86f4000000         jbe 0x529fec
// 00529ef8  8bf2                 mov esi, edx
// 00529efa  8d9b00000000         lea ebx, [ebx]
// 00529f00  8a10                 mov dl, byte ptr [eax]
// 00529f02  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f06  40                   inc eax
// 00529f07  8819                 mov byte ptr [ecx], bl
// 00529f09  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f0d  40                   inc eax
// 00529f0e  41                   inc ecx
// 00529f0f  8819                 mov byte ptr [ecx], bl
// 00529f11  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f15  40                   inc eax
// 00529f16  41                   inc ecx
// 00529f17  8819                 mov byte ptr [ecx], bl
// 00529f19  41                   inc ecx
// 00529f1a  8811                 mov byte ptr [ecx], dl
// 00529f1c  40                   inc eax
// 00529f1d  41                   inc ecx
// 00529f1e  83ee01               sub esi, 1
// 00529f21  75dd                 jne 0x529f00
// 00529f23  5e                   pop esi
// 00529f24  5b                   pop ebx
// 00529f25  c3                   ret 
// 00529f26  8b30                 mov esi, dword ptr [eax]
// 00529f28  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529f2c  8bc8                 mov ecx, eax
// 00529f2e  85f6                 test esi, esi
// 00529f30  0f86b6000000         jbe 0x529fec
// 00529f36  8a10                 mov dl, byte ptr [eax]
// 00529f38  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f3c  40                   inc eax
// 00529f3d  40                   inc eax
// 00529f3e  885c240d             mov byte ptr [esp + 0xd], bl
// 00529f42  0fb618               movzx ebx, byte ptr [eax]
// 00529f45  8819                 mov byte ptr [ecx], bl
// 00529f47  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f4b  885901               mov byte ptr [ecx + 1], bl
// 00529f4e  40                   inc eax
// 00529f4f  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f53  41                   inc ecx
// 00529f54  885901               mov byte ptr [ecx + 1], bl
// 00529f57  40                   inc eax
// 00529f58  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f5c  41                   inc ecx
// 00529f5d  40                   inc eax
// 00529f5e  885901               mov byte ptr [ecx + 1], bl
// 00529f61  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f65  41                   inc ecx
// 00529f66  40                   inc eax
// 00529f67  41                   inc ecx
// 00529f68  8819                 mov byte ptr [ecx], bl
// 00529f6a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529f6e  40                   inc eax
// 00529f6f  41                   inc ecx
// 00529f70  8819                 mov byte ptr [ecx], bl
// 00529f72  41                   inc ecx
// 00529f73  8811                 mov byte ptr [ecx], dl
// 00529f75  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00529f7a  41                   inc ecx
// 00529f7b  8811                 mov byte ptr [ecx], dl
// 00529f7d  40                   inc eax
// 00529f7e  41                   inc ecx
// 00529f7f  83ee01               sub esi, 1
// 00529f82  75b2                 jne 0x529f36
// 00529f84  5e                   pop esi
// 00529f85  5b                   pop ebx
// 00529f86  c3                   ret 
// 00529f87  80f904               cmp cl, 4
// 00529f8a  7560                 jne 0x529fec
// 00529f8c  80780908             cmp byte ptr [eax + 9], 8
// 00529f90  7523                 jne 0x529fb5
// 00529f92  8b10                 mov edx, dword ptr [eax]
// 00529f94  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529f98  8bc8                 mov ecx, eax
// 00529f9a  85d2                 test edx, edx
// 00529f9c  764e                 jbe 0x529fec
// 00529f9e  8bf2                 mov esi, edx
// 00529fa0  8a10                 mov dl, byte ptr [eax]
// 00529fa2  8a5801               mov bl, byte ptr [eax + 1]
// 00529fa5  40                   inc eax
// 00529fa6  8819                 mov byte ptr [ecx], bl
// 00529fa8  41                   inc ecx
// 00529fa9  8811                 mov byte ptr [ecx], dl
// 00529fab  40                   inc eax
// 00529fac  41                   inc ecx
// 00529fad  83ee01               sub esi, 1
// 00529fb0  75ee                 jne 0x529fa0
// 00529fb2  5e                   pop esi
// 00529fb3  5b                   pop ebx
// 00529fb4  c3                   ret 
// 00529fb5  8b30                 mov esi, dword ptr [eax]
// 00529fb7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00529fbb  8bc8                 mov ecx, eax
// 00529fbd  85f6                 test esi, esi
// 00529fbf  762b                 jbe 0x529fec
// 00529fc1  8a10                 mov dl, byte ptr [eax]
// 00529fc3  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529fc7  40                   inc eax
// 00529fc8  40                   inc eax
// 00529fc9  885c240d             mov byte ptr [esp + 0xd], bl
// 00529fcd  0fb618               movzx ebx, byte ptr [eax]
// 00529fd0  8819                 mov byte ptr [ecx], bl
// 00529fd2  0fb65801             movzx ebx, byte ptr [eax + 1]
// 00529fd6  40                   inc eax
// 00529fd7  41                   inc ecx
// 00529fd8  8819                 mov byte ptr [ecx], bl
// 00529fda  41                   inc ecx
// 00529fdb  8811                 mov byte ptr [ecx], dl
// 00529fdd  0fb654240d           movzx edx, byte ptr [esp + 0xd]
// 00529fe2  41                   inc ecx
// 00529fe3  8811                 mov byte ptr [ecx], dl
// 00529fe5  40                   inc eax
// 00529fe6  41                   inc ecx
// 00529fe7  83ee01               sub esi, 1
// 00529fea  75d5                 jne 0x529fc1
// 00529fec  5e                   pop esi
// 00529fed  5b                   pop ebx
// 00529fee  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_swap_alpha)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
