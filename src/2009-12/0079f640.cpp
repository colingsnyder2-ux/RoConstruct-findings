// roc 2009-12 0079f640  unit: seg_00790000  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079f640
//
// 0079f640  53                   push ebx
// 0079f641  55                   push ebp
// 0079f642  56                   push esi
// 0079f643  8bf1                 mov esi, ecx
// 0079f645  57                   push edi
// 0079f646  8bd8                 mov ebx, eax
// 0079f648  e833ffffff           call 0x79f580
// 0079f64d  53                   push ebx
// 0079f64e  56                   push esi
// 0079f64f  8be8                 mov ebp, eax
// 0079f651  e84a90feff           call 0x7886a0
// 0079f656  83c40c               add esp, 0xc
// 0079f659  85c0                 test eax, eax
// 0079f65b  750e                 jne 0x79f66b
// 0079f65d  6804b79e00           push 0x9eb704
// 0079f662  57                   push edi
// 0079f663  e888a6feff           call 0x789cf0
// 0079f668  83c408               add esp, 8
// 0079f66b  83fd01               cmp ebp, 1
// 0079f66e  741d                 je 0x79f68d
// 0079f670  8b04ad58b49e00       mov eax, dword ptr [ebp*4 + 0x9eb458]
// 0079f677  50                   push eax
// 0079f678  68e8b69e00           push 0x9eb6e8
// 0079f67d  57                   push edi
// 0079f67e  e8fd97feff           call 0x788e80
// 0079f683  83c40c               add esp, 0xc
// 0079f686  5e                   pop esi
// 0079f687  5d                   pop ebp
// 0079f688  83c8ff               or eax, 0xffffffff
// 0079f68b  5b                   pop ebx
// 0079f68c  c3                   ret 
// 0079f68d  53                   push ebx
// 0079f68e  56                   push esi
// 0079f68f  57                   push edi
// 0079f690  e87b90feff           call 0x788710
// 0079f695  56                   push esi
// 0079f696  57                   push edi
// 0079f697  e8c490feff           call 0x788760
// 0079f69c  53                   push ebx
// 0079f69d  56                   push esi
// 0079f69e  e85d85ffff           call 0x797c00
// 0079f6a3  83c41c               add esp, 0x1c
// 0079f6a6  85c0                 test eax, eax
// 0079f6a8  7418                 je 0x79f6c2
// 0079f6aa  83f801               cmp eax, 1
// 0079f6ad  7413                 je 0x79f6c2
// 0079f6af  6a01                 push 1
// 0079f6b1  57                   push edi
// 0079f6b2  56                   push esi
// 0079f6b3  e85890feff           call 0x788710
// 0079f6b8  83c40c               add esp, 0xc
// 0079f6bb  5e                   pop esi
// 0079f6bc  5d                   pop ebp
// 0079f6bd  83c8ff               or eax, 0xffffffff
// 0079f6c0  5b                   pop ebx
// 0079f6c1  c3                   ret 
// 0079f6c2  56                   push esi
// 0079f6c3  e8d890feff           call 0x7887a0
// 0079f6c8  8bd8                 mov ebx, eax
// 0079f6ca  8d4b01               lea ecx, [ebx + 1]
// 0079f6cd  51                   push ecx
// 0079f6ce  57                   push edi
// 0079f6cf  e8cc8ffeff           call 0x7886a0
// 0079f6d4  83c40c               add esp, 0xc
// 0079f6d7  85c0                 test eax, eax
// 0079f6d9  750e                 jne 0x79f6e9
// 0079f6db  68ccb69e00           push 0x9eb6cc
// 0079f6e0  57                   push edi
// 0079f6e1  e80aa6feff           call 0x789cf0
// 0079f6e6  83c408               add esp, 8
// 0079f6e9  53                   push ebx
// 0079f6ea  57                   push edi
// 0079f6eb  56                   push esi
// 0079f6ec  e81f90feff           call 0x788710
// 0079f6f1  83c40c               add esp, 0xc
// 0079f6f4  5e                   pop esi
// 0079f6f5  5d                   pop ebp
// 0079f6f6  8bc3                 mov eax, ebx
// 0079f6f8  5b                   pop ebx
// 0079f6f9  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _auxresume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
