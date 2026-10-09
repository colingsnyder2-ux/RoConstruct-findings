// roc 2009-12 00442930  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442930
//
// 00442930  53                   push ebx
// 00442931  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00442935  57                   push edi
// 00442936  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044293a  3bfb                 cmp edi, ebx
// 0044293c  743b                 je 0x442979
// 0044293e  56                   push esi
// 0044293f  90                   nop 
// 00442940  8b770c               mov esi, dword ptr [edi + 0xc]
// 00442943  85f6                 test esi, esi
// 00442945  742a                 je 0x442971
// 00442947  8d4604               lea eax, [esi + 4]
// 0044294a  83c9ff               or ecx, 0xffffffff
// 0044294d  f00fc108             lock xadd dword ptr [eax], ecx
// 00442951  751e                 jne 0x442971
// 00442953  8b16                 mov edx, dword ptr [esi]
// 00442955  8b4204               mov eax, dword ptr [edx + 4]
// 00442958  8bce                 mov ecx, esi
// 0044295a  ffd0                 call eax
// 0044295c  8d4e08               lea ecx, [esi + 8]
// 0044295f  83caff               or edx, 0xffffffff
// 00442962  f00fc111             lock xadd dword ptr [ecx], edx
// 00442966  7509                 jne 0x442971
// 00442968  8b06                 mov eax, dword ptr [esi]
// 0044296a  8b5008               mov edx, dword ptr [eax + 8]
// 0044296d  8bce                 mov ecx, esi
// 0044296f  ffd2                 call edx
// 00442971  83c710               add edi, 0x10
// 00442974  3bfb                 cmp edi, ebx
// 00442976  75c8                 jne 0x442940
// 00442978  5e                   pop esi
// 00442979  5f                   pop edi
// 0044297a  5b                   pop ebx
// 0044297b  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Destroy_range@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
