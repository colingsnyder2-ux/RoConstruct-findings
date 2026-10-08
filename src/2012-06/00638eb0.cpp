// from server: 100% by auto
// roc 2012-06 00638eb0  unit: G3D::_internal::DialogTemplate  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638eb0
//
// 00638eb0  53                   push ebx
// 00638eb1  55                   push ebp
// 00638eb2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00638eb6  56                   push esi
// 00638eb7  57                   push edi
// 00638eb8  8b3db82ab200         mov edi, dword ptr [0xb22ab8]
// 00638ebe  68c83eb800           push 0xb83ec8
// 00638ec3  8bd8                 mov ebx, eax
// 00638ec5  ffd7                 call edi
// 00638ec7  8b442418             mov eax, dword ptr [esp + 0x18]
// 00638ecb  50                   push eax
// 00638ecc  68b033b800           push 0xb833b0
// 00638ed1  ffd7                 call edi
// 00638ed3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638ed7  51                   push ecx
// 00638ed8  68c0f3b400           push 0xb4f3c0
// 00638edd  ffd7                 call edi
// 00638edf  83c414               add esp, 0x14
// 00638ee2  83fb0a               cmp ebx, 0xa
// 00638ee5  7e05                 jle 0x638eec
// 00638ee7  bb0a000000           mov ebx, 0xa
// 00638eec  83ceff               or esi, 0xffffffff
// 00638eef  83fb01               cmp ebx, 1
// 00638ef2  7e7f                 jle 0x638f73
// 00638ef4  6848d8b500           push 0xb5d848
// 00638ef9  ffd7                 call edi
// 00638efb  68ac3eb800           push 0xb83eac
// 00638f00  ffd7                 call edi
// 00638f02  83c408               add esp, 8
// 00638f05  85f6                 test esi, esi
// 00638f07  7c08                 jl 0x638f11
// 00638f09  3bf3                 cmp esi, ebx
// 00638f0b  0f8c86000000         jl 0x638f97
// 00638f11  6848d8b500           push 0xb5d848
// 00638f16  ffd7                 call edi
// 00638f18  83c404               add esp, 4
// 00638f1b  33f6                 xor esi, esi
// 00638f1d  85db                 test ebx, ebx
// 00638f1f  7e27                 jle 0x638f48
// 00638f21  83fb03               cmp ebx, 3
// 00638f24  7f0d                 jg 0x638f33
// 00638f26  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 00638f2a  52                   push edx
// 00638f2b  56                   push esi
// 00638f2c  68a03eb800           push 0xb83ea0
// 00638f31  eb0b                 jmp 0x638f3e
// 00638f33  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 00638f37  50                   push eax
// 00638f38  56                   push esi
// 00638f39  68943eb800           push 0xb83e94
// 00638f3e  ffd7                 call edi
// 00638f40  46                   inc esi
// 00638f41  83c40c               add esp, 0xc
// 00638f44  3bf3                 cmp esi, ebx
// 00638f46  7cd9                 jl 0x638f21
// 00638f48  68903eb800           push 0xb83e90
// 00638f4d  ffd7                 call edi
// 00638f4f  83c404               add esp, 4
// 00638f52  ff150429b200         call dword ptr [0xb22904]
// 00638f58  8bf0                 mov esi, eax
// 00638f5a  83ee30               sub esi, 0x30
// 00638f5d  780c                 js 0x638f6b
// 00638f5f  3bf3                 cmp esi, ebx
// 00638f61  7d08                 jge 0x638f6b
// 00638f63  56                   push esi
// 00638f64  689c0db500           push 0xb50d9c
// 00638f69  eb95                 jmp 0x638f00
// 00638f6b  56                   push esi
// 00638f6c  68743eb800           push 0xb83e74
// 00638f71  eb8d                 jmp 0x638f00
// 00638f73  7510                 jne 0x638f85
// 00638f75  8b4d00               mov ecx, dword ptr [ebp]
// 00638f78  51                   push ecx
// 00638f79  68583eb800           push 0xb83e58
// 00638f7e  ffd7                 call edi
// 00638f80  83c408               add esp, 8
// 00638f83  eb0a                 jmp 0x638f8f
// 00638f85  68443eb800           push 0xb83e44
// 00638f8a  ffd7                 call edi
// 00638f8c  83c404               add esp, 4
// 00638f8f  ff150429b200         call dword ptr [0xb22904]
// 00638f95  33f6                 xor esi, esi
// 00638f97  68c83eb800           push 0xb83ec8
// 00638f9c  ffd7                 call edi
// 00638f9e  83c404               add esp, 4
// 00638fa1  5f                   pop edi
// 00638fa2  8bc6                 mov eax, esi
// 00638fa4  5e                   pop esi
// 00638fa5  5d                   pop ebp
// 00638fa6  5b                   pop ebx
// 00638fa7  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
