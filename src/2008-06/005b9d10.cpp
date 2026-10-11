// roc 2008-06 005b9d10  unit: RBX::Soundscape::SoundChannel  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b9d10
//
// 005b9d10  83ec10               sub esp, 0x10
// 005b9d13  53                   push ebx
// 005b9d14  55                   push ebp
// 005b9d15  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005b9d19  56                   push esi
// 005b9d1a  55                   push ebp
// 005b9d1b  8bf1                 mov esi, ecx
// 005b9d1d  e8eed4ffff           call 0x5b7210
// 005b9d22  8bd8                 mov ebx, eax
// 005b9d24  895c2410             mov dword ptr [esp + 0x10], ebx
// 005b9d28  85f6                 test esi, esi
// 005b9d2a  7506                 jne 0x5b9d32
// 005b9d2c  ff1590288000         call dword ptr [0x802890]
// 005b9d32  8b06                 mov eax, dword ptr [esi]
// 005b9d34  57                   push edi
// 005b9d35  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005b9d38  89442410             mov dword ptr [esp + 0x10], eax
// 005b9d3c  85c0                 test eax, eax
// 005b9d3e  7404                 je 0x5b9d44
// 005b9d40  3bc0                 cmp eax, eax
// 005b9d42  7406                 je 0x5b9d4a
// 005b9d44  ff1590288000         call dword ptr [0x802890]
// 005b9d4a  3bdf                 cmp ebx, edi
// 005b9d4c  5f                   pop edi
// 005b9d4d  7417                 je 0x5b9d66
// 005b9d4f  83c30c               add ebx, 0xc
// 005b9d52  53                   push ebx
// 005b9d53  55                   push ebp
// 005b9d54  e8f71ffaff           call 0x55bd50
// 005b9d59  83c408               add esp, 8
// 005b9d5c  84c0                 test al, al
// 005b9d5e  7506                 jne 0x5b9d66
// 005b9d60  8d4c240c             lea ecx, [esp + 0xc]
// 005b9d64  eb11                 jmp 0x5b9d77
// 005b9d66  8b0e                 mov ecx, dword ptr [esi]
// 005b9d68  8b4618               mov eax, dword ptr [esi + 0x18]
// 005b9d6b  894c2414             mov dword ptr [esp + 0x14], ecx
// 005b9d6f  89442418             mov dword ptr [esp + 0x18], eax
// 005b9d73  8d4c2414             lea ecx, [esp + 0x14]
// 005b9d77  8b11                 mov edx, dword ptr [ecx]
// 005b9d79  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b9d7d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005b9d80  5e                   pop esi
// 005b9d81  5d                   pop ebp
// 005b9d82  8910                 mov dword ptr [eax], edx
// 005b9d84  894804               mov dword ptr [eax + 4], ecx
// 005b9d87  5b                   pop ebx
// 005b9d88  83c410               add esp, 0x10
// 005b9d8b  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
