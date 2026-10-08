// roc 2012-06 00462900  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462900
//
// 00462900  53                   push ebx
// 00462901  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00462905  57                   push edi
// 00462906  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0046290a  3bfb                 cmp edi, ebx
// 0046290c  743b                 je 0x462949
// 0046290e  56                   push esi
// 0046290f  90                   nop 
// 00462910  8b770c               mov esi, dword ptr [edi + 0xc]
// 00462913  85f6                 test esi, esi
// 00462915  742a                 je 0x462941
// 00462917  8d4604               lea eax, [esi + 4]
// 0046291a  83c9ff               or ecx, 0xffffffff
// 0046291d  f00fc108             lock xadd dword ptr [eax], ecx
// 00462921  751e                 jne 0x462941
// 00462923  8b16                 mov edx, dword ptr [esi]
// 00462925  8b4204               mov eax, dword ptr [edx + 4]
// 00462928  8bce                 mov ecx, esi
// 0046292a  ffd0                 call eax
// 0046292c  8d4e08               lea ecx, [esi + 8]
// 0046292f  83caff               or edx, 0xffffffff
// 00462932  f00fc111             lock xadd dword ptr [ecx], edx
// 00462936  7509                 jne 0x462941
// 00462938  8b06                 mov eax, dword ptr [esi]
// 0046293a  8b5008               mov edx, dword ptr [eax + 8]
// 0046293d  8bce                 mov ecx, esi
// 0046293f  ffd2                 call edx
// 00462941  83c710               add edi, 0x10
// 00462944  3bfb                 cmp edi, ebx
// 00462946  75c8                 jne 0x462910
// 00462948  5e                   pop esi
// 00462949  5f                   pop edi
// 0046294a  5b                   pop ebx
// 0046294b  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Destroy_range@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
