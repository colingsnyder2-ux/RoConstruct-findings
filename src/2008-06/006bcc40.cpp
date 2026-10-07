// roc 2008-06 006bcc40  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bcc40
//
// 006bcc40  56                   push esi
// 006bcc41  57                   push edi
// 006bcc42  8bf1                 mov esi, ecx
// 006bcc44  33ff                 xor edi, edi
// 006bcc46  397e0c               cmp dword ptr [esi + 0xc], edi
// 006bcc49  742e                 je 0x6bcc79
// 006bcc4b  8b06                 mov eax, dword ptr [esi]
// 006bcc4d  3bc7                 cmp eax, edi
// 006bcc4f  7407                 je 0x6bcc58
// 006bcc51  50                   push eax
// 006bcc52  ff15d42c8000         call dword ptr [0x802cd4]
// 006bcc58  8b4604               mov eax, dword ptr [esi + 4]
// 006bcc5b  3bc7                 cmp eax, edi
// 006bcc5d  7407                 je 0x6bcc66
// 006bcc5f  50                   push eax
// 006bcc60  ff1550218000         call dword ptr [0x802150]
// 006bcc66  8b4614               mov eax, dword ptr [esi + 0x14]
// 006bcc69  3bc7                 cmp eax, edi
// 006bcc6b  740c                 je 0x6bcc79
// 006bcc6d  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006bcc70  50                   push eax
// 006bcc71  e8fafeffff           call 0x6bcb70
// 006bcc76  897e14               mov dword ptr [esi + 0x14], edi
// 006bcc79  893e                 mov dword ptr [esi], edi
// 006bcc7b  897e04               mov dword ptr [esi + 4], edi
// 006bcc7e  897e08               mov dword ptr [esi + 8], edi
// 006bcc81  897e14               mov dword ptr [esi + 0x14], edi
// 006bcc84  897e0c               mov dword ptr [esi + 0xc], edi
// 006bcc87  5f                   pop edi
// 006bcc88  5e                   pop esi
// 006bcc89  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?Clear@CXTPImageManagerIconHandle@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
