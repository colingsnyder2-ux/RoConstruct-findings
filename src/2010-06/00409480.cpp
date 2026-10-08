// roc 2010-06 00409480  unit: std::logic_error  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409480
//
// 00409480  6aff                 push -1
// 00409482  68312a9900           push 0x992a31
// 00409487  64a100000000         mov eax, dword ptr fs:[0]
// 0040948d  50                   push eax
// 0040948e  64892500000000       mov dword ptr fs:[0], esp
// 00409495  83ec20               sub esp, 0x20
// 00409498  56                   push esi
// 00409499  8bf1                 mov esi, ecx
// 0040949b  684409a000           push 0xa00944
// 004094a0  8d4c240c             lea ecx, [esp + 0xc]
// 004094a4  89742408             mov dword ptr [esp + 8], esi
// 004094a8  ff1510a49e00         call dword ptr [0x9ea410]
// 004094ae  8d442408             lea eax, [esp + 8]
// 004094b2  50                   push eax
// 004094b3  8bce                 mov ecx, esi
// 004094b5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004094bd  e8eefeffff           call 0x4093b0
// 004094c2  8d4c2408             lea ecx, [esp + 8]
// 004094c6  c644242c02           mov byte ptr [esp + 0x2c], 2
// 004094cb  ff1500a49e00         call dword ptr [0x9ea400]
// 004094d1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004094d5  c7063c09a000         mov dword ptr [esi], 0xa0093c
// 004094db  8bc6                 mov eax, esi
// 004094dd  5e                   pop esi
// 004094de  64890d00000000       mov dword ptr fs:[0], ecx
// 004094e5  83c42c               add esp, 0x2c
// 004094e8  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_function_call@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
