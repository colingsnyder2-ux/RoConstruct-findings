// roc 2009-06 0043e2e0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e2e0
//
// 0043e2e0  53                   push ebx
// 0043e2e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0043e2e5  57                   push edi
// 0043e2e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0043e2ea  3bfb                 cmp edi, ebx
// 0043e2ec  743b                 je 0x43e329
// 0043e2ee  56                   push esi
// 0043e2ef  90                   nop 
// 0043e2f0  8b770c               mov esi, dword ptr [edi + 0xc]
// 0043e2f3  85f6                 test esi, esi
// 0043e2f5  742a                 je 0x43e321
// 0043e2f7  8d4604               lea eax, [esi + 4]
// 0043e2fa  83c9ff               or ecx, 0xffffffff
// 0043e2fd  f00fc108             lock xadd dword ptr [eax], ecx
// 0043e301  751e                 jne 0x43e321
// 0043e303  8b16                 mov edx, dword ptr [esi]
// 0043e305  8b4204               mov eax, dword ptr [edx + 4]
// 0043e308  8bce                 mov ecx, esi
// 0043e30a  ffd0                 call eax
// 0043e30c  8d4e08               lea ecx, [esi + 8]
// 0043e30f  83caff               or edx, 0xffffffff
// 0043e312  f00fc111             lock xadd dword ptr [ecx], edx
// 0043e316  7509                 jne 0x43e321
// 0043e318  8b06                 mov eax, dword ptr [esi]
// 0043e31a  8b5008               mov edx, dword ptr [eax + 8]
// 0043e31d  8bce                 mov ecx, esi
// 0043e31f  ffd2                 call edx
// 0043e321  83c710               add edi, 0x10
// 0043e324  3bfb                 cmp edi, ebx
// 0043e326  75c8                 jne 0x43e2f0
// 0043e328  5e                   pop esi
// 0043e329  5f                   pop edi
// 0043e32a  5b                   pop ebx
// 0043e32b  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Destroy_range@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
