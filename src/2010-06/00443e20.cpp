// roc 2010-06 00443e20  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00443e20
//
// 00443e20  53                   push ebx
// 00443e21  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00443e25  57                   push edi
// 00443e26  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00443e2a  3bfb                 cmp edi, ebx
// 00443e2c  743b                 je 0x443e69
// 00443e2e  56                   push esi
// 00443e2f  90                   nop 
// 00443e30  8b770c               mov esi, dword ptr [edi + 0xc]
// 00443e33  85f6                 test esi, esi
// 00443e35  742a                 je 0x443e61
// 00443e37  8d4604               lea eax, [esi + 4]
// 00443e3a  83c9ff               or ecx, 0xffffffff
// 00443e3d  f00fc108             lock xadd dword ptr [eax], ecx
// 00443e41  751e                 jne 0x443e61
// 00443e43  8b16                 mov edx, dword ptr [esi]
// 00443e45  8b4204               mov eax, dword ptr [edx + 4]
// 00443e48  8bce                 mov ecx, esi
// 00443e4a  ffd0                 call eax
// 00443e4c  8d4e08               lea ecx, [esi + 8]
// 00443e4f  83caff               or edx, 0xffffffff
// 00443e52  f00fc111             lock xadd dword ptr [ecx], edx
// 00443e56  7509                 jne 0x443e61
// 00443e58  8b06                 mov eax, dword ptr [esi]
// 00443e5a  8b5008               mov edx, dword ptr [eax + 8]
// 00443e5d  8bce                 mov ecx, esi
// 00443e5f  ffd2                 call edx
// 00443e61  83c710               add edi, 0x10
// 00443e64  3bfb                 cmp edi, ebx
// 00443e66  75c8                 jne 0x443e30
// 00443e68  5e                   pop esi
// 00443e69  5f                   pop edi
// 00443e6a  5b                   pop ebx
// 00443e6b  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Destroy_range@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
