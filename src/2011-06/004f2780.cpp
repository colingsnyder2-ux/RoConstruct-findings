// roc 2011-06 004f2780  unit: RBX::Network::IdSerializer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f2780
//
// 004f2780  53                   push ebx
// 004f2781  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004f2785  57                   push edi
// 004f2786  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f278a  3bfb                 cmp edi, ebx
// 004f278c  743b                 je 0x4f27c9
// 004f278e  56                   push esi
// 004f278f  90                   nop 
// 004f2790  8b7708               mov esi, dword ptr [edi + 8]
// 004f2793  85f6                 test esi, esi
// 004f2795  742a                 je 0x4f27c1
// 004f2797  8d4604               lea eax, [esi + 4]
// 004f279a  83c9ff               or ecx, 0xffffffff
// 004f279d  f00fc108             lock xadd dword ptr [eax], ecx
// 004f27a1  751e                 jne 0x4f27c1
// 004f27a3  8b16                 mov edx, dword ptr [esi]
// 004f27a5  8b4204               mov eax, dword ptr [edx + 4]
// 004f27a8  8bce                 mov ecx, esi
// 004f27aa  ffd0                 call eax
// 004f27ac  8d4e08               lea ecx, [esi + 8]
// 004f27af  83caff               or edx, 0xffffffff
// 004f27b2  f00fc111             lock xadd dword ptr [ecx], edx
// 004f27b6  7509                 jne 0x4f27c1
// 004f27b8  8b06                 mov eax, dword ptr [esi]
// 004f27ba  8b5008               mov edx, dword ptr [eax + 8]
// 004f27bd  8bce                 mov ecx, esi
// 004f27bf  ffd2                 call edx
// 004f27c1  83c70c               add edi, 0xc
// 004f27c4  3bfb                 cmp edi, ebx
// 004f27c6  75c8                 jne 0x4f2790
// 004f27c8  5e                   pop esi
// 004f27c9  5f                   pop edi
// 004f27ca  5b                   pop ebx
// 004f27cb  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
