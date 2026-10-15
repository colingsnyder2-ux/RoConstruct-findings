// roc 2008-06 00585a30  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585a30
//
// 00585a30  6aff                 push -1
// 00585a32  68e82c7d00           push 0x7d2ce8
// 00585a37  64a100000000         mov eax, dword ptr fs:[0]
// 00585a3d  50                   push eax
// 00585a3e  64892500000000       mov dword ptr fs:[0], esp
// 00585a45  83ec14               sub esp, 0x14
// 00585a48  56                   push esi
// 00585a49  8bf1                 mov esi, ecx
// 00585a4b  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00585a4e  8b4644               mov eax, dword ptr [esi + 0x44]
// 00585a51  57                   push edi
// 00585a52  89442408             mov dword ptr [esp + 8], eax
// 00585a56  85c9                 test ecx, ecx
// 00585a58  7409                 je 0x585a63
// 00585a5a  8b11                 mov edx, dword ptr [ecx]
// 00585a5c  8b4208               mov eax, dword ptr [edx + 8]
// 00585a5f  ffd0                 call eax
// 00585a61  eb02                 jmp 0x585a65
// 00585a63  33c0                 xor eax, eax
// 00585a65  8944240c             mov dword ptr [esp + 0xc], eax
// 00585a69  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00585a6d  8b11                 mov edx, dword ptr [ecx]
// 00585a6f  8b5204               mov edx, dword ptr [edx + 4]
// 00585a72  8d442408             lea eax, [esp + 8]
// 00585a76  50                   push eax
// 00585a77  6a01                 push 1
// 00585a79  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00585a81  ffd2                 call edx
// 00585a83  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00585a87  6a00                 push 0
// 00585a89  68402a9300           push 0x932a40
// 00585a8e  68fc919200           push 0x9291fc
// 00585a93  6a00                 push 0
// 00585a95  50                   push eax
// 00585a96  e82bbd1100           call 0x6a17c6
// 00585a9b  8bf8                 mov edi, eax
// 00585a9d  83c414               add esp, 0x14
// 00585aa0  85ff                 test edi, edi
// 00585aa2  751e                 jne 0x585ac2
// 00585aa4  6834ba8000           push 0x80ba34
// 00585aa9  8d4c2414             lea ecx, [esp + 0x14]
// 00585aad  ff1564288000         call dword ptr [0x802864]
// 00585ab3  682c368d00           push 0x8d362c
// 00585ab8  8d4c2414             lea ecx, [esp + 0x14]
// 00585abc  51                   push ecx
// 00585abd  e8caba1100           call 0x6a158c
// 00585ac2  8d4c2408             lea ecx, [esp + 8]
// 00585ac6  e8d594feff           call 0x56efa0
// 00585acb  d900                 fld dword ptr [eax]
// 00585acd  8b9734010000         mov edx, dword ptr [edi + 0x134]
// 00585ad3  83ec0c               sub esp, 0xc
// 00585ad6  8bcc                 mov ecx, esp
// 00585ad8  d919                 fstp dword ptr [ecx]
// 00585ada  d94004               fld dword ptr [eax + 4]
// 00585add  d95904               fstp dword ptr [ecx + 4]
// 00585ae0  d94008               fld dword ptr [eax + 8]
// 00585ae3  8b4640               mov eax, dword ptr [esi + 0x40]
// 00585ae6  d95908               fstp dword ptr [ecx + 8]
// 00585ae9  8b0c02               mov ecx, dword ptr [edx + eax]
// 00585aec  034e3c               add ecx, dword ptr [esi + 0x3c]
// 00585aef  8b5638               mov edx, dword ptr [esi + 0x38]
// 00585af2  8d8c3934010000       lea ecx, [ecx + edi + 0x134]
// 00585af9  ffd2                 call edx
// 00585afb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00585aff  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00585b07  85c9                 test ecx, ecx
// 00585b09  7408                 je 0x585b13
// 00585b0b  8b01                 mov eax, dword ptr [ecx]
// 00585b0d  8b10                 mov edx, dword ptr [eax]
// 00585b0f  6a01                 push 1
// 00585b11  ffd2                 call edx
// 00585b13  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00585b17  5f                   pop edi
// 00585b18  64890d00000000       mov dword ptr fs:[0], ecx
// 00585b1f  5e                   pop esi
// 00585b20  83c420               add esp, 0x20
// 00585b23  c20800               ret 8
// library rbxgs/roc_unit_1eb5bb0dbedac226.cpp (function ?execute@?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_1eb5bb0dbedac226.cpp
