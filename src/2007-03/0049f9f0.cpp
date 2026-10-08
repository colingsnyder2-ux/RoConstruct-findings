// roc 2007-03 0049f9f0  unit: seg_00490000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049f9f0
//
// 0049f9f0  53                   push ebx
// 0049f9f1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0049f9f5  57                   push edi
// 0049f9f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0049f9fa  3bfb                 cmp edi, ebx
// 0049f9fc  743b                 je 0x49fa39
// 0049f9fe  56                   push esi
// 0049f9ff  90                   nop 
// 0049fa00  8b7704               mov esi, dword ptr [edi + 4]
// 0049fa03  85f6                 test esi, esi
// 0049fa05  742a                 je 0x49fa31
// 0049fa07  8d4604               lea eax, [esi + 4]
// 0049fa0a  83c9ff               or ecx, 0xffffffff
// 0049fa0d  f00fc108             lock xadd dword ptr [eax], ecx
// 0049fa11  751e                 jne 0x49fa31
// 0049fa13  8b16                 mov edx, dword ptr [esi]
// 0049fa15  8b4204               mov eax, dword ptr [edx + 4]
// 0049fa18  8bce                 mov ecx, esi
// 0049fa1a  ffd0                 call eax
// 0049fa1c  8d4e08               lea ecx, [esi + 8]
// 0049fa1f  83caff               or edx, 0xffffffff
// 0049fa22  f00fc111             lock xadd dword ptr [ecx], edx
// 0049fa26  7509                 jne 0x49fa31
// 0049fa28  8b06                 mov eax, dword ptr [esi]
// 0049fa2a  8b5008               mov edx, dword ptr [eax + 8]
// 0049fa2d  8bce                 mov ecx, esi
// 0049fa2f  ffd2                 call edx
// 0049fa31  83c708               add edi, 8
// 0049fa34  3bfb                 cmp edi, ebx
// 0049fa36  75c8                 jne 0x49fa00
// 0049fa38  5e                   pop esi
// 0049fa39  5f                   pop edi
// 0049fa3a  5b                   pop ebx
// 0049fa3b  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ??$_Destroy_range@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@YAXPAV?$shared_ptr@VInstance@RBX@@@boost@@0AAV?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
