// roc 2012-06 0040c2e0  unit: std::logic_error  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040c2e0
//
// 0040c2e0  6aff                 push -1
// 0040c2e2  6891e4ac00           push 0xace491
// 0040c2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0040c2ed  50                   push eax
// 0040c2ee  64892500000000       mov dword ptr fs:[0], esp
// 0040c2f5  83ec20               sub esp, 0x20
// 0040c2f8  56                   push esi
// 0040c2f9  8bf1                 mov esi, ecx
// 0040c2fb  68fc3cb400           push 0xb43cfc
// 0040c300  8d4c240c             lea ecx, [esp + 0xc]
// 0040c304  89742408             mov dword ptr [esp + 8], esi
// 0040c308  ff154826b200         call dword ptr [0xb22648]
// 0040c30e  8d442408             lea eax, [esp + 8]
// 0040c312  50                   push eax
// 0040c313  8bce                 mov ecx, esi
// 0040c315  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0040c31d  e87efdffff           call 0x40c0a0
// 0040c322  8d4c2408             lea ecx, [esp + 8]
// 0040c326  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0040c32b  ff153c26b200         call dword ptr [0xb2263c]
// 0040c331  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0040c335  c706f43cb400         mov dword ptr [esi], 0xb43cf4
// 0040c33b  8bc6                 mov eax, esi
// 0040c33d  5e                   pop esi
// 0040c33e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c345  83c42c               add esp, 0x2c
// 0040c348  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0bad_function_call@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
