// roc 2007-03 00469270  unit: seg_00460000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00469270
//
// 00469270  53                   push ebx
// 00469271  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00469275  56                   push esi
// 00469276  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046927a  3bf3                 cmp esi, ebx
// 0046927c  7426                 je 0x4692a4
// 0046927e  55                   push ebp
// 0046927f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00469283  57                   push edi
// 00469284  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00469288  0fbe06               movsx eax, byte ptr [esi]
// 0046928b  50                   push eax
// 0046928c  ffd5                 call ebp
// 0046928e  8807                 mov byte ptr [edi], al
// 00469290  83c601               add esi, 1
// 00469293  83c404               add esp, 4
// 00469296  83c701               add edi, 1
// 00469299  3bf3                 cmp esi, ebx
// 0046929b  75eb                 jne 0x469288
// 0046929d  8bc7                 mov eax, edi
// 0046929f  5f                   pop edi
// 004692a0  5d                   pop ebp
// 004692a1  5e                   pop esi
// 004692a2  5b                   pop ebx
// 004692a3  c3                   ret 
// 004692a4  8b442414             mov eax, dword ptr [esp + 0x14]
// 004692a8  5e                   pop esi
// 004692a9  5b                   pop ebx
// 004692aa  c3                   ret 
// library rbxgs-g3d/G3Dcpp\stringutils.cpp (function ??$_Transform@PADPADP6AHH@ZUforward_iterator_tag@std@@@std@@YAPADPAD00P6AHH@ZUforward_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/stringutils.cpp
