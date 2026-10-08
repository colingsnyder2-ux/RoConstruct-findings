// roc 2010-06 00796bf0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00796bf0
//
// 00796bf0  83ec08               sub esp, 8
// 00796bf3  53                   push ebx
// 00796bf4  55                   push ebp
// 00796bf5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00796bf9  56                   push esi
// 00796bfa  8bf1                 mov esi, ecx
// 00796bfc  57                   push edi
// 00796bfd  8b3d0ca99e00         mov edi, dword ptr [0x9ea90c]
// 00796c03  c7450000000000       mov dword ptr [ebp], 0
// 00796c0a  85f6                 test esi, esi
// 00796c0c  740e                 je 0x796c1c
// 00796c0e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00796c12  39460c               cmp dword ptr [esi + 0xc], eax
// 00796c15  7705                 ja 0x796c1c
// 00796c17  3b4610               cmp eax, dword ptr [esi + 0x10]
// 00796c1a  7606                 jbe 0x796c22
// 00796c1c  ffd7                 call edi
// 00796c1e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00796c22  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00796c26  8b0e                 mov ecx, dword ptr [esi]
// 00796c28  894d00               mov dword ptr [ebp], ecx
// 00796c2b  894504               mov dword ptr [ebp + 4], eax
// 00796c2e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00796c31  7705                 ja 0x796c38
// 00796c33  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 00796c36  7606                 jbe 0x796c3e
// 00796c38  ffd7                 call edi
// 00796c3a  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00796c3e  8b4500               mov eax, dword ptr [ebp]
// 00796c41  8b0e                 mov ecx, dword ptr [esi]
// 00796c43  85c0                 test eax, eax
// 00796c45  7404                 je 0x796c4b
// 00796c47  3bc1                 cmp eax, ecx
// 00796c49  7402                 je 0x796c4d
// 00796c4b  ffd7                 call edi
// 00796c4d  8b4504               mov eax, dword ptr [ebp + 4]
// 00796c50  89442414             mov dword ptr [esp + 0x14], eax
// 00796c54  3bc3                 cmp eax, ebx
// 00796c56  7449                 je 0x796ca1
// 00796c58  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00796c5b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00796c60  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00796c64  52                   push edx
// 00796c65  8b542420             mov edx, dword ptr [esp + 0x20]
// 00796c69  c644241400           mov byte ptr [esp + 0x14], 0
// 00796c6e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00796c72  51                   push ecx
// 00796c73  52                   push edx
// 00796c74  50                   push eax
// 00796c75  57                   push edi
// 00796c76  53                   push ebx
// 00796c77  e8f4efffff           call 0x795c70
// 00796c7c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00796c80  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00796c84  2bfb                 sub edi, ebx
// 00796c86  51                   push ecx
// 00796c87  c1ff02               sar edi, 2
// 00796c8a  8d3cb8               lea edi, [eax + edi*4]
// 00796c8d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00796c90  8d5608               lea edx, [esi + 8]
// 00796c93  52                   push edx
// 00796c94  50                   push eax
// 00796c95  57                   push edi
// 00796c96  e845f9ffff           call 0x7965e0
// 00796c9b  83c428               add esp, 0x28
// 00796c9e  897e10               mov dword ptr [esi + 0x10], edi
// 00796ca1  5f                   pop edi
// 00796ca2  5e                   pop esi
// 00796ca3  8bc5                 mov eax, ebp
// 00796ca5  5d                   pop ebp
// 00796ca6  5b                   pop ebx
// 00796ca7  83c408               add esp, 8
// 00796caa  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V?$_Vector_const_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
