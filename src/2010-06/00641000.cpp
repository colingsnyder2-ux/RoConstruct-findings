// roc 2010-06 00641000  unit: RBX::VInstance::?$NonFactoryProduct  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00641000
//
// 00641000  83ec10               sub esp, 0x10
// 00641003  53                   push ebx
// 00641004  55                   push ebp
// 00641005  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00641009  56                   push esi
// 0064100a  55                   push ebp
// 0064100b  8bf1                 mov esi, ecx
// 0064100d  e8fe0bfeff           call 0x621c10
// 00641012  8bd8                 mov ebx, eax
// 00641014  895c2410             mov dword ptr [esp + 0x10], ebx
// 00641018  85f6                 test esi, esi
// 0064101a  7506                 jne 0x641022
// 0064101c  ff150ca99e00         call dword ptr [0x9ea90c]
// 00641022  8b06                 mov eax, dword ptr [esi]
// 00641024  57                   push edi
// 00641025  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00641028  89442410             mov dword ptr [esp + 0x10], eax
// 0064102c  85c0                 test eax, eax
// 0064102e  7404                 je 0x641034
// 00641030  3bc0                 cmp eax, eax
// 00641032  7406                 je 0x64103a
// 00641034  ff150ca99e00         call dword ptr [0x9ea90c]
// 0064103a  3bdf                 cmp ebx, edi
// 0064103c  5f                   pop edi
// 0064103d  7417                 je 0x641056
// 0064103f  83c30c               add ebx, 0xc
// 00641042  53                   push ebx
// 00641043  55                   push ebp
// 00641044  e8b79cfeff           call 0x62ad00
// 00641049  83c408               add esp, 8
// 0064104c  84c0                 test al, al
// 0064104e  7506                 jne 0x641056
// 00641050  8d4c240c             lea ecx, [esp + 0xc]
// 00641054  eb11                 jmp 0x641067
// 00641056  8b0e                 mov ecx, dword ptr [esi]
// 00641058  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064105b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0064105f  89442418             mov dword ptr [esp + 0x18], eax
// 00641063  8d4c2414             lea ecx, [esp + 0x14]
// 00641067  8b11                 mov edx, dword ptr [ecx]
// 00641069  8b442420             mov eax, dword ptr [esp + 0x20]
// 0064106d  8b4904               mov ecx, dword ptr [ecx + 4]
// 00641070  5e                   pop esi
// 00641071  5d                   pop ebp
// 00641072  8910                 mov dword ptr [eax], edx
// 00641074  894804               mov dword ptr [eax + 4], ecx
// 00641077  5b                   pop ebx
// 00641078  83c410               add esp, 0x10
// 0064107b  c20800               ret 8
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?find@?$_Tree@V?$_Tset_traits@VContentId@RBX@@U?$less@VContentId@RBX@@@std@@V?$allocator@VContentId@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABVContentId@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
