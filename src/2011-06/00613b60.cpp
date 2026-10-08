// roc 2011-06 00613b60  unit: TextXmlParser  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00613b60
//
// 00613b60  53                   push ebx
// 00613b61  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00613b65  57                   push edi
// 00613b66  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00613b6a  3bfb                 cmp edi, ebx
// 00613b6c  743b                 je 0x613ba9
// 00613b6e  56                   push esi
// 00613b6f  90                   nop 
// 00613b70  8b770c               mov esi, dword ptr [edi + 0xc]
// 00613b73  85f6                 test esi, esi
// 00613b75  742a                 je 0x613ba1
// 00613b77  8d4604               lea eax, [esi + 4]
// 00613b7a  83c9ff               or ecx, 0xffffffff
// 00613b7d  f00fc108             lock xadd dword ptr [eax], ecx
// 00613b81  751e                 jne 0x613ba1
// 00613b83  8b16                 mov edx, dword ptr [esi]
// 00613b85  8b4204               mov eax, dword ptr [edx + 4]
// 00613b88  8bce                 mov ecx, esi
// 00613b8a  ffd0                 call eax
// 00613b8c  8d4e08               lea ecx, [esi + 8]
// 00613b8f  83caff               or edx, 0xffffffff
// 00613b92  f00fc111             lock xadd dword ptr [ecx], edx
// 00613b96  7509                 jne 0x613ba1
// 00613b98  8b06                 mov eax, dword ptr [esi]
// 00613b9a  8b5008               mov edx, dword ptr [eax + 8]
// 00613b9d  8bce                 mov ecx, esi
// 00613b9f  ffd2                 call edx
// 00613ba1  83c710               add edi, 0x10
// 00613ba4  3bfb                 cmp edi, ebx
// 00613ba6  75c8                 jne 0x613b70
// 00613ba8  5e                   pop esi
// 00613ba9  5f                   pop edi
// 00613baa  5b                   pop ebx
// 00613bab  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Destroy_range@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
