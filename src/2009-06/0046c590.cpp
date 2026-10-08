// roc 2009-06 0046c590  unit: DxUserInput  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c590
//
// 0046c590  6aff                 push -1
// 0046c592  68991c8700           push 0x871c99
// 0046c597  64a100000000         mov eax, dword ptr fs:[0]
// 0046c59d  50                   push eax
// 0046c59e  64892500000000       mov dword ptr fs:[0], esp
// 0046c5a5  51                   push ecx
// 0046c5a6  56                   push esi
// 0046c5a7  57                   push edi
// 0046c5a8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046c5ac  8bf1                 mov esi, ecx
// 0046c5ae  57                   push edi
// 0046c5af  8974240c             mov dword ptr [esp + 0xc], esi
// 0046c5b3  ff15b8e48900         call dword ptr [0x89e4b8]
// 0046c5b9  8d471c               lea eax, [edi + 0x1c]
// 0046c5bc  50                   push eax
// 0046c5bd  8d4e1c               lea ecx, [esi + 0x1c]
// 0046c5c0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046c5c8  ff15b8e48900         call dword ptr [0x89e4b8]
// 0046c5ce  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 0046c5d2  884e38               mov byte ptr [esi + 0x38], cl
// 0046c5d5  8a5739               mov dl, byte ptr [edi + 0x39]
// 0046c5d8  885639               mov byte ptr [esi + 0x39], dl
// 0046c5db  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0046c5de  89463c               mov dword ptr [esi + 0x3c], eax
// 0046c5e1  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 0046c5e5  884e40               mov byte ptr [esi + 0x40], cl
// 0046c5e8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046c5ec  5f                   pop edi
// 0046c5ed  8bc6                 mov eax, esi
// 0046c5ef  5e                   pop esi
// 0046c5f0  64890d00000000       mov dword ptr fs:[0], ecx
// 0046c5f7  83c410               add esp, 0x10
// 0046c5fa  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
