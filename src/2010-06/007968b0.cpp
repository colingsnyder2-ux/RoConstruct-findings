// from server: 100% by auto
// roc 2010-06 007968b0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007968b0
//
// 007968b0  51                   push ecx
// 007968b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007968b5  56                   push esi
// 007968b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007968ba  57                   push edi
// 007968bb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007968bf  c644240800           mov byte ptr [esp + 8], 0
// 007968c4  8b442408             mov eax, dword ptr [esp + 8]
// 007968c8  50                   push eax
// 007968c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007968cd  52                   push edx
// 007968ce  83c108               add ecx, 8
// 007968d1  51                   push ecx
// 007968d2  50                   push eax
// 007968d3  56                   push esi
// 007968d4  57                   push edi
// 007968d5  e866fdffff           call 0x796640
// 007968da  83c418               add esp, 0x18
// 007968dd  8d04b7               lea eax, [edi + esi*4]
// 007968e0  5f                   pop edi
// 007968e1  5e                   pop esi
// 007968e2  59                   pop ecx
// 007968e3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
