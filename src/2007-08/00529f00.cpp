// roc 2007-08 00529f00  unit: seg_00520000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529f00
//
// 00529f00  8b4804               mov ecx, dword ptr [eax + 4]
// 00529f03  8b11                 mov edx, dword ptr [ecx]
// 00529f05  56                   push esi
// 00529f06  8bb0a8010000         mov esi, dword ptr [eax + 0x1a8]
// 00529f0c  57                   push edi
// 00529f0d  68fc070000           push 0x7fc
// 00529f12  6a01                 push 1
// 00529f14  50                   push eax
// 00529f15  ffd2                 call edx
// 00529f17  05fc030000           add eax, 0x3fc
// 00529f1c  83c40c               add esp, 0xc
// 00529f1f  894628               mov dword ptr [esi + 0x28], eax
// 00529f22  33d2                 xor edx, edx
// 00529f24  33c9                 xor ecx, ecx
// 00529f26  33ff                 xor edi, edi
// 00529f28  8bf0                 mov esi, eax
// 00529f2a  8d9b00000000         lea ebx, [ebx]
// 00529f30  891488               mov dword ptr [eax + ecx*4], edx
// 00529f33  893e                 mov dword ptr [esi], edi
// 00529f35  83c101               add ecx, 1
// 00529f38  83ee04               sub esi, 4
// 00529f3b  83c201               add edx, 1
// 00529f3e  83ef01               sub edi, 1
// 00529f41  83f910               cmp ecx, 0x10
// 00529f44  7cea                 jl 0x529f30
// 00529f46  83f930               cmp ecx, 0x30
// 00529f49  7d2a                 jge 0x529f75
// 00529f4b  8d348d00000000       lea esi, [ecx*4]
// 00529f52  8bfe                 mov edi, esi
// 00529f54  8bf0                 mov esi, eax
// 00529f56  2bf7                 sub esi, edi
// 00529f58  8bfa                 mov edi, edx
// 00529f5a  f7df                 neg edi
// 00529f5c  891488               mov dword ptr [eax + ecx*4], edx
// 00529f5f  893e                 mov dword ptr [esi], edi
// 00529f61  83c101               add ecx, 1
// 00529f64  8bf9                 mov edi, ecx
// 00529f66  f7d7                 not edi
// 00529f68  83e701               and edi, 1
// 00529f6b  83ee04               sub esi, 4
// 00529f6e  03d7                 add edx, edi
// 00529f70  83f930               cmp ecx, 0x30
// 00529f73  7ce3                 jl 0x529f58
// 00529f75  81f9ff000000         cmp ecx, 0xff
// 00529f7b  7f26                 jg 0x529fa3
// 00529f7d  8d348d00000000       lea esi, [ecx*4]
// 00529f84  53                   push ebx
// 00529f85  8bde                 mov ebx, esi
// 00529f87  8bfa                 mov edi, edx
// 00529f89  8bf0                 mov esi, eax
// 00529f8b  f7df                 neg edi
// 00529f8d  2bf3                 sub esi, ebx
// 00529f8f  5b                   pop ebx
// 00529f90  891488               mov dword ptr [eax + ecx*4], edx
// 00529f93  893e                 mov dword ptr [esi], edi
// 00529f95  83c101               add ecx, 1
// 00529f98  83ee04               sub esi, 4
// 00529f9b  81f9ff000000         cmp ecx, 0xff
// 00529fa1  7eed                 jle 0x529f90
// 00529fa3  5f                   pop edi
// 00529fa4  5e                   pop esi
// 00529fa5  c3                   ret 
// library jpeg-6b/jquant2.c (function _init_error_limit)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
