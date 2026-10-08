// roc 2008-06 007f5190  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5190
//
// 007f5190  53                   push ebx
// 007f5191  55                   push ebp
// 007f5192  56                   push esi
// 007f5193  57                   push edi
// 007f5194  6a04                 push 4
// 007f5196  83ec0c               sub esp, 0xc
// 007f5199  8bc4                 mov eax, esp
// 007f519b  b9e0245b00           mov ecx, 0x5b24e0
// 007f51a0  8908                 mov dword ptr [eax], ecx
// 007f51a2  33d2                 xor edx, edx
// 007f51a4  895004               mov dword ptr [eax + 4], edx
// 007f51a7  83ec0c               sub esp, 0xc
// 007f51aa  33f6                 xor esi, esi
// 007f51ac  897008               mov dword ptr [eax + 8], esi
// 007f51af  8bc4                 mov eax, esp
// 007f51b1  bf20085b00           mov edi, 0x5b0820
// 007f51b6  8938                 mov dword ptr [eax], edi
// 007f51b8  68ac298300           push 0x8329ac
// 007f51bd  33db                 xor ebx, ebx
// 007f51bf  33ed                 xor ebp, ebp
// 007f51c1  895804               mov dword ptr [eax + 4], ebx
// 007f51c4  680c4a8300           push 0x834a0c
// 007f51c9  b9cc6c9700           mov ecx, 0x976ccc
// 007f51ce  896808               mov dword ptr [eax + 8], ebp
// 007f51d1  e8fac9dbff           call 0x5b1bd0
// 007f51d6  6880e27f00           push 0x7fe280
// 007f51db  e8cfc5eaff           call 0x6a17af
// 007f51e0  83c404               add esp, 4
// 007f51e3  5f                   pop edi
// 007f51e4  5e                   pop esi
// 007f51e5  5d                   pop ebp
// 007f51e6  5b                   pop ebx
// 007f51e7  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_BackendAccoutrementState@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
