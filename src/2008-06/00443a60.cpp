// roc 2008-06 00443a60  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443a60
//
// 00443a60  53                   push ebx
// 00443a61  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00443a65  57                   push edi
// 00443a66  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00443a6a  3bfb                 cmp edi, ebx
// 00443a6c  743b                 je 0x443aa9
// 00443a6e  56                   push esi
// 00443a6f  90                   nop 
// 00443a70  8b770c               mov esi, dword ptr [edi + 0xc]
// 00443a73  85f6                 test esi, esi
// 00443a75  742a                 je 0x443aa1
// 00443a77  8d4604               lea eax, [esi + 4]
// 00443a7a  83c9ff               or ecx, 0xffffffff
// 00443a7d  f00fc108             lock xadd dword ptr [eax], ecx
// 00443a81  751e                 jne 0x443aa1
// 00443a83  8b16                 mov edx, dword ptr [esi]
// 00443a85  8b4204               mov eax, dword ptr [edx + 4]
// 00443a88  8bce                 mov ecx, esi
// 00443a8a  ffd0                 call eax
// 00443a8c  8d4e08               lea ecx, [esi + 8]
// 00443a8f  83caff               or edx, 0xffffffff
// 00443a92  f00fc111             lock xadd dword ptr [ecx], edx
// 00443a96  7509                 jne 0x443aa1
// 00443a98  8b06                 mov eax, dword ptr [esi]
// 00443a9a  8b5008               mov edx, dword ptr [eax + 8]
// 00443a9d  8bce                 mov ecx, esi
// 00443a9f  ffd2                 call edx
// 00443aa1  83c710               add edi, 0x10
// 00443aa4  3bfb                 cmp edi, ebx
// 00443aa6  75c8                 jne 0x443a70
// 00443aa8  5e                   pop esi
// 00443aa9  5f                   pop edi
// 00443aaa  5b                   pop ebx
// 00443aab  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Destroy_range@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
