// roc 2009-06 004de9d0  unit: RBX::Network::IdSerializer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004de9d0
//
// 004de9d0  53                   push ebx
// 004de9d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004de9d5  57                   push edi
// 004de9d6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004de9da  3bfb                 cmp edi, ebx
// 004de9dc  743b                 je 0x4dea19
// 004de9de  56                   push esi
// 004de9df  90                   nop 
// 004de9e0  8b7708               mov esi, dword ptr [edi + 8]
// 004de9e3  85f6                 test esi, esi
// 004de9e5  742a                 je 0x4dea11
// 004de9e7  8d4604               lea eax, [esi + 4]
// 004de9ea  83c9ff               or ecx, 0xffffffff
// 004de9ed  f00fc108             lock xadd dword ptr [eax], ecx
// 004de9f1  751e                 jne 0x4dea11
// 004de9f3  8b16                 mov edx, dword ptr [esi]
// 004de9f5  8b4204               mov eax, dword ptr [edx + 4]
// 004de9f8  8bce                 mov ecx, esi
// 004de9fa  ffd0                 call eax
// 004de9fc  8d4e08               lea ecx, [esi + 8]
// 004de9ff  83caff               or edx, 0xffffffff
// 004dea02  f00fc111             lock xadd dword ptr [ecx], edx
// 004dea06  7509                 jne 0x4dea11
// 004dea08  8b06                 mov eax, dword ptr [esi]
// 004dea0a  8b5008               mov edx, dword ptr [eax + 8]
// 004dea0d  8bce                 mov ecx, esi
// 004dea0f  ffd2                 call edx
// 004dea11  83c70c               add edi, 0xc
// 004dea14  3bfb                 cmp edi, ebx
// 004dea16  75c8                 jne 0x4de9e0
// 004dea18  5e                   pop esi
// 004dea19  5f                   pop edi
// 004dea1a  5b                   pop ebx
// 004dea1b  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
