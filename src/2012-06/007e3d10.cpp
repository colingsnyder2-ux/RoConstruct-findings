// roc 2012-06 007e3d10  unit: RBX::Assembly  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e3d10
//
// 007e3d10  53                   push ebx
// 007e3d11  55                   push ebp
// 007e3d12  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007e3d16  56                   push esi
// 007e3d17  8b742414             mov esi, dword ptr [esp + 0x14]
// 007e3d1b  8b0e                 mov ecx, dword ptr [esi]
// 007e3d1d  57                   push edi
// 007e3d1e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007e3d22  8b07                 mov eax, dword ptr [edi]
// 007e3d24  50                   push eax
// 007e3d25  51                   push ecx
// 007e3d26  ffd5                 call ebp
// 007e3d28  83c408               add esp, 8
// 007e3d2b  84c0                 test al, al
// 007e3d2d  740c                 je 0x7e3d3b
// 007e3d2f  3bf7                 cmp esi, edi
// 007e3d31  7408                 je 0x7e3d3b
// 007e3d33  8b17                 mov edx, dword ptr [edi]
// 007e3d35  8b06                 mov eax, dword ptr [esi]
// 007e3d37  8916                 mov dword ptr [esi], edx
// 007e3d39  8907                 mov dword ptr [edi], eax
// 007e3d3b  8b06                 mov eax, dword ptr [esi]
// 007e3d3d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007e3d41  8b0b                 mov ecx, dword ptr [ebx]
// 007e3d43  50                   push eax
// 007e3d44  51                   push ecx
// 007e3d45  ffd5                 call ebp
// 007e3d47  83c408               add esp, 8
// 007e3d4a  84c0                 test al, al
// 007e3d4c  740c                 je 0x7e3d5a
// 007e3d4e  3bde                 cmp ebx, esi
// 007e3d50  7408                 je 0x7e3d5a
// 007e3d52  8b16                 mov edx, dword ptr [esi]
// 007e3d54  8b03                 mov eax, dword ptr [ebx]
// 007e3d56  8913                 mov dword ptr [ebx], edx
// 007e3d58  8906                 mov dword ptr [esi], eax
// 007e3d5a  8b07                 mov eax, dword ptr [edi]
// 007e3d5c  8b0e                 mov ecx, dword ptr [esi]
// 007e3d5e  50                   push eax
// 007e3d5f  51                   push ecx
// 007e3d60  ffd5                 call ebp
// 007e3d62  83c408               add esp, 8
// 007e3d65  84c0                 test al, al
// 007e3d67  740c                 je 0x7e3d75
// 007e3d69  3bf7                 cmp esi, edi
// 007e3d6b  7408                 je 0x7e3d75
// 007e3d6d  8b17                 mov edx, dword ptr [edi]
// 007e3d6f  8b06                 mov eax, dword ptr [esi]
// 007e3d71  8916                 mov dword ptr [esi], edx
// 007e3d73  8907                 mov dword ptr [edi], eax
// 007e3d75  5f                   pop edi
// 007e3d76  5e                   pop esi
// 007e3d77  5d                   pop ebp
// 007e3d78  5b                   pop ebx
// 007e3d79  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
