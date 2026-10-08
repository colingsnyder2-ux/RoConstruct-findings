// roc 2007-03 0072f710  unit: seg_00720000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072f710
//
// 0072f710  56                   push esi
// 0072f711  57                   push edi
// 0072f712  8bf1                 mov esi, ecx
// 0072f714  33ff                 xor edi, edi
// 0072f716  397e04               cmp dword ptr [esi + 4], edi
// 0072f719  7e20                 jle 0x72f73b
// 0072f71b  53                   push ebx
// 0072f71c  33db                 xor ebx, ebx
// 0072f71e  8bff                 mov edi, edi
// 0072f720  8b06                 mov eax, dword ptr [esi]
// 0072f722  8b1403               mov edx, dword ptr [ebx + eax]
// 0072f725  8d0c03               lea ecx, [ebx + eax]
// 0072f728  8b4204               mov eax, dword ptr [edx + 4]
// 0072f72b  6a00                 push 0
// 0072f72d  ffd0                 call eax
// 0072f72f  83c701               add edi, 1
// 0072f732  83c338               add ebx, 0x38
// 0072f735  3b7e04               cmp edi, dword ptr [esi + 4]
// 0072f738  7ce6                 jl 0x72f720
// 0072f73a  5b                   pop ebx
// 0072f73b  8b0e                 mov ecx, dword ptr [esi]
// 0072f73d  51                   push ecx
// 0072f73e  e83d3cdcff           call 0x4f3380
// 0072f743  83c404               add esp, 4
// 0072f746  5f                   pop edi
// 0072f747  c70600000000         mov dword ptr [esi], 0
// 0072f74d  c7460400000000       mov dword ptr [esi + 4], 0
// 0072f754  c7460800000000       mov dword ptr [esi + 8], 0
// 0072f75b  5e                   pop esi
// 0072f75c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ??1?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
