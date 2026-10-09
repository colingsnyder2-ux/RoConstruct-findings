// roc 2009-12 00475410  unit: DxUserInput  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475410
//
// 00475410  6aff                 push -1
// 00475412  68598c9300           push 0x938c59
// 00475417  64a100000000         mov eax, dword ptr fs:[0]
// 0047541d  50                   push eax
// 0047541e  64892500000000       mov dword ptr fs:[0], esp
// 00475425  51                   push ecx
// 00475426  56                   push esi
// 00475427  57                   push edi
// 00475428  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047542c  8bf1                 mov esi, ecx
// 0047542e  57                   push edi
// 0047542f  8974240c             mov dword ptr [esp + 0xc], esi
// 00475433  ff15f0b69800         call dword ptr [0x98b6f0]
// 00475439  8d471c               lea eax, [edi + 0x1c]
// 0047543c  50                   push eax
// 0047543d  8d4e1c               lea ecx, [esi + 0x1c]
// 00475440  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00475448  ff15f0b69800         call dword ptr [0x98b6f0]
// 0047544e  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 00475452  884e38               mov byte ptr [esi + 0x38], cl
// 00475455  8a5739               mov dl, byte ptr [edi + 0x39]
// 00475458  885639               mov byte ptr [esi + 0x39], dl
// 0047545b  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0047545e  89463c               mov dword ptr [esi + 0x3c], eax
// 00475461  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 00475465  884e40               mov byte ptr [esi + 0x40], cl
// 00475468  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047546c  5f                   pop edi
// 0047546d  8bc6                 mov eax, esi
// 0047546f  5e                   pop esi
// 00475470  64890d00000000       mov dword ptr fs:[0], ecx
// 00475477  83c410               add esp, 0x10
// 0047547a  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
