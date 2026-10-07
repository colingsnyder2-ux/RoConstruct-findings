// roc 2007-08 004cd360  unit: CSHA1  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd360
//
// 004cd360  56                   push esi
// 004cd361  33f6                 xor esi, esi
// 004cd363  3974240c             cmp dword ptr [esp + 0xc], esi
// 004cd367  763a                 jbe 0x4cd3a3
// 004cd369  53                   push ebx
// 004cd36a  0fb75904             movzx ebx, word ptr [ecx + 4]
// 004cd36e  55                   push ebp
// 004cd36f  57                   push edi
// 004cd370  0fb77902             movzx edi, word ptr [ecx + 2]
// 004cd374  0fb711               movzx edx, word ptr [ecx]
// 004cd377  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cd37b  8ac6                 mov al, dh
// 004cd37d  32042e               xor al, byte ptr [esi + ebp]
// 004cd380  83c601               add esi, 1
// 004cd383  660fb6e8             movzx bp, al
// 004cd387  6603ea               add bp, dx
// 004cd38a  660fafef             imul bp, di
// 004cd38e  0fb6c0               movzx eax, al
// 004cd391  014108               add dword ptr [ecx + 8], eax
// 004cd394  6603eb               add bp, bx
// 004cd397  3b742418             cmp esi, dword ptr [esp + 0x18]
// 004cd39b  668929               mov word ptr [ecx], bp
// 004cd39e  72d4                 jb 0x4cd374
// 004cd3a0  5f                   pop edi
// 004cd3a1  5d                   pop ebp
// 004cd3a2  5b                   pop ebx
// 004cd3a3  5e                   pop esi
// 004cd3a4  c20800               ret 8
// library rbx2016-raknet/CheckSum.cpp (function ?Add@CheckSum@@QAEXPAEI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CheckSum.cpp
