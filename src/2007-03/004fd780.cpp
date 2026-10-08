// roc 2007-03 004fd780  unit: seg_004f0000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd780
//
// 004fd780  6aff                 push -1
// 004fd782  68e9097500           push 0x7509e9
// 004fd787  64a100000000         mov eax, dword ptr fs:[0]
// 004fd78d  50                   push eax
// 004fd78e  51                   push ecx
// 004fd78f  53                   push ebx
// 004fd790  56                   push esi
// 004fd791  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fd796  33c4                 xor eax, esp
// 004fd798  50                   push eax
// 004fd799  8d442410             lea eax, [esp + 0x10]
// 004fd79d  64a300000000         mov dword ptr fs:[0], eax
// 004fd7a3  8bf1                 mov esi, ecx
// 004fd7a5  8974240c             mov dword ptr [esp + 0xc], esi
// 004fd7a9  ff1584e77700         call dword ptr [0x77e784]
// 004fd7af  33db                 xor ebx, ebx
// 004fd7b1  68e8fe7900           push 0x79fee8
// 004fd7b6  8bce                 mov ecx, esi
// 004fd7b8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004fd7bc  895e44               mov dword ptr [esi + 0x44], ebx
// 004fd7bf  885e2c               mov byte ptr [esi + 0x2c], bl
// 004fd7c2  895e3c               mov dword ptr [esi + 0x3c], ebx
// 004fd7c5  ff15f0e67700         call dword ptr [0x77e6f0]
// 004fd7cb  895e30               mov dword ptr [esi + 0x30], ebx
// 004fd7ce  895e34               mov dword ptr [esi + 0x34], ebx
// 004fd7d1  895e38               mov dword ptr [esi + 0x38], ebx
// 004fd7d4  895e20               mov dword ptr [esi + 0x20], ebx
// 004fd7d7  885e24               mov byte ptr [esi + 0x24], bl
// 004fd7da  895e28               mov dword ptr [esi + 0x28], ebx
// 004fd7dd  885e1c               mov byte ptr [esi + 0x1c], bl
// 004fd7e0  8bc6                 mov eax, esi
// 004fd7e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fd7e6  64890d00000000       mov dword ptr fs:[0], ecx
// 004fd7ed  59                   pop ecx
// 004fd7ee  5e                   pop esi
// 004fd7ef  5b                   pop ebx
// 004fd7f0  83c410               add esp, 0x10
// 004fd7f3  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryOutput.cpp (function ??0BinaryOutput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryOutput.cpp
