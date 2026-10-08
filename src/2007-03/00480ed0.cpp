// roc 2007-03 00480ed0  unit: seg_00480000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480ed0
//
// 00480ed0  56                   push esi
// 00480ed1  57                   push edi
// 00480ed2  8bf1                 mov esi, ecx
// 00480ed4  33ff                 xor edi, edi
// 00480ed6  397e04               cmp dword ptr [esi + 4], edi
// 00480ed9  7e1d                 jle 0x480ef8
// 00480edb  53                   push ebx
// 00480edc  33db                 xor ebx, ebx
// 00480ede  8bff                 mov edi, edi
// 00480ee0  8b06                 mov eax, dword ptr [esi]
// 00480ee2  8d4c0308             lea ecx, [ebx + eax + 8]
// 00480ee6  ff158ce77700         call dword ptr [0x77e78c]
// 00480eec  83c701               add edi, 1
// 00480eef  83c330               add ebx, 0x30
// 00480ef2  3b7e04               cmp edi, dword ptr [esi + 4]
// 00480ef5  7ce9                 jl 0x480ee0
// 00480ef7  5b                   pop ebx
// 00480ef8  8b0e                 mov ecx, dword ptr [esi]
// 00480efa  51                   push ecx
// 00480efb  e880240700           call 0x4f3380
// 00480f00  83c404               add esp, 4
// 00480f03  5f                   pop edi
// 00480f04  c70600000000         mov dword ptr [esi], 0
// 00480f0a  c7460400000000       mov dword ptr [esi + 4], 0
// 00480f11  c7460800000000       mov dword ptr [esi + 8], 0
// 00480f18  5e                   pop esi
// 00480f19  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ??1?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
