// roc 2007-08 004a1ba0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1ba0
//
// 004a1ba0  53                   push ebx
// 004a1ba1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004a1ba5  57                   push edi
// 004a1ba6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a1baa  3bfb                 cmp edi, ebx
// 004a1bac  743b                 je 0x4a1be9
// 004a1bae  56                   push esi
// 004a1baf  90                   nop 
// 004a1bb0  8b7708               mov esi, dword ptr [edi + 8]
// 004a1bb3  85f6                 test esi, esi
// 004a1bb5  742a                 je 0x4a1be1
// 004a1bb7  8d4604               lea eax, [esi + 4]
// 004a1bba  83c9ff               or ecx, 0xffffffff
// 004a1bbd  f00fc108             lock xadd dword ptr [eax], ecx
// 004a1bc1  751e                 jne 0x4a1be1
// 004a1bc3  8b16                 mov edx, dword ptr [esi]
// 004a1bc5  8b4204               mov eax, dword ptr [edx + 4]
// 004a1bc8  8bce                 mov ecx, esi
// 004a1bca  ffd0                 call eax
// 004a1bcc  8d4e08               lea ecx, [esi + 8]
// 004a1bcf  83caff               or edx, 0xffffffff
// 004a1bd2  f00fc111             lock xadd dword ptr [ecx], edx
// 004a1bd6  7509                 jne 0x4a1be1
// 004a1bd8  8b06                 mov eax, dword ptr [esi]
// 004a1bda  8b5008               mov edx, dword ptr [eax + 8]
// 004a1bdd  8bce                 mov ecx, esi
// 004a1bdf  ffd2                 call edx
// 004a1be1  83c70c               add edi, 0xc
// 004a1be4  3bfb                 cmp edi, ebx
// 004a1be6  75c8                 jne 0x4a1bb0
// 004a1be8  5e                   pop esi
// 004a1be9  5f                   pop edi
// 004a1bea  5b                   pop ebx
// 004a1beb  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
