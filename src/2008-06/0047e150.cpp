// roc 2008-06 0047e150  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047e150
//
// 0047e150  83ec18               sub esp, 0x18
// 0047e153  53                   push ebx
// 0047e154  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0047e157  55                   push ebp
// 0047e158  8b6908               mov ebp, dword ptr [ecx + 8]
// 0047e15b  56                   push esi
// 0047e15c  57                   push edi
// 0047e15d  85db                 test ebx, ebx
// 0047e15f  7546                 jne 0x47e1a7
// 0047e161  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047e165  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047e169  c644242401           mov byte ptr [esp + 0x24], 1
// 0047e16e  8bff                 mov edi, edi
// 0047e170  807c242401           cmp byte ptr [esp + 0x24], 1
// 0047e175  744d                 je 0x47e1c4
// 0047e177  8b4640               mov eax, dword ptr [esi + 0x40]
// 0047e17a  83c004               add eax, 4
// 0047e17d  8b00                 mov eax, dword ptr [eax]
// 0047e17f  83f801               cmp eax, 1
// 0047e182  750d                 jne 0x47e191
// 0047e184  8d4e08               lea ecx, [esi + 8]
// 0047e187  51                   push ecx
// 0047e188  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0047e18c  e83ffeffff           call 0x47dfd0
// 0047e191  8b7648               mov esi, dword ptr [esi + 0x48]
// 0047e194  85f6                 test esi, esi
// 0047e196  75d8                 jne 0x47e170
// 0047e198  47                   inc edi
// 0047e199  3bfb                 cmp edi, ebx
// 0047e19b  7dcc                 jge 0x47e169
// 0047e19d  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 0047e1a1  85f6                 test esi, esi
// 0047e1a3  74f3                 je 0x47e198
// 0047e1a5  ebc9                 jmp 0x47e170
// 0047e1a7  8b7500               mov esi, dword ptr [ebp]
// 0047e1aa  33ff                 xor edi, edi
// 0047e1ac  c644242400           mov byte ptr [esp + 0x24], 0
// 0047e1b1  85f6                 test esi, esi
// 0047e1b3  75bb                 jne 0x47e170
// 0047e1b5  47                   inc edi
// 0047e1b6  3bfb                 cmp edi, ebx
// 0047e1b8  7daf                 jge 0x47e169
// 0047e1ba  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 0047e1be  85f6                 test esi, esi
// 0047e1c0  74f3                 je 0x47e1b5
// 0047e1c2  ebb3                 jmp 0x47e177
// 0047e1c4  5f                   pop edi
// 0047e1c5  5e                   pop esi
// 0047e1c6  5d                   pop ebp
// 0047e1c7  5b                   pop ebx
// 0047e1c8  83c418               add esp, 0x18
// 0047e1cb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?getStaleEntries@TextureManager@G3D@@AAEXAAV?$Array@VTextureArgs@TextureManager@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
