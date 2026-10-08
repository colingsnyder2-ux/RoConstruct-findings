// roc 2007-08 004d9ba0  unit: RBX::View::MegaTextureProxy  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d9ba0
//
// 004d9ba0  8b442404             mov eax, dword ptr [esp + 4]
// 004d9ba4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d9ba8  56                   push esi
// 004d9ba9  8bf1                 mov esi, ecx
// 004d9bab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d9baf  8906                 mov dword ptr [esi], eax
// 004d9bb1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d9bb5  895608               mov dword ptr [esi + 8], edx
// 004d9bb8  894e04               mov dword ptr [esi + 4], ecx
// 004d9bbb  d900                 fld dword ptr [eax]
// 004d9bbd  d95e0c               fstp dword ptr [esi + 0xc]
// 004d9bc0  68f0374600           push 0x4637f0
// 004d9bc5  d94004               fld dword ptr [eax + 4]
// 004d9bc8  68c0044d00           push 0x4d04c0
// 004d9bcd  d95e10               fstp dword ptr [esi + 0x10]
// 004d9bd0  6a04                 push 4
// 004d9bd2  d94008               fld dword ptr [eax + 8]
// 004d9bd5  6a04                 push 4
// 004d9bd7  d95e14               fstp dword ptr [esi + 0x14]
// 004d9bda  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004d9bdd  894e18               mov dword ptr [esi + 0x18], ecx
// 004d9be0  8b5010               mov edx, dword ptr [eax + 0x10]
// 004d9be3  89561c               mov dword ptr [esi + 0x1c], edx
// 004d9be6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004d9be9  83c018               add eax, 0x18
// 004d9bec  50                   push eax
// 004d9bed  8d5624               lea edx, [esi + 0x24]
// 004d9bf0  52                   push edx
// 004d9bf1  894e20               mov dword ptr [esi + 0x20], ecx
// 004d9bf4  e83b751500           call 0x631134
// 004d9bf9  8a442418             mov al, byte ptr [esp + 0x18]
// 004d9bfd  884634               mov byte ptr [esi + 0x34], al
// 004d9c00  c6463500             mov byte ptr [esi + 0x35], 0
// 004d9c04  8bc6                 mov eax, esi
// 004d9c06  5e                   pop esi
// 004d9c07  c21400               ret 0x14
// library rbxgs-view/BrickMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBULookup@@UVariations@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
