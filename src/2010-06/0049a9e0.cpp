// from server: 100% by auto
// roc 2010-06 0049a9e0  unit: G3D::Shader  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049a9e0
//
// 0049a9e0  6aff                 push -1
// 0049a9e2  687b709800           push 0x98707b
// 0049a9e7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a9ed  50                   push eax
// 0049a9ee  64892500000000       mov dword ptr fs:[0], esp
// 0049a9f5  51                   push ecx
// 0049a9f6  53                   push ebx
// 0049a9f7  56                   push esi
// 0049a9f8  8bf1                 mov esi, ecx
// 0049a9fa  89742408             mov dword ptr [esp + 8], esi
// 0049a9fe  8d4e40               lea ecx, [esi + 0x40]
// 0049aa01  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0049aa09  ff1500a49e00         call dword ptr [0x9ea400]
// 0049aa0f  8b4620               mov eax, dword ptr [esi + 0x20]
// 0049aa12  33db                 xor ebx, ebx
// 0049aa14  50                   push eax
// 0049aa15  885c2418             mov byte ptr [esp + 0x18], bl
// 0049aa19  e8a22f0b00           call 0x54d9c0
// 0049aa1e  83c404               add esp, 4
// 0049aa21  895e20               mov dword ptr [esi + 0x20], ebx
// 0049aa24  895e24               mov dword ptr [esi + 0x24], ebx
// 0049aa27  895e28               mov dword ptr [esi + 0x28], ebx
// 0049aa2a  8bce                 mov ecx, esi
// 0049aa2c  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0049aa34  e8574efbff           call 0x44f890
// 0049aa39  8b0e                 mov ecx, dword ptr [esi]
// 0049aa3b  51                   push ecx
// 0049aa3c  e859cf3000           call 0x7a799a
// 0049aa41  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049aa45  83c404               add esp, 4
// 0049aa48  5e                   pop esi
// 0049aa49  5b                   pop ebx
// 0049aa4a  64890d00000000       mov dword ptr fs:[0], ecx
// 0049aa51  83c410               add esp, 0x10
// 0049aa54  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ??1TextInput@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
