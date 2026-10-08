// roc 2009-06 0067a600  unit: RBX::VLighting::?$BoundFuncDesc  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067a600
//
// 0067a600  6aff                 push -1
// 0067a602  6868398600           push 0x863968
// 0067a607  64a100000000         mov eax, dword ptr fs:[0]
// 0067a60d  50                   push eax
// 0067a60e  64892500000000       mov dword ptr fs:[0], esp
// 0067a615  83ec14               sub esp, 0x14
// 0067a618  56                   push esi
// 0067a619  57                   push edi
// 0067a61a  8bf9                 mov edi, ecx
// 0067a61c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0067a61f  8b4740               mov eax, dword ptr [edi + 0x40]
// 0067a622  89442408             mov dword ptr [esp + 8], eax
// 0067a626  85c9                 test ecx, ecx
// 0067a628  7409                 je 0x67a633
// 0067a62a  8b11                 mov edx, dword ptr [ecx]
// 0067a62c  8b4208               mov eax, dword ptr [edx + 8]
// 0067a62f  ffd0                 call eax
// 0067a631  eb02                 jmp 0x67a635
// 0067a633  33c0                 xor eax, eax
// 0067a635  8944240c             mov dword ptr [esp + 0xc], eax
// 0067a639  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067a63d  8b11                 mov edx, dword ptr [ecx]
// 0067a63f  8b5204               mov edx, dword ptr [edx + 4]
// 0067a642  8d442408             lea eax, [esp + 8]
// 0067a646  50                   push eax
// 0067a647  6a01                 push 1
// 0067a649  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0067a651  ffd2                 call edx
// 0067a653  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067a657  6a00                 push 0
// 0067a659  68848aa100           push 0xa18a84
// 0067a65e  68c4bf9d00           push 0x9dbfc4
// 0067a663  6a00                 push 0
// 0067a665  50                   push eax
// 0067a666  e80ff60900           call 0x719c7a
// 0067a66b  8bf0                 mov esi, eax
// 0067a66d  83c414               add esp, 0x14
// 0067a670  85f6                 test esi, esi
// 0067a672  751e                 jne 0x67a692
// 0067a674  6850d38a00           push 0x8ad350
// 0067a679  8d4c2414             lea ecx, [esp + 0x14]
// 0067a67d  ff1570e98900         call dword ptr [0x89e970]
// 0067a683  68b04b9800           push 0x984bb0
// 0067a688  8d4c2414             lea ecx, [esp + 0x14]
// 0067a68c  51                   push ecx
// 0067a68d  e8b8f30900           call 0x719a4a
// 0067a692  8d4c2408             lea ecx, [esp + 8]
// 0067a696  e875dbf6ff           call 0x5e8210
// 0067a69b  dd00                 fld qword ptr [eax]
// 0067a69d  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 0067a6a0  8b5738               mov edx, dword ptr [edi + 0x38]
// 0067a6a3  83ec08               sub esp, 8
// 0067a6a6  03ce                 add ecx, esi
// 0067a6a8  dd1c24               fstp qword ptr [esp]
// 0067a6ab  ffd2                 call edx
// 0067a6ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067a6b1  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0067a6b9  85c9                 test ecx, ecx
// 0067a6bb  7408                 je 0x67a6c5
// 0067a6bd  8b01                 mov eax, dword ptr [ecx]
// 0067a6bf  8b10                 mov edx, dword ptr [eax]
// 0067a6c1  6a01                 push 1
// 0067a6c3  ffd2                 call edx
// 0067a6c5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067a6c9  5f                   pop edi
// 0067a6ca  5e                   pop esi
// 0067a6cb  64890d00000000       mov dword ptr fs:[0], ecx
// 0067a6d2  83c420               add esp, 0x20
// 0067a6d5  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
