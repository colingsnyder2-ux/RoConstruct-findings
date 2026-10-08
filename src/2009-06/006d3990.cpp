// roc 2009-06 006d3990  unit: RBX::Block  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d3990
//
// 006d3990  83ec10               sub esp, 0x10
// 006d3993  53                   push ebx
// 006d3994  55                   push ebp
// 006d3995  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006d3999  56                   push esi
// 006d399a  55                   push ebp
// 006d399b  8bf1                 mov esi, ecx
// 006d399d  e82ef5ffff           call 0x6d2ed0
// 006d39a2  8bd8                 mov ebx, eax
// 006d39a4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006d39a8  85f6                 test esi, esi
// 006d39aa  7506                 jne 0x6d39b2
// 006d39ac  ff15ace98900         call dword ptr [0x89e9ac]
// 006d39b2  8b06                 mov eax, dword ptr [esi]
// 006d39b4  57                   push edi
// 006d39b5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006d39b8  89442410             mov dword ptr [esp + 0x10], eax
// 006d39bc  85c0                 test eax, eax
// 006d39be  7404                 je 0x6d39c4
// 006d39c0  3bc0                 cmp eax, eax
// 006d39c2  7406                 je 0x6d39ca
// 006d39c4  ff15ace98900         call dword ptr [0x89e9ac]
// 006d39ca  3bdf                 cmp ebx, edi
// 006d39cc  5f                   pop edi
// 006d39cd  7417                 je 0x6d39e6
// 006d39cf  83c30c               add ebx, 0xc
// 006d39d2  53                   push ebx
// 006d39d3  55                   push ebp
// 006d39d4  8d4e08               lea ecx, [esi + 8]
// 006d39d7  e8a4ebffff           call 0x6d2580
// 006d39dc  84c0                 test al, al
// 006d39de  7506                 jne 0x6d39e6
// 006d39e0  8d4c240c             lea ecx, [esp + 0xc]
// 006d39e4  eb11                 jmp 0x6d39f7
// 006d39e6  8b0e                 mov ecx, dword ptr [esi]
// 006d39e8  8b4618               mov eax, dword ptr [esi + 0x18]
// 006d39eb  894c2414             mov dword ptr [esp + 0x14], ecx
// 006d39ef  89442418             mov dword ptr [esp + 0x18], eax
// 006d39f3  8d4c2414             lea ecx, [esp + 0x14]
// 006d39f7  8b11                 mov edx, dword ptr [ecx]
// 006d39f9  8b442420             mov eax, dword ptr [esp + 0x20]
// 006d39fd  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d3a00  5e                   pop esi
// 006d3a01  5d                   pop ebp
// 006d3a02  8910                 mov dword ptr [eax], edx
// 006d3a04  894804               mov dword ptr [eax + 4], ecx
// 006d3a07  5b                   pop ebx
// 006d3a08  83c410               add esp, 0x10
// 006d3a0b  c20800               ret 8
// library rbxgs/v8world\Block.cpp (function ?find@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
