// roc 2008-06 00569530  unit: RBX::ServiceProvider  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569530
//
// 00569530  6aff                 push -1
// 00569532  68a3f87c00           push 0x7cf8a3
// 00569537  64a100000000         mov eax, dword ptr fs:[0]
// 0056953d  50                   push eax
// 0056953e  64892500000000       mov dword ptr fs:[0], esp
// 00569545  51                   push ecx
// 00569546  56                   push esi
// 00569547  8bf1                 mov esi, ecx
// 00569549  33c0                 xor eax, eax
// 0056954b  894620               mov dword ptr [esi + 0x20], eax
// 0056954e  89742404             mov dword ptr [esp + 4], esi
// 00569552  894624               mov dword ptr [esi + 0x24], eax
// 00569555  89442410             mov dword ptr [esp + 0x10], eax
// 00569559  e862090800           call 0x5e9ec0
// 0056955e  8d4e28               lea ecx, [esi + 0x28]
// 00569561  c644241001           mov byte ptr [esp + 0x10], 1
// 00569566  c70610f58200         mov dword ptr [esi], 0x82f510
// 0056956c  e81fb70200           call 0x594c90
// 00569571  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00569575  8bc6                 mov eax, esi
// 00569577  5e                   pop esi
// 00569578  64890d00000000       mov dword ptr fs:[0], ecx
// 0056957f  83c410               add esp, 0x10
// 00569582  c3                   ret 
// library rbxgs/util\standardout.cpp (function ??0StandardOut@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
