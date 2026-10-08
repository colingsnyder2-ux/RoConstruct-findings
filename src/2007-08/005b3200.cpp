// roc 2007-08 005b3200  unit: RBX::Assembly  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b3200
//
// 005b3200  53                   push ebx
// 005b3201  55                   push ebp
// 005b3202  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005b3206  56                   push esi
// 005b3207  8b742414             mov esi, dword ptr [esp + 0x14]
// 005b320b  8b0e                 mov ecx, dword ptr [esi]
// 005b320d  57                   push edi
// 005b320e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005b3212  8b07                 mov eax, dword ptr [edi]
// 005b3214  50                   push eax
// 005b3215  51                   push ecx
// 005b3216  ffd5                 call ebp
// 005b3218  83c408               add esp, 8
// 005b321b  84c0                 test al, al
// 005b321d  7408                 je 0x5b3227
// 005b321f  8b17                 mov edx, dword ptr [edi]
// 005b3221  8b06                 mov eax, dword ptr [esi]
// 005b3223  8916                 mov dword ptr [esi], edx
// 005b3225  8907                 mov dword ptr [edi], eax
// 005b3227  8b06                 mov eax, dword ptr [esi]
// 005b3229  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005b322d  8b0b                 mov ecx, dword ptr [ebx]
// 005b322f  50                   push eax
// 005b3230  51                   push ecx
// 005b3231  ffd5                 call ebp
// 005b3233  83c408               add esp, 8
// 005b3236  84c0                 test al, al
// 005b3238  7408                 je 0x5b3242
// 005b323a  8b16                 mov edx, dword ptr [esi]
// 005b323c  8b03                 mov eax, dword ptr [ebx]
// 005b323e  8913                 mov dword ptr [ebx], edx
// 005b3240  8906                 mov dword ptr [esi], eax
// 005b3242  8b07                 mov eax, dword ptr [edi]
// 005b3244  8b0e                 mov ecx, dword ptr [esi]
// 005b3246  50                   push eax
// 005b3247  51                   push ecx
// 005b3248  ffd5                 call ebp
// 005b324a  83c408               add esp, 8
// 005b324d  84c0                 test al, al
// 005b324f  7408                 je 0x5b3259
// 005b3251  8b17                 mov edx, dword ptr [edi]
// 005b3253  8b06                 mov eax, dword ptr [esi]
// 005b3255  8916                 mov dword ptr [esi], edx
// 005b3257  8907                 mov dword ptr [edi], eax
// 005b3259  5f                   pop edi
// 005b325a  5e                   pop esi
// 005b325b  5d                   pop ebp
// 005b325c  5b                   pop ebx
// 005b325d  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
