// roc 2008-06 005fcbc0  unit: RBX::VLocalBackpackItem::?$FactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fcbc0
//
// 005fcbc0  6aff                 push -1
// 005fcbc2  68587e7d00           push 0x7d7e58
// 005fcbc7  64a100000000         mov eax, dword ptr fs:[0]
// 005fcbcd  50                   push eax
// 005fcbce  64892500000000       mov dword ptr fs:[0], esp
// 005fcbd5  51                   push ecx
// 005fcbd6  56                   push esi
// 005fcbd7  8bf1                 mov esi, ecx
// 005fcbd9  89742404             mov dword ptr [esp + 4], esi
// 005fcbdd  e80ef0ffff           call 0x5fbbf0
// 005fcbe2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fcbea  e86139fcff           call 0x5c0550
// 005fcbef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fcbf3  89461c               mov dword ptr [esi + 0x1c], eax
// 005fcbf6  c7065c158400         mov dword ptr [esi], 0x84155c
// 005fcbfc  c746104c158400       mov dword ptr [esi + 0x10], 0x84154c
// 005fcc03  c7461444158400       mov dword ptr [esi + 0x14], 0x841544
// 005fcc0a  c746203c158400       mov dword ptr [esi + 0x20], 0x84153c
// 005fcc11  c746242c158400       mov dword ptr [esi + 0x24], 0x84152c
// 005fcc18  c746441c158400       mov dword ptr [esi + 0x44], 0x84151c
// 005fcc1f  c746640c158400       mov dword ptr [esi + 0x64], 0x84150c
// 005fcc26  c78684000000fc148400 mov dword ptr [esi + 0x84], 0x8414fc
// 005fcc30  c786a4000000ec148400 mov dword ptr [esi + 0xa4], 0x8414ec
// 005fcc3a  c786c4000000dc148400 mov dword ptr [esi + 0xc4], 0x8414dc
// 005fcc44  c78630010000d4148400 mov dword ptr [esi + 0x130], 0x8414d4
// 005fcc4e  8bc6                 mov eax, esi
// 005fcc50  5e                   pop esi
// 005fcc51  64890d00000000       mov dword ptr fs:[0], ecx
// 005fcc58  83c410               add esp, 0x10
// 005fcc5b  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
