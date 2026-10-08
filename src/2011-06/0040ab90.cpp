// roc 2011-06 0040ab90  unit: std::runtime_error  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040ab90
//
// 0040ab90  6aff                 push -1
// 0040ab92  68a11f9e00           push 0x9e1fa1
// 0040ab97  64a100000000         mov eax, dword ptr fs:[0]
// 0040ab9d  50                   push eax
// 0040ab9e  64892500000000       mov dword ptr fs:[0], esp
// 0040aba5  83ec20               sub esp, 0x20
// 0040aba8  56                   push esi
// 0040aba9  8bf1                 mov esi, ecx
// 0040abab  68b0bfa500           push 0xa5bfb0
// 0040abb0  8d4c240c             lea ecx, [esp + 0xc]
// 0040abb4  89742408             mov dword ptr [esp + 8], esi
// 0040abb8  ff15c404a400         call dword ptr [0xa404c4]
// 0040abbe  8d442408             lea eax, [esp + 8]
// 0040abc2  50                   push eax
// 0040abc3  8bce                 mov ecx, esi
// 0040abc5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0040abcd  e87efdffff           call 0x40a950
// 0040abd2  8d4c2408             lea ecx, [esp + 8]
// 0040abd6  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0040abdb  ff15d004a400         call dword ptr [0xa404d0]
// 0040abe1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0040abe5  c706a8bfa500         mov dword ptr [esi], 0xa5bfa8
// 0040abeb  8bc6                 mov eax, esi
// 0040abed  5e                   pop esi
// 0040abee  64890d00000000       mov dword ptr fs:[0], ecx
// 0040abf5  83c42c               add esp, 0x2c
// 0040abf8  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_function_call@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
