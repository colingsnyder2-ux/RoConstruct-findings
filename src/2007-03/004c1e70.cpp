// roc 2007-03 004c1e70  unit: seg_004c0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1e70
//
// 004c1e70  56                   push esi
// 004c1e71  33f6                 xor esi, esi
// 004c1e73  3974240c             cmp dword ptr [esp + 0xc], esi
// 004c1e77  763a                 jbe 0x4c1eb3
// 004c1e79  53                   push ebx
// 004c1e7a  0fb75904             movzx ebx, word ptr [ecx + 4]
// 004c1e7e  55                   push ebp
// 004c1e7f  57                   push edi
// 004c1e80  0fb77902             movzx edi, word ptr [ecx + 2]
// 004c1e84  0fb711               movzx edx, word ptr [ecx]
// 004c1e87  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004c1e8b  8ac6                 mov al, dh
// 004c1e8d  32042e               xor al, byte ptr [esi + ebp]
// 004c1e90  83c601               add esi, 1
// 004c1e93  660fb6e8             movzx bp, al
// 004c1e97  6603ea               add bp, dx
// 004c1e9a  660fafef             imul bp, di
// 004c1e9e  0fb6c0               movzx eax, al
// 004c1ea1  014108               add dword ptr [ecx + 8], eax
// 004c1ea4  6603eb               add bp, bx
// 004c1ea7  3b742418             cmp esi, dword ptr [esp + 0x18]
// 004c1eab  668929               mov word ptr [ecx], bp
// 004c1eae  72d4                 jb 0x4c1e84
// 004c1eb0  5f                   pop edi
// 004c1eb1  5d                   pop ebp
// 004c1eb2  5b                   pop ebx
// 004c1eb3  5e                   pop esi
// 004c1eb4  c20800               ret 8
// library rbxgs-raknet/CheckSum.cpp (function ?Add@CheckSum@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet CheckSum.cpp
