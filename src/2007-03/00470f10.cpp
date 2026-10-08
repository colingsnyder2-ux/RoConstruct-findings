// roc 2007-03 00470f10  unit: seg_00470000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470f10
//
// 00470f10  53                   push ebx
// 00470f11  57                   push edi
// 00470f12  8bf9                 mov edi, ecx
// 00470f14  33db                 xor ebx, ebx
// 00470f16  395f04               cmp dword ptr [edi + 4], ebx
// 00470f19  7e2c                 jle 0x470f47
// 00470f1b  55                   push ebp
// 00470f1c  56                   push esi
// 00470f1d  33ed                 xor ebp, ebp
// 00470f1f  90                   nop 
// 00470f20  8b37                 mov esi, dword ptr [edi]
// 00470f22  8b042e               mov eax, dword ptr [esi + ebp]
// 00470f25  03f5                 add esi, ebp
// 00470f27  50                   push eax
// 00470f28  e853240800           call 0x4f3380
// 00470f2d  33c0                 xor eax, eax
// 00470f2f  83c301               add ebx, 1
// 00470f32  83c404               add esp, 4
// 00470f35  8906                 mov dword ptr [esi], eax
// 00470f37  894604               mov dword ptr [esi + 4], eax
// 00470f3a  894608               mov dword ptr [esi + 8], eax
// 00470f3d  83c50c               add ebp, 0xc
// 00470f40  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00470f43  7cdb                 jl 0x470f20
// 00470f45  5e                   pop esi
// 00470f46  5d                   pop ebp
// 00470f47  8b0f                 mov ecx, dword ptr [edi]
// 00470f49  51                   push ecx
// 00470f4a  e831240800           call 0x4f3380
// 00470f4f  33c0                 xor eax, eax
// 00470f51  83c404               add esp, 4
// 00470f54  8907                 mov dword ptr [edi], eax
// 00470f56  894704               mov dword ptr [edi + 4], eax
// 00470f59  894708               mov dword ptr [edi + 8], eax
// 00470f5c  5f                   pop edi
// 00470f5d  5b                   pop ebx
// 00470f5e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\MD2Model_load.cpp (function ??1?$Array@V?$Array@H@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/MD2Model_load.cpp
