// roc 2010-06 00694a10  unit: RBX::VLighting::?$BoundFuncDesc  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00694a10
//
// 00694a10  6aff                 push -1
// 00694a12  68e8d09800           push 0x98d0e8
// 00694a17  64a100000000         mov eax, dword ptr fs:[0]
// 00694a1d  50                   push eax
// 00694a1e  64892500000000       mov dword ptr fs:[0], esp
// 00694a25  83ec14               sub esp, 0x14
// 00694a28  56                   push esi
// 00694a29  57                   push edi
// 00694a2a  8bf9                 mov edi, ecx
// 00694a2c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00694a2f  8b4740               mov eax, dword ptr [edi + 0x40]
// 00694a32  89442408             mov dword ptr [esp + 8], eax
// 00694a36  85c9                 test ecx, ecx
// 00694a38  7409                 je 0x694a43
// 00694a3a  8b11                 mov edx, dword ptr [ecx]
// 00694a3c  8b4208               mov eax, dword ptr [edx + 8]
// 00694a3f  ffd0                 call eax
// 00694a41  eb02                 jmp 0x694a45
// 00694a43  33c0                 xor eax, eax
// 00694a45  8944240c             mov dword ptr [esp + 0xc], eax
// 00694a49  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00694a4d  8b11                 mov edx, dword ptr [ecx]
// 00694a4f  8b5204               mov edx, dword ptr [edx + 4]
// 00694a52  8d442408             lea eax, [esp + 8]
// 00694a56  50                   push eax
// 00694a57  6a01                 push 1
// 00694a59  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00694a61  ffd2                 call edx
// 00694a63  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00694a67  6a00                 push 0
// 00694a69  68ec50bc00           push 0xbc50ec
// 00694a6e  684090b700           push 0xb79040
// 00694a73  6a00                 push 0
// 00694a75  50                   push eax
// 00694a76  e86f411100           call 0x7a8bea
// 00694a7b  8bf0                 mov esi, eax
// 00694a7d  83c414               add esp, 0x14
// 00694a80  85f6                 test esi, esi
// 00694a82  751e                 jne 0x694aa2
// 00694a84  68540aa000           push 0xa00a54
// 00694a89  8d4c2414             lea ecx, [esp + 0x14]
// 00694a8d  ff159ca89e00         call dword ptr [0x9ea89c]
// 00694a93  689022b100           push 0xb12290
// 00694a98  8d4c2414             lea ecx, [esp + 0x14]
// 00694a9c  51                   push ecx
// 00694a9d  e8103f1100           call 0x7a89b2
// 00694aa2  8d4c2408             lea ecx, [esp + 8]
// 00694aa6  e80544f1ff           call 0x5a8eb0
// 00694aab  dd00                 fld qword ptr [eax]
// 00694aad  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00694ab0  8b5738               mov edx, dword ptr [edi + 0x38]
// 00694ab3  83ec08               sub esp, 8
// 00694ab6  03ce                 add ecx, esi
// 00694ab8  dd1c24               fstp qword ptr [esp]
// 00694abb  ffd2                 call edx
// 00694abd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00694ac1  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00694ac9  85c9                 test ecx, ecx
// 00694acb  7408                 je 0x694ad5
// 00694acd  8b01                 mov eax, dword ptr [ecx]
// 00694acf  8b10                 mov edx, dword ptr [eax]
// 00694ad1  6a01                 push 1
// 00694ad3  ffd2                 call edx
// 00694ad5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00694ad9  5f                   pop edi
// 00694ada  5e                   pop esi
// 00694adb  64890d00000000       mov dword ptr fs:[0], ecx
// 00694ae2  83c420               add esp, 0x20
// 00694ae5  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
