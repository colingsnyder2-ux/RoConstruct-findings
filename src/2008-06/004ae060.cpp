// roc 2008-06 004ae060  unit: RBX::Network::VClient::?$FactoryProduct  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae060
//
// 004ae060  83ec10               sub esp, 0x10
// 004ae063  55                   push ebp
// 004ae064  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004ae068  56                   push esi
// 004ae069  8bf1                 mov esi, ecx
// 004ae06b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004ae06e  8b4104               mov eax, dword ptr [ecx + 4]
// 004ae071  80781100             cmp byte ptr [eax + 0x11], 0
// 004ae075  57                   push edi
// 004ae076  8bf9                 mov edi, ecx
// 004ae078  751a                 jne 0x4ae094
// 004ae07a  8b4d00               mov ecx, dword ptr [ebp]
// 004ae07d  8d4900               lea ecx, [ecx]
// 004ae080  39480c               cmp dword ptr [eax + 0xc], ecx
// 004ae083  7305                 jae 0x4ae08a
// 004ae085  8b4008               mov eax, dword ptr [eax + 8]
// 004ae088  eb04                 jmp 0x4ae08e
// 004ae08a  8bf8                 mov edi, eax
// 004ae08c  8b00                 mov eax, dword ptr [eax]
// 004ae08e  80781100             cmp byte ptr [eax + 0x11], 0
// 004ae092  74ec                 je 0x4ae080
// 004ae094  8b06                 mov eax, dword ptr [esi]
// 004ae096  53                   push ebx
// 004ae097  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 004ae09a  897c2414             mov dword ptr [esp + 0x14], edi
// 004ae09e  89442410             mov dword ptr [esp + 0x10], eax
// 004ae0a2  85c0                 test eax, eax
// 004ae0a4  7404                 je 0x4ae0aa
// 004ae0a6  3bc0                 cmp eax, eax
// 004ae0a8  7406                 je 0x4ae0b0
// 004ae0aa  ff1590288000         call dword ptr [0x802890]
// 004ae0b0  3bfb                 cmp edi, ebx
// 004ae0b2  5b                   pop ebx
// 004ae0b3  740e                 je 0x4ae0c3
// 004ae0b5  8b4500               mov eax, dword ptr [ebp]
// 004ae0b8  3b470c               cmp eax, dword ptr [edi + 0xc]
// 004ae0bb  7206                 jb 0x4ae0c3
// 004ae0bd  8d4c240c             lea ecx, [esp + 0xc]
// 004ae0c1  eb11                 jmp 0x4ae0d4
// 004ae0c3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004ae0c6  8b16                 mov edx, dword ptr [esi]
// 004ae0c8  894c2418             mov dword ptr [esp + 0x18], ecx
// 004ae0cc  89542414             mov dword ptr [esp + 0x14], edx
// 004ae0d0  8d4c2414             lea ecx, [esp + 0x14]
// 004ae0d4  8b11                 mov edx, dword ptr [ecx]
// 004ae0d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ae0da  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ae0dd  5f                   pop edi
// 004ae0de  5e                   pop esi
// 004ae0df  8910                 mov dword ptr [eax], edx
// 004ae0e1  894804               mov dword ptr [eax + 4], ecx
// 004ae0e4  5d                   pop ebp
// 004ae0e5  83c410               add esp, 0x10
// 004ae0e8  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?find@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
