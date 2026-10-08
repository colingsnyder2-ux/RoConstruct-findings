// roc 2007-03 007303b0  unit: seg_00730000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007303b0
//
// 007303b0  83ec18               sub esp, 0x18
// 007303b3  55                   push ebp
// 007303b4  56                   push esi
// 007303b5  57                   push edi
// 007303b6  8bf9                 mov edi, ecx
// 007303b8  8b470c               mov eax, dword ptr [edi + 0xc]
// 007303bb  85c0                 test eax, eax
// 007303bd  8b4f08               mov ecx, dword ptr [edi + 8]
// 007303c0  897c2414             mov dword ptr [esp + 0x14], edi
// 007303c4  89442418             mov dword ptr [esp + 0x18], eax
// 007303c8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007303cc  7507                 jne 0x7303d5
// 007303ce  c644242001           mov byte ptr [esp + 0x20], 1
// 007303d3  eb1c                 jmp 0x7303f1
// 007303d5  8b01                 mov eax, dword ptr [ecx]
// 007303d7  8d4c240c             lea ecx, [esp + 0xc]
// 007303db  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007303e3  89442410             mov dword ptr [esp + 0x10], eax
// 007303e7  c644242000           mov byte ptr [esp + 0x20], 0
// 007303ec  e83ff4ffff           call 0x72f830
// 007303f1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007303f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007303f9  8da42400000000       lea esp, [esp]
// 00730400  807c242001           cmp byte ptr [esp + 0x20], 1
// 00730405  7506                 jne 0x73040d
// 00730407  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0073040b  745b                 je 0x730468
// 0073040d  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00730410  8b4804               mov ecx, dword ptr [eax + 4]
// 00730413  8b742410             mov esi, dword ptr [esp + 0x10]
// 00730417  83c004               add eax, 4
// 0073041a  83f901               cmp ecx, 1
// 0073041d  750b                 jne 0x73042a
// 0073041f  8d5608               lea edx, [esi + 8]
// 00730422  52                   push edx
// 00730423  8bcd                 mov ecx, ebp
// 00730425  e8e6fdffff           call 0x730210
// 0073042a  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0073042d  85c9                 test ecx, ecx
// 0073042f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00730433  75cb                 jne 0x730400
// 00730435  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00730439  8b742418             mov esi, dword ptr [esp + 0x18]
// 0073043d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00730441  83c001               add eax, 1
// 00730444  3bc6                 cmp eax, esi
// 00730446  7d11                 jge 0x730459
// 00730448  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 0073044b  85c9                 test ecx, ecx
// 0073044d  74f2                 je 0x730441
// 0073044f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00730453  8944240c             mov dword ptr [esp + 0xc], eax
// 00730457  eba7                 jmp 0x730400
// 00730459  894c2410             mov dword ptr [esp + 0x10], ecx
// 0073045d  8944240c             mov dword ptr [esp + 0xc], eax
// 00730461  c644242001           mov byte ptr [esp + 0x20], 1
// 00730466  eb98                 jmp 0x730400
// 00730468  5f                   pop edi
// 00730469  5e                   pop esi
// 0073046a  5d                   pop ebp
// 0073046b  83c418               add esp, 0x18
// 0073046e  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\TextureManager.cpp (function ?getStaleEntries@TextureManager@G3D@@AAEXAAV?$Array@VTextureArgs@TextureManager@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureManager.cpp
