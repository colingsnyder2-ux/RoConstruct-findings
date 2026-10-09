// roc 2009-12 007e3460  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e3460
//
// 007e3460  83ec08               sub esp, 8
// 007e3463  53                   push ebx
// 007e3464  55                   push ebp
// 007e3465  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007e3469  56                   push esi
// 007e346a  8bf1                 mov esi, ecx
// 007e346c  57                   push edi
// 007e346d  8b3d60b79800         mov edi, dword ptr [0x98b760]
// 007e3473  c7450000000000       mov dword ptr [ebp], 0
// 007e347a  85f6                 test esi, esi
// 007e347c  740e                 je 0x7e348c
// 007e347e  8b442424             mov eax, dword ptr [esp + 0x24]
// 007e3482  39460c               cmp dword ptr [esi + 0xc], eax
// 007e3485  7705                 ja 0x7e348c
// 007e3487  3b4610               cmp eax, dword ptr [esi + 0x10]
// 007e348a  7606                 jbe 0x7e3492
// 007e348c  ffd7                 call edi
// 007e348e  8b442424             mov eax, dword ptr [esp + 0x24]
// 007e3492  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007e3496  8b0e                 mov ecx, dword ptr [esi]
// 007e3498  894d00               mov dword ptr [ebp], ecx
// 007e349b  894504               mov dword ptr [ebp + 4], eax
// 007e349e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 007e34a1  7705                 ja 0x7e34a8
// 007e34a3  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 007e34a6  7606                 jbe 0x7e34ae
// 007e34a8  ffd7                 call edi
// 007e34aa  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007e34ae  8b4500               mov eax, dword ptr [ebp]
// 007e34b1  8b0e                 mov ecx, dword ptr [esi]
// 007e34b3  85c0                 test eax, eax
// 007e34b5  7404                 je 0x7e34bb
// 007e34b7  3bc1                 cmp eax, ecx
// 007e34b9  7402                 je 0x7e34bd
// 007e34bb  ffd7                 call edi
// 007e34bd  8b4504               mov eax, dword ptr [ebp + 4]
// 007e34c0  89442414             mov dword ptr [esp + 0x14], eax
// 007e34c4  3bc3                 cmp eax, ebx
// 007e34c6  7449                 je 0x7e3511
// 007e34c8  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007e34cb  c644241c00           mov byte ptr [esp + 0x1c], 0
// 007e34d0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007e34d4  52                   push edx
// 007e34d5  8b542420             mov edx, dword ptr [esp + 0x20]
// 007e34d9  c644241400           mov byte ptr [esp + 0x14], 0
// 007e34de  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e34e2  51                   push ecx
// 007e34e3  52                   push edx
// 007e34e4  50                   push eax
// 007e34e5  57                   push edi
// 007e34e6  53                   push ebx
// 007e34e7  e8c4f0ffff           call 0x7e25b0
// 007e34ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007e34f0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007e34f4  2bfb                 sub edi, ebx
// 007e34f6  51                   push ecx
// 007e34f7  c1ff02               sar edi, 2
// 007e34fa  8d3cb8               lea edi, [eax + edi*4]
// 007e34fd  8b4610               mov eax, dword ptr [esi + 0x10]
// 007e3500  8d5608               lea edx, [esi + 8]
// 007e3503  52                   push edx
// 007e3504  50                   push eax
// 007e3505  57                   push edi
// 007e3506  e8d5f9ffff           call 0x7e2ee0
// 007e350b  83c428               add esp, 0x28
// 007e350e  897e10               mov dword ptr [esi + 0x10], edi
// 007e3511  5f                   pop edi
// 007e3512  5e                   pop esi
// 007e3513  8bc5                 mov eax, ebp
// 007e3515  5d                   pop ebp
// 007e3516  5b                   pop ebx
// 007e3517  83c408               add esp, 8
// 007e351a  c21400               ret 0x14
// library rbxgs-render/AggregatingSceneManager.cpp (function ?erase@?$vector@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@V?$_Vector_const_iterator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@V?$allocator@V?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
