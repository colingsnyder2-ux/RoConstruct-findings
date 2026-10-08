// roc 2007-03 004cdac0  unit: seg_004c0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cdac0
//
// 004cdac0  8b442404             mov eax, dword ptr [esp + 4]
// 004cdac4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004cdac8  56                   push esi
// 004cdac9  8bf1                 mov esi, ecx
// 004cdacb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cdacf  8906                 mov dword ptr [esi], eax
// 004cdad1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cdad5  895608               mov dword ptr [esi + 8], edx
// 004cdad8  894e04               mov dword ptr [esi + 4], ecx
// 004cdadb  d900                 fld dword ptr [eax]
// 004cdadd  d95e0c               fstp dword ptr [esi + 0xc]
// 004cdae0  68c0594700           push 0x4759c0
// 004cdae5  d94004               fld dword ptr [eax + 4]
// 004cdae8  68f0be4c00           push 0x4cbef0
// 004cdaed  d95e10               fstp dword ptr [esi + 0x10]
// 004cdaf0  6a04                 push 4
// 004cdaf2  d94008               fld dword ptr [eax + 8]
// 004cdaf5  6a04                 push 4
// 004cdaf7  d95e14               fstp dword ptr [esi + 0x14]
// 004cdafa  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004cdafd  894e18               mov dword ptr [esi + 0x18], ecx
// 004cdb00  8b5010               mov edx, dword ptr [eax + 0x10]
// 004cdb03  89561c               mov dword ptr [esi + 0x1c], edx
// 004cdb06  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004cdb09  83c018               add eax, 0x18
// 004cdb0c  50                   push eax
// 004cdb0d  8d5624               lea edx, [esi + 0x24]
// 004cdb10  52                   push edx
// 004cdb11  894e20               mov dword ptr [esi + 0x20], ecx
// 004cdb14  e8bb1a1500           call 0x61f5d4
// 004cdb19  8a442418             mov al, byte ptr [esp + 0x18]
// 004cdb1d  884634               mov byte ptr [esi + 0x34], al
// 004cdb20  c6463500             mov byte ptr [esi + 0x35], 0
// 004cdb24  8bc6                 mov eax, esi
// 004cdb26  5e                   pop esi
// 004cdb27  c21400               ret 0x14
// library rbxgs-view/BrickMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBULookup@@UVariations@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
