// roc 2011-06 004ed310  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed310
//
// 004ed310  56                   push esi
// 004ed311  8bf1                 mov esi, ecx
// 004ed313  8b4608               mov eax, dword ptr [esi + 8]
// 004ed316  83c020               add eax, 0x20
// 004ed319  3b06                 cmp eax, dword ptr [esi]
// 004ed31b  7606                 jbe 0x4ed323
// 004ed31d  32c0                 xor al, al
// 004ed31f  5e                   pop esi
// 004ed320  c20400               ret 4
// 004ed323  e878a0ffff           call 0x4e73a0
// 004ed328  84c0                 test al, al
// 004ed32a  7450                 je 0x4ed37c
// 004ed32c  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ed32f  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed332  8b442408             mov eax, dword ptr [esp + 8]
// 004ed336  c1e903               shr ecx, 3
// 004ed339  0fb64c1103           movzx ecx, byte ptr [ecx + edx + 3]
// 004ed33e  8808                 mov byte ptr [eax], cl
// 004ed340  8b5608               mov edx, dword ptr [esi + 8]
// 004ed343  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed346  c1ea03               shr edx, 3
// 004ed349  0fb6540a02           movzx edx, byte ptr [edx + ecx + 2]
// 004ed34e  885001               mov byte ptr [eax + 1], dl
// 004ed351  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ed354  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed357  c1e903               shr ecx, 3
// 004ed35a  0fb64c1101           movzx ecx, byte ptr [ecx + edx + 1]
// 004ed35f  884802               mov byte ptr [eax + 2], cl
// 004ed362  8b5608               mov edx, dword ptr [esi + 8]
// 004ed365  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed368  c1ea03               shr edx, 3
// 004ed36b  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 004ed36f  885003               mov byte ptr [eax + 3], dl
// 004ed372  83460820             add dword ptr [esi + 8], 0x20
// 004ed376  b001                 mov al, 1
// 004ed378  5e                   pop esi
// 004ed379  c20400               ret 4
// 004ed37c  8b4608               mov eax, dword ptr [esi + 8]
// 004ed37f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed382  c1e803               shr eax, 3
// 004ed385  0fb61408             movzx edx, byte ptr [eax + ecx]
// 004ed389  8b442408             mov eax, dword ptr [esp + 8]
// 004ed38d  8810                 mov byte ptr [eax], dl
// 004ed38f  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ed392  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed395  c1e903               shr ecx, 3
// 004ed398  0fb64c1101           movzx ecx, byte ptr [ecx + edx + 1]
// 004ed39d  884801               mov byte ptr [eax + 1], cl
// 004ed3a0  8b5608               mov edx, dword ptr [esi + 8]
// 004ed3a3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed3a6  c1ea03               shr edx, 3
// 004ed3a9  0fb6540a02           movzx edx, byte ptr [edx + ecx + 2]
// 004ed3ae  885002               mov byte ptr [eax + 2], dl
// 004ed3b1  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ed3b4  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed3b7  c1e903               shr ecx, 3
// 004ed3ba  0fb64c1103           movzx ecx, byte ptr [ecx + edx + 3]
// 004ed3bf  884803               mov byte ptr [eax + 3], cl
// 004ed3c2  83460820             add dword ptr [esi + 8], 0x20
// 004ed3c6  b001                 mov al, 1
// 004ed3c8  5e                   pop esi
// 004ed3c9  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?ReadAlignedVar32@BitStream@RakNet@@QAE_NPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
