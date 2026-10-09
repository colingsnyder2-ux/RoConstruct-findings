// roc 2008-06 00583640  unit: RBX::ModelInstance  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583640
//
// 00583640  83ec18               sub esp, 0x18
// 00583643  56                   push esi
// 00583644  8bf1                 mov esi, ecx
// 00583646  807e1800             cmp byte ptr [esi + 0x18], 0
// 0058364a  7449                 je 0x583695
// 0058364c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0058364f  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 00583655  8d4c2404             lea ecx, [esp + 4]
// 00583659  51                   push ecx
// 0058365a  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0058365d  8b140a               mov edx, dword ptr [edx + ecx]
// 00583660  035624               add edx, dword ptr [esi + 0x24]
// 00583663  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 0058366a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0058366d  ffd0                 call eax
// 0058366f  d900                 fld dword ptr [eax]
// 00583671  d91e                 fstp dword ptr [esi]
// 00583673  d94004               fld dword ptr [eax + 4]
// 00583676  d95e04               fstp dword ptr [esi + 4]
// 00583679  d94008               fld dword ptr [eax + 8]
// 0058367c  d95e08               fstp dword ptr [esi + 8]
// 0058367f  d9400c               fld dword ptr [eax + 0xc]
// 00583682  d95e0c               fstp dword ptr [esi + 0xc]
// 00583685  d94010               fld dword ptr [eax + 0x10]
// 00583688  d95e10               fstp dword ptr [esi + 0x10]
// 0058368b  d94014               fld dword ptr [eax + 0x14]
// 0058368e  d95e14               fstp dword ptr [esi + 0x14]
// 00583691  c6461800             mov byte ptr [esi + 0x18], 0
// 00583695  d906                 fld dword ptr [esi]
// 00583697  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058369b  d918                 fstp dword ptr [eax]
// 0058369d  d94604               fld dword ptr [esi + 4]
// 005836a0  d95804               fstp dword ptr [eax + 4]
// 005836a3  d94608               fld dword ptr [esi + 8]
// 005836a6  d95808               fstp dword ptr [eax + 8]
// 005836a9  d9460c               fld dword ptr [esi + 0xc]
// 005836ac  d9580c               fstp dword ptr [eax + 0xc]
// 005836af  d94610               fld dword ptr [esi + 0x10]
// 005836b2  d95810               fstp dword ptr [eax + 0x10]
// 005836b5  d94614               fld dword ptr [esi + 0x14]
// 005836b8  5e                   pop esi
// 005836b9  d95814               fstp dword ptr [eax + 0x14]
// 005836bc  83c418               add esp, 0x18
// 005836bf  c20400               ret 4
// library openrbx-client/App\v8datamodel\ModelInstance.cpp (function ?getValue@?$ComputeProp@VExtents@RBX@@VModelInstance@2@@RBX@@QBE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ModelInstance.cpp
