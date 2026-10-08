// roc 2007-03 007731c0  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007731c0
//
// 007731c0  53                   push ebx
// 007731c1  55                   push ebp
// 007731c2  56                   push esi
// 007731c3  57                   push edi
// 007731c4  6a01                 push 1
// 007731c6  83ec0c               sub esp, 0xc
// 007731c9  8bc4                 mov eax, esp
// 007731cb  b9906c5700           mov ecx, 0x576c90
// 007731d0  8908                 mov dword ptr [eax], ecx
// 007731d2  33d2                 xor edx, edx
// 007731d4  895004               mov dword ptr [eax + 4], edx
// 007731d7  83ec0c               sub esp, 0xc
// 007731da  33f6                 xor esi, esi
// 007731dc  897008               mov dword ptr [eax + 8], esi
// 007731df  8bc4                 mov eax, esp
// 007731e1  bf50205700           mov edi, 0x572050
// 007731e6  8938                 mov dword ptr [eax], edi
// 007731e8  33db                 xor ebx, ebx
// 007731ea  895804               mov dword ptr [eax + 4], ebx
// 007731ed  33ed                 xor ebp, ebp
// 007731ef  896808               mov dword ptr [eax + 8], ebp
// 007731f2  a158ec8900           mov eax, dword ptr [0x89ec58]
// 007731f7  50                   push eax
// 007731f8  6830c77a00           push 0x7ac730
// 007731fd  b9cccb8b00           mov ecx, 0x8bcbcc
// 00773202  e8792ee0ff           call 0x576080
// 00773207  68409f7700           push 0x779f40
// 0077320c  e8a2bfeaff           call 0x61f1b3
// 00773211  83c404               add esp, 4
// 00773214  5f                   pop edi
// 00773215  5e                   pop esi
// 00773216  5d                   pop ebp
// 00773217  5b                   pop ebx
// 00773218  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_formFactorUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
