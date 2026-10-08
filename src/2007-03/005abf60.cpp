// roc 2007-03 005abf60  unit: seg_005a0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abf60
//
// 005abf60  53                   push ebx
// 005abf61  55                   push ebp
// 005abf62  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005abf66  56                   push esi
// 005abf67  8b742414             mov esi, dword ptr [esp + 0x14]
// 005abf6b  8b0e                 mov ecx, dword ptr [esi]
// 005abf6d  57                   push edi
// 005abf6e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005abf72  8b07                 mov eax, dword ptr [edi]
// 005abf74  50                   push eax
// 005abf75  51                   push ecx
// 005abf76  ffd5                 call ebp
// 005abf78  83c408               add esp, 8
// 005abf7b  84c0                 test al, al
// 005abf7d  7408                 je 0x5abf87
// 005abf7f  8b17                 mov edx, dword ptr [edi]
// 005abf81  8b06                 mov eax, dword ptr [esi]
// 005abf83  8916                 mov dword ptr [esi], edx
// 005abf85  8907                 mov dword ptr [edi], eax
// 005abf87  8b06                 mov eax, dword ptr [esi]
// 005abf89  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005abf8d  8b0b                 mov ecx, dword ptr [ebx]
// 005abf8f  50                   push eax
// 005abf90  51                   push ecx
// 005abf91  ffd5                 call ebp
// 005abf93  83c408               add esp, 8
// 005abf96  84c0                 test al, al
// 005abf98  7408                 je 0x5abfa2
// 005abf9a  8b16                 mov edx, dword ptr [esi]
// 005abf9c  8b03                 mov eax, dword ptr [ebx]
// 005abf9e  8913                 mov dword ptr [ebx], edx
// 005abfa0  8906                 mov dword ptr [esi], eax
// 005abfa2  8b07                 mov eax, dword ptr [edi]
// 005abfa4  8b0e                 mov ecx, dword ptr [esi]
// 005abfa6  50                   push eax
// 005abfa7  51                   push ecx
// 005abfa8  ffd5                 call ebp
// 005abfaa  83c408               add esp, 8
// 005abfad  84c0                 test al, al
// 005abfaf  7408                 je 0x5abfb9
// 005abfb1  8b17                 mov edx, dword ptr [edi]
// 005abfb3  8b06                 mov eax, dword ptr [esi]
// 005abfb5  8916                 mov dword ptr [esi], edx
// 005abfb7  8907                 mov dword ptr [edi], eax
// 005abfb9  5f                   pop edi
// 005abfba  5e                   pop esi
// 005abfbb  5d                   pop ebp
// 005abfbc  5b                   pop ebx
// 005abfbd  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
