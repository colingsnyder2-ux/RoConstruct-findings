// roc 2009-12 0080a170  unit: CXTPImageManagerResource::CBitmapDC  size: 360 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a170
//
// 0080a170  51                   push ecx
// 0080a171  53                   push ebx
// 0080a172  55                   push ebp
// 0080a173  56                   push esi
// 0080a174  57                   push edi
// 0080a175  8bf9                 mov edi, ecx
// 0080a177  897c2410             mov dword ptr [esp + 0x10], edi
// 0080a17b  e820310400           call 0x84d2a0
// 0080a180  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080a184  50                   push eax
// 0080a185  e866080400           call 0x84a9f0
// 0080a18a  83c404               add esp, 4
// 0080a18d  85c0                 test eax, eax
// 0080a18f  7461                 je 0x80a1f2
// 0080a191  e88a150300           call 0x83b720
// 0080a196  8bc8                 mov ecx, eax
// 0080a198  e8d3150300           call 0x83b770
// 0080a19d  84c0                 test al, al
// 0080a19f  7451                 je 0x80a1f2
// 0080a1a1  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080a1a5  8b7804               mov edi, dword ptr [eax + 4]
// 0080a1a8  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0080a1ab  8b18                 mov ebx, dword ptr [eax]
// 0080a1ad  8b4008               mov eax, dword ptr [eax + 8]
// 0080a1b0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080a1b4  8b6a04               mov ebp, dword ptr [edx + 4]
// 0080a1b7  8b720c               mov esi, dword ptr [edx + 0xc]
// 0080a1ba  2bcf                 sub ecx, edi
// 0080a1bc  51                   push ecx
// 0080a1bd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080a1c1  2bc3                 sub eax, ebx
// 0080a1c3  50                   push eax
// 0080a1c4  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080a1c8  57                   push edi
// 0080a1c9  53                   push ebx
// 0080a1ca  51                   push ecx
// 0080a1cb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080a1cf  2bf5                 sub esi, ebp
// 0080a1d1  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0080a1d5  8b2a                 mov ebp, dword ptr [edx]
// 0080a1d7  8b5208               mov edx, dword ptr [edx + 8]
// 0080a1da  56                   push esi
// 0080a1db  2bd5                 sub edx, ebp
// 0080a1dd  52                   push edx
// 0080a1de  8b542444             mov edx, dword ptr [esp + 0x44]
// 0080a1e2  52                   push edx
// 0080a1e3  55                   push ebp
// 0080a1e4  50                   push eax
// 0080a1e5  e8d6e9ffff           call 0x808bc0
// 0080a1ea  5f                   pop edi
// 0080a1eb  5e                   pop esi
// 0080a1ec  5d                   pop ebp
// 0080a1ed  5b                   pop ebx
// 0080a1ee  59                   pop ecx
// 0080a1ef  c21400               ret 0x14
// 0080a1f2  e8a9300400           call 0x84d2a0
// 0080a1f7  8b742424             mov esi, dword ptr [esp + 0x24]
// 0080a1fb  33db                 xor ebx, ebx
// 0080a1fd  395804               cmp dword ptr [eax + 4], ebx
// 0080a200  0f8485000000         je 0x80a28b
// 0080a206  8bcf                 mov ecx, edi
// 0080a208  e803e7ffff           call 0x808910
// 0080a20d  85c0                 test eax, eax
// 0080a20f  7509                 jne 0x80a21a
// 0080a211  395e04               cmp dword ptr [esi + 4], ebx
// 0080a214  7575                 jne 0x80a28b
// 0080a216  391e                 cmp dword ptr [esi], ebx
// 0080a218  7571                 jne 0x80a28b
// 0080a21a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0080a21e  8b470c               mov eax, dword ptr [edi + 0xc]
// 0080a221  2b4704               sub eax, dword ptr [edi + 4]
// 0080a224  8a4c2428             mov cl, byte ptr [esp + 0x28]
// 0080a228  8b6e08               mov ebp, dword ptr [esi + 8]
// 0080a22b  2b2e                 sub ebp, dword ptr [esi]
// 0080a22d  895c2424             mov dword ptr [esp + 0x24], ebx
// 0080a231  89442428             mov dword ptr [esp + 0x28], eax
// 0080a235  8b4708               mov eax, dword ptr [edi + 8]
// 0080a238  2b07                 sub eax, dword ptr [edi]
// 0080a23a  885c2427             mov byte ptr [esp + 0x27], bl
// 0080a23e  885c2424             mov byte ptr [esp + 0x24], bl
// 0080a242  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0080a245  2b5e04               sub ebx, dword ptr [esi + 4]
// 0080a248  884c2426             mov byte ptr [esp + 0x26], cl
// 0080a24c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080a250  e84b300400           call 0x84d2a0
// 0080a255  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080a259  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080a25c  52                   push edx
// 0080a25d  8b16                 mov edx, dword ptr [esi]
// 0080a25f  8b4004               mov eax, dword ptr [eax + 4]
// 0080a262  53                   push ebx
// 0080a263  55                   push ebp
// 0080a264  51                   push ecx
// 0080a265  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080a269  52                   push edx
// 0080a26a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0080a26e  51                   push ecx
// 0080a26f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080a273  52                   push edx
// 0080a274  8b5704               mov edx, dword ptr [edi + 4]
// 0080a277  51                   push ecx
// 0080a278  8b0f                 mov ecx, dword ptr [edi]
// 0080a27a  52                   push edx
// 0080a27b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0080a27f  51                   push ecx
// 0080a280  52                   push edx
// 0080a281  ffd0                 call eax
// 0080a283  5f                   pop edi
// 0080a284  5e                   pop esi
// 0080a285  5d                   pop ebp
// 0080a286  5b                   pop ebx
// 0080a287  59                   pop ecx
// 0080a288  c21400               ret 0x14
// 0080a28b  8b7e04               mov edi, dword ptr [esi + 4]
// 0080a28e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0080a291  8b1e                 mov ebx, dword ptr [esi]
// 0080a293  8b7608               mov esi, dword ptr [esi + 8]
// 0080a296  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080a29a  8b6904               mov ebp, dword ptr [ecx + 4]
// 0080a29d  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0080a2a0  2bc7                 sub eax, edi
// 0080a2a2  50                   push eax
// 0080a2a3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080a2a7  2bf3                 sub esi, ebx
// 0080a2a9  56                   push esi
// 0080a2aa  57                   push edi
// 0080a2ab  53                   push ebx
// 0080a2ac  2bd5                 sub edx, ebp
// 0080a2ae  50                   push eax
// 0080a2af  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0080a2b3  8b29                 mov ebp, dword ptr [ecx]
// 0080a2b5  8b4908               mov ecx, dword ptr [ecx + 8]
// 0080a2b8  52                   push edx
// 0080a2b9  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080a2bd  2bcd                 sub ecx, ebp
// 0080a2bf  51                   push ecx
// 0080a2c0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0080a2c4  51                   push ecx
// 0080a2c5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080a2c9  55                   push ebp
// 0080a2ca  52                   push edx
// 0080a2cb  e8f0e8ffff           call 0x808bc0
// 0080a2d0  5f                   pop edi
// 0080a2d1  5e                   pop esi
// 0080a2d2  5d                   pop ebp
// 0080a2d3  5b                   pop ebx
// 0080a2d4  59                   pop ecx
// 0080a2d5  c21400               ret 0x14
// copied from an identical function in another client (function ?AlphaBlend2@CXTPImageManager@@QBEHPAUHDC__@@ABVCRect@@01E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp