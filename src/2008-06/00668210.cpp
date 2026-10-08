// roc 2008-06 00668210  unit: RBX::HUMAN::GettingUp  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668210
//
// 00668210  83ec08               sub esp, 8
// 00668213  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00668216  8b4204               mov eax, dword ptr [edx + 4]
// 00668219  80781500             cmp byte ptr [eax + 0x15], 0
// 0066821d  55                   push ebp
// 0066821e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00668222  56                   push esi
// 00668223  8bf2                 mov esi, edx
// 00668225  c644240801           mov byte ptr [esp + 8], 1
// 0066822a  7522                 jne 0x66824e
// 0066822c  57                   push edi
// 0066822d  8b7d00               mov edi, dword ptr [ebp]
// 00668230  3b780c               cmp edi, dword ptr [eax + 0xc]
// 00668233  8bf0                 mov esi, eax
// 00668235  0f92c2               setb dl
// 00668238  8854240c             mov byte ptr [esp + 0xc], dl
// 0066823c  84d2                 test dl, dl
// 0066823e  7404                 je 0x668244
// 00668240  8b00                 mov eax, dword ptr [eax]
// 00668242  eb03                 jmp 0x668247
// 00668244  8b4008               mov eax, dword ptr [eax + 8]
// 00668247  80781500             cmp byte ptr [eax + 0x15], 0
// 0066824b  74e3                 je 0x668230
// 0066824d  5f                   pop edi
// 0066824e  8b442408             mov eax, dword ptr [esp + 8]
// 00668252  55                   push ebp
// 00668253  56                   push esi
// 00668254  50                   push eax
// 00668255  8d542414             lea edx, [esp + 0x14]
// 00668259  52                   push edx
// 0066825a  e8b1fdffff           call 0x668010
// 0066825f  8bc8                 mov ecx, eax
// 00668261  8b11                 mov edx, dword ptr [ecx]
// 00668263  8b442414             mov eax, dword ptr [esp + 0x14]
// 00668267  8b4904               mov ecx, dword ptr [ecx + 4]
// 0066826a  5e                   pop esi
// 0066826b  8910                 mov dword ptr [eax], edx
// 0066826d  894804               mov dword ptr [eax + 4], ecx
// 00668270  c6400801             mov byte ptr [eax + 8], 1
// 00668274  5d                   pop ebp
// 00668275  83c408               add esp, 8
// 00668278  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@_N@2@ABU?$pair@QAVPrimitive@RBX@@PAVJoint@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
