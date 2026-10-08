// roc 2011-06 006a1cd0  unit: RBX::Assembly  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a1cd0
//
// 006a1cd0  53                   push ebx
// 006a1cd1  55                   push ebp
// 006a1cd2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006a1cd6  56                   push esi
// 006a1cd7  8b742414             mov esi, dword ptr [esp + 0x14]
// 006a1cdb  8b0e                 mov ecx, dword ptr [esi]
// 006a1cdd  57                   push edi
// 006a1cde  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a1ce2  8b07                 mov eax, dword ptr [edi]
// 006a1ce4  50                   push eax
// 006a1ce5  51                   push ecx
// 006a1ce6  ffd5                 call ebp
// 006a1ce8  83c408               add esp, 8
// 006a1ceb  84c0                 test al, al
// 006a1ced  740c                 je 0x6a1cfb
// 006a1cef  3bf7                 cmp esi, edi
// 006a1cf1  7408                 je 0x6a1cfb
// 006a1cf3  8b17                 mov edx, dword ptr [edi]
// 006a1cf5  8b06                 mov eax, dword ptr [esi]
// 006a1cf7  8916                 mov dword ptr [esi], edx
// 006a1cf9  8907                 mov dword ptr [edi], eax
// 006a1cfb  8b06                 mov eax, dword ptr [esi]
// 006a1cfd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006a1d01  8b0b                 mov ecx, dword ptr [ebx]
// 006a1d03  50                   push eax
// 006a1d04  51                   push ecx
// 006a1d05  ffd5                 call ebp
// 006a1d07  83c408               add esp, 8
// 006a1d0a  84c0                 test al, al
// 006a1d0c  740c                 je 0x6a1d1a
// 006a1d0e  3bde                 cmp ebx, esi
// 006a1d10  7408                 je 0x6a1d1a
// 006a1d12  8b16                 mov edx, dword ptr [esi]
// 006a1d14  8b03                 mov eax, dword ptr [ebx]
// 006a1d16  8913                 mov dword ptr [ebx], edx
// 006a1d18  8906                 mov dword ptr [esi], eax
// 006a1d1a  8b07                 mov eax, dword ptr [edi]
// 006a1d1c  8b0e                 mov ecx, dword ptr [esi]
// 006a1d1e  50                   push eax
// 006a1d1f  51                   push ecx
// 006a1d20  ffd5                 call ebp
// 006a1d22  83c408               add esp, 8
// 006a1d25  84c0                 test al, al
// 006a1d27  740c                 je 0x6a1d35
// 006a1d29  3bf7                 cmp esi, edi
// 006a1d2b  7408                 je 0x6a1d35
// 006a1d2d  8b17                 mov edx, dword ptr [edi]
// 006a1d2f  8b06                 mov eax, dword ptr [esi]
// 006a1d31  8916                 mov dword ptr [esi], edx
// 006a1d33  8907                 mov dword ptr [edi], eax
// 006a1d35  5f                   pop edi
// 006a1d36  5e                   pop esi
// 006a1d37  5d                   pop ebp
// 006a1d38  5b                   pop ebx
// 006a1d39  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
