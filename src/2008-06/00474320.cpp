// roc 2008-06 00474320  unit: G3D::Texture  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00474320
//
// 00474320  53                   push ebx
// 00474321  57                   push edi
// 00474322  8bf9                 mov edi, ecx
// 00474324  33db                 xor ebx, ebx
// 00474326  395f04               cmp dword ptr [edi + 4], ebx
// 00474329  7e2a                 jle 0x474355
// 0047432b  55                   push ebp
// 0047432c  56                   push esi
// 0047432d  33ed                 xor ebp, ebp
// 0047432f  90                   nop 
// 00474330  8b37                 mov esi, dword ptr [edi]
// 00474332  8b042e               mov eax, dword ptr [esi + ebp]
// 00474335  03f5                 add esi, ebp
// 00474337  50                   push eax
// 00474338  e8e3390900           call 0x507d20
// 0047433d  33c0                 xor eax, eax
// 0047433f  43                   inc ebx
// 00474340  83c404               add esp, 4
// 00474343  8906                 mov dword ptr [esi], eax
// 00474345  894604               mov dword ptr [esi + 4], eax
// 00474348  894608               mov dword ptr [esi + 8], eax
// 0047434b  83c50c               add ebp, 0xc
// 0047434e  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00474351  7cdd                 jl 0x474330
// 00474353  5e                   pop esi
// 00474354  5d                   pop ebp
// 00474355  8b0f                 mov ecx, dword ptr [edi]
// 00474357  51                   push ecx
// 00474358  e8c3390900           call 0x507d20
// 0047435d  33c0                 xor eax, eax
// 0047435f  83c404               add esp, 4
// 00474362  8907                 mov dword ptr [edi], eax
// 00474364  894704               mov dword ptr [edi + 4], eax
// 00474367  894708               mov dword ptr [edi + 8], eax
// 0047436a  5f                   pop edi
// 0047436b  5b                   pop ebx
// 0047436c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ??1?$Array@V?$Array@PBX@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
