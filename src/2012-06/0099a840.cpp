// roc 2012-06 0099a840  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099a840
//
// 0099a840  56                   push esi
// 0099a841  57                   push edi
// 0099a842  8bf1                 mov esi, ecx
// 0099a844  33ff                 xor edi, edi
// 0099a846  397e0c               cmp dword ptr [esi + 0xc], edi
// 0099a849  742e                 je 0x99a879
// 0099a84b  8b06                 mov eax, dword ptr [esi]
// 0099a84d  3bc7                 cmp eax, edi
// 0099a84f  7407                 je 0x99a858
// 0099a851  50                   push eax
// 0099a852  ff15983bb200         call dword ptr [0xb23b98]
// 0099a858  8b4604               mov eax, dword ptr [esi + 4]
// 0099a85b  3bc7                 cmp eax, edi
// 0099a85d  7407                 je 0x99a866
// 0099a85f  50                   push eax
// 0099a860  ff157021b200         call dword ptr [0xb22170]
// 0099a866  8b4614               mov eax, dword ptr [esi + 0x14]
// 0099a869  3bc7                 cmp eax, edi
// 0099a86b  740c                 je 0x99a879
// 0099a86d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0099a870  50                   push eax
// 0099a871  e8fafeffff           call 0x99a770
// 0099a876  897e14               mov dword ptr [esi + 0x14], edi
// 0099a879  893e                 mov dword ptr [esi], edi
// 0099a87b  897e04               mov dword ptr [esi + 4], edi
// 0099a87e  897e08               mov dword ptr [esi + 8], edi
// 0099a881  897e14               mov dword ptr [esi + 0x14], edi
// 0099a884  897e0c               mov dword ptr [esi + 0xc], edi
// 0099a887  5f                   pop edi
// 0099a888  5e                   pop esi
// 0099a889  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Clear@CXTPImageManagerIconHandle@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
