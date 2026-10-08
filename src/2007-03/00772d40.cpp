// roc 2007-03 00772d40  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772d40
//
// 00772d40  53                   push ebx
// 00772d41  55                   push ebp
// 00772d42  56                   push esi
// 00772d43  57                   push edi
// 00772d44  6a01                 push 1
// 00772d46  83ec0c               sub esp, 0xc
// 00772d49  8bc4                 mov eax, esp
// 00772d4b  b9407b5700           mov ecx, 0x577b40
// 00772d50  8908                 mov dword ptr [eax], ecx
// 00772d52  33d2                 xor edx, edx
// 00772d54  895004               mov dword ptr [eax + 4], edx
// 00772d57  83ec0c               sub esp, 0xc
// 00772d5a  33f6                 xor esi, esi
// 00772d5c  897008               mov dword ptr [eax + 8], esi
// 00772d5f  8bc4                 mov eax, esp
// 00772d61  bf50fd5500           mov edi, 0x55fd50
// 00772d66  8938                 mov dword ptr [eax], edi
// 00772d68  33db                 xor ebx, ebx
// 00772d6a  895804               mov dword ptr [eax + 4], ebx
// 00772d6d  33ed                 xor ebp, ebp
// 00772d6f  896808               mov dword ptr [eax + 8], ebp
// 00772d72  a158ec8900           mov eax, dword ptr [0x89ec58]
// 00772d77  50                   push eax
// 00772d78  68d8c67a00           push 0x7ac6d8
// 00772d7d  b938cb8b00           mov ecx, 0x8bcb38
// 00772d82  e89946e0ff           call 0x577420
// 00772d87  68409e7700           push 0x779e40
// 00772d8c  e822c4eaff           call 0x61f1b3
// 00772d91  83c404               add esp, 4
// 00772d94  5f                   pop edi
// 00772d95  5e                   pop esi
// 00772d96  5d                   pop ebp
// 00772d97  5b                   pop ebx
// 00772d98  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_shapeUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
