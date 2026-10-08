// roc 2012-06 0056e2e0  unit: RBX::Network::IdSerializer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056e2e0
//
// 0056e2e0  53                   push ebx
// 0056e2e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0056e2e5  57                   push edi
// 0056e2e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0056e2ea  3bfb                 cmp edi, ebx
// 0056e2ec  743b                 je 0x56e329
// 0056e2ee  56                   push esi
// 0056e2ef  90                   nop 
// 0056e2f0  8b7708               mov esi, dword ptr [edi + 8]
// 0056e2f3  85f6                 test esi, esi
// 0056e2f5  742a                 je 0x56e321
// 0056e2f7  8d4604               lea eax, [esi + 4]
// 0056e2fa  83c9ff               or ecx, 0xffffffff
// 0056e2fd  f00fc108             lock xadd dword ptr [eax], ecx
// 0056e301  751e                 jne 0x56e321
// 0056e303  8b16                 mov edx, dword ptr [esi]
// 0056e305  8b4204               mov eax, dword ptr [edx + 4]
// 0056e308  8bce                 mov ecx, esi
// 0056e30a  ffd0                 call eax
// 0056e30c  8d4e08               lea ecx, [esi + 8]
// 0056e30f  83caff               or edx, 0xffffffff
// 0056e312  f00fc111             lock xadd dword ptr [ecx], edx
// 0056e316  7509                 jne 0x56e321
// 0056e318  8b06                 mov eax, dword ptr [esi]
// 0056e31a  8b5008               mov edx, dword ptr [eax + 8]
// 0056e31d  8bce                 mov ecx, esi
// 0056e31f  ffd2                 call edx
// 0056e321  83c70c               add edi, 0xc
// 0056e324  3bfb                 cmp edi, ebx
// 0056e326  75c8                 jne 0x56e2f0
// 0056e328  5e                   pop esi
// 0056e329  5f                   pop edi
// 0056e32a  5b                   pop ebx
// 0056e32b  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
