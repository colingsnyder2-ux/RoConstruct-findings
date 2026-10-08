// roc 2007-03 00533c30  unit: seg_00530000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533c30
//
// 00533c30  83ec18               sub esp, 0x18
// 00533c33  56                   push esi
// 00533c34  8bf1                 mov esi, ecx
// 00533c36  807e1800             cmp byte ptr [esi + 0x18], 0
// 00533c3a  7449                 je 0x533c85
// 00533c3c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00533c3f  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 00533c45  8d4c2404             lea ecx, [esp + 4]
// 00533c49  51                   push ecx
// 00533c4a  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00533c4d  8b140a               mov edx, dword ptr [edx + ecx]
// 00533c50  035624               add edx, dword ptr [esi + 0x24]
// 00533c53  8d8c02f4000000       lea ecx, [edx + eax + 0xf4]
// 00533c5a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00533c5d  ffd0                 call eax
// 00533c5f  d900                 fld dword ptr [eax]
// 00533c61  d91e                 fstp dword ptr [esi]
// 00533c63  d94004               fld dword ptr [eax + 4]
// 00533c66  d95e04               fstp dword ptr [esi + 4]
// 00533c69  d94008               fld dword ptr [eax + 8]
// 00533c6c  d95e08               fstp dword ptr [esi + 8]
// 00533c6f  d9400c               fld dword ptr [eax + 0xc]
// 00533c72  d95e0c               fstp dword ptr [esi + 0xc]
// 00533c75  d94010               fld dword ptr [eax + 0x10]
// 00533c78  d95e10               fstp dword ptr [esi + 0x10]
// 00533c7b  d94014               fld dword ptr [eax + 0x14]
// 00533c7e  d95e14               fstp dword ptr [esi + 0x14]
// 00533c81  c6461800             mov byte ptr [esi + 0x18], 0
// 00533c85  d906                 fld dword ptr [esi]
// 00533c87  8b442420             mov eax, dword ptr [esp + 0x20]
// 00533c8b  d918                 fstp dword ptr [eax]
// 00533c8d  d94604               fld dword ptr [esi + 4]
// 00533c90  d95804               fstp dword ptr [eax + 4]
// 00533c93  d94608               fld dword ptr [esi + 8]
// 00533c96  d95808               fstp dword ptr [eax + 8]
// 00533c99  d9460c               fld dword ptr [esi + 0xc]
// 00533c9c  d9580c               fstp dword ptr [eax + 0xc]
// 00533c9f  d94610               fld dword ptr [esi + 0x10]
// 00533ca2  d95810               fstp dword ptr [eax + 0x10]
// 00533ca5  d94614               fld dword ptr [esi + 0x14]
// 00533ca8  5e                   pop esi
// 00533ca9  d95814               fstp dword ptr [eax + 0x14]
// 00533cac  83c418               add esp, 0x18
// 00533caf  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?getValue@?$ComputeProp@VExtents@RBX@@VModelInstance@2@@RBX@@QBE?AVExtents@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
