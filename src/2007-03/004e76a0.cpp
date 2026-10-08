// roc 2007-03 004e76a0  unit: seg_004e0000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e76a0
//
// 004e76a0  6aff                 push -1
// 004e76a2  6838e97400           push 0x74e938
// 004e76a7  64a100000000         mov eax, dword ptr fs:[0]
// 004e76ad  50                   push eax
// 004e76ae  51                   push ecx
// 004e76af  56                   push esi
// 004e76b0  57                   push edi
// 004e76b1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004e76b6  33c4                 xor eax, esp
// 004e76b8  50                   push eax
// 004e76b9  8d442410             lea eax, [esp + 0x10]
// 004e76bd  64a300000000         mov dword ptr fs:[0], eax
// 004e76c3  8bf1                 mov esi, ecx
// 004e76c5  8974240c             mov dword ptr [esp + 0xc], esi
// 004e76c9  8b460c               mov eax, dword ptr [esi + 0xc]
// 004e76cc  33ff                 xor edi, edi
// 004e76ce  50                   push eax
// 004e76cf  897c241c             mov dword ptr [esp + 0x1c], edi
// 004e76d3  e8a8bc0000           call 0x4f3380
// 004e76d8  897e0c               mov dword ptr [esi + 0xc], edi
// 004e76db  897e10               mov dword ptr [esi + 0x10], edi
// 004e76de  897e14               mov dword ptr [esi + 0x14], edi
// 004e76e1  8b0e                 mov ecx, dword ptr [esi]
// 004e76e3  51                   push ecx
// 004e76e4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004e76ec  e88fbc0000           call 0x4f3380
// 004e76f1  83c408               add esp, 8
// 004e76f4  893e                 mov dword ptr [esi], edi
// 004e76f6  897e04               mov dword ptr [esi + 4], edi
// 004e76f9  897e08               mov dword ptr [esi + 8], edi
// 004e76fc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e7700  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7707  59                   pop ecx
// 004e7708  5f                   pop edi
// 004e7709  5e                   pop esi
// 004e770a  83c410               add esp, 0x10
// 004e770d  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??1Vertex@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
