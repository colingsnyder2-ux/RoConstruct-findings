// roc 2010-06 0078b230  unit: seg_00780000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078b230
//
// 0078b230  83ec08               sub esp, 8
// 0078b233  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0078b236  8b4204               mov eax, dword ptr [edx + 4]
// 0078b239  80781500             cmp byte ptr [eax + 0x15], 0
// 0078b23d  55                   push ebp
// 0078b23e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0078b242  56                   push esi
// 0078b243  8bf2                 mov esi, edx
// 0078b245  c644240801           mov byte ptr [esp + 8], 1
// 0078b24a  7522                 jne 0x78b26e
// 0078b24c  57                   push edi
// 0078b24d  8b7d00               mov edi, dword ptr [ebp]
// 0078b250  3b780c               cmp edi, dword ptr [eax + 0xc]
// 0078b253  8bf0                 mov esi, eax
// 0078b255  0f92c2               setb dl
// 0078b258  8854240c             mov byte ptr [esp + 0xc], dl
// 0078b25c  84d2                 test dl, dl
// 0078b25e  7404                 je 0x78b264
// 0078b260  8b00                 mov eax, dword ptr [eax]
// 0078b262  eb03                 jmp 0x78b267
// 0078b264  8b4008               mov eax, dword ptr [eax + 8]
// 0078b267  80781500             cmp byte ptr [eax + 0x15], 0
// 0078b26b  74e3                 je 0x78b250
// 0078b26d  5f                   pop edi
// 0078b26e  8b442408             mov eax, dword ptr [esp + 8]
// 0078b272  55                   push ebp
// 0078b273  56                   push esi
// 0078b274  50                   push eax
// 0078b275  8d542414             lea edx, [esp + 0x14]
// 0078b279  52                   push edx
// 0078b27a  e8b1fdffff           call 0x78b030
// 0078b27f  8bc8                 mov ecx, eax
// 0078b281  8b11                 mov edx, dword ptr [ecx]
// 0078b283  8b442414             mov eax, dword ptr [esp + 0x14]
// 0078b287  8b4904               mov ecx, dword ptr [ecx + 4]
// 0078b28a  5e                   pop esi
// 0078b28b  8910                 mov dword ptr [eax], edx
// 0078b28d  894804               mov dword ptr [eax + 4], ecx
// 0078b290  c6400801             mov byte ptr [eax + 8], 1
// 0078b294  5d                   pop ebp
// 0078b295  83c408               add esp, 8
// 0078b298  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@_N@2@ABU?$pair@QAVPrimitive@RBX@@PAVJoint@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
