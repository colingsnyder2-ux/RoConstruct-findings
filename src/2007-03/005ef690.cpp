// roc 2007-03 005ef690  unit: seg_005e0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ef690
//
// 005ef690  83ec08               sub esp, 8
// 005ef693  8b5104               mov edx, dword ptr [ecx + 4]
// 005ef696  8b4204               mov eax, dword ptr [edx + 4]
// 005ef699  80781500             cmp byte ptr [eax + 0x15], 0
// 005ef69d  55                   push ebp
// 005ef69e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005ef6a2  56                   push esi
// 005ef6a3  8bf2                 mov esi, edx
// 005ef6a5  c644240801           mov byte ptr [esp + 8], 1
// 005ef6aa  7522                 jne 0x5ef6ce
// 005ef6ac  57                   push edi
// 005ef6ad  8b7d00               mov edi, dword ptr [ebp]
// 005ef6b0  3b780c               cmp edi, dword ptr [eax + 0xc]
// 005ef6b3  8bf0                 mov esi, eax
// 005ef6b5  0f92c2               setb dl
// 005ef6b8  84d2                 test dl, dl
// 005ef6ba  8854240c             mov byte ptr [esp + 0xc], dl
// 005ef6be  7404                 je 0x5ef6c4
// 005ef6c0  8b00                 mov eax, dword ptr [eax]
// 005ef6c2  eb03                 jmp 0x5ef6c7
// 005ef6c4  8b4008               mov eax, dword ptr [eax + 8]
// 005ef6c7  80781500             cmp byte ptr [eax + 0x15], 0
// 005ef6cb  74e3                 je 0x5ef6b0
// 005ef6cd  5f                   pop edi
// 005ef6ce  8b442408             mov eax, dword ptr [esp + 8]
// 005ef6d2  55                   push ebp
// 005ef6d3  56                   push esi
// 005ef6d4  50                   push eax
// 005ef6d5  8d542414             lea edx, [esp + 0x14]
// 005ef6d9  52                   push edx
// 005ef6da  e8f1fcffff           call 0x5ef3d0
// 005ef6df  8bc8                 mov ecx, eax
// 005ef6e1  8b11                 mov edx, dword ptr [ecx]
// 005ef6e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ef6e7  8b4904               mov ecx, dword ptr [ecx + 4]
// 005ef6ea  5e                   pop esi
// 005ef6eb  8910                 mov dword ptr [eax], edx
// 005ef6ed  894804               mov dword ptr [eax + 4], ecx
// 005ef6f0  c6400801             mov byte ptr [eax + 8], 1
// 005ef6f4  5d                   pop ebp
// 005ef6f5  83c408               add esp, 8
// 005ef6f8  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@_N@2@ABU?$pair@QAVPrimitive@RBX@@PAVJoint@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
