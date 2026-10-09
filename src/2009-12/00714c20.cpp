// roc 2009-12 00714c20  unit: RBX::VLighting::?$BoundFuncDesc  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00714c20
//
// 00714c20  6aff                 push -1
// 00714c22  68b87f9300           push 0x937fb8
// 00714c27  64a100000000         mov eax, dword ptr fs:[0]
// 00714c2d  50                   push eax
// 00714c2e  64892500000000       mov dword ptr fs:[0], esp
// 00714c35  83ec14               sub esp, 0x14
// 00714c38  56                   push esi
// 00714c39  57                   push edi
// 00714c3a  8bf9                 mov edi, ecx
// 00714c3c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00714c3f  8b4740               mov eax, dword ptr [edi + 0x40]
// 00714c42  89442408             mov dword ptr [esp + 8], eax
// 00714c46  85c9                 test ecx, ecx
// 00714c48  7409                 je 0x714c53
// 00714c4a  8b11                 mov edx, dword ptr [ecx]
// 00714c4c  8b4208               mov eax, dword ptr [edx + 8]
// 00714c4f  ffd0                 call eax
// 00714c51  eb02                 jmp 0x714c55
// 00714c53  33c0                 xor eax, eax
// 00714c55  8944240c             mov dword ptr [esp + 0xc], eax
// 00714c59  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00714c5d  8b11                 mov edx, dword ptr [ecx]
// 00714c5f  8b5204               mov edx, dword ptr [edx + 4]
// 00714c62  8d442408             lea eax, [esp + 8]
// 00714c66  50                   push eax
// 00714c67  6a01                 push 1
// 00714c69  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00714c71  ffd2                 call edx
// 00714c73  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00714c77  6a00                 push 0
// 00714c79  683cbdb400           push 0xb4bd3c
// 00714c7e  684000b000           push 0xb00040
// 00714c83  6a00                 push 0
// 00714c85  50                   push eax
// 00714c86  e81ffe0d00           call 0x7f4aaa
// 00714c8b  8bf0                 mov esi, eax
// 00714c8d  83c414               add esp, 0x14
// 00714c90  85f6                 test esi, esi
// 00714c92  751e                 jne 0x714cb2
// 00714c94  689cfe9900           push 0x99fe9c
// 00714c99  8d4c2414             lea ecx, [esp + 0x14]
// 00714c9d  ff15a4b79800         call dword ptr [0x98b7a4]
// 00714ca3  6814d8a900           push 0xa9d814
// 00714ca8  8d4c2414             lea ecx, [esp + 0x14]
// 00714cac  51                   push ecx
// 00714cad  e8c6fb0d00           call 0x7f4878
// 00714cb2  8d4c2408             lea ecx, [esp + 8]
// 00714cb6  e8351af3ff           call 0x6466f0
// 00714cbb  dd00                 fld qword ptr [eax]
// 00714cbd  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00714cc0  8b5738               mov edx, dword ptr [edi + 0x38]
// 00714cc3  83ec08               sub esp, 8
// 00714cc6  03ce                 add ecx, esi
// 00714cc8  dd1c24               fstp qword ptr [esp]
// 00714ccb  ffd2                 call edx
// 00714ccd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00714cd1  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00714cd9  85c9                 test ecx, ecx
// 00714cdb  7408                 je 0x714ce5
// 00714cdd  8b01                 mov eax, dword ptr [ecx]
// 00714cdf  8b10                 mov edx, dword ptr [eax]
// 00714ce1  6a01                 push 1
// 00714ce3  ffd2                 call edx
// 00714ce5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00714ce9  5f                   pop edi
// 00714cea  5e                   pop esi
// 00714ceb  64890d00000000       mov dword ptr fs:[0], ecx
// 00714cf2  83c420               add esp, 0x20
// 00714cf5  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
