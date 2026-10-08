// roc 2007-03 00499290  unit: seg_00490000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00499290
//
// 00499290  53                   push ebx
// 00499291  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00499295  57                   push edi
// 00499296  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049929a  3bfb                 cmp edi, ebx
// 0049929c  743b                 je 0x4992d9
// 0049929e  56                   push esi
// 0049929f  90                   nop 
// 004992a0  8b7708               mov esi, dword ptr [edi + 8]
// 004992a3  85f6                 test esi, esi
// 004992a5  742a                 je 0x4992d1
// 004992a7  8d4604               lea eax, [esi + 4]
// 004992aa  83c9ff               or ecx, 0xffffffff
// 004992ad  f00fc108             lock xadd dword ptr [eax], ecx
// 004992b1  751e                 jne 0x4992d1
// 004992b3  8b16                 mov edx, dword ptr [esi]
// 004992b5  8b4204               mov eax, dword ptr [edx + 4]
// 004992b8  8bce                 mov ecx, esi
// 004992ba  ffd0                 call eax
// 004992bc  8d4e08               lea ecx, [esi + 8]
// 004992bf  83caff               or edx, 0xffffffff
// 004992c2  f00fc111             lock xadd dword ptr [ecx], edx
// 004992c6  7509                 jne 0x4992d1
// 004992c8  8b06                 mov eax, dword ptr [esi]
// 004992ca  8b5008               mov edx, dword ptr [eax + 8]
// 004992cd  8bce                 mov ecx, esi
// 004992cf  ffd2                 call edx
// 004992d1  83c70c               add edi, 0xc
// 004992d4  3bfb                 cmp edi, ebx
// 004992d6  75c8                 jne 0x4992a0
// 004992d8  5e                   pop esi
// 004992d9  5f                   pop edi
// 004992da  5b                   pop ebx
// 004992db  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy_range@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@0AAV?$allocator@UWaitItem@IdSerializer@Network@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
