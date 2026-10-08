// roc 2007-03 00773280  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773280
//
// 00773280  53                   push ebx
// 00773281  55                   push ebp
// 00773282  56                   push esi
// 00773283  57                   push edi
// 00773284  6a05                 push 5
// 00773286  83ec0c               sub esp, 0xc
// 00773289  8bc4                 mov eax, esp
// 0077328b  b9f06d5700           mov ecx, 0x576df0
// 00773290  8908                 mov dword ptr [eax], ecx
// 00773292  33d2                 xor edx, edx
// 00773294  895004               mov dword ptr [eax + 4], edx
// 00773297  83ec0c               sub esp, 0xc
// 0077329a  33f6                 xor esi, esi
// 0077329c  897008               mov dword ptr [eax + 8], esi
// 0077329f  8bc4                 mov eax, esp
// 007732a1  bf002b5700           mov edi, 0x572b00
// 007732a6  8938                 mov dword ptr [eax], edi
// 007732a8  33db                 xor ebx, ebx
// 007732aa  895804               mov dword ptr [eax + 4], ebx
// 007732ad  33ed                 xor ebp, ebp
// 007732af  896808               mov dword ptr [eax + 8], ebp
// 007732b2  a158ec8900           mov eax, dword ptr [0x89ec58]
// 007732b7  50                   push eax
// 007732b8  683cc77a00           push 0x7ac73c
// 007732bd  b970ca8b00           mov ecx, 0x8bca70
// 007732c2  e8792be0ff           call 0x575e40
// 007732c7  68609f7700           push 0x779f60
// 007732cc  e8e2beeaff           call 0x61f1b3
// 007732d1  83c404               add esp, 4
// 007732d4  5f                   pop edi
// 007732d5  5e                   pop esi
// 007732d6  5d                   pop ebp
// 007732d7  5b                   pop ebx
// 007732d8  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Elasticity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
