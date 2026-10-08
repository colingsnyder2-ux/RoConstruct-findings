// roc 2007-03 00773220  unit: seg_00770000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773220
//
// 00773220  53                   push ebx
// 00773221  55                   push ebp
// 00773222  56                   push esi
// 00773223  57                   push edi
// 00773224  6a04                 push 4
// 00773226  83ec0c               sub esp, 0xc
// 00773229  8bc4                 mov eax, esp
// 0077322b  b9606c5700           mov ecx, 0x576c60
// 00773230  8908                 mov dword ptr [eax], ecx
// 00773232  33d2                 xor edx, edx
// 00773234  895004               mov dword ptr [eax + 4], edx
// 00773237  83ec0c               sub esp, 0xc
// 0077323a  33f6                 xor esi, esi
// 0077323c  897008               mov dword ptr [eax + 8], esi
// 0077323f  8bc4                 mov eax, esp
// 00773241  bf50205700           mov edi, 0x572050
// 00773246  8938                 mov dword ptr [eax], edi
// 00773248  33db                 xor ebx, ebx
// 0077324a  895804               mov dword ptr [eax + 4], ebx
// 0077324d  33ed                 xor ebp, ebp
// 0077324f  896808               mov dword ptr [eax + 8], ebp
// 00773252  a158ec8900           mov eax, dword ptr [0x89ec58]
// 00773257  50                   push eax
// 00773258  68f8c27a00           push 0x7ac2f8
// 0077325d  b968cd8b00           mov ecx, 0x8bcd68
// 00773262  e8192ee0ff           call 0x576080
// 00773267  68209f7700           push 0x779f20
// 0077326c  e842bfeaff           call 0x61f1b3
// 00773271  83c404               add esp, 4
// 00773274  5f                   pop edi
// 00773275  5e                   pop esi
// 00773276  5d                   pop ebp
// 00773277  5b                   pop ebx
// 00773278  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_formFactor@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
