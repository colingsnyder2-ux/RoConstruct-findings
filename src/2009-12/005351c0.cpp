// roc 2009-12 005351c0  unit: RBX::Network::IdSerializer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005351c0
//
// 005351c0  53                   push ebx
// 005351c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005351c5  57                   push edi
// 005351c6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005351ca  3bfb                 cmp edi, ebx
// 005351cc  743b                 je 0x535209
// 005351ce  56                   push esi
// 005351cf  90                   nop 
// 005351d0  8b7708               mov esi, dword ptr [edi + 8]
// 005351d3  85f6                 test esi, esi
// 005351d5  742a                 je 0x535201
// 005351d7  8d4604               lea eax, [esi + 4]
// 005351da  83c9ff               or ecx, 0xffffffff
// 005351dd  f00fc108             lock xadd dword ptr [eax], ecx
// 005351e1  751e                 jne 0x535201
// 005351e3  8b16                 mov edx, dword ptr [esi]
// 005351e5  8b4204               mov eax, dword ptr [edx + 4]
// 005351e8  8bce                 mov ecx, esi
// 005351ea  ffd0                 call eax
// 005351ec  8d4e08               lea ecx, [esi + 8]
// 005351ef  83caff               or edx, 0xffffffff
// 005351f2  f00fc111             lock xadd dword ptr [ecx], edx
// 005351f6  7509                 jne 0x535201
// 005351f8  8b06                 mov eax, dword ptr [esi]
// 005351fa  8b5008               mov edx, dword ptr [eax + 8]
// 005351fd  8bce                 mov ecx, esi
// 005351ff  ffd2                 call edx
// 00535201  83c70c               add edi, 0xc
// 00535204  3bfb                 cmp edi, ebx
// 00535206  75c8                 jne 0x5351d0
// 00535208  5e                   pop esi
// 00535209  5f                   pop edi
// 0053520a  5b                   pop ebx
// 0053520b  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
