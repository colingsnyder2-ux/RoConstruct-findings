// roc 2008-06 007f50d0  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f50d0
//
// 007f50d0  53                   push ebx
// 007f50d1  55                   push ebp
// 007f50d2  56                   push esi
// 007f50d3  57                   push edi
// 007f50d4  6a01                 push 1
// 007f50d6  83ec0c               sub esp, 0xc
// 007f50d9  8bc4                 mov eax, esp
// 007f50db  b9d0285b00           mov ecx, 0x5b28d0
// 007f50e0  8908                 mov dword ptr [eax], ecx
// 007f50e2  33d2                 xor edx, edx
// 007f50e4  895004               mov dword ptr [eax + 4], edx
// 007f50e7  83ec0c               sub esp, 0xc
// 007f50ea  33f6                 xor esi, esi
// 007f50ec  897008               mov dword ptr [eax + 8], esi
// 007f50ef  8bc4                 mov eax, esp
// 007f50f1  bfc0095b00           mov edi, 0x5b09c0
// 007f50f6  8938                 mov dword ptr [eax], edi
// 007f50f8  68ac298300           push 0x8329ac
// 007f50fd  33db                 xor ebx, ebx
// 007f50ff  33ed                 xor ebp, ebp
// 007f5101  895804               mov dword ptr [eax + 4], ebx
// 007f5104  6808518300           push 0x835108
// 007f5109  b9b06c9700           mov ecx, 0x976cb0
// 007f510e  896808               mov dword ptr [eax + 8], ebp
// 007f5111  e8eac9dbff           call 0x5b1b00
// 007f5116  68e0e17f00           push 0x7fe1e0
// 007f511b  e88fc6eaff           call 0x6a17af
// 007f5120  83c404               add esp, 4
// 007f5123  5f                   pop edi
// 007f5124  5e                   pop esi
// 007f5125  5d                   pop ebp
// 007f5126  5b                   pop ebx
// 007f5127  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentUp@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
