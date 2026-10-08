// roc 2007-08 0060a440  unit: RBX::RotatePJoint  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060a440
//
// 0060a440  53                   push ebx
// 0060a441  56                   push esi
// 0060a442  8bd9                 mov ebx, ecx
// 0060a444  33f6                 xor esi, esi
// 0060a446  39b3bc000000         cmp dword ptr [ebx + 0xbc], esi
// 0060a44c  57                   push edi
// 0060a44d  7e21                 jle 0x60a470
// 0060a44f  8dbbac000000         lea edi, [ebx + 0xac]
// 0060a455  8b0f                 mov ecx, dword ptr [edi]
// 0060a457  8b01                 mov eax, dword ptr [ecx]
// 0060a459  8b500c               mov edx, dword ptr [eax + 0xc]
// 0060a45c  ffd2                 call edx
// 0060a45e  84c0                 test al, al
// 0060a460  7514                 jne 0x60a476
// 0060a462  83c601               add esi, 1
// 0060a465  83c704               add edi, 4
// 0060a468  3bb3bc000000         cmp esi, dword ptr [ebx + 0xbc]
// 0060a46e  7ce5                 jl 0x60a455
// 0060a470  5f                   pop edi
// 0060a471  5e                   pop esi
// 0060a472  32c0                 xor al, al
// 0060a474  5b                   pop ebx
// 0060a475  c3                   ret 
// 0060a476  5f                   pop edi
// 0060a477  5e                   pop esi
// 0060a478  b001                 mov al, 1
// 0060a47a  5b                   pop ebx
// 0060a47b  c3                   ret 
// library openrbx-client/App\v8world\MultiJoint.cpp (function ?isBroken@MultiJoint@RBX@@MBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/MultiJoint.cpp
