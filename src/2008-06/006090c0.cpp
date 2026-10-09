// roc 2008-06 006090c0  unit: RBX::VModelInstance::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006090c0
//
// 006090c0  56                   push esi
// 006090c1  8bf1                 mov esi, ecx
// 006090c3  80be4101000000       cmp byte ptr [esi + 0x141], 0
// 006090ca  7437                 je 0x609103
// 006090cc  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 006090d2  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 006090d8  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 006090de  8b0c11               mov ecx, dword ptr [ecx + edx]
// 006090e1  038e4c010000         add ecx, dword ptr [esi + 0x14c]
// 006090e7  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 006090ed  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 006090f4  ffd2                 call edx
// 006090f6  888640010000         mov byte ptr [esi + 0x140], al
// 006090fc  c6864101000000       mov byte ptr [esi + 0x141], 0
// 00609103  80be4001000000       cmp byte ptr [esi + 0x140], 0
// 0060910a  7433                 je 0x60913f
// 0060910c  83be9401000000       cmp dword ptr [esi + 0x194], 0
// 00609113  742a                 je 0x60913f
// 00609115  8bce                 mov ecx, esi
// 00609117  e884aff7ff           call 0x5840a0
// 0060911c  84c0                 test al, al
// 0060911e  7404                 je 0x609124
// 00609120  b001                 mov al, 1
// 00609122  5e                   pop esi
// 00609123  c3                   ret 
// 00609124  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 0060912a  e8b118f9ff           call 0x59a9e0
// 0060912f  8b10                 mov edx, dword ptr [eax]
// 00609131  8bc8                 mov ecx, eax
// 00609133  8b4208               mov eax, dword ptr [edx + 8]
// 00609136  ffd0                 call eax
// 00609138  f7d8                 neg eax
// 0060913a  1bc0                 sbb eax, eax
// 0060913c  40                   inc eax
// 0060913d  5e                   pop esi
// 0060913e  c3                   ret 
// 0060913f  32c0                 xor al, al
// 00609141  5e                   pop esi
// 00609142  c3                   ret 
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?computeIsTopFlag@PVInstance@RBX@@ABE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
