// roc 2009-06 00706b60  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00706b60
//
// 00706b60  83ec08               sub esp, 8
// 00706b63  53                   push ebx
// 00706b64  55                   push ebp
// 00706b65  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00706b69  56                   push esi
// 00706b6a  8bf1                 mov esi, ecx
// 00706b6c  57                   push edi
// 00706b6d  8b3dace98900         mov edi, dword ptr [0x89e9ac]
// 00706b73  c7450000000000       mov dword ptr [ebp], 0
// 00706b7a  85f6                 test esi, esi
// 00706b7c  740e                 je 0x706b8c
// 00706b7e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00706b82  39460c               cmp dword ptr [esi + 0xc], eax
// 00706b85  7705                 ja 0x706b8c
// 00706b87  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00706b8a  7606                 jbe 0x706b92
// 00706b8c  ffd7                 call edi
// 00706b8e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00706b92  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00706b96  8b0e                 mov ecx, dword ptr [esi]
// 00706b98  894d00               mov dword ptr [ebp], ecx
// 00706b9b  894504               mov dword ptr [ebp + 4], eax
// 00706b9e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00706ba1  7705                 ja 0x706ba8
// 00706ba3  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00706ba6  7606                 jbe 0x706bae
// 00706ba8  ffd7                 call edi
// 00706baa  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00706bae  8b4500               mov eax, dword ptr [ebp]
// 00706bb1  8b0e                 mov ecx, dword ptr [esi]
// 00706bb3  85c0                 test eax, eax
// 00706bb5  7404                 je 0x706bbb
// 00706bb7  3bc1                 cmp eax, ecx
// 00706bb9  7402                 je 0x706bbd
// 00706bbb  ffd7                 call edi
// 00706bbd  8b4504               mov eax, dword ptr [ebp + 4]
// 00706bc0  89442414             mov dword ptr [esp + 0x14], eax
// 00706bc4  3bc3                 cmp eax, ebx
// 00706bc6  7449                 je 0x706c11
// 00706bc8  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00706bcb  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00706bd0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00706bd4  52                   push edx
// 00706bd5  8b542420             mov edx, dword ptr [esp + 0x20]
// 00706bd9  c644241400           mov byte ptr [esp + 0x14], 0
// 00706bde  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00706be2  51                   push ecx
// 00706be3  52                   push edx
// 00706be4  50                   push eax
// 00706be5  57                   push edi
// 00706be6  53                   push ebx
// 00706be7  e874eeffff           call 0x705a60
// 00706bec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00706bf0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00706bf4  2bfb                 sub edi, ebx
// 00706bf6  51                   push ecx
// 00706bf7  c1ff02               sar edi, 2
// 00706bfa  8d3cb8               lea edi, [eax + edi*4]
// 00706bfd  8b4610               mov eax, dword ptr [esi + 0x10]
// 00706c00  8d5608               lea edx, [esi + 8]
// 00706c03  52                   push edx
// 00706c04  50                   push eax
// 00706c05  57                   push edi
// 00706c06  e8a5f8ffff           call 0x7064b0
// 00706c0b  83c428               add esp, 0x28
// 00706c0e  897e10               mov dword ptr [esi + 0x10], edi
// 00706c11  5f                   pop edi
// 00706c12  5e                   pop esi
// 00706c13  8bc5                 mov eax, ebp
// 00706c15  5d                   pop ebp
// 00706c16  5b                   pop ebx
// 00706c17  83c408               add esp, 8
// 00706c1a  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V?$_Vector_const_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
