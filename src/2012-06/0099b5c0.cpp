// roc 2012-06 0099b5c0  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099b5c0
//
// 0099b5c0  83ec08               sub esp, 8
// 0099b5c3  56                   push esi
// 0099b5c4  8bf1                 mov esi, ecx
// 0099b5c6  8b4608               mov eax, dword ptr [esi + 8]
// 0099b5c9  85c0                 test eax, eax
// 0099b5cb  756d                 jne 0x99b63a
// 0099b5cd  8b4604               mov eax, dword ptr [esi + 4]
// 0099b5d0  85c0                 test eax, eax
// 0099b5d2  7505                 jne 0x99b5d9
// 0099b5d4  5e                   pop esi
// 0099b5d5  83c408               add esp, 8
// 0099b5d8  c3                   ret 
// 0099b5d9  53                   push ebx
// 0099b5da  57                   push edi
// 0099b5db  8d4c240c             lea ecx, [esp + 0xc]
// 0099b5df  51                   push ecx
// 0099b5e0  6a00                 push 0
// 0099b5e2  50                   push eax
// 0099b5e3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0099b5eb  e8b0f4ffff           call 0x99aaa0
// 0099b5f0  8bf8                 mov edi, eax
// 0099b5f2  83c40c               add esp, 0xc
// 0099b5f5  85ff                 test edi, edi
// 0099b5f7  743d                 je 0x99b636
// 0099b5f9  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0099b5fd  85db                 test ebx, ebx
// 0099b5ff  7435                 je 0x99b636
// 0099b601  8bce                 mov ecx, esi
// 0099b603  e838f2ffff           call 0x99a840
// 0099b608  8d54240c             lea edx, [esp + 0xc]
// 0099b60c  52                   push edx
// 0099b60d  8bce                 mov ecx, esi
// 0099b60f  897e04               mov dword ptr [esi + 4], edi
// 0099b612  895e08               mov dword ptr [esi + 8], ebx
// 0099b615  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 0099b61c  e86ff2ffff           call 0x99a890
// 0099b621  8b08                 mov ecx, dword ptr [eax]
// 0099b623  894e18               mov dword ptr [esi + 0x18], ecx
// 0099b626  8b5004               mov edx, dword ptr [eax + 4]
// 0099b629  8b4608               mov eax, dword ptr [esi + 8]
// 0099b62c  5f                   pop edi
// 0099b62d  5b                   pop ebx
// 0099b62e  89561c               mov dword ptr [esi + 0x1c], edx
// 0099b631  5e                   pop esi
// 0099b632  83c408               add esp, 8
// 0099b635  c3                   ret 
// 0099b636  5f                   pop edi
// 0099b637  33c0                 xor eax, eax
// 0099b639  5b                   pop ebx
// 0099b63a  5e                   pop esi
// 0099b63b  83c408               add esp, 8
// 0099b63e  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?PreMultiply@CXTPImageManagerIconHandle@@QAEPAEXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
