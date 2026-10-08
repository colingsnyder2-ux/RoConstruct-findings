// roc 2009-12 004de640  unit: G3D::Shader  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004de640
//
// 004de640  6aff                 push -1
// 004de642  681b429300           push 0x93421b
// 004de647  64a100000000         mov eax, dword ptr fs:[0]
// 004de64d  50                   push eax
// 004de64e  64892500000000       mov dword ptr fs:[0], esp
// 004de655  51                   push ecx
// 004de656  53                   push ebx
// 004de657  56                   push esi
// 004de658  8bf1                 mov esi, ecx
// 004de65a  89742408             mov dword ptr [esp + 8], esi
// 004de65e  8d4e40               lea ecx, [esi + 0x40]
// 004de661  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004de669  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de66f  8b4620               mov eax, dword ptr [esi + 0x20]
// 004de672  33db                 xor ebx, ebx
// 004de674  50                   push eax
// 004de675  885c2418             mov byte ptr [esp + 0x18], bl
// 004de679  e862bd1000           call 0x5ea3e0
// 004de67e  83c404               add esp, 4
// 004de681  895e20               mov dword ptr [esi + 0x20], ebx
// 004de684  895e24               mov dword ptr [esi + 0x24], ebx
// 004de687  895e28               mov dword ptr [esi + 0x28], ebx
// 004de68a  8bce                 mov ecx, esi
// 004de68c  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004de694  e857efffff           call 0x4dd5f0
// 004de699  8b0e                 mov ecx, dword ptr [esi]
// 004de69b  51                   push ecx
// 004de69c  e8b9513100           call 0x7f385a
// 004de6a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004de6a5  83c404               add esp, 4
// 004de6a8  5e                   pop esi
// 004de6a9  5b                   pop ebx
// 004de6aa  64890d00000000       mov dword ptr fs:[0], ecx
// 004de6b1  83c410               add esp, 0x10
// 004de6b4  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextInput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
