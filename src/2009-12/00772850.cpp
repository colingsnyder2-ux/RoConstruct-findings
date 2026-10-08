// roc 2009-12 00772850  unit: RBX::GuiButton  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00772850
//
// 00772850  51                   push ecx
// 00772851  8b542410             mov edx, dword ptr [esp + 0x10]
// 00772855  56                   push esi
// 00772856  8b742410             mov esi, dword ptr [esp + 0x10]
// 0077285a  57                   push edi
// 0077285b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077285f  c644240800           mov byte ptr [esp + 8], 0
// 00772864  8b442408             mov eax, dword ptr [esp + 8]
// 00772868  50                   push eax
// 00772869  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077286d  52                   push edx
// 0077286e  83c108               add ecx, 8
// 00772871  51                   push ecx
// 00772872  50                   push eax
// 00772873  56                   push esi
// 00772874  57                   push edi
// 00772875  e8b624cdff           call 0x444d30
// 0077287a  83c418               add esp, 0x18
// 0077287d  8d04b7               lea eax, [edi + esi*4]
// 00772880  5f                   pop edi
// 00772881  5e                   pop esi
// 00772882  59                   pop ecx
// 00772883  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
