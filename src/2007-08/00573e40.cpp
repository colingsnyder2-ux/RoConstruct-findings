// roc 2007-08 00573e40  unit: RBX::PartInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573e40
//
// 00573e40  53                   push ebx
// 00573e41  56                   push esi
// 00573e42  57                   push edi
// 00573e43  33ff                 xor edi, edi
// 00573e45  8d99bc000000         lea ebx, [ecx + 0xbc]
// 00573e4b  eb03                 jmp 0x573e50
// 00573e4d  8d4900               lea ecx, [ecx]
// 00573e50  57                   push edi
// 00573e51  8bcb                 mov ecx, ebx
// 00573e53  e8582e0400           call 0x5b6cb0
// 00573e58  8bf0                 mov esi, eax
// 00573e5a  8bce                 mov ecx, esi
// 00573e5c  e8bf520400           call 0x5b9120
// 00573e61  83f808               cmp eax, 8
// 00573e64  740c                 je 0x573e72
// 00573e66  8bce                 mov ecx, esi
// 00573e68  e8b3520400           call 0x5b9120
// 00573e6d  83f807               cmp eax, 7
// 00573e70  750b                 jne 0x573e7d
// 00573e72  8bce                 mov ecx, esi
// 00573e74  e8d7530400           call 0x5b9250
// 00573e79  84c0                 test al, al
// 00573e7b  750e                 jne 0x573e8b
// 00573e7d  83c701               add edi, 1
// 00573e80  83ff06               cmp edi, 6
// 00573e83  7ccb                 jl 0x573e50
// 00573e85  5f                   pop edi
// 00573e86  5e                   pop esi
// 00573e87  32c0                 xor al, al
// 00573e89  5b                   pop ebx
// 00573e8a  c3                   ret 
// 00573e8b  5f                   pop edi
// 00573e8c  5e                   pop esi
// 00573e8d  b001                 mov al, 1
// 00573e8f  5b                   pop ebx
// 00573e90  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?isControllable@PartInstance@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
