// roc 2008-06 005c4ea0  unit: RBX::VVisit::?$BoundFuncDesc  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4ea0
//
// 005c4ea0  6aff                 push -1
// 005c4ea2  68e82c7d00           push 0x7d2ce8
// 005c4ea7  64a100000000         mov eax, dword ptr fs:[0]
// 005c4ead  50                   push eax
// 005c4eae  64892500000000       mov dword ptr fs:[0], esp
// 005c4eb5  83ec14               sub esp, 0x14
// 005c4eb8  56                   push esi
// 005c4eb9  57                   push edi
// 005c4eba  8bf9                 mov edi, ecx
// 005c4ebc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005c4ebf  8b4740               mov eax, dword ptr [edi + 0x40]
// 005c4ec2  89442408             mov dword ptr [esp + 8], eax
// 005c4ec6  85c9                 test ecx, ecx
// 005c4ec8  7409                 je 0x5c4ed3
// 005c4eca  8b11                 mov edx, dword ptr [ecx]
// 005c4ecc  8b4208               mov eax, dword ptr [edx + 8]
// 005c4ecf  ffd0                 call eax
// 005c4ed1  eb02                 jmp 0x5c4ed5
// 005c4ed3  33c0                 xor eax, eax
// 005c4ed5  8944240c             mov dword ptr [esp + 0xc], eax
// 005c4ed9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005c4edd  8b11                 mov edx, dword ptr [ecx]
// 005c4edf  8b5204               mov edx, dword ptr [edx + 4]
// 005c4ee2  8d442408             lea eax, [esp + 8]
// 005c4ee6  50                   push eax
// 005c4ee7  6a01                 push 1
// 005c4ee9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005c4ef1  ffd2                 call edx
// 005c4ef3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005c4ef7  6a00                 push 0
// 005c4ef9  6828f79400           push 0x94f728
// 005c4efe  68fc919200           push 0x9291fc
// 005c4f03  6a00                 push 0
// 005c4f05  50                   push eax
// 005c4f06  e8bbc80d00           call 0x6a17c6
// 005c4f0b  8bf0                 mov esi, eax
// 005c4f0d  83c414               add esp, 0x14
// 005c4f10  85f6                 test esi, esi
// 005c4f12  751e                 jne 0x5c4f32
// 005c4f14  6834ba8000           push 0x80ba34
// 005c4f19  8d4c2414             lea ecx, [esp + 0x14]
// 005c4f1d  ff1564288000         call dword ptr [0x802864]
// 005c4f23  682c368d00           push 0x8d362c
// 005c4f28  8d4c2414             lea ecx, [esp + 0x14]
// 005c4f2c  51                   push ecx
// 005c4f2d  e85ac60d00           call 0x6a158c
// 005c4f32  8d4c2408             lea ecx, [esp + 8]
// 005c4f36  e875a1faff           call 0x56f0b0
// 005c4f3b  83ec1c               sub esp, 0x1c
// 005c4f3e  8bcc                 mov ecx, esp
// 005c4f40  8964244c             mov dword ptr [esp + 0x4c], esp
// 005c4f44  50                   push eax
// 005c4f45  ff155c248000         call dword ptr [0x80245c]
// 005c4f4b  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 005c4f4e  8b5738               mov edx, dword ptr [edi + 0x38]
// 005c4f51  03ce                 add ecx, esi
// 005c4f53  ffd2                 call edx
// 005c4f55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c4f59  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005c4f61  85c9                 test ecx, ecx
// 005c4f63  7408                 je 0x5c4f6d
// 005c4f65  8b01                 mov eax, dword ptr [ecx]
// 005c4f67  8b10                 mov edx, dword ptr [eax]
// 005c4f69  6a01                 push 1
// 005c4f6b  ffd2                 call edx
// 005c4f6d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c4f71  5f                   pop edi
// 005c4f72  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4f79  5e                   pop esi
// 005c4f7a  83c420               add esp, 0x20
// 005c4f7d  c20800               ret 8
// library rbxgs-dll/v8datamodel\Visit.cpp (function ?execute@?$BoundFuncDesc@VVisit@RBX@@$$A6AXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8datamodel/Visit.cpp
