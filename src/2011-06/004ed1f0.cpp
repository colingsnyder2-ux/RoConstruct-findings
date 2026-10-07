// roc 2011-06 004ed1f0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed1f0
//
// 004ed1f0  56                   push esi
// 004ed1f1  8bf1                 mov esi, ecx
// 004ed1f3  8b4608               mov eax, dword ptr [esi + 8]
// 004ed1f6  83c010               add eax, 0x10
// 004ed1f9  3b06                 cmp eax, dword ptr [esi]
// 004ed1fb  7606                 jbe 0x4ed203
// 004ed1fd  32c0                 xor al, al
// 004ed1ff  5e                   pop esi
// 004ed200  c20400               ret 4
// 004ed203  e898a1ffff           call 0x4e73a0
// 004ed208  84c0                 test al, al
// 004ed20a  742c                 je 0x4ed238
// 004ed20c  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ed20f  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed212  8b442408             mov eax, dword ptr [esp + 8]
// 004ed216  c1e903               shr ecx, 3
// 004ed219  8a4c1101             mov cl, byte ptr [ecx + edx + 1]
// 004ed21d  8808                 mov byte ptr [eax], cl
// 004ed21f  8b5608               mov edx, dword ptr [esi + 8]
// 004ed222  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed225  c1ea03               shr edx, 3
// 004ed228  8a140a               mov dl, byte ptr [edx + ecx]
// 004ed22b  885001               mov byte ptr [eax + 1], dl
// 004ed22e  83460810             add dword ptr [esi + 8], 0x10
// 004ed232  b001                 mov al, 1
// 004ed234  5e                   pop esi
// 004ed235  c20400               ret 4
// 004ed238  8b4608               mov eax, dword ptr [esi + 8]
// 004ed23b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ed23e  c1e803               shr eax, 3
// 004ed241  8a1408               mov dl, byte ptr [eax + ecx]
// 004ed244  8b442408             mov eax, dword ptr [esp + 8]
// 004ed248  8810                 mov byte ptr [eax], dl
// 004ed24a  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ed24d  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed250  c1e903               shr ecx, 3
// 004ed253  8a4c1101             mov cl, byte ptr [ecx + edx + 1]
// 004ed257  884801               mov byte ptr [eax + 1], cl
// 004ed25a  83460810             add dword ptr [esi + 8], 0x10
// 004ed25e  b001                 mov al, 1
// 004ed260  5e                   pop esi
// 004ed261  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?ReadAlignedVar16@BitStream@RakNet@@QAE_NPAD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
