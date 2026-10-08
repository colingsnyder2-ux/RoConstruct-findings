// roc 2009-06 004094e0  unit: std::logic_error  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004094e0
//
// 004094e0  6aff                 push -1
// 004094e2  6891e08600           push 0x86e091
// 004094e7  64a100000000         mov eax, dword ptr fs:[0]
// 004094ed  50                   push eax
// 004094ee  64892500000000       mov dword ptr fs:[0], esp
// 004094f5  83ec20               sub esp, 0x20
// 004094f8  56                   push esi
// 004094f9  8bf1                 mov esi, ecx
// 004094fb  6870d28a00           push 0x8ad270
// 00409500  8d4c240c             lea ecx, [esp + 0xc]
// 00409504  89742408             mov dword ptr [esp + 8], esi
// 00409508  ff15b4e48900         call dword ptr [0x89e4b4]
// 0040950e  8d442408             lea eax, [esp + 8]
// 00409512  50                   push eax
// 00409513  8bce                 mov ecx, esi
// 00409515  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0040951d  e8eefeffff           call 0x409410
// 00409522  8d4c2408             lea ecx, [esp + 8]
// 00409526  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0040952b  ff15c4e48900         call dword ptr [0x89e4c4]
// 00409531  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00409535  c70668d28a00         mov dword ptr [esi], 0x8ad268
// 0040953b  8bc6                 mov eax, esi
// 0040953d  5e                   pop esi
// 0040953e  64890d00000000       mov dword ptr fs:[0], ecx
// 00409545  83c42c               add esp, 0x2c
// 00409548  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_function_call@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
