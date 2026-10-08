// roc 2007-08 00602f00  unit: RBX::JointStage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602f00
//
// 00602f00  83ec08               sub esp, 8
// 00602f03  8b5104               mov edx, dword ptr [ecx + 4]
// 00602f06  8b4204               mov eax, dword ptr [edx + 4]
// 00602f09  80781500             cmp byte ptr [eax + 0x15], 0
// 00602f0d  55                   push ebp
// 00602f0e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00602f12  56                   push esi
// 00602f13  8bf2                 mov esi, edx
// 00602f15  c644240801           mov byte ptr [esp + 8], 1
// 00602f1a  7522                 jne 0x602f3e
// 00602f1c  57                   push edi
// 00602f1d  8b7d00               mov edi, dword ptr [ebp]
// 00602f20  3b780c               cmp edi, dword ptr [eax + 0xc]
// 00602f23  8bf0                 mov esi, eax
// 00602f25  0f92c2               setb dl
// 00602f28  84d2                 test dl, dl
// 00602f2a  8854240c             mov byte ptr [esp + 0xc], dl
// 00602f2e  7404                 je 0x602f34
// 00602f30  8b00                 mov eax, dword ptr [eax]
// 00602f32  eb03                 jmp 0x602f37
// 00602f34  8b4008               mov eax, dword ptr [eax + 8]
// 00602f37  80781500             cmp byte ptr [eax + 0x15], 0
// 00602f3b  74e3                 je 0x602f20
// 00602f3d  5f                   pop edi
// 00602f3e  8b442408             mov eax, dword ptr [esp + 8]
// 00602f42  55                   push ebp
// 00602f43  56                   push esi
// 00602f44  50                   push eax
// 00602f45  8d542414             lea edx, [esp + 0x14]
// 00602f49  52                   push edx
// 00602f4a  e8e10af8ff           call 0x583a30
// 00602f4f  8bc8                 mov ecx, eax
// 00602f51  8b11                 mov edx, dword ptr [ecx]
// 00602f53  8b442414             mov eax, dword ptr [esp + 0x14]
// 00602f57  8b4904               mov ecx, dword ptr [ecx + 4]
// 00602f5a  5e                   pop esi
// 00602f5b  8910                 mov dword ptr [eax], edx
// 00602f5d  894804               mov dword ptr [eax + 4], ecx
// 00602f60  c6400801             mov byte ptr [eax + 8], 1
// 00602f64  5d                   pop ebp
// 00602f65  83c408               add esp, 8
// 00602f68  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tmap_traits@PAVPrimitive@RBX@@PAVJoint@2@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@U?$pair@QAVPrimitive@RBX@@PAVJoint@2@@std@@@5@$00@std@@@std@@_N@2@ABU?$pair@QAVPrimitive@RBX@@PAVJoint@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
