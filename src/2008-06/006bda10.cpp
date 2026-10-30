// from server: 100% by auto
// roc 2008-06 006bda10  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bda10
//
// 006bda10  83ec08               sub esp, 8
// 006bda13  56                   push esi
// 006bda14  8bf1                 mov esi, ecx
// 006bda16  8b4608               mov eax, dword ptr [esi + 8]
// 006bda19  85c0                 test eax, eax
// 006bda1b  756d                 jne 0x6bda8a
// 006bda1d  8b4604               mov eax, dword ptr [esi + 4]
// 006bda20  85c0                 test eax, eax
// 006bda22  7505                 jne 0x6bda29
// 006bda24  5e                   pop esi
// 006bda25  83c408               add esp, 8
// 006bda28  c3                   ret 
// 006bda29  53                   push ebx
// 006bda2a  57                   push edi
// 006bda2b  8d4c240c             lea ecx, [esp + 0xc]
// 006bda2f  51                   push ecx
// 006bda30  6a00                 push 0
// 006bda32  50                   push eax
// 006bda33  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006bda3b  e860f4ffff           call 0x6bcea0
// 006bda40  8bf8                 mov edi, eax
// 006bda42  83c40c               add esp, 0xc
// 006bda45  85ff                 test edi, edi
// 006bda47  743d                 je 0x6bda86
// 006bda49  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006bda4d  85db                 test ebx, ebx
// 006bda4f  7435                 je 0x6bda86
// 006bda51  8bce                 mov ecx, esi
// 006bda53  e8e8f1ffff           call 0x6bcc40
// 006bda58  8d54240c             lea edx, [esp + 0xc]
// 006bda5c  52                   push edx
// 006bda5d  8bce                 mov ecx, esi
// 006bda5f  897e04               mov dword ptr [esi + 4], edi
// 006bda62  895e08               mov dword ptr [esi + 8], ebx
// 006bda65  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 006bda6c  e81ff2ffff           call 0x6bcc90
// 006bda71  8b08                 mov ecx, dword ptr [eax]
// 006bda73  894e18               mov dword ptr [esi + 0x18], ecx
// 006bda76  8b5004               mov edx, dword ptr [eax + 4]
// 006bda79  8b4608               mov eax, dword ptr [esi + 8]
// 006bda7c  5f                   pop edi
// 006bda7d  5b                   pop ebx
// 006bda7e  89561c               mov dword ptr [esi + 0x1c], edx
// 006bda81  5e                   pop esi
// 006bda82  83c408               add esp, 8
// 006bda85  c3                   ret 
// 006bda86  5f                   pop edi
// 006bda87  33c0                 xor eax, eax
// 006bda89  5b                   pop ebx
// 006bda8a  5e                   pop esi
// 006bda8b  83c408               add esp, 8
// 006bda8e  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?PreMultiply@CXTPImageManagerIconHandle@@QAEPAEXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
