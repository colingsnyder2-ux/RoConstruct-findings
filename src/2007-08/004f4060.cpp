// roc 2007-08 004f4060  unit: boost::bad_lexical_cast  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4060
//
// 004f4060  6aff                 push -1
// 004f4062  68f8da7400           push 0x74daf8
// 004f4067  64a100000000         mov eax, dword ptr fs:[0]
// 004f406d  50                   push eax
// 004f406e  51                   push ecx
// 004f406f  56                   push esi
// 004f4070  57                   push edi
// 004f4071  a188518b00           mov eax, dword ptr [0x8b5188]
// 004f4076  33c4                 xor eax, esp
// 004f4078  50                   push eax
// 004f4079  8d442410             lea eax, [esp + 0x10]
// 004f407d  64a300000000         mov dword ptr fs:[0], eax
// 004f4083  8bf1                 mov esi, ecx
// 004f4085  8974240c             mov dword ptr [esp + 0xc], esi
// 004f4089  8b460c               mov eax, dword ptr [esi + 0xc]
// 004f408c  33ff                 xor edi, edi
// 004f408e  50                   push eax
// 004f408f  897c241c             mov dword ptr [esp + 0x1c], edi
// 004f4093  e878b70000           call 0x4ff810
// 004f4098  897e0c               mov dword ptr [esi + 0xc], edi
// 004f409b  897e10               mov dword ptr [esi + 0x10], edi
// 004f409e  897e14               mov dword ptr [esi + 0x14], edi
// 004f40a1  8b0e                 mov ecx, dword ptr [esi]
// 004f40a3  51                   push ecx
// 004f40a4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004f40ac  e85fb70000           call 0x4ff810
// 004f40b1  83c408               add esp, 8
// 004f40b4  893e                 mov dword ptr [esi], edi
// 004f40b6  897e04               mov dword ptr [esi + 4], edi
// 004f40b9  897e08               mov dword ptr [esi + 8], edi
// 004f40bc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f40c0  64890d00000000       mov dword ptr fs:[0], ecx
// 004f40c7  59                   pop ecx
// 004f40c8  5f                   pop edi
// 004f40c9  5e                   pop esi
// 004f40ca  83c410               add esp, 0x10
// 004f40cd  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ??1Vertex@MeshAlg@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
