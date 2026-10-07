// roc 2012-06 00568320  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00568320
//
// 00568320  56                   push esi
// 00568321  8bf1                 mov esi, ecx
// 00568323  8b4608               mov eax, dword ptr [esi + 8]
// 00568326  83c020               add eax, 0x20
// 00568329  3b06                 cmp eax, dword ptr [esi]
// 0056832b  7606                 jbe 0x568333
// 0056832d  32c0                 xor al, al
// 0056832f  5e                   pop esi
// 00568330  c20400               ret 4
// 00568333  e828fbffff           call 0x567e60
// 00568338  84c0                 test al, al
// 0056833a  7450                 je 0x56838c
// 0056833c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056833f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00568342  8b442408             mov eax, dword ptr [esp + 8]
// 00568346  c1e903               shr ecx, 3
// 00568349  0fb64c1103           movzx ecx, byte ptr [ecx + edx + 3]
// 0056834e  8808                 mov byte ptr [eax], cl
// 00568350  8b5608               mov edx, dword ptr [esi + 8]
// 00568353  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568356  c1ea03               shr edx, 3
// 00568359  0fb6540a02           movzx edx, byte ptr [edx + ecx + 2]
// 0056835e  885001               mov byte ptr [eax + 1], dl
// 00568361  8b4e08               mov ecx, dword ptr [esi + 8]
// 00568364  8b560c               mov edx, dword ptr [esi + 0xc]
// 00568367  c1e903               shr ecx, 3
// 0056836a  0fb64c1101           movzx ecx, byte ptr [ecx + edx + 1]
// 0056836f  884802               mov byte ptr [eax + 2], cl
// 00568372  8b5608               mov edx, dword ptr [esi + 8]
// 00568375  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568378  c1ea03               shr edx, 3
// 0056837b  0fb6140a             movzx edx, byte ptr [edx + ecx]
// 0056837f  885003               mov byte ptr [eax + 3], dl
// 00568382  83460820             add dword ptr [esi + 8], 0x20
// 00568386  b001                 mov al, 1
// 00568388  5e                   pop esi
// 00568389  c20400               ret 4
// 0056838c  8b4608               mov eax, dword ptr [esi + 8]
// 0056838f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568392  c1e803               shr eax, 3
// 00568395  0fb61408             movzx edx, byte ptr [eax + ecx]
// 00568399  8b442408             mov eax, dword ptr [esp + 8]
// 0056839d  8810                 mov byte ptr [eax], dl
// 0056839f  8b4e08               mov ecx, dword ptr [esi + 8]
// 005683a2  8b560c               mov edx, dword ptr [esi + 0xc]
// 005683a5  c1e903               shr ecx, 3
// 005683a8  0fb64c1101           movzx ecx, byte ptr [ecx + edx + 1]
// 005683ad  884801               mov byte ptr [eax + 1], cl
// 005683b0  8b5608               mov edx, dword ptr [esi + 8]
// 005683b3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005683b6  c1ea03               shr edx, 3
// 005683b9  0fb6540a02           movzx edx, byte ptr [edx + ecx + 2]
// 005683be  885002               mov byte ptr [eax + 2], dl
// 005683c1  8b4e08               mov ecx, dword ptr [esi + 8]
// 005683c4  8b560c               mov edx, dword ptr [esi + 0xc]
// 005683c7  c1e903               shr ecx, 3
// 005683ca  0fb64c1103           movzx ecx, byte ptr [ecx + edx + 3]
// 005683cf  884803               mov byte ptr [eax + 3], cl
// 005683d2  83460820             add dword ptr [esi + 8], 0x20
// 005683d6  b001                 mov al, 1
// 005683d8  5e                   pop esi
// 005683d9  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?ReadAlignedVar32@BitStream@RakNet@@QAE_NPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
