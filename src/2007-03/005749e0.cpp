// roc 2007-03 005749e0  unit: seg_00570000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005749e0
//
// 005749e0  56                   push esi
// 005749e1  8b742408             mov esi, dword ptr [esp + 8]
// 005749e5  57                   push edi
// 005749e6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005749ea  3bf7                 cmp esi, edi
// 005749ec  7423                 je 0x574a11
// 005749ee  8bff                 mov edi, edi
// 005749f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005749f3  85c9                 test ecx, ecx
// 005749f5  7413                 je 0x574a0a
// 005749f7  8d4108               lea eax, [ecx + 8]
// 005749fa  83caff               or edx, 0xffffffff
// 005749fd  f00fc110             lock xadd dword ptr [eax], edx
// 00574a01  7507                 jne 0x574a0a
// 00574a03  8b01                 mov eax, dword ptr [ecx]
// 00574a05  8b5008               mov edx, dword ptr [eax + 8]
// 00574a08  ffd2                 call edx
// 00574a0a  83c608               add esi, 8
// 00574a0d  3bf7                 cmp esi, edi
// 00574a0f  75df                 jne 0x5749f0
// 00574a11  5f                   pop edi
// 00574a12  5e                   pop esi
// 00574a13  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ??$_Destroy_range@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@YAXPAV?$weak_ptr@VPartInstance@RBX@@@boost@@0AAV?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
