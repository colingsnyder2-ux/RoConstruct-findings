// roc 2008-06 005e1960  unit: RBX::VLighting::?$BoundFuncDesc  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1960
//
// 005e1960  6aff                 push -1
// 005e1962  68e82c7d00           push 0x7d2ce8
// 005e1967  64a100000000         mov eax, dword ptr fs:[0]
// 005e196d  50                   push eax
// 005e196e  64892500000000       mov dword ptr fs:[0], esp
// 005e1975  83ec14               sub esp, 0x14
// 005e1978  56                   push esi
// 005e1979  57                   push edi
// 005e197a  8bf9                 mov edi, ecx
// 005e197c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005e197f  8b4740               mov eax, dword ptr [edi + 0x40]
// 005e1982  89442408             mov dword ptr [esp + 8], eax
// 005e1986  85c9                 test ecx, ecx
// 005e1988  7409                 je 0x5e1993
// 005e198a  8b11                 mov edx, dword ptr [ecx]
// 005e198c  8b4208               mov eax, dword ptr [edx + 8]
// 005e198f  ffd0                 call eax
// 005e1991  eb02                 jmp 0x5e1995
// 005e1993  33c0                 xor eax, eax
// 005e1995  8944240c             mov dword ptr [esp + 0xc], eax
// 005e1999  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e199d  8b11                 mov edx, dword ptr [ecx]
// 005e199f  8b5204               mov edx, dword ptr [edx + 4]
// 005e19a2  8d442408             lea eax, [esp + 8]
// 005e19a6  50                   push eax
// 005e19a7  6a01                 push 1
// 005e19a9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005e19b1  ffd2                 call edx
// 005e19b3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e19b7  6a00                 push 0
// 005e19b9  6864499500           push 0x954964
// 005e19be  68fc919200           push 0x9291fc
// 005e19c3  6a00                 push 0
// 005e19c5  50                   push eax
// 005e19c6  e8fbfd0b00           call 0x6a17c6
// 005e19cb  8bf0                 mov esi, eax
// 005e19cd  83c414               add esp, 0x14
// 005e19d0  85f6                 test esi, esi
// 005e19d2  751e                 jne 0x5e19f2
// 005e19d4  6834ba8000           push 0x80ba34
// 005e19d9  8d4c2414             lea ecx, [esp + 0x14]
// 005e19dd  ff1564288000         call dword ptr [0x802864]
// 005e19e3  682c368d00           push 0x8d362c
// 005e19e8  8d4c2414             lea ecx, [esp + 0x14]
// 005e19ec  51                   push ecx
// 005e19ed  e89afb0b00           call 0x6a158c
// 005e19f2  8d4c2408             lea ecx, [esp + 8]
// 005e19f6  e855d4f8ff           call 0x56ee50
// 005e19fb  dd00                 fld qword ptr [eax]
// 005e19fd  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 005e1a00  8b5738               mov edx, dword ptr [edi + 0x38]
// 005e1a03  83ec08               sub esp, 8
// 005e1a06  03ce                 add ecx, esi
// 005e1a08  dd1c24               fstp qword ptr [esp]
// 005e1a0b  ffd2                 call edx
// 005e1a0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e1a11  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005e1a19  85c9                 test ecx, ecx
// 005e1a1b  7408                 je 0x5e1a25
// 005e1a1d  8b01                 mov eax, dword ptr [ecx]
// 005e1a1f  8b10                 mov edx, dword ptr [eax]
// 005e1a21  6a01                 push 1
// 005e1a23  ffd2                 call edx
// 005e1a25  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e1a29  5f                   pop edi
// 005e1a2a  5e                   pop esi
// 005e1a2b  64890d00000000       mov dword ptr fs:[0], ecx
// 005e1a32  83c420               add esp, 0x20
// 005e1a35  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
