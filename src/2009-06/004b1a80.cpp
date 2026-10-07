// roc 2009-06 004b1a80  unit: G3D::Shader  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b1a80
//
// 004b1a80  6aff                 push -1
// 004b1a82  681b838500           push 0x85831b
// 004b1a87  64a100000000         mov eax, dword ptr fs:[0]
// 004b1a8d  50                   push eax
// 004b1a8e  64892500000000       mov dword ptr fs:[0], esp
// 004b1a95  51                   push ecx
// 004b1a96  53                   push ebx
// 004b1a97  56                   push esi
// 004b1a98  8bf1                 mov esi, ecx
// 004b1a9a  89742408             mov dword ptr [esp + 8], esi
// 004b1a9e  8d4e40               lea ecx, [esi + 0x40]
// 004b1aa1  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004b1aa9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b1aaf  8b4620               mov eax, dword ptr [esi + 0x20]
// 004b1ab2  33db                 xor ebx, ebx
// 004b1ab4  50                   push eax
// 004b1ab5  885c2418             mov byte ptr [esp + 0x18], bl
// 004b1ab9  e8d2970b00           call 0x56b290
// 004b1abe  83c404               add esp, 4
// 004b1ac1  895e20               mov dword ptr [esi + 0x20], ebx
// 004b1ac4  895e24               mov dword ptr [esi + 0x24], ebx
// 004b1ac7  895e28               mov dword ptr [esi + 0x28], ebx
// 004b1aca  8bce                 mov ecx, esi
// 004b1acc  c744241402000000     mov dword ptr [esp + 0x14], 2
// 004b1ad4  e8d7efffff           call 0x4b0ab0
// 004b1ad9  8b0e                 mov ecx, dword ptr [esi]
// 004b1adb  51                   push ecx
// 004b1adc  e8516f2600           call 0x718a32
// 004b1ae1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b1ae5  83c404               add esp, 4
// 004b1ae8  5e                   pop esi
// 004b1ae9  5b                   pop ebx
// 004b1aea  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1af1  83c410               add esp, 0x10
// 004b1af4  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextInput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
