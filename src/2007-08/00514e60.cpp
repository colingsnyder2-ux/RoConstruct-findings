// from server: 100% by auto
// roc 2007-08 00514e60  unit: G3D::_internal::DialogTemplate  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514e60
//
// 00514e60  53                   push ebx
// 00514e61  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00514e65  83c8ff               or eax, 0xffffffff
// 00514e68  33d2                 xor edx, edx
// 00514e6a  f7f3                 div ebx
// 00514e6c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00514e70  56                   push esi
// 00514e71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00514e75  57                   push edi
// 00514e76  8b7e6c               mov edi, dword ptr [esi + 0x6c]
// 00514e79  3bc8                 cmp ecx, eax
// 00514e7b  7614                 jbe 0x514e91
// 00514e7d  6820177a00           push 0x7a1720
// 00514e82  56                   push esi
// 00514e83  e8089b0000           call 0x51e990
// 00514e88  83c408               add esp, 8
// 00514e8b  5f                   pop edi
// 00514e8c  5e                   pop esi
// 00514e8d  33c0                 xor eax, eax
// 00514e8f  5b                   pop ebx
// 00514e90  c3                   ret 
// 00514e91  0fafcb               imul ecx, ebx
// 00514e94  8bc7                 mov eax, edi
// 00514e96  51                   push ecx
// 00514e97  0d00001000           or eax, 0x100000
// 00514e9c  56                   push esi
// 00514e9d  89466c               mov dword ptr [esi + 0x6c], eax
// 00514ea0  e8db9d0000           call 0x51ec80
// 00514ea5  83c408               add esp, 8
// 00514ea8  897e6c               mov dword ptr [esi + 0x6c], edi
// 00514eab  5f                   pop edi
// 00514eac  5e                   pop esi
// 00514ead  5b                   pop ebx
// 00514eae  c3                   ret 
// library libpng-1.2.6/png.c (function _png_zalloc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 png.c
