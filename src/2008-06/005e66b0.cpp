// roc 2008-06 005e66b0  unit: RBX::Clump  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e66b0
//
// 005e66b0  53                   push ebx
// 005e66b1  55                   push ebp
// 005e66b2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005e66b6  56                   push esi
// 005e66b7  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e66bb  8b0e                 mov ecx, dword ptr [esi]
// 005e66bd  57                   push edi
// 005e66be  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005e66c2  8b07                 mov eax, dword ptr [edi]
// 005e66c4  50                   push eax
// 005e66c5  51                   push ecx
// 005e66c6  ffd5                 call ebp
// 005e66c8  83c408               add esp, 8
// 005e66cb  84c0                 test al, al
// 005e66cd  740c                 je 0x5e66db
// 005e66cf  3bf7                 cmp esi, edi
// 005e66d1  7408                 je 0x5e66db
// 005e66d3  8b17                 mov edx, dword ptr [edi]
// 005e66d5  8b06                 mov eax, dword ptr [esi]
// 005e66d7  8916                 mov dword ptr [esi], edx
// 005e66d9  8907                 mov dword ptr [edi], eax
// 005e66db  8b06                 mov eax, dword ptr [esi]
// 005e66dd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005e66e1  8b0b                 mov ecx, dword ptr [ebx]
// 005e66e3  50                   push eax
// 005e66e4  51                   push ecx
// 005e66e5  ffd5                 call ebp
// 005e66e7  83c408               add esp, 8
// 005e66ea  84c0                 test al, al
// 005e66ec  740c                 je 0x5e66fa
// 005e66ee  3bde                 cmp ebx, esi
// 005e66f0  7408                 je 0x5e66fa
// 005e66f2  8b16                 mov edx, dword ptr [esi]
// 005e66f4  8b03                 mov eax, dword ptr [ebx]
// 005e66f6  8913                 mov dword ptr [ebx], edx
// 005e66f8  8906                 mov dword ptr [esi], eax
// 005e66fa  8b07                 mov eax, dword ptr [edi]
// 005e66fc  8b0e                 mov ecx, dword ptr [esi]
// 005e66fe  50                   push eax
// 005e66ff  51                   push ecx
// 005e6700  ffd5                 call ebp
// 005e6702  83c408               add esp, 8
// 005e6705  84c0                 test al, al
// 005e6707  740c                 je 0x5e6715
// 005e6709  3bf7                 cmp esi, edi
// 005e670b  7408                 je 0x5e6715
// 005e670d  8b17                 mov edx, dword ptr [edi]
// 005e670f  8b06                 mov eax, dword ptr [esi]
// 005e6711  8916                 mov dword ptr [esi], edx
// 005e6713  8907                 mov dword ptr [edi], eax
// 005e6715  5f                   pop edi
// 005e6716  5e                   pop esi
// 005e6717  5d                   pop ebp
// 005e6718  5b                   pop ebx
// 005e6719  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
