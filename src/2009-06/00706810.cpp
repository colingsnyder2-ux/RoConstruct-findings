// roc 2009-06 00706810  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00706810
//
// 00706810  51                   push ecx
// 00706811  8b542410             mov edx, dword ptr [esp + 0x10]
// 00706815  56                   push esi
// 00706816  8b742410             mov esi, dword ptr [esp + 0x10]
// 0070681a  57                   push edi
// 0070681b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0070681f  c644240800           mov byte ptr [esp + 8], 0
// 00706824  8b442408             mov eax, dword ptr [esp + 8]
// 00706828  50                   push eax
// 00706829  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0070682d  52                   push edx
// 0070682e  83c108               add ecx, 8
// 00706831  51                   push ecx
// 00706832  50                   push eax
// 00706833  56                   push esi
// 00706834  57                   push edi
// 00706835  e8d6fcffff           call 0x706510
// 0070683a  83c418               add esp, 0x18
// 0070683d  8d04b7               lea eax, [edi + esi*4]
// 00706840  5f                   pop edi
// 00706841  5e                   pop esi
// 00706842  59                   pop ecx
// 00706843  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
