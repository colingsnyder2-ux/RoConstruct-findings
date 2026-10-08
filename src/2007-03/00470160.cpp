// roc 2007-03 00470160  unit: seg_00470000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470160
//
// 00470160  6aff                 push -1
// 00470162  68e9097500           push 0x7509e9
// 00470167  64a100000000         mov eax, dword ptr fs:[0]
// 0047016d  50                   push eax
// 0047016e  51                   push ecx
// 0047016f  56                   push esi
// 00470170  57                   push edi
// 00470171  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00470176  33c4                 xor eax, esp
// 00470178  50                   push eax
// 00470179  8d442410             lea eax, [esp + 0x10]
// 0047017d  64a300000000         mov dword ptr fs:[0], eax
// 00470183  8bf1                 mov esi, ecx
// 00470185  8974240c             mov dword ptr [esp + 0xc], esi
// 00470189  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0047018d  57                   push edi
// 0047018e  ff157ce77700         call dword ptr [0x77e77c]
// 00470194  83c71c               add edi, 0x1c
// 00470197  57                   push edi
// 00470198  8d4e1c               lea ecx, [esi + 0x1c]
// 0047019b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004701a3  ff157ce77700         call dword ptr [0x77e77c]
// 004701a9  8bc6                 mov eax, esi
// 004701ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004701af  64890d00000000       mov dword ptr fs:[0], ecx
// 004701b6  59                   pop ecx
// 004701b7  5f                   pop edi
// 004701b8  5e                   pop esi
// 004701b9  83c410               add esp, 0x10
// 004701bc  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
