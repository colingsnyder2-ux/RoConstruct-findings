// from server: 100% by auto
// roc 2007-08 0047aab0  unit: G3D::TextureManager::TextureArgs  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047aab0
//
// 0047aab0  83ec18               sub esp, 0x18
// 0047aab3  55                   push ebp
// 0047aab4  56                   push esi
// 0047aab5  57                   push edi
// 0047aab6  8bf9                 mov edi, ecx
// 0047aab8  8b470c               mov eax, dword ptr [edi + 0xc]
// 0047aabb  85c0                 test eax, eax
// 0047aabd  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047aac0  897c2414             mov dword ptr [esp + 0x14], edi
// 0047aac4  89442418             mov dword ptr [esp + 0x18], eax
// 0047aac8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0047aacc  7507                 jne 0x47aad5
// 0047aace  c644242001           mov byte ptr [esp + 0x20], 1
// 0047aad3  eb1c                 jmp 0x47aaf1
// 0047aad5  8b01                 mov eax, dword ptr [ecx]
// 0047aad7  8d4c240c             lea ecx, [esp + 0xc]
// 0047aadb  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0047aae3  89442410             mov dword ptr [esp + 0x10], eax
// 0047aae7  c644242000           mov byte ptr [esp + 0x20], 0
// 0047aaec  e83ff4ffff           call 0x479f30
// 0047aaf1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0047aaf5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047aaf9  8da42400000000       lea esp, [esp]
// 0047ab00  807c242001           cmp byte ptr [esp + 0x20], 1
// 0047ab05  7506                 jne 0x47ab0d
// 0047ab07  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0047ab0b  745b                 je 0x47ab68
// 0047ab0d  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0047ab10  8b4804               mov ecx, dword ptr [eax + 4]
// 0047ab13  8b742410             mov esi, dword ptr [esp + 0x10]
// 0047ab17  83c004               add eax, 4
// 0047ab1a  83f901               cmp ecx, 1
// 0047ab1d  750b                 jne 0x47ab2a
// 0047ab1f  8d5608               lea edx, [esi + 8]
// 0047ab22  52                   push edx
// 0047ab23  8bcd                 mov ecx, ebp
// 0047ab25  e8e6fdffff           call 0x47a910
// 0047ab2a  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0047ab2d  85c9                 test ecx, ecx
// 0047ab2f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047ab33  75cb                 jne 0x47ab00
// 0047ab35  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0047ab39  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047ab3d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047ab41  83c001               add eax, 1
// 0047ab44  3bc6                 cmp eax, esi
// 0047ab46  7d11                 jge 0x47ab59
// 0047ab48  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 0047ab4b  85c9                 test ecx, ecx
// 0047ab4d  74f2                 je 0x47ab41
// 0047ab4f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047ab53  8944240c             mov dword ptr [esp + 0xc], eax
// 0047ab57  eba7                 jmp 0x47ab00
// 0047ab59  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047ab5d  8944240c             mov dword ptr [esp + 0xc], eax
// 0047ab61  c644242001           mov byte ptr [esp + 0x20], 1
// 0047ab66  eb98                 jmp 0x47ab00
// 0047ab68  5f                   pop edi
// 0047ab69  5e                   pop esi
// 0047ab6a  5d                   pop ebp
// 0047ab6b  83c418               add esp, 0x18
// 0047ab6e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?getStaleEntries@TextureManager@G3D@@AAEXAAV?$Array@VTextureArgs@TextureManager@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
