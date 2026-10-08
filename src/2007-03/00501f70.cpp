// roc 2007-03 00501f70  unit: seg_00500000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501f70
//
// 00501f70  6aff                 push -1
// 00501f72  68f40d7500           push 0x750df4
// 00501f77  64a100000000         mov eax, dword ptr fs:[0]
// 00501f7d  50                   push eax
// 00501f7e  51                   push ecx
// 00501f7f  56                   push esi
// 00501f80  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00501f85  33c4                 xor eax, esp
// 00501f87  50                   push eax
// 00501f88  8d44240c             lea eax, [esp + 0xc]
// 00501f8c  64a300000000         mov dword ptr fs:[0], eax
// 00501f92  8bf1                 mov esi, ecx
// 00501f94  89742408             mov dword ptr [esp + 8], esi
// 00501f98  8d4e60               lea ecx, [esi + 0x60]
// 00501f9b  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00501fa3  ff158ce77700         call dword ptr [0x77e78c]
// 00501fa9  8d4e44               lea ecx, [esi + 0x44]
// 00501fac  c644241400           mov byte ptr [esp + 0x14], 0
// 00501fb1  ff158ce77700         call dword ptr [0x77e78c]
// 00501fb7  8bce                 mov ecx, esi
// 00501fb9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00501fc1  e86afbffff           call 0x501b30
// 00501fc6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00501fca  64890d00000000       mov dword ptr fs:[0], ecx
// 00501fd1  59                   pop ecx
// 00501fd2  5e                   pop esi
// 00501fd3  83c410               add esp, 0x10
// 00501fd6  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1WrongSymbol@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
