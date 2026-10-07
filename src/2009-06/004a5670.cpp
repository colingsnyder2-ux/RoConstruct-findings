// roc 2009-06 004a5670  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a5670
//
// 004a5670  83ec18               sub esp, 0x18
// 004a5673  53                   push ebx
// 004a5674  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 004a5677  55                   push ebp
// 004a5678  8b6908               mov ebp, dword ptr [ecx + 8]
// 004a567b  56                   push esi
// 004a567c  57                   push edi
// 004a567d  85db                 test ebx, ebx
// 004a567f  7546                 jne 0x4a56c7
// 004a5681  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a5685  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a5689  c644242401           mov byte ptr [esp + 0x24], 1
// 004a568e  8bff                 mov edi, edi
// 004a5690  807c242401           cmp byte ptr [esp + 0x24], 1
// 004a5695  744d                 je 0x4a56e4
// 004a5697  8b4640               mov eax, dword ptr [esi + 0x40]
// 004a569a  83c004               add eax, 4
// 004a569d  8b00                 mov eax, dword ptr [eax]
// 004a569f  83f801               cmp eax, 1
// 004a56a2  750d                 jne 0x4a56b1
// 004a56a4  8d4e08               lea ecx, [esi + 8]
// 004a56a7  51                   push ecx
// 004a56a8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a56ac  e83ffeffff           call 0x4a54f0
// 004a56b1  8b7648               mov esi, dword ptr [esi + 0x48]
// 004a56b4  85f6                 test esi, esi
// 004a56b6  75d8                 jne 0x4a5690
// 004a56b8  47                   inc edi
// 004a56b9  3bfb                 cmp edi, ebx
// 004a56bb  7dcc                 jge 0x4a5689
// 004a56bd  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 004a56c1  85f6                 test esi, esi
// 004a56c3  74f3                 je 0x4a56b8
// 004a56c5  ebc9                 jmp 0x4a5690
// 004a56c7  8b7500               mov esi, dword ptr [ebp]
// 004a56ca  33ff                 xor edi, edi
// 004a56cc  c644242400           mov byte ptr [esp + 0x24], 0
// 004a56d1  85f6                 test esi, esi
// 004a56d3  75bb                 jne 0x4a5690
// 004a56d5  47                   inc edi
// 004a56d6  3bfb                 cmp edi, ebx
// 004a56d8  7daf                 jge 0x4a5689
// 004a56da  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 004a56de  85f6                 test esi, esi
// 004a56e0  74f3                 je 0x4a56d5
// 004a56e2  ebb3                 jmp 0x4a5697
// 004a56e4  5f                   pop edi
// 004a56e5  5e                   pop esi
// 004a56e6  5d                   pop ebp
// 004a56e7  5b                   pop ebx
// 004a56e8  83c418               add esp, 0x18
// 004a56eb  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?getStaleEntries@TextureManager@G3D@@AAEXAAV?$Array@VTextureArgs@TextureManager@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
