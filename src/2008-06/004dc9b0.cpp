// roc 2008-06 004dc9b0  unit: RBX::ViewNew::ViewG3D  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc9b0
//
// 004dc9b0  8b442404             mov eax, dword ptr [esp + 4]
// 004dc9b4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004dc9b8  56                   push esi
// 004dc9b9  8bf1                 mov esi, ecx
// 004dc9bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004dc9bf  8906                 mov dword ptr [esi], eax
// 004dc9c1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004dc9c5  895608               mov dword ptr [esi + 8], edx
// 004dc9c8  894e04               mov dword ptr [esi + 4], ecx
// 004dc9cb  d900                 fld dword ptr [eax]
// 004dc9cd  d95e0c               fstp dword ptr [esi + 0xc]
// 004dc9d0  68702a5000           push 0x502a70
// 004dc9d5  d94004               fld dword ptr [eax + 4]
// 004dc9d8  6820084f00           push 0x4f0820
// 004dc9dd  d95e10               fstp dword ptr [esi + 0x10]
// 004dc9e0  6a04                 push 4
// 004dc9e2  d94008               fld dword ptr [eax + 8]
// 004dc9e5  6a04                 push 4
// 004dc9e7  d95e14               fstp dword ptr [esi + 0x14]
// 004dc9ea  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004dc9ed  894e18               mov dword ptr [esi + 0x18], ecx
// 004dc9f0  8b5010               mov edx, dword ptr [eax + 0x10]
// 004dc9f3  89561c               mov dword ptr [esi + 0x1c], edx
// 004dc9f6  8b4814               mov ecx, dword ptr [eax + 0x14]
// 004dc9f9  83c018               add eax, 0x18
// 004dc9fc  50                   push eax
// 004dc9fd  8d5624               lea edx, [esi + 0x24]
// 004dca00  52                   push edx
// 004dca01  894e20               mov dword ptr [esi + 0x20], ecx
// 004dca04  e8ad511c00           call 0x6a1bb6
// 004dca09  8a442418             mov al, byte ptr [esp + 0x18]
// 004dca0d  884634               mov byte ptr [esi + 0x34], al
// 004dca10  c6463500             mov byte ptr [esi + 0x35], 0
// 004dca14  8bc6                 mov eax, esi
// 004dca16  5e                   pop esi
// 004dca17  c21400               ret 0x14
// library rbxgs-view/BrickMesh.cpp (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@ULookup@@UVariations@@U?$less@ULookup@@@std@@V?$allocator@U?$pair@$$CBULookup@@UVariations@@@std@@@4@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBULookup@@UVariations@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
