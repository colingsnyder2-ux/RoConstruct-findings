// roc 2010-06 0047afb0  unit: DxUserInput  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047afb0
//
// 0047afb0  6aff                 push -1
// 0047afb2  6889009a00           push 0x9a0089
// 0047afb7  64a100000000         mov eax, dword ptr fs:[0]
// 0047afbd  50                   push eax
// 0047afbe  64892500000000       mov dword ptr fs:[0], esp
// 0047afc5  51                   push ecx
// 0047afc6  56                   push esi
// 0047afc7  57                   push edi
// 0047afc8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047afcc  8bf1                 mov esi, ecx
// 0047afce  57                   push edi
// 0047afcf  8974240c             mov dword ptr [esp + 0xc], esi
// 0047afd3  ff150ca49e00         call dword ptr [0x9ea40c]
// 0047afd9  8d471c               lea eax, [edi + 0x1c]
// 0047afdc  50                   push eax
// 0047afdd  8d4e1c               lea ecx, [esi + 0x1c]
// 0047afe0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0047afe8  ff150ca49e00         call dword ptr [0x9ea40c]
// 0047afee  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 0047aff2  884e38               mov byte ptr [esi + 0x38], cl
// 0047aff5  8a5739               mov dl, byte ptr [edi + 0x39]
// 0047aff8  885639               mov byte ptr [esi + 0x39], dl
// 0047affb  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0047affe  89463c               mov dword ptr [esi + 0x3c], eax
// 0047b001  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 0047b005  884e40               mov byte ptr [esi + 0x40], cl
// 0047b008  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047b00c  5f                   pop edi
// 0047b00d  8bc6                 mov eax, esi
// 0047b00f  5e                   pop esi
// 0047b010  64890d00000000       mov dword ptr fs:[0], ecx
// 0047b017  83c410               add esp, 0x10
// 0047b01a  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
