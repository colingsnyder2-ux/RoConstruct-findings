// roc 2009-12 007e31c0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e31c0
//
// 007e31c0  51                   push ecx
// 007e31c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e31c5  56                   push esi
// 007e31c6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007e31ca  57                   push edi
// 007e31cb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007e31cf  c644240800           mov byte ptr [esp + 8], 0
// 007e31d4  8b442408             mov eax, dword ptr [esp + 8]
// 007e31d8  50                   push eax
// 007e31d9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007e31dd  52                   push edx
// 007e31de  83c108               add ecx, 8
// 007e31e1  51                   push ecx
// 007e31e2  50                   push eax
// 007e31e3  56                   push esi
// 007e31e4  57                   push edi
// 007e31e5  e856fdffff           call 0x7e2f40
// 007e31ea  83c418               add esp, 0x18
// 007e31ed  8d04b7               lea eax, [edi + esi*4]
// 007e31f0  5f                   pop edi
// 007e31f1  5e                   pop esi
// 007e31f2  59                   pop ecx
// 007e31f3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
