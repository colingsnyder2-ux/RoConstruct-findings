// from server: 100% by auto
// roc 2009-06 00440880  unit: VCRenderSettingsItem::?$FactoryProduct  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00440880
//
// 00440880  51                   push ecx
// 00440881  8b542410             mov edx, dword ptr [esp + 0x10]
// 00440885  56                   push esi
// 00440886  8b742410             mov esi, dword ptr [esp + 0x10]
// 0044088a  57                   push edi
// 0044088b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044088f  c644240800           mov byte ptr [esp + 8], 0
// 00440894  8b442408             mov eax, dword ptr [esp + 8]
// 00440898  50                   push eax
// 00440899  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0044089d  52                   push edx
// 0044089e  83c108               add ecx, 8
// 004408a1  51                   push ecx
// 004408a2  50                   push eax
// 004408a3  56                   push esi
// 004408a4  57                   push edi
// 004408a5  e896fcffff           call 0x440540
// 004408aa  83c418               add esp, 0x18
// 004408ad  8d04b7               lea eax, [edi + esi*4]
// 004408b0  5f                   pop edi
// 004408b1  5e                   pop esi
// 004408b2  59                   pop ecx
// 004408b3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ?_Ufill@?$vector@U?$digraph@G@re_detail@boost@@V?$allocator@U?$digraph@G@re_detail@boost@@@std@@@std@@IAEPAU?$digraph@G@re_detail@boost@@PAU345@IABU345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
