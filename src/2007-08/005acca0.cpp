// roc 2007-08 005acca0  unit: RBX::Lighting  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005acca0
//
// 005acca0  6aff                 push -1
// 005acca2  68397a7500           push 0x757a39
// 005acca7  64a100000000         mov eax, dword ptr fs:[0]
// 005accad  50                   push eax
// 005accae  64892500000000       mov dword ptr fs:[0], esp
// 005accb5  51                   push ecx
// 005accb6  56                   push esi
// 005accb7  57                   push edi
// 005accb8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005accbc  8bf1                 mov esi, ecx
// 005accbe  57                   push edi
// 005accbf  8974240c             mov dword ptr [esp + 0xc], esi
// 005accc3  ff159ce67700         call dword ptr [0x77e69c]
// 005accc9  8d471c               lea eax, [edi + 0x1c]
// 005acccc  50                   push eax
// 005acccd  8d4e1c               lea ecx, [esi + 0x1c]
// 005accd0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005accd8  ff159ce67700         call dword ptr [0x77e69c]
// 005accde  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 005acce2  884e38               mov byte ptr [esi + 0x38], cl
// 005acce5  8a5739               mov dl, byte ptr [edi + 0x39]
// 005acce8  885639               mov byte ptr [esi + 0x39], dl
// 005acceb  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005accee  89463c               mov dword ptr [esi + 0x3c], eax
// 005accf1  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 005accf5  884e40               mov byte ptr [esi + 0x40], cl
// 005accf8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005accfc  5f                   pop edi
// 005accfd  8bc6                 mov eax, esi
// 005accff  5e                   pop esi
// 005acd00  64890d00000000       mov dword ptr fs:[0], ecx
// 005acd07  83c410               add esp, 0x10
// 005acd0a  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
