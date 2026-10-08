// from server: 100% by auto
// roc 2007-08 00470f40  unit: G3D::Texture  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470f40
//
// 00470f40  53                   push ebx
// 00470f41  57                   push edi
// 00470f42  8bf9                 mov edi, ecx
// 00470f44  33db                 xor ebx, ebx
// 00470f46  395f04               cmp dword ptr [edi + 4], ebx
// 00470f49  7e2c                 jle 0x470f77
// 00470f4b  55                   push ebp
// 00470f4c  56                   push esi
// 00470f4d  33ed                 xor ebp, ebp
// 00470f4f  90                   nop 
// 00470f50  8b37                 mov esi, dword ptr [edi]
// 00470f52  8b042e               mov eax, dword ptr [esi + ebp]
// 00470f55  03f5                 add esi, ebp
// 00470f57  50                   push eax
// 00470f58  e8b3e80800           call 0x4ff810
// 00470f5d  33c0                 xor eax, eax
// 00470f5f  83c301               add ebx, 1
// 00470f62  83c404               add esp, 4
// 00470f65  8906                 mov dword ptr [esi], eax
// 00470f67  894604               mov dword ptr [esi + 4], eax
// 00470f6a  894608               mov dword ptr [esi + 8], eax
// 00470f6d  83c50c               add ebp, 0xc
// 00470f70  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00470f73  7cdb                 jl 0x470f50
// 00470f75  5e                   pop esi
// 00470f76  5d                   pop ebp
// 00470f77  8b0f                 mov ecx, dword ptr [edi]
// 00470f79  51                   push ecx
// 00470f7a  e891e80800           call 0x4ff810
// 00470f7f  33c0                 xor eax, eax
// 00470f81  83c404               add esp, 4
// 00470f84  8907                 mov dword ptr [edi], eax
// 00470f86  894704               mov dword ptr [edi + 4], eax
// 00470f89  894708               mov dword ptr [edi + 8], eax
// 00470f8c  5f                   pop edi
// 00470f8d  5b                   pop ebx
// 00470f8e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??1?$Array@V?$Array@PBX@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
