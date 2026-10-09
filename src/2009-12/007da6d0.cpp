// roc 2009-12 007da6d0  unit: RBX::SpatialFilter  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da6d0
//
// 007da6d0  83ec10               sub esp, 0x10
// 007da6d3  55                   push ebp
// 007da6d4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007da6d8  56                   push esi
// 007da6d9  8bf1                 mov esi, ecx
// 007da6db  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007da6de  8b4104               mov eax, dword ptr [ecx + 4]
// 007da6e1  80781100             cmp byte ptr [eax + 0x11], 0
// 007da6e5  57                   push edi
// 007da6e6  8bf9                 mov edi, ecx
// 007da6e8  751a                 jne 0x7da704
// 007da6ea  8b4d00               mov ecx, dword ptr [ebp]
// 007da6ed  8d4900               lea ecx, [ecx]
// 007da6f0  39480c               cmp dword ptr [eax + 0xc], ecx
// 007da6f3  7305                 jae 0x7da6fa
// 007da6f5  8b4008               mov eax, dword ptr [eax + 8]
// 007da6f8  eb04                 jmp 0x7da6fe
// 007da6fa  8bf8                 mov edi, eax
// 007da6fc  8b00                 mov eax, dword ptr [eax]
// 007da6fe  80781100             cmp byte ptr [eax + 0x11], 0
// 007da702  74ec                 je 0x7da6f0
// 007da704  8b06                 mov eax, dword ptr [esi]
// 007da706  53                   push ebx
// 007da707  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 007da70a  897c2414             mov dword ptr [esp + 0x14], edi
// 007da70e  89442410             mov dword ptr [esp + 0x10], eax
// 007da712  85c0                 test eax, eax
// 007da714  7404                 je 0x7da71a
// 007da716  3bc0                 cmp eax, eax
// 007da718  7406                 je 0x7da720
// 007da71a  ff1560b79800         call dword ptr [0x98b760]
// 007da720  3bfb                 cmp edi, ebx
// 007da722  5b                   pop ebx
// 007da723  740e                 je 0x7da733
// 007da725  8b4500               mov eax, dword ptr [ebp]
// 007da728  3b470c               cmp eax, dword ptr [edi + 0xc]
// 007da72b  7206                 jb 0x7da733
// 007da72d  8d4c240c             lea ecx, [esp + 0xc]
// 007da731  eb11                 jmp 0x7da744
// 007da733  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007da736  8b16                 mov edx, dword ptr [esi]
// 007da738  894c2418             mov dword ptr [esp + 0x18], ecx
// 007da73c  89542414             mov dword ptr [esp + 0x14], edx
// 007da740  8d4c2414             lea ecx, [esp + 0x14]
// 007da744  8b11                 mov edx, dword ptr [ecx]
// 007da746  8b442420             mov eax, dword ptr [esp + 0x20]
// 007da74a  8b4904               mov ecx, dword ptr [ecx + 4]
// 007da74d  5f                   pop edi
// 007da74e  5e                   pop esi
// 007da74f  8910                 mov dword ptr [eax], edx
// 007da751  894804               mov dword ptr [eax + 4], ecx
// 007da754  5d                   pop ebp
// 007da755  83c410               add esp, 0x10
// 007da758  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?find@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
