// from server: 100% by auto
// roc 2008-06 0052ce90  unit: seg_00520000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052ce90
//
// 0052ce90  8b442408             mov eax, dword ptr [esp + 8]
// 0052ce94  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0052ce98  0fb65002             movzx edx, byte ptr [eax + 2]
// 0052ce9c  56                   push esi
// 0052ce9d  0fb630               movzx esi, byte ptr [eax]
// 0052cea0  0fb64003             movzx eax, byte ptr [eax + 3]
// 0052cea4  c1e608               shl esi, 8
// 0052cea7  03f1                 add esi, ecx
// 0052cea9  c1e608               shl esi, 8
// 0052ceac  03f2                 add esi, edx
// 0052ceae  c1e608               shl esi, 8
// 0052ceb1  03f0                 add esi, eax
// 0052ceb3  81feffffff7f         cmp esi, 0x7fffffff
// 0052ceb9  7612                 jbe 0x52cecd
// 0052cebb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052cebf  6828bd8200           push 0x82bd28
// 0052cec4  51                   push ecx
// 0052cec5  e8e6caffff           call 0x5299b0
// 0052ceca  83c408               add esp, 8
// 0052cecd  8bc6                 mov eax, esi
// 0052cecf  5e                   pop esi
// 0052ced0  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_get_uint_31)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
