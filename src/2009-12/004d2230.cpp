// roc 2009-12 004d2230  unit: G3D::TextureManager::TextureArgs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d2230
//
// 004d2230  83ec18               sub esp, 0x18
// 004d2233  53                   push ebx
// 004d2234  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 004d2237  55                   push ebp
// 004d2238  8b6908               mov ebp, dword ptr [ecx + 8]
// 004d223b  56                   push esi
// 004d223c  57                   push edi
// 004d223d  85db                 test ebx, ebx
// 004d223f  7546                 jne 0x4d2287
// 004d2241  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d2245  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d2249  c644242401           mov byte ptr [esp + 0x24], 1
// 004d224e  8bff                 mov edi, edi
// 004d2250  807c242401           cmp byte ptr [esp + 0x24], 1
// 004d2255  744d                 je 0x4d22a4
// 004d2257  8b4640               mov eax, dword ptr [esi + 0x40]
// 004d225a  83c004               add eax, 4
// 004d225d  8b00                 mov eax, dword ptr [eax]
// 004d225f  83f801               cmp eax, 1
// 004d2262  750d                 jne 0x4d2271
// 004d2264  8d4e08               lea ecx, [esi + 8]
// 004d2267  51                   push ecx
// 004d2268  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004d226c  e83ffeffff           call 0x4d20b0
// 004d2271  8b7648               mov esi, dword ptr [esi + 0x48]
// 004d2274  85f6                 test esi, esi
// 004d2276  75d8                 jne 0x4d2250
// 004d2278  47                   inc edi
// 004d2279  3bfb                 cmp edi, ebx
// 004d227b  7dcc                 jge 0x4d2249
// 004d227d  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 004d2281  85f6                 test esi, esi
// 004d2283  74f3                 je 0x4d2278
// 004d2285  ebc9                 jmp 0x4d2250
// 004d2287  8b7500               mov esi, dword ptr [ebp]
// 004d228a  33ff                 xor edi, edi
// 004d228c  c644242400           mov byte ptr [esp + 0x24], 0
// 004d2291  85f6                 test esi, esi
// 004d2293  75bb                 jne 0x4d2250
// 004d2295  47                   inc edi
// 004d2296  3bfb                 cmp edi, ebx
// 004d2298  7daf                 jge 0x4d2249
// 004d229a  8b74bd00             mov esi, dword ptr [ebp + edi*4]
// 004d229e  85f6                 test esi, esi
// 004d22a0  74f3                 je 0x4d2295
// 004d22a2  ebb3                 jmp 0x4d2257
// 004d22a4  5f                   pop edi
// 004d22a5  5e                   pop esi
// 004d22a6  5d                   pop ebp
// 004d22a7  5b                   pop ebx
// 004d22a8  83c418               add esp, 0x18
// 004d22ab  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?getStaleEntries@TextureManager@G3D@@AAEXAAV?$Array@VTextureArgs@TextureManager@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
