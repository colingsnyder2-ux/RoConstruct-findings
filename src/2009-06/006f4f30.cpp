// roc 2009-06 006f4f30  unit: RBX::HUMAN::GettingUp  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4f30
//
// 006f4f30  83ec08               sub esp, 8
// 006f4f33  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006f4f36  8b4204               mov eax, dword ptr [edx + 4]
// 006f4f39  80781500             cmp byte ptr [eax + 0x15], 0
// 006f4f3d  55                   push ebp
// 006f4f3e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006f4f42  56                   push esi
// 006f4f43  8bf2                 mov esi, edx
// 006f4f45  c644240801           mov byte ptr [esp + 8], 1
// 006f4f4a  7522                 jne 0x6f4f6e
// 006f4f4c  57                   push edi
// 006f4f4d  8b7d00               mov edi, dword ptr [ebp]
// 006f4f50  3b780c               cmp edi, dword ptr [eax + 0xc]
// 006f4f53  8bf0                 mov esi, eax
// 006f4f55  0f92c2               setb dl
// 006f4f58  8854240c             mov byte ptr [esp + 0xc], dl
// 006f4f5c  84d2                 test dl, dl
// 006f4f5e  7404                 je 0x6f4f64
// 006f4f60  8b00                 mov eax, dword ptr [eax]
// 006f4f62  eb03                 jmp 0x6f4f67
// 006f4f64  8b4008               mov eax, dword ptr [eax + 8]
// 006f4f67  80781500             cmp byte ptr [eax + 0x15], 0
// 006f4f6b  74e3                 je 0x6f4f50
// 006f4f6d  5f                   pop edi
// 006f4f6e  8b442408             mov eax, dword ptr [esp + 8]
// 006f4f72  55                   push ebp
// 006f4f73  56                   push esi
// 006f4f74  50                   push eax
// 006f4f75  8d542414             lea edx, [esp + 0x14]
// 006f4f79  52                   push edx
// 006f4f7a  e8a1fdffff           call 0x6f4d20
// 006f4f7f  8bc8                 mov ecx, eax
// 006f4f81  8b11                 mov edx, dword ptr [ecx]
// 006f4f83  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f4f87  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f4f8a  5e                   pop esi
// 006f4f8b  8910                 mov dword ptr [eax], edx
// 006f4f8d  894804               mov dword ptr [eax + 4], ecx
// 006f4f90  c6400801             mov byte ptr [eax + 8], 1
// 006f4f94  5d                   pop ebp
// 006f4f95  83c408               add esp, 8
// 006f4f98  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@_N@2@ABU?$pair@QAVPrimitive@RBX@@PAVJoint@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
