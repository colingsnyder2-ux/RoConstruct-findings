// roc 2007-08 00771f60  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771f60
//
// 00771f60  53                   push ebx
// 00771f61  55                   push ebp
// 00771f62  56                   push esi
// 00771f63  57                   push edi
// 00771f64  6a01                 push 1
// 00771f66  83ec0c               sub esp, 0xc
// 00771f69  8bc4                 mov eax, esp
// 00771f6b  b980935700           mov ecx, 0x579380
// 00771f70  8908                 mov dword ptr [eax], ecx
// 00771f72  33d2                 xor edx, edx
// 00771f74  895004               mov dword ptr [eax + 4], edx
// 00771f77  83ec0c               sub esp, 0xc
// 00771f7a  33f6                 xor esi, esi
// 00771f7c  897008               mov dword ptr [eax + 8], esi
// 00771f7f  8bc4                 mov eax, esp
// 00771f81  bf80e25500           mov edi, 0x55e280
// 00771f86  8938                 mov dword ptr [eax], edi
// 00771f88  33db                 xor ebx, ebx
// 00771f8a  895804               mov dword ptr [eax + 4], ebx
// 00771f8d  33ed                 xor ebp, ebp
// 00771f8f  896808               mov dword ptr [eax + 8], ebp
// 00771f92  a128048a00           mov eax, dword ptr [0x8a0428]
// 00771f97  50                   push eax
// 00771f98  6824b07a00           push 0x7ab024
// 00771f9d  b968288c00           mov ecx, 0x8c2868
// 00771fa2  e8f96ce0ff           call 0x578ca0
// 00771fa7  68b0a07700           push 0x77a0b0
// 00771fac  e872edebff           call 0x630d23
// 00771fb1  83c404               add esp, 4
// 00771fb4  5f                   pop edi
// 00771fb5  5e                   pop esi
// 00771fb6  5d                   pop ebp
// 00771fb7  5b                   pop ebx
// 00771fb8  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_shapeUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
