// roc 2007-08 007723e0  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007723e0
//
// 007723e0  53                   push ebx
// 007723e1  55                   push ebp
// 007723e2  56                   push esi
// 007723e3  57                   push edi
// 007723e4  6a01                 push 1
// 007723e6  83ec0c               sub esp, 0xc
// 007723e9  8bc4                 mov eax, esp
// 007723eb  b910855700           mov ecx, 0x578510
// 007723f0  8908                 mov dword ptr [eax], ecx
// 007723f2  33d2                 xor edx, edx
// 007723f4  895004               mov dword ptr [eax + 4], edx
// 007723f7  83ec0c               sub esp, 0xc
// 007723fa  33f6                 xor esi, esi
// 007723fc  897008               mov dword ptr [eax + 8], esi
// 007723ff  8bc4                 mov eax, esp
// 00772401  bff0375700           mov edi, 0x5737f0
// 00772406  8938                 mov dword ptr [eax], edi
// 00772408  33db                 xor ebx, ebx
// 0077240a  895804               mov dword ptr [eax + 4], ebx
// 0077240d  33ed                 xor ebp, ebp
// 0077240f  896808               mov dword ptr [eax + 8], ebp
// 00772412  a128048a00           mov eax, dword ptr [0x8a0428]
// 00772417  50                   push eax
// 00772418  6894b07a00           push 0x7ab094
// 0077241d  b9fc288c00           mov ecx, 0x8c28fc
// 00772422  e85954e0ff           call 0x577880
// 00772427  68b0a17700           push 0x77a1b0
// 0077242c  e8f2e8ebff           call 0x630d23
// 00772431  83c404               add esp, 4
// 00772434  5f                   pop edi
// 00772435  5e                   pop esi
// 00772436  5d                   pop ebp
// 00772437  5b                   pop ebx
// 00772438  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_formFactorUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
