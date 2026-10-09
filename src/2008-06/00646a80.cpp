// roc 2008-06 00646a80  unit: RBX::RotatePJoint  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646a80
//
// 00646a80  53                   push ebx
// 00646a81  56                   push esi
// 00646a82  8bd9                 mov ebx, ecx
// 00646a84  33f6                 xor esi, esi
// 00646a86  39b3bc000000         cmp dword ptr [ebx + 0xbc], esi
// 00646a8c  57                   push edi
// 00646a8d  7e1f                 jle 0x646aae
// 00646a8f  8dbbac000000         lea edi, [ebx + 0xac]
// 00646a95  8b0f                 mov ecx, dword ptr [edi]
// 00646a97  8b01                 mov eax, dword ptr [ecx]
// 00646a99  8b500c               mov edx, dword ptr [eax + 0xc]
// 00646a9c  ffd2                 call edx
// 00646a9e  84c0                 test al, al
// 00646aa0  7512                 jne 0x646ab4
// 00646aa2  46                   inc esi
// 00646aa3  83c704               add edi, 4
// 00646aa6  3bb3bc000000         cmp esi, dword ptr [ebx + 0xbc]
// 00646aac  7ce7                 jl 0x646a95
// 00646aae  5f                   pop edi
// 00646aaf  5e                   pop esi
// 00646ab0  32c0                 xor al, al
// 00646ab2  5b                   pop ebx
// 00646ab3  c3                   ret 
// 00646ab4  5f                   pop edi
// 00646ab5  5e                   pop esi
// 00646ab6  b001                 mov al, 1
// 00646ab8  5b                   pop ebx
// 00646ab9  c3                   ret 
// library openrbx-client/App\v8world\MultiJoint.cpp (function ?isBroken@MultiJoint@RBX@@MBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/MultiJoint.cpp
