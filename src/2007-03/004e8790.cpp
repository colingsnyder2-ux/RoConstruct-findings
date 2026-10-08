// roc 2007-03 004e8790  unit: seg_004e0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8790
//
// 004e8790  56                   push esi
// 004e8791  57                   push edi
// 004e8792  8bf1                 mov esi, ecx
// 004e8794  33ff                 xor edi, edi
// 004e8796  397e04               cmp dword ptr [esi + 4], edi
// 004e8799  7e1a                 jle 0x4e87b5
// 004e879b  53                   push ebx
// 004e879c  33db                 xor ebx, ebx
// 004e879e  8bff                 mov edi, edi
// 004e87a0  8b0e                 mov ecx, dword ptr [esi]
// 004e87a2  03cb                 add ecx, ebx
// 004e87a4  e8f7eeffff           call 0x4e76a0
// 004e87a9  83c701               add edi, 1
// 004e87ac  83c318               add ebx, 0x18
// 004e87af  3b7e04               cmp edi, dword ptr [esi + 4]
// 004e87b2  7cec                 jl 0x4e87a0
// 004e87b4  5b                   pop ebx
// 004e87b5  8b06                 mov eax, dword ptr [esi]
// 004e87b7  50                   push eax
// 004e87b8  e8c3ab0000           call 0x4f3380
// 004e87bd  83c404               add esp, 4
// 004e87c0  5f                   pop edi
// 004e87c1  c70600000000         mov dword ptr [esi], 0
// 004e87c7  c7460400000000       mov dword ptr [esi + 4], 0
// 004e87ce  c7460800000000       mov dword ptr [esi + 8], 0
// 004e87d5  5e                   pop esi
// 004e87d6  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??1?$Array@VVertex@MeshAlg@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
