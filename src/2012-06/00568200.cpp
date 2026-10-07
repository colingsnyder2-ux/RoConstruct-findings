// roc 2012-06 00568200  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00568200
//
// 00568200  56                   push esi
// 00568201  8bf1                 mov esi, ecx
// 00568203  8b4608               mov eax, dword ptr [esi + 8]
// 00568206  83c010               add eax, 0x10
// 00568209  3b06                 cmp eax, dword ptr [esi]
// 0056820b  7606                 jbe 0x568213
// 0056820d  32c0                 xor al, al
// 0056820f  5e                   pop esi
// 00568210  c20400               ret 4
// 00568213  e848fcffff           call 0x567e60
// 00568218  84c0                 test al, al
// 0056821a  742c                 je 0x568248
// 0056821c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056821f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00568222  8b442408             mov eax, dword ptr [esp + 8]
// 00568226  c1e903               shr ecx, 3
// 00568229  8a4c1101             mov cl, byte ptr [ecx + edx + 1]
// 0056822d  8808                 mov byte ptr [eax], cl
// 0056822f  8b5608               mov edx, dword ptr [esi + 8]
// 00568232  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568235  c1ea03               shr edx, 3
// 00568238  8a140a               mov dl, byte ptr [edx + ecx]
// 0056823b  885001               mov byte ptr [eax + 1], dl
// 0056823e  83460810             add dword ptr [esi + 8], 0x10
// 00568242  b001                 mov al, 1
// 00568244  5e                   pop esi
// 00568245  c20400               ret 4
// 00568248  8b4608               mov eax, dword ptr [esi + 8]
// 0056824b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0056824e  c1e803               shr eax, 3
// 00568251  8a1408               mov dl, byte ptr [eax + ecx]
// 00568254  8b442408             mov eax, dword ptr [esp + 8]
// 00568258  8810                 mov byte ptr [eax], dl
// 0056825a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056825d  8b560c               mov edx, dword ptr [esi + 0xc]
// 00568260  c1e903               shr ecx, 3
// 00568263  8a4c1101             mov cl, byte ptr [ecx + edx + 1]
// 00568267  884801               mov byte ptr [eax + 1], cl
// 0056826a  83460810             add dword ptr [esi + 8], 0x10
// 0056826e  b001                 mov al, 1
// 00568270  5e                   pop esi
// 00568271  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?ReadAlignedVar16@BitStream@RakNet@@QAE_NPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
