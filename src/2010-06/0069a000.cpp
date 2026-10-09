// roc 2010-06 0069a000  unit: RBX::PolyContact  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069a000
//
// 0069a000  83ec10               sub esp, 0x10
// 0069a003  55                   push ebp
// 0069a004  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0069a008  56                   push esi
// 0069a009  8bf1                 mov esi, ecx
// 0069a00b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0069a00e  8b4104               mov eax, dword ptr [ecx + 4]
// 0069a011  80781100             cmp byte ptr [eax + 0x11], 0
// 0069a015  57                   push edi
// 0069a016  8bf9                 mov edi, ecx
// 0069a018  751a                 jne 0x69a034
// 0069a01a  8b4d00               mov ecx, dword ptr [ebp]
// 0069a01d  8d4900               lea ecx, [ecx]
// 0069a020  39480c               cmp dword ptr [eax + 0xc], ecx
// 0069a023  7305                 jae 0x69a02a
// 0069a025  8b4008               mov eax, dword ptr [eax + 8]
// 0069a028  eb04                 jmp 0x69a02e
// 0069a02a  8bf8                 mov edi, eax
// 0069a02c  8b00                 mov eax, dword ptr [eax]
// 0069a02e  80781100             cmp byte ptr [eax + 0x11], 0
// 0069a032  74ec                 je 0x69a020
// 0069a034  8b06                 mov eax, dword ptr [esi]
// 0069a036  53                   push ebx
// 0069a037  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0069a03a  897c2414             mov dword ptr [esp + 0x14], edi
// 0069a03e  89442410             mov dword ptr [esp + 0x10], eax
// 0069a042  85c0                 test eax, eax
// 0069a044  7404                 je 0x69a04a
// 0069a046  3bc0                 cmp eax, eax
// 0069a048  7406                 je 0x69a050
// 0069a04a  ff150ca99e00         call dword ptr [0x9ea90c]
// 0069a050  3bfb                 cmp edi, ebx
// 0069a052  5b                   pop ebx
// 0069a053  740e                 je 0x69a063
// 0069a055  8b4500               mov eax, dword ptr [ebp]
// 0069a058  3b470c               cmp eax, dword ptr [edi + 0xc]
// 0069a05b  7206                 jb 0x69a063
// 0069a05d  8d4c240c             lea ecx, [esp + 0xc]
// 0069a061  eb11                 jmp 0x69a074
// 0069a063  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0069a066  8b16                 mov edx, dword ptr [esi]
// 0069a068  894c2418             mov dword ptr [esp + 0x18], ecx
// 0069a06c  89542414             mov dword ptr [esp + 0x14], edx
// 0069a070  8d4c2414             lea ecx, [esp + 0x14]
// 0069a074  8b11                 mov edx, dword ptr [ecx]
// 0069a076  8b442420             mov eax, dword ptr [esp + 0x20]
// 0069a07a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0069a07d  5f                   pop edi
// 0069a07e  5e                   pop esi
// 0069a07f  8910                 mov dword ptr [eax], edx
// 0069a081  894804               mov dword ptr [eax + 4], ecx
// 0069a084  5d                   pop ebp
// 0069a085  83c410               add esp, 0x10
// 0069a088  c20800               ret 8
// library openrbx-client/App\v8world\ContactManager.cpp (function ?find@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@QBE?AVconst_iterator@12@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
