// roc 2009-12 007d8ea0  unit: RBX::HUMAN::GettingUp  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8ea0
//
// 007d8ea0  83ec08               sub esp, 8
// 007d8ea3  8b5118               mov edx, dword ptr [ecx + 0x18]
// 007d8ea6  8b4204               mov eax, dword ptr [edx + 4]
// 007d8ea9  80781500             cmp byte ptr [eax + 0x15], 0
// 007d8ead  55                   push ebp
// 007d8eae  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007d8eb2  56                   push esi
// 007d8eb3  8bf2                 mov esi, edx
// 007d8eb5  c644240801           mov byte ptr [esp + 8], 1
// 007d8eba  7522                 jne 0x7d8ede
// 007d8ebc  57                   push edi
// 007d8ebd  8b7d00               mov edi, dword ptr [ebp]
// 007d8ec0  3b780c               cmp edi, dword ptr [eax + 0xc]
// 007d8ec3  8bf0                 mov esi, eax
// 007d8ec5  0f92c2               setb dl
// 007d8ec8  8854240c             mov byte ptr [esp + 0xc], dl
// 007d8ecc  84d2                 test dl, dl
// 007d8ece  7404                 je 0x7d8ed4
// 007d8ed0  8b00                 mov eax, dword ptr [eax]
// 007d8ed2  eb03                 jmp 0x7d8ed7
// 007d8ed4  8b4008               mov eax, dword ptr [eax + 8]
// 007d8ed7  80781500             cmp byte ptr [eax + 0x15], 0
// 007d8edb  74e3                 je 0x7d8ec0
// 007d8edd  5f                   pop edi
// 007d8ede  8b442408             mov eax, dword ptr [esp + 8]
// 007d8ee2  55                   push ebp
// 007d8ee3  56                   push esi
// 007d8ee4  50                   push eax
// 007d8ee5  8d542414             lea edx, [esp + 0x14]
// 007d8ee9  52                   push edx
// 007d8eea  e83144edff           call 0x6ad320
// 007d8eef  8bc8                 mov ecx, eax
// 007d8ef1  8b11                 mov edx, dword ptr [ecx]
// 007d8ef3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007d8ef7  8b4904               mov ecx, dword ptr [ecx + 4]
// 007d8efa  5e                   pop esi
// 007d8efb  8910                 mov dword ptr [eax], edx
// 007d8efd  894804               mov dword ptr [eax + 4], ecx
// 007d8f00  c6400801             mov byte ptr [eax + 8], 1
// 007d8f04  5d                   pop ebp
// 007d8f05  83c408               add esp, 8
// 007d8f08  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@_N@2@ABU?$pair@QAVPrimitive@RBX@@PAVJoint@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
