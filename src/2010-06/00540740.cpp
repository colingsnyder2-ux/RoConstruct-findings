// from server: 100% by auto
// roc 2010-06 00540740  unit: RBX::AggregatingSceneManager  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540740
//
// 00540740  51                   push ecx
// 00540741  8b542410             mov edx, dword ptr [esp + 0x10]
// 00540745  56                   push esi
// 00540746  8b742410             mov esi, dword ptr [esp + 0x10]
// 0054074a  57                   push edi
// 0054074b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0054074f  c644240800           mov byte ptr [esp + 8], 0
// 00540754  8b442408             mov eax, dword ptr [esp + 8]
// 00540758  50                   push eax
// 00540759  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054075d  52                   push edx
// 0054075e  83c108               add ecx, 8
// 00540761  51                   push ecx
// 00540762  50                   push eax
// 00540763  56                   push esi
// 00540764  57                   push edi
// 00540765  e826fcffff           call 0x540390
// 0054076a  83c418               add esp, 0x18
// 0054076d  8d04b7               lea eax, [edi + esi*4]
// 00540770  5f                   pop edi
// 00540771  5e                   pop esi
// 00540772  59                   pop ecx
// 00540773  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
