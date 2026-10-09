// roc 2009-06 0067ee60  unit: RBX::Mechanism  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067ee60
//
// 0067ee60  83ec10               sub esp, 0x10
// 0067ee63  55                   push ebp
// 0067ee64  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0067ee68  56                   push esi
// 0067ee69  8bf1                 mov esi, ecx
// 0067ee6b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0067ee6e  8b4104               mov eax, dword ptr [ecx + 4]
// 0067ee71  80781100             cmp byte ptr [eax + 0x11], 0
// 0067ee75  57                   push edi
// 0067ee76  8bf9                 mov edi, ecx
// 0067ee78  751a                 jne 0x67ee94
// 0067ee7a  8b4d00               mov ecx, dword ptr [ebp]
// 0067ee7d  8d4900               lea ecx, [ecx]
// 0067ee80  39480c               cmp dword ptr [eax + 0xc], ecx
// 0067ee83  7305                 jae 0x67ee8a
// 0067ee85  8b4008               mov eax, dword ptr [eax + 8]
// 0067ee88  eb04                 jmp 0x67ee8e
// 0067ee8a  8bf8                 mov edi, eax
// 0067ee8c  8b00                 mov eax, dword ptr [eax]
// 0067ee8e  80781100             cmp byte ptr [eax + 0x11], 0
// 0067ee92  74ec                 je 0x67ee80
// 0067ee94  8b06                 mov eax, dword ptr [esi]
// 0067ee96  53                   push ebx
// 0067ee97  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0067ee9a  897c2414             mov dword ptr [esp + 0x14], edi
// 0067ee9e  89442410             mov dword ptr [esp + 0x10], eax
// 0067eea2  85c0                 test eax, eax
// 0067eea4  7404                 je 0x67eeaa
// 0067eea6  3bc0                 cmp eax, eax
// 0067eea8  7406                 je 0x67eeb0
// 0067eeaa  ff15ace98900         call dword ptr [0x89e9ac]
// 0067eeb0  3bfb                 cmp edi, ebx
// 0067eeb2  5b                   pop ebx
// 0067eeb3  740e                 je 0x67eec3
// 0067eeb5  8b4500               mov eax, dword ptr [ebp]
// 0067eeb8  3b470c               cmp eax, dword ptr [edi + 0xc]
// 0067eebb  7206                 jb 0x67eec3
// 0067eebd  8d4c240c             lea ecx, [esp + 0xc]
// 0067eec1  eb11                 jmp 0x67eed4
// 0067eec3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0067eec6  8b16                 mov edx, dword ptr [esi]
// 0067eec8  894c2418             mov dword ptr [esp + 0x18], ecx
// 0067eecc  89542414             mov dword ptr [esp + 0x14], edx
// 0067eed0  8d4c2414             lea ecx, [esp + 0x14]
// 0067eed4  8b11                 mov edx, dword ptr [ecx]
// 0067eed6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067eeda  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067eedd  5f                   pop edi
// 0067eede  5e                   pop esi
// 0067eedf  8910                 mov dword ptr [eax], edx
// 0067eee1  894804               mov dword ptr [eax + 4], ecx
// 0067eee4  5d                   pop ebp
// 0067eee5  83c410               add esp, 0x10
// 0067eee8  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?find@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
