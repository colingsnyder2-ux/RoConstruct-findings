// roc 2007-08 00443450  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443450
//
// 00443450  53                   push ebx
// 00443451  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00443455  57                   push edi
// 00443456  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044345a  3bfb                 cmp edi, ebx
// 0044345c  743b                 je 0x443499
// 0044345e  56                   push esi
// 0044345f  90                   nop 
// 00443460  8b770c               mov esi, dword ptr [edi + 0xc]
// 00443463  85f6                 test esi, esi
// 00443465  742a                 je 0x443491
// 00443467  8d4604               lea eax, [esi + 4]
// 0044346a  83c9ff               or ecx, 0xffffffff
// 0044346d  f00fc108             lock xadd dword ptr [eax], ecx
// 00443471  751e                 jne 0x443491
// 00443473  8b16                 mov edx, dword ptr [esi]
// 00443475  8b4204               mov eax, dword ptr [edx + 4]
// 00443478  8bce                 mov ecx, esi
// 0044347a  ffd0                 call eax
// 0044347c  8d4e08               lea ecx, [esi + 8]
// 0044347f  83caff               or edx, 0xffffffff
// 00443482  f00fc111             lock xadd dword ptr [ecx], edx
// 00443486  7509                 jne 0x443491
// 00443488  8b06                 mov eax, dword ptr [esi]
// 0044348a  8b5008               mov edx, dword ptr [eax + 8]
// 0044348d  8bce                 mov ecx, esi
// 0044348f  ffd2                 call edx
// 00443491  83c710               add edi, 0x10
// 00443494  3bfb                 cmp edi, ebx
// 00443496  75c8                 jne 0x443460
// 00443498  5e                   pop esi
// 00443499  5f                   pop edi
// 0044349a  5b                   pop ebx
// 0044349b  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??$_Destroy_range@V?$allocator@UIDREFItem@MergeBinder@RBX@@@std@@@std@@YAXPAUIDREFItem@MergeBinder@RBX@@0AAV?$allocator@UIDREFItem@MergeBinder@RBX@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
